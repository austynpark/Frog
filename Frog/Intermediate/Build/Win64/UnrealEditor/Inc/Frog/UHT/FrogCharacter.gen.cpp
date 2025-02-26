// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Frog/FrogCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrogCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FROG_API UClass* Z_Construct_UClass_AFrogCharacter();
FROG_API UClass* Z_Construct_UClass_AFrogCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Frog();
// End Cross Module References

// Begin Class AFrogCharacter Function CalcSwinging
struct Z_Construct_UFunction_AFrogCharacter_CalcSwinging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swinging" },
		{ "DisplayName", "Calc Swinging Direction" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFrogCharacter_CalcSwinging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFrogCharacter, nullptr, "CalcSwinging", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFrogCharacter_CalcSwinging_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFrogCharacter_CalcSwinging_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFrogCharacter_CalcSwinging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFrogCharacter_CalcSwinging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFrogCharacter::execCalcSwinging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalcSwinging();
	P_NATIVE_END;
}
// End Class AFrogCharacter Function CalcSwinging

// Begin Class AFrogCharacter Function DrawDebugSwinging
struct Z_Construct_UFunction_AFrogCharacter_DrawDebugSwinging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swinging" },
		{ "DisplayName", "Debug Swinging Direction" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFrogCharacter_DrawDebugSwinging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFrogCharacter, nullptr, "DrawDebugSwinging", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFrogCharacter_DrawDebugSwinging_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFrogCharacter_DrawDebugSwinging_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFrogCharacter_DrawDebugSwinging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFrogCharacter_DrawDebugSwinging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFrogCharacter::execDrawDebugSwinging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugSwinging();
	P_NATIVE_END;
}
// End Class AFrogCharacter Function DrawDebugSwinging

