// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Frog/FrogGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrogGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FROG_API UClass* Z_Construct_UClass_AFrogGameMode();
FROG_API UClass* Z_Construct_UClass_AFrogGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Frog();
// End Cross Module References

// Begin Class AFrogGameMode
void AFrogGameMode::StaticRegisterNativesAFrogGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFrogGameMode);
UClass* Z_Construct_UClass_AFrogGameMode_NoRegister()
{
	return AFrogGameMode::StaticClass();
}
struct Z_Construct_UClass_AFrogGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FrogGameMode.h" },
		{ "ModuleRelativePath", "FrogGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFrogGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFrogGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Frog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFrogGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFrogGameMode_Statics::ClassParams = {
	&AFrogGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFrogGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFrogGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFrogGameMode()
{
	if (!Z_Registration_Info_UClass_AFrogGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFrogGameMode.OuterSingleton, Z_Construct_UClass_AFrogGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFrogGameMode.OuterSingleton;
}
template<> FROG_API UClass* StaticClass<AFrogGameMode>()
{
	return AFrogGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFrogGameMode);
AFrogGameMode::~AFrogGameMode() {}
// End Class AFrogGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFrogGameMode, AFrogGameMode::StaticClass, TEXT("AFrogGameMode"), &Z_Registration_Info_UClass_AFrogGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFrogGameMode), 1643928321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogGameMode_h_2247147350(TEXT("/Script/Frog"),
	Z_CompiledInDeferFile_FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qkrru_Desktop_KyungookPark24_UE5_Playground_Frog_Frog_Source_Frog_FrogGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
