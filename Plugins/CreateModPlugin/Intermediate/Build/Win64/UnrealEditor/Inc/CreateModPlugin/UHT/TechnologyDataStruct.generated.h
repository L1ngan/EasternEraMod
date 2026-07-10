// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TechnologyDataStruct.h"

#ifdef CREATEMODPLUGIN_TechnologyDataStruct_generated_h
#error "TechnologyDataStruct.generated.h already included, missing '#pragma once' in TechnologyDataStruct.h"
#endif
#define CREATEMODPLUGIN_TechnologyDataStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModTechUnlockItemConigStruct *************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_TechnologyDataStruct_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModTechUnlockItemConigStruct_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModTechUnlockItemConigStruct;
// ********** End ScriptStruct FModTechUnlockItemConigStruct ***************************************

// ********** Begin ScriptStruct FModTechnologyConfigStruct ****************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_TechnologyDataStruct_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModTechnologyConfigStruct_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModTechnologyConfigStruct;
// ********** End ScriptStruct FModTechnologyConfigStruct ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_TechnologyDataStruct_h

// ********** Begin Enum EModTechUnlockItemType ****************************************************
#define FOREACH_ENUM_EMODTECHUNLOCKITEMTYPE(op) \
	op(EModTechUnlockItemType::Building) \
	op(EModTechUnlockItemType::BuildingMaterial) \
	op(EModTechUnlockItemType::Recipe) \
	op(EModTechUnlockItemType::Plant) \
	op(EModTechUnlockItemType::Function) \
	op(EModTechUnlockItemType::PlayerTeamBuff) \
	op(EModTechUnlockItemType::Dogface) \
	op(EModTechUnlockItemType::StrategicAbility) \
	op(EModTechUnlockItemType::TowerDefense) \
	op(EModTechUnlockItemType::ForceApparel) 

enum class EModTechUnlockItemType : uint8;
template<> struct TIsUEnumClass<EModTechUnlockItemType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTechUnlockItemType>();
// ********** End Enum EModTechUnlockItemType ******************************************************

// ********** Begin Enum EModTechCategory **********************************************************
#define FOREACH_ENUM_EMODTECHCATEGORY(op) \
	op(EModTechCategory::Food) \
	op(EModTechCategory::Industrial) \
	op(EModTechCategory::Develop) \
	op(EModTechCategory::Medical) \
	op(EModTechCategory::Clothing) \
	op(EModTechCategory::Decoration) \
	op(EModTechCategory::Practice) 

enum class EModTechCategory : uint8;
template<> struct TIsUEnumClass<EModTechCategory> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTechCategory>();
// ********** End Enum EModTechCategory ************************************************************

// ********** Begin Enum EModTechLevel *************************************************************
#define FOREACH_ENUM_EMODTECHLEVEL(op) \
	op(EModTechLevel::Beginner) \
	op(EModTechLevel::Intermediate) \
	op(EModTechLevel::Advanced) 

enum class EModTechLevel : uint8;
template<> struct TIsUEnumClass<EModTechLevel> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTechLevel>();
// ********** End Enum EModTechLevel ***************************************************************

// ********** Begin Enum EModTechPointType *********************************************************
#define FOREACH_ENUM_EMODTECHPOINTTYPE(op) \
	op(EModTechPointType::BasTechPoint) \
	op(EModTechPointType::MidTechPoint) \
	op(EModTechPointType::AdvTechPoint) 

enum class EModTechPointType : uint8;
template<> struct TIsUEnumClass<EModTechPointType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTechPointType>();
// ********** End Enum EModTechPointType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