// Begin Class AFrogCharacter Function StartSwinging
struct Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics
{
	struct FrogCharacter_eventStartSwinging_Parms
	{
		FVector SwingingPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swinging" },
		{ "DisplayName", "Start Swinging" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingingPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwingingPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::NewProp_SwingingPoint = { "SwingingPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrogCharacter_eventStartSwinging_Parms, SwingingPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingingPoint_MetaData), NewProp_SwingingPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::NewProp_SwingingPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFrogCharacter, nullptr, "StartSwinging", nullptr, nullptr, Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::FrogCharacter_eventStartSwinging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::FrogCharacter_eventStartSwinging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFrogCharacter_StartSwinging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFrogCharacter_StartSwinging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFrogCharacter::execStartSwinging)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SwingingPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSwinging(Z_Param_Out_SwingingPoint);
	P_NATIVE_END;
}
// End Class AFrogCharacter Function StartSwinging

// Begin Class AFrogCharacter Function StopSwinging
struct Z_Construct_UFunction_AFrogCharacter_StopSwinging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swinging" },
		{ "DisplayName", "Stop Swinging" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFrogCharacter_StopSwinging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFrogCharacter, nullptr, "StopSwinging", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFrogCharacter_StopSwinging_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFrogCharacter_StopSwinging_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFrogCharacter_StopSwinging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFrogCharacter_StopSwinging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFrogCharacter::execStopSwinging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSwinging();
	P_NATIVE_END;
}
// End Class AFrogCharacter Function StopSwinging

// Begin Class AFrogCharacter
void AFrogCharacter::StaticRegisterNativesAFrogCharacter()
{
	UClass* Class = AFrogCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalcSwinging", &AFrogCharacter::execCalcSwinging },
		{ "DrawDebugSwinging", &AFrogCharacter::execDrawDebugSwinging },
		{ "StartSwinging", &AFrogCharacter::execStartSwinging },
		{ "StopSwinging", &AFrogCharacter::execStopSwinging },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFrogCharacter);
UClass* Z_Construct_UClass_AFrogCharacter_NoRegister()
{
	return AFrogCharacter::StaticClass();
}
struct Z_Construct_UClass_AFrogCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FrogCharacter.h" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "FrogCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "FrogCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "FrogCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "FrogCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialDir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentDir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingDirection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentialVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSwinging_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WebLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseMethod1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging1" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging1" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampingDecayRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging2" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampingCoefficient_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging2" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging2" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSpringForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging2" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddDampingForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Swinging2" },
		{ "ModuleRelativePath", "FrogCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadialDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwingPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwingDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentialVelocity;
	static void NewProp_IsSwinging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSwinging;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WebLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
	static void NewProp_UseMethod1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMethod1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingStartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingDecayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
	static void NewProp_AddSpringForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSpringForce;
	static void NewProp_AddDampingForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddDampingForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFrogCharacter_CalcSwinging, "CalcSwinging" }, // 3076931507
		{ &Z_Construct_UFunction_AFrogCharacter_DrawDebugSwinging, "DrawDebugSwinging" }, // 4143571841
		{ &Z_Construct_UFunction_AFrogCharacter_StartSwinging, "StartSwinging" }, // 2229109845
		{ &Z_Construct_UFunction_AFrogCharacter_StopSwinging, "StopSwinging" }, // 948405467
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFrogCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_RadialDir = { "RadialDir", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, RadialDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialDir_MetaData), NewProp_RadialDir_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_TangentDir = { "TangentDir", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, TangentDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentDir_MetaData), NewProp_TangentDir_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_SwingPoint = { "SwingPoint", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, SwingPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingPoint_MetaData), NewProp_SwingPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_SwingDirection = { "SwingDirection", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, SwingDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingDirection_MetaData), NewProp_SwingDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_TangentialVelocity = { "TangentialVelocity", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, TangentialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentialVelocity_MetaData), NewProp_TangentialVelocity_MetaData) };
void Z_Construct_UClass_AFrogCharacter_Statics::NewProp_IsSwinging_SetBit(void* Obj)
{
	((AFrogCharacter*)Obj)->IsSwinging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_IsSwinging = { "IsSwinging", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFrogCharacter), &Z_Construct_UClass_AFrogCharacter_Statics::NewProp_IsSwinging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSwinging_MetaData), NewProp_IsSwinging_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_WebLength = { "WebLength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, WebLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WebLength_MetaData), NewProp_WebLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, LaunchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchSpeed_MetaData), NewProp_LaunchSpeed_MetaData) };
void Z_Construct_UClass_AFrogCharacter_Statics::NewProp_UseMethod1_SetBit(void* Obj)
{
	((AFrogCharacter*)Obj)->UseMethod1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_UseMethod1 = { "UseMethod1", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFrogCharacter), &Z_Construct_UClass_AFrogCharacter_Statics::NewProp_UseMethod1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseMethod1_MetaData), NewProp_UseMethod1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_SwingStartTime = { "SwingStartTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, SwingStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingStartTime_MetaData), NewProp_SwingStartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_DampingDecayRate = { "DampingDecayRate", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, DampingDecayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampingDecayRate_MetaData), NewProp_DampingDecayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_DampingCoefficient = { "DampingCoefficient", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, DampingCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampingCoefficient_MetaData), NewProp_DampingCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrogCharacter, SpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringStiffness_MetaData), NewProp_SpringStiffness_MetaData) };
void Z_Construct_UClass_AFrogCharacter_Statics::NewProp_AddSpringForce_SetBit(void* Obj)
{
	((AFrogCharacter*)Obj)->AddSpringForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_AddSpringForce = { "AddSpringForce", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFrogCharacter), &Z_Construct_UClass_AFrogCharacter_Statics::NewProp_AddSpringForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSpringForce_MetaData), NewProp_AddSpringForce_MetaData) };
void Z_Construct_UClass_AFrogCharacter_Statics::NewProp_AddDampingForce_SetBit(void* Obj)
{
	((AFrogCharacter*)Obj)->AddDampingForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFrogCharacter_Statics::NewProp_AddDampingForce = { "AddDampingForce", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFrogCharacter), &Z_Construct_UClass_AFrogCharacter_Statics::NewProp_AddDampingForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddDampingForce_MetaData), NewProp_AddDampingForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFrogCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_RadialDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_TangentDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_SwingPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_SwingDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_TangentialVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_IsSwinging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_WebLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_LaunchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_UseMethod1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_SwingStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_DampingDecayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_DampingCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_SpringStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_AddSpringForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrogCharacter_Statics::NewProp_AddDampingForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFrogCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFrogCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Frog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFrogCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFrogCharacter_Statics::ClassParams = {
	&AFrogCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFrogCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFrogCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFrogCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFrogCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFrogCharacter()
{
	if (!Z_Registration_Info_UClass_AFrogCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFrogCharacter.OuterSingleton, Z_Construct_UClass_AFrogCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFrogCharacter.OuterSingleton;
}
template<> FROG_API UClass* StaticClass<AFrogCharacter>()
{
	return AFrogCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFrogCharacter);
AFrogCharacter::~AFrogCharacter() {}
// End Class AFrogCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFrogCharacter, AFrogCharacter::StaticClass, TEXT("AFrogCharacter"), &Z_Registration_Info_UClass_AFrogCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFrogCharacter), 3809972194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_3560928667(TEXT("/Script/Frog"),
	Z_CompiledInDeferFile_FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
