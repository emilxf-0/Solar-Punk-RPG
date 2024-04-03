// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolarPunkRPG/AC_MeshChanger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_MeshChanger() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UAC_MeshChanger();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UAC_MeshChanger_NoRegister();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UBodySlot_NoRegister();
	SOLARPUNKRPG_API UEnum* Z_Construct_UEnum_SolarPunkRPG_EBodyPart();
	UPackage* Z_Construct_UPackage__Script_SolarPunkRPG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBodyPart;
	static UEnum* EBodyPart_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBodyPart.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBodyPart.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SolarPunkRPG_EBodyPart, (UObject*)Z_Construct_UPackage__Script_SolarPunkRPG(), TEXT("EBodyPart"));
		}
		return Z_Registration_Info_UEnum_EBodyPart.OuterSingleton;
	}
	template<> SOLARPUNKRPG_API UEnum* StaticEnum<EBodyPart>()
	{
		return EBodyPart_StaticEnum();
	}
	struct Z_Construct_UEnum_SolarPunkRPG_EBodyPart_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SolarPunkRPG_EBodyPart_Statics::Enumerators[] = {
		{ "EBodyPart::VE_HeadPiece", (int64)EBodyPart::VE_HeadPiece },
		{ "EBodyPart::VE_ChestPiece", (int64)EBodyPart::VE_ChestPiece },
		{ "EBodyPart::VE_LegPiece", (int64)EBodyPart::VE_LegPiece },
		{ "EBodyPart::VE_Charm", (int64)EBodyPart::VE_Charm },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SolarPunkRPG_EBodyPart_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AC_MeshChanger.h" },
		{ "VE_Charm.DisplayName", "Charm" },
		{ "VE_Charm.Name", "EBodyPart::VE_Charm" },
		{ "VE_ChestPiece.DisplayName", "Chest Piece" },
		{ "VE_ChestPiece.Name", "EBodyPart::VE_ChestPiece" },
		{ "VE_HeadPiece.DisplayName", "Head Piece" },
		{ "VE_HeadPiece.Name", "EBodyPart::VE_HeadPiece" },
		{ "VE_LegPiece.DisplayName", "Legs" },
		{ "VE_LegPiece.Name", "EBodyPart::VE_LegPiece" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SolarPunkRPG_EBodyPart_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SolarPunkRPG,
		nullptr,
		"EBodyPart",
		"EBodyPart",
		Z_Construct_UEnum_SolarPunkRPG_EBodyPart_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SolarPunkRPG_EBodyPart_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SolarPunkRPG_EBodyPart_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SolarPunkRPG_EBodyPart_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SolarPunkRPG_EBodyPart()
	{
		if (!Z_Registration_Info_UEnum_EBodyPart.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBodyPart.InnerSingleton, Z_Construct_UEnum_SolarPunkRPG_EBodyPart_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBodyPart.InnerSingleton;
	}
	void UAC_MeshChanger::StaticRegisterNativesUAC_MeshChanger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAC_MeshChanger);
	UClass* Z_Construct_UClass_UAC_MeshChanger_NoRegister()
	{
		return UAC_MeshChanger::StaticClass();
	}
	struct Z_Construct_UClass_UAC_MeshChanger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bodyMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bodyMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_bodyMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bodyMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_bodyMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAC_MeshChanger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SolarPunkRPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_MeshChanger_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_MeshChanger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_MeshChanger.h" },
		{ "ModuleRelativePath", "AC_MeshChanger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_characterMeshComponent_MetaData[] = {
		{ "Category", "Body Slots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AC_MeshChanger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_characterMeshComponent = { "characterMeshComponent", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_MeshChanger, characterMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_characterMeshComponent_MetaData), Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_characterMeshComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap_ValueProp = { "bodyMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBodySlot_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap_Key_KeyProp = { "bodyMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SolarPunkRPG_EBodyPart, METADATA_PARAMS(0, nullptr) }; // 2852707953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap_MetaData[] = {
		{ "Category", "Body Slots" },
		{ "ModuleRelativePath", "AC_MeshChanger.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap = { "bodyMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_MeshChanger, bodyMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap_MetaData), Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap_MetaData) }; // 2852707953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_MeshChanger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_characterMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_bodyMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAC_MeshChanger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_MeshChanger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_MeshChanger_Statics::ClassParams = {
		&UAC_MeshChanger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAC_MeshChanger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAC_MeshChanger_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_MeshChanger_Statics::Class_MetaDataParams), Z_Construct_UClass_UAC_MeshChanger_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_MeshChanger_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAC_MeshChanger()
	{
		if (!Z_Registration_Info_UClass_UAC_MeshChanger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAC_MeshChanger.OuterSingleton, Z_Construct_UClass_UAC_MeshChanger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAC_MeshChanger.OuterSingleton;
	}
	template<> SOLARPUNKRPG_API UClass* StaticClass<UAC_MeshChanger>()
	{
		return UAC_MeshChanger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_MeshChanger);
	UAC_MeshChanger::~UAC_MeshChanger() {}
	struct Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::EnumInfo[] = {
		{ EBodyPart_StaticEnum, TEXT("EBodyPart"), &Z_Registration_Info_UEnum_EBodyPart, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2852707953U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAC_MeshChanger, UAC_MeshChanger::StaticClass, TEXT("UAC_MeshChanger"), &Z_Registration_Info_UClass_UAC_MeshChanger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_MeshChanger), 1786632640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_4084982077(TEXT("/Script/SolarPunkRPG"),
		Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
