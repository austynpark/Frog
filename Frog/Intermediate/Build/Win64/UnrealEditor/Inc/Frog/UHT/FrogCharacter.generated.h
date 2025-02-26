// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrogCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FROG_FrogCharacter_generated_h
#error "FrogCharacter.generated.h already included, missing '#pragma once' in FrogCharacter.h"
#endif
#define FROG_FrogCharacter_generated_h

#define FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawDebugSwinging); \
	DECLARE_FUNCTION(execCalcSwinging); \
	DECLARE_FUNCTION(execStopSwinging); \
	DECLARE_FUNCTION(execStartSwinging);


#define FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFrogCharacter(); \
	friend struct Z_Construct_UClass_AFrogCharacter_Statics; \
public: \
	DECLARE_CLASS(AFrogCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Frog"), NO_API) \
	DECLARE_SERIALIZER(AFrogCharacter)


#define FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFrogCharacter(AFrogCharacter&&); \
	AFrogCharacter(const AFrogCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFrogCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFrogCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFrogCharacter) \
	NO_API virtual ~AFrogCharacter();


#define FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_18_PROLOG
#define FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FROG_API UClass* StaticClass<class AFrogCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
