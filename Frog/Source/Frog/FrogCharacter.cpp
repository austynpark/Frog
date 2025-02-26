// Copyright Epic Games, Inc. All Rights Reserved.

#include "FrogCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AFrogCharacter

AFrogCharacter::AFrogCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	
	bAsyncPhysicsTickEnabled = true;
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 1.00f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFrogCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AFrogCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFrogCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AFrogCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AFrogCharacter::StartSwinging(const FVector& SwingingPoint)
{
	SwingPoint = SwingingPoint;
	WebLength = (SwingPoint - GetActorLocation()).Size();
	IsSwinging = true;
	SwingStartTime = GetWorld()->GetTimeSeconds();
}

void AFrogCharacter::StopSwinging()
{
	IsSwinging = false;
}

void AFrogCharacter::CalcSwinging()
{
	FVector ActorLocation = GetActorLocation();
	FVector ActorVelocity = GetVelocity();

	RadialDir = ActorLocation - SwingPoint;

	if (UseMethod1)
	{
		UE_LOG(LogTemp, Warning,TEXT("DOT:%f"), RadialDir.Dot(ActorVelocity));

		float ElapsedTime = GetWorld()->GetTimeSeconds() - SwingStartTime;

		FVector DampingForce = FMath::Clamp(RadialDir.Dot(ActorVelocity), -200000.0f, 200000.0f) * RadialDir.GetSafeNormal() * -FMath::Max(0.0f ,DampingCoefficient - ElapsedTime * DampingDecayRate);

		SwingDirection = DampingForce + GetActorForwardVector() * LaunchSpeed;

		GetCharacterMovement()->AddForce(DampingForce + GetActorForwardVector() * LaunchSpeed);
	}
	else
	{
		// 1. Radial Direction (Anchor to Character)
		RadialDir = (SwingPoint - ActorLocation).GetSafeNormal();
		float CurrentLength = FVector::Distance(ActorLocation, SwingPoint);

		// 2. Spring Force (Hooke's Law - Pulls toward anchor)
		float SpringForceMagnitude = SpringStiffness * FMath::Max(CurrentLength - WebLength, 0.f);
		FVector SpringForce = SpringForceMagnitude * RadialDir;

		// 3. Damping (Radial only)
		float RadialSpeed = FVector::DotProduct(ActorVelocity, RadialDir);
		FVector DampingForce = -DampingCoefficient * RadialSpeed * RadialDir;

		FVector TotalForce = AddDampingForce ? DampingForce : FVector::ZeroVector;
		TotalForce += AddSpringForce ? SpringForce : FVector::ZeroVector;

		GetCharacterMovement()->AddForce(TotalForce + GetActorForwardVector() * LaunchSpeed);
	}

	if (GetCharacterMovement()->IsMovingOnGround())
	{
		UE_LOG(LogTemp, Warning, TEXT("Moving Ground"));
		StopSwinging();
		return;
	}

	//// Calculate radial direction
	//RadialDir = (SwingPoint - ActorLocation).GetSafeNormal();

	//// Calculate tangent direction (XZ-plane example)
	//TangentDir = FVector(-RadialDir.Z, 0, RadialDir.X).GetSafeNormal();

	//// Decompose velocity into radial/tangential components
	//float RadialSpeed = FVector::DotProduct(ActorVelocity, RadialDir);
	//FVector RadialVelocity = RadialDir * RadialSpeed;
	//TangentialVelocity = ActorVelocity - RadialVelocity;

	//// Determine swing direction
	//if (TangentialVelocity.Size() > 0.1f) {
	//	// Use existing tangential velocity
	//	SwingDirection = TangentialVelocity.GetSafeNormal();
	//}
	//else {
	//	// Use gravity-driven direction based on pendulum angle
	//	float Theta = FMath::Atan2(RadialDir.X, RadialDir.Z);
	//	UE_LOG(LogTemp, Warning, TEXT("Theta: % f"), Theta);
	//	SwingDirection = (Theta > 0) ? -TangentDir : TangentDir;
	//}

	//float CurrentDistance = (SwingPoint - ActorLocation).Size();

	//FVector SpringForce = SpringStiffness * (CurrentDistance - WebLength) * RadialDir;
	//
	//// Damping Force
	//FVector VelocityDirection = GetVelocity().GetSafeNormal();
	//FVector DampingForce = -DampingCoefficient * RadialVelocity * RadialDir;

	//GetCharacterMovement()->AddForce(DampingForce + SpringForce);

	//UE_LOG(LogTemp, Warning, TEXT("Damping Force: %s"), *DampingForce.ToString());
	//UE_LOG(LogTemp, Warning, TEXT("Spring Force: %s"), *SpringForce.ToString());

	//DrawDebugLine(GetWorld(), ActorLocation, ActorLocation + DampingForce, FColor::Emerald);
	//DrawDebugLine(GetWorld(), ActorLocation, ActorLocation + SpringForce, FColor::Green);
}

void AFrogCharacter::DrawDebugSwinging()
{
	FVector ActorLocation = GetActorLocation();
	// Draw radial direction (red)
	DrawDebugLine(GetWorld(), ActorLocation, ActorLocation + RadialDir * 100, FColor::Emerald);

	// Draw tangent direction (green)
	// DrawDebugLine(GetWorld(), ActorLocation, ActorLocation + TangentDir * 100, FColor::Green);

	// Draw Swing direction (blue)
	DrawDebugLine(GetWorld(), ActorLocation, ActorLocation + SwingDirection * 100, FColor::Blue);
}

void AFrogCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr )
	{
		//if (!IsSwinging)
		{
			// find out which way is forward
			const FRotator Rotation = Controller->GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);

			// get forward vector
			const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

			// get right vector 
			const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

			// add movement 

			AddMovementInput(ForwardDirection, MovementVector.Y);
			AddMovementInput(RightDirection, MovementVector.X);
		}
		//else
		{
			//FVector InputDirection = GetActorForwardVector() * MovementVector.Y + GetActorRightVector() * MovementVector.X;

			//// Project input onto the swing's tangent plane
			//FVector ProjectedInput = FVector::VectorPlaneProject(InputDirection, RadialDir);

			//// Apply tangential control force
			//FVector InputForce = ProjectedInput * SwingControlForce;
			//GetCharacterMovement()->AddForce(InputForce);
		}
	}
}

void AFrogCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}
