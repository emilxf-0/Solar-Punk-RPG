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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
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
		{ "EBodyPart::VE_Torso", (int64)EBodyPart::VE_Torso },
		{ "EBodyPart::VE_LegPiece", (int64)EBodyPart::VE_LegPiece },
		{ "EBodyPart::VE_Shoes", (int64)EBodyPart::VE_Shoes },
		{ "EBodyPart::VE_MainHand", (int64)EBodyPart::VE_MainHand },
		{ "EBodyPart::VE_Gloves", (int64)EBodyPart::VE_Gloves },
		{ "EBodyPart::VE_Offhand", (int64)EBodyPart::VE_Offhand },
		{ "EBodyPart::VE_TwoHand", (int64)EBodyPart::VE_TwoHand },
		{ "EBodyPart::LASTELEMENT", (int64)EBodyPart::LASTELEMENT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SolarPunkRPG_EBodyPart_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LASTELEMENT.DisplayName", "LAST ELEMENT DO NOT USE" },
		{ "LASTELEMENT.Name", "EBodyPart::LASTELEMENT" },
		{ "ModuleRelativePath", "AC_MeshChanger.h" },
		{ "VE_Gloves.DisplayName", "Gloves" },
		{ "VE_Gloves.Name", "EBodyPart::VE_Gloves" },
		{ "VE_HeadPiece.DisplayName", "Head Piece" },
		{ "VE_HeadPiece.Name", "EBodyPart::VE_HeadPiece" },
		{ "VE_LegPiece.DisplayName", "Pants" },
		{ "VE_LegPiece.Name", "EBodyPart::VE_LegPiece" },
		{ "VE_MainHand.DisplayName", "Main Weapon" },
		{ "VE_MainHand.Name", "EBodyPart::VE_MainHand" },
		{ "VE_Offhand.DisplayName", "Offhand Weapon" },
		{ "VE_Offhand.Name", "EBodyPart::VE_Offhand" },
		{ "VE_Shoes.DisplayName", "Shoes" },
		{ "VE_Shoes.Name", "EBodyPart::VE_Shoes" },
		{ "VE_Torso.DisplayName", "Torso" },
		{ "VE_Torso.Name", "EBodyPart::VE_Torso" },
		{ "VE_TwoHand.DisplayName", "Two Handed" },
		{ "VE_TwoHand.Name", "EBodyPart::VE_TwoHand" },
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
	DEFINE_FUNCTION(UAC_MeshChanger::execChangeMesh)
	{
		P_GET_ENUM(EBodyPart,Z_Param_bodypart);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMesh(EBodyPart(Z_Param_bodypart),Z_Param_index);
		P_NATIVE_END;
	}
	void UAC_MeshChanger::StaticRegisterNativesUAC_MeshChanger()
	{
		UClass* Class = UAC_MeshChanger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMesh", &UAC_MeshChanger::execChangeMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics
	{
		struct AC_MeshChanger_eventChangeMesh_Parms
		{
			EBodyPart bodypart;
			int32 index;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bodypart_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_bodypart;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::NewProp_bodypart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::NewProp_bodypart = { "bodypart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_MeshChanger_eventChangeMesh_Parms, bodypart), Z_Construct_UEnum_SolarPunkRPG_EBodyPart, METADATA_PARAMS(0, nullptr) }; // 1567773702
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_MeshChanger_eventChangeMesh_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::NewProp_bodypart_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::NewProp_bodypart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AC_MeshChanger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_MeshChanger, nullptr, "ChangeMesh", nullptr, nullptr, Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::AC_MeshChanger_eventChangeMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::AC_MeshChanger_eventChangeMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAC_MeshChanger);
	UClass* Z_Construct_UClass_UAC_MeshChanger_NoRegister()
	{
		return UAC_MeshChanger::StaticClass();
	}
	struct Z_Construct_UClass_UAC_MeshChanger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AvailableSlots_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AvailableSlots_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AvailableSlots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableSlots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AvailableSlots;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BodyMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BodyMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAC_MeshChanger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SolarPunkRPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_MeshChanger_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAC_MeshChanger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAC_MeshChanger_ChangeMesh, "ChangeMesh" }, // 197382214
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_MeshChanger_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_MeshChanger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_MeshChanger.h" },
		{ "ModuleRelativePath", "AC_MeshChanger.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots_ValueProp = { "AvailableSlots", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UBodySlot_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots_Key_KeyProp = { "AvailableSlots_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SolarPunkRPG_EBodyPart, METADATA_PARAMS(0, nullptr) }; // 1567773702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots_MetaData[] = {
		{ "Category", "Body Slots" },
		{ "ModuleRelativePath", "AC_MeshChanger.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots = { "AvailableSlots", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_MeshChanger, AvailableSlots), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots_MetaData), Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots_MetaData) }; // 1567773702
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap_ValueProp = { "BodyMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBodySlot_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap_Key_KeyProp = { "BodyMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SolarPunkRPG_EBodyPart, METADATA_PARAMS(0, nullptr) }; // 1567773702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap_MetaData[] = {
		{ "ModuleRelativePath", "AC_MeshChanger.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap = { "BodyMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_MeshChanger, BodyMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap_MetaData), Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap_MetaData) }; // 1567773702
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_MeshChanger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_AvailableSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_MeshChanger_Statics::NewProp_BodyMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAC_MeshChanger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_MeshChanger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_MeshChanger_Statics::ClassParams = {
		&UAC_MeshChanger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAC_MeshChanger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ EBodyPart_StaticEnum, TEXT("EBodyPart"), &Z_Registration_Info_UEnum_EBodyPart, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1567773702U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAC_MeshChanger, UAC_MeshChanger::StaticClass, TEXT("UAC_MeshChanger"), &Z_Registration_Info_UClass_UAC_MeshChanger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_MeshChanger), 3350344859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_4261633174(TEXT("/Script/SolarPunkRPG"),
		Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
