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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UBodySlot();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UBodySlot_NoRegister();
	SOLARPUNKRPG_API UClass* Z_Construct_UClass_UBodySlotData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SolarPunkRPG();
// End Cross Module References
	DEFINE_FUNCTION(UBodySlot::execGetAmountOfMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAmountOfMeshes();
		P_NATIVE_END;
	}
	void UBodySlot::StaticRegisterNativesUBodySlot()
	{
		UClass* Class = UBodySlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmountOfMeshes", &UBodySlot::execGetAmountOfMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics
	{
		struct BodySlot_eventGetAmountOfMeshes_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodySlot_eventGetAmountOfMeshes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodySlot, nullptr, "GetAmountOfMeshes", nullptr, nullptr, Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::BodySlot_eventGetAmountOfMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::BodySlot_eventGetAmountOfMeshes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodySlot);
	UClass* Z_Construct_UClass_UBodySlot_NoRegister()
	{
		return UBodySlot::StaticClass();
	}
	struct Z_Construct_UClass_UBodySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BodySlotDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySlotDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BodySlotDatas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SolarPunkRPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlot_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodySlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodySlot_GetAmountOfMeshes, "GetAmountOfMeshes" }, // 3573027554
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlot_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BodySlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BodySlot.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBodySlot_Statics::NewProp_BodySlotDatas_Inner = { "BodySlotDatas", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBodySlotData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySlot_Statics::NewProp_BodySlotDatas_MetaData[] = {
		{ "Category", "Body Slots" },
		{ "ModuleRelativePath", "Public/BodySlot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodySlot_Statics::NewProp_BodySlotDatas = { "BodySlotDatas", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodySlot, BodySlotDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlot_Statics::NewProp_BodySlotDatas_MetaData), Z_Construct_UClass_UBodySlot_Statics::NewProp_BodySlotDatas_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySlot_Statics::NewProp_BodySlotDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySlot_Statics::NewProp_BodySlotDatas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodySlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodySlot_Statics::ClassParams = {
		&UBodySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBodySlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlot_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodySlot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodySlot_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_UBodySlot, UBodySlot::StaticClass, TEXT("UBodySlot"), &Z_Registration_Info_UClass_UBodySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodySlot), 2468832798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlot_h_4061909697(TEXT("/Script/SolarPunkRPG"),
		Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_Public_BodySlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
