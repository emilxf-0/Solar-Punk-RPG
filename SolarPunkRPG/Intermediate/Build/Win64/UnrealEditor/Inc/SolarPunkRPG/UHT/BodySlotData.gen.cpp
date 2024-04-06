// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolarPunkRPG/Public/BodySlotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySlotData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UBodySlotData();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UBodySlotData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SolarPunkRPG();
// End Cross Module References
	void UBodySlotData::StaticRegisterNativesUBodySlotData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodySlotData);
	UClass* Z_Construct_UClass_UBodySlotData_NoRegister()
	{
		return UBodySlotData::StaticClass();
	}
	struct Z_Construct_UClass_UBodySlotData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodySlotData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SolarPunkRPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlotData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySlotData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BodySlotData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BodySlotData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySlotData_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "BodySlotData" },
		{ "ModuleRelativePath", "Public/BodySlotData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodySlotData_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySlotData, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlotData_Statics::NewProp_BoneName_MetaData), Z_Construct_UClass_UBodySlotData_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySlotData_Statics::NewProp_AssociatedMesh_MetaData[] = {
		{ "Category", "BodySlotData" },
		{ "ModuleRelativePath", "Public/BodySlotData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodySlotData_Statics::NewProp_AssociatedMesh = { "AssociatedMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySlotData, AssociatedMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlotData_Statics::NewProp_AssociatedMesh_MetaData), Z_Construct_UClass_UBodySlotData_Statics::NewProp_AssociatedMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodySlotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySlotData_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySlotData_Statics::NewProp_AssociatedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodySlotData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodySlotData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodySlotData_Statics::ClassParams = {
		&UBodySlotData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBodySlotData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlotData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlotData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodySlotData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlotData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBodySlotData()
	{
		if (!Z_Registration_Info_UClass_UBodySlotData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodySlotData.OuterSingleton, Z_Construct_UClass_UBodySlotData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBodySlotData.OuterSingleton;
	}
	template<> SOLARPUNKRPG_API UClass* StaticClass<UBodySlotData>()
	{
		return UBodySlotData::StaticClass();
	}
	UBodySlotData::UBodySlotData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodySlotData);
	UBodySlotData::~UBodySlotData() {}
	struct Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlotData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlotData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBodySlotData, UBodySlotData::StaticClass, TEXT("UBodySlotData"), &Z_Registration_Info_UClass_UBodySlotData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodySlotData), 3457547058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlotData_h_1732717425(TEXT("/Script/SolarPunkRPG"),
		Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlotData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlotData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
