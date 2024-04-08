// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolarPunkRPG/Public/CharacterCreationDoll.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreationDoll() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_ACharacterCreationDoll();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_ACharacterCreationDoll_NoRegister();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UAC_MeshChanger_NoRegister();
	SOLARPUNKRPG_API UEnum* Z_Construct_UEnum_SolarPunkRPG_EBodyPart();
	UPackage* Z_Construct_UPackage__Script_SolarPunkRPG();
// End Cross Module References
	void ACharacterCreationDoll::StaticRegisterNativesACharacterCreationDoll()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterCreationDoll);
	UClass* Z_Construct_UClass_ACharacterCreationDoll_NoRegister()
	{
		return ACharacterCreationDoll::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterCreationDoll_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastEnum_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastEnum_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LastEnum;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletalMeshMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletalMeshMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SkeletalMeshMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshChangerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshChangerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterCreationDoll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SolarPunkRPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCreationDoll_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterCreationDoll_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterCreationDoll.h" },
		{ "ModuleRelativePath", "Public/CharacterCreationDoll.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshes_Inner = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshes_MetaData[] = {
		{ "Category", "CharacterCreationDoll" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreationDoll.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshes = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterCreationDoll, SkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshes_MetaData), Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshes_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_LastEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_LastEnum_MetaData[] = {
		{ "Category", "CharacterCreationDoll" },
		{ "ModuleRelativePath", "Public/CharacterCreationDoll.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_LastEnum = { "LastEnum", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterCreationDoll, LastEnum), Z_Construct_UEnum_SolarPunkRPG_EBodyPart, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_LastEnum_MetaData), Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_LastEnum_MetaData) }; // 1567773702
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap_ValueProp = { "SkeletalMeshMap", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap_Key_KeyProp = { "SkeletalMeshMap_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SolarPunkRPG_EBodyPart, METADATA_PARAMS(0, nullptr) }; // 1567773702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap_MetaData[] = {
		{ "Category", "CharacterCreationDoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this needs to always be the last enum\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreationDoll.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this needs to always be the last enum" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap = { "SkeletalMeshMap", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterCreationDoll, SkeletalMeshMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap_MetaData), Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap_MetaData) }; // 1567773702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_meshChangerComponent_MetaData[] = {
		{ "Category", "CharacterCreationDoll" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreationDoll.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_meshChangerComponent = { "meshChangerComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterCreationDoll, meshChangerComponent), Z_Construct_UClass_UAC_MeshChanger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_meshChangerComponent_MetaData), Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_meshChangerComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterCreationDoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_LastEnum_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_LastEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_SkeletalMeshMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterCreationDoll_Statics::NewProp_meshChangerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterCreationDoll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterCreationDoll>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterCreationDoll_Statics::ClassParams = {
		&ACharacterCreationDoll::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacterCreationDoll_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCreationDoll_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCreationDoll_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterCreationDoll_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCreationDoll_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACharacterCreationDoll()
	{
		if (!Z_Registration_Info_UClass_ACharacterCreationDoll.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterCreationDoll.OuterSingleton, Z_Construct_UClass_ACharacterCreationDoll_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterCreationDoll.OuterSingleton;
	}
	template<> SOLARPUNKRPG_API UClass* StaticClass<ACharacterCreationDoll>()
	{
		return ACharacterCreationDoll::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterCreationDoll);
	ACharacterCreationDoll::~ACharacterCreationDoll() {}
	struct Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_CharacterCreationDoll_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_CharacterCreationDoll_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterCreationDoll, ACharacterCreationDoll::StaticClass, TEXT("ACharacterCreationDoll"), &Z_Registration_Info_UClass_ACharacterCreationDoll, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterCreationDoll), 439681019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_CharacterCreationDoll_h_2992340555(TEXT("/Script/SolarPunkRPG"),
		Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_CharacterCreationDoll_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_CharacterCreationDoll_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
