// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AC_MeshChanger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOLARPUNKRPG_AC_MeshChanger_generated_h
#error "AC_MeshChanger.generated.h already included, missing '#pragma once' in AC_MeshChanger.h"
#endif
#define SOLARPUNKRPG_AC_MeshChanger_generated_h

#define FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_SPARSE_DATA
#define FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_ACCESSORS
#define FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAC_MeshChanger(); \
	friend struct Z_Construct_UClass_UAC_MeshChanger_Statics; \
public: \
	DECLARE_CLASS(UAC_MeshChanger, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SolarPunkRPG"), NO_API) \
	DECLARE_SERIALIZER(UAC_MeshChanger)


#define FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAC_MeshChanger(UAC_MeshChanger&&); \
	NO_API UAC_MeshChanger(const UAC_MeshChanger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAC_MeshChanger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAC_MeshChanger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAC_MeshChanger) \
	NO_API virtual ~UAC_MeshChanger();


#define FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_17_PROLOG
#define FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_SPARSE_DATA \
	FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_ACCESSORS \
	FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOLARPUNKRPG_API UClass* StaticClass<class UAC_MeshChanger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxhe_OneDrive_Documents_GitHub_Solar_Punk_RPG_SolarPunkRPG_Source_SolarPunkRPG_AC_MeshChanger_h


#define FOREACH_ENUM_EBODYPART(op) \
	op(EBodyPart::VE_HeadPiece) \
	op(EBodyPart::VE_ChestPiece) \
	op(EBodyPart::VE_LegPiece) \
	op(EBodyPart::VE_Charm) 

enum class EBodyPart : uint8;
template<> struct TIsUEnumClass<EBodyPart> { enum { Value = true }; };
template<> SOLARPUNKRPG_API UEnum* StaticEnum<EBodyPart>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
