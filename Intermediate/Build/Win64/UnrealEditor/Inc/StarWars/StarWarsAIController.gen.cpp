// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarWars/Private/StarWarsAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarWarsAIController() {}
// Cross Module References
	STARWARS_API UClass* Z_Construct_UClass_AStarWarsAIController_NoRegister();
	STARWARS_API UClass* Z_Construct_UClass_AStarWarsAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_StarWars();
// End Cross Module References
	void AStarWarsAIController::StaticRegisterNativesAStarWarsAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStarWarsAIController);
	UClass* Z_Construct_UClass_AStarWarsAIController_NoRegister()
	{
		return AStarWarsAIController::StaticClass();
	}
	struct Z_Construct_UClass_AStarWarsAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarWarsAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_StarWars,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarWarsAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "StarWarsAIController.h" },
		{ "ModuleRelativePath", "Private/StarWarsAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarWarsAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarWarsAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStarWarsAIController_Statics::ClassParams = {
		&AStarWarsAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStarWarsAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarWarsAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarWarsAIController()
	{
		if (!Z_Registration_Info_UClass_AStarWarsAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStarWarsAIController.OuterSingleton, Z_Construct_UClass_AStarWarsAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStarWarsAIController.OuterSingleton;
	}
	template<> STARWARS_API UClass* StaticClass<AStarWarsAIController>()
	{
		return AStarWarsAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarWarsAIController);
	struct Z_CompiledInDeferFile_FID_StarWars_Source_StarWars_Private_StarWarsAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StarWars_Source_StarWars_Private_StarWarsAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStarWarsAIController, AStarWarsAIController::StaticClass, TEXT("AStarWarsAIController"), &Z_Registration_Info_UClass_AStarWarsAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStarWarsAIController), 1657181476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StarWars_Source_StarWars_Private_StarWarsAIController_h_3432473388(TEXT("/Script/StarWars"),
		Z_CompiledInDeferFile_FID_StarWars_Source_StarWars_Private_StarWarsAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StarWars_Source_StarWars_Private_StarWarsAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
