// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolarPunkRPG/Public/BodySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySlot() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UBodySlot();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UBodySlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SolarPunkRPG();
// End Cross Module References
	void UBodySlot::StaticRegisterNativesUBodySlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodySlot);
	UClass* Z_Construct_UClass_UBodySlot_NoRegister()
	{
		return UBodySlot::StaticClass();
	}
	struct Z_Construct_UClass_UBodySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SolarPunkRPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlot_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySlot_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BodySlot.h" },
		{ "ModuleRelativePath", "Public/BodySlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodySlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodySlot_Statics::ClassParams = {
		&UBodySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodySlot_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBodySlot()
	{
		if (!Z_Registration_Info_UClass_UBodySlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodySlot.OuterSingleton, Z_Construct_UClass_UBodySlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBodySlot.OuterSingleton;
	}
	template<> SOLARPUNKRPG_API UClass* StaticClass<UBodySlot>()
	{
		return UBodySlot::StaticClass();
	}
	UBodySlot::UBodySlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodySlot);
	UBodySlot::~UBodySlot() {}
	struct Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBodySlot, UBodySlot::StaticClass, TEXT("UBodySlot"), &Z_Registration_Info_UClass_UBodySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodySlot), 2112872630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlot_h_405418923(TEXT("/Script/SolarPunkRPG"),
		Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
