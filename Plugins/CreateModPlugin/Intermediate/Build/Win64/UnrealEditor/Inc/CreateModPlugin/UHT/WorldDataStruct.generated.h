// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldDataStruct.h"

#ifdef CREATEMODPLUGIN_WorldDataStruct_generated_h
#error "WorldDataStruct.generated.h already included, missing '#pragma once' in WorldDataStruct.h"
#endif
#define CREATEMODPLUGIN_WorldDataStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModWorldPlaceInfo ************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModWorldPlaceInfo;
// ********** End ScriptStruct FModWorldPlaceInfo **************************************************

// ********** Begin ScriptStruct FModBattleBuffGroup ***********************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModBattleBuffGroup;
// ********** End ScriptStruct FModBattleBuffGroup *************************************************

// ********** Begin ScriptStruct FModForceLevelInfo ************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModForceLevelInfo_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModForceLevelInfo;
// ********** End ScriptStruct FModForceLevelInfo **************************************************

// ********** Begin ScriptStruct FModSubClassApparelConfig *****************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h_340_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModSubClassApparelConfig;
// ********** End ScriptStruct FModSubClassApparelConfig *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h

// ********** Begin Enum EModWorldPlaceType ********************************************************
#define FOREACH_ENUM_EMODWORLDPLACETYPE(op) \
	op(EModWorldPlaceType::None) \
	op(EModWorldPlaceType::Station) \
	op(EModWorldPlaceType::CenterCity) \
	op(EModWorldPlaceType::ResourcePoint) \
	op(EModWorldPlaceType::EventPoint) \
	op(EModWorldPlaceType::Battleground) \
	op(EModWorldPlaceType::LandscapeRemains) \
	op(EModWorldPlaceType::Tournament) 

enum class EModWorldPlaceType : uint8;
template<> struct TIsUEnumClass<EModWorldPlaceType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModWorldPlaceType>();
// ********** End Enum EModWorldPlaceType **********************************************************

// ********** Begin Enum EModForceOperationType ****************************************************
#define FOREACH_ENUM_EMODFORCEOPERATIONTYPE(op) \
	op(EModForceOperationType::None) \
	op(EModForceOperationType::AttackTogether) \
	op(EModForceOperationType::Alliance) \
	op(EModForceOperationType::SubmitToSelf) 

enum class EModForceOperationType : uint8;
template<> struct TIsUEnumClass<EModForceOperationType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModForceOperationType>();
// ********** End Enum EModForceOperationType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
