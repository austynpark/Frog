// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrog_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Frog;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Frog()
	{
		if (!Z_Registration_Info_UPackage__Script_Frog.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Frog",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x22FE3203,
				0x08D21099,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Frog.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Frog.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Frog(Z_Construct_UPackage__Script_Frog, TEXT("/Script/Frog"), Z_Registration_Info_UPackage__Script_Frog, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x22FE3203, 0x08D21099));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
