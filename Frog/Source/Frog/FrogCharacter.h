// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "FrogCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AFrogCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging, meta = (AllowPrivateAccess = "true"))
	FVector RadialDir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging, meta = (AllowPrivateAccess = "true"))
	FVector TangentDir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging, meta = (AllowPrivateAccess = "true"))
	FVector SwingPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging, meta = (AllowPrivateAccess = "true"))
	FVector SwingDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging, meta = (AllowPrivateAccess = "true"))
	FVector TangentialVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging, meta = (AllowPrivateAccess = "true"))
	bool IsSwinging = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging, meta = (AllowPrivateAccess = "true"))
	float WebLength = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Swinging, meta = (AllowPrivateAccess = "true"))
	float LaunchSpeed = 700.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging1, meta = (AllowPrivateAccess = "true"))
	bool UseMethod1 = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging1, meta = (AllowPrivateAccess = "true"))
	float SwingStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Swinging2, meta = (AllowPrivateAccess = "true"))
	float DampingDecayRate = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Swinging2, meta = (AllowPrivateAccess = "true"))
	float DampingCoefficient = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Swinging2, meta = (AllowPrivateAccess = "true"))
	float SpringStiffness = 700.0f;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging2, meta = (AllowPrivateAccess = "true"))
	bool AddSpringForce = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Swinging2, meta = (AllowPrivateAccess = "true"))
	bool AddDampingForce = true;

public:
	AFrogCharacter();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:

	virtual void NotifyControllerChanged() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
private:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Start Swinging"), Category = Swinging)
	void StartSwinging(const FVector& SwingingPoint);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Stop Swinging"), Category = Swinging)
	void StopSwinging();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Calc Swinging Direction"), Category = Swinging)
	void CalcSwinging();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Debug Swinging Direction"), Category = Swinging)
	void DrawDebugSwinging();
};

