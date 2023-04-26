// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarWars_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_StarWars;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_StarWars()
	{
		if (!Z_Registration_Info_UPackage__Script_StarWars.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/StarWars",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8C213818,
				0x6A1EF6AE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_StarWars.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_StarWars.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_StarWars(Z_Construct_UPackage__Script_StarWars, TEXT("/Script/StarWars"), Z_Registration_Info_UPackage__Script_StarWars, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8C213818, 0x6A1EF6AE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
