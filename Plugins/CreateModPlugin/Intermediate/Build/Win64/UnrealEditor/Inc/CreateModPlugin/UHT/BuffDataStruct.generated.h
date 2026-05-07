// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuffDataStruct.h"

#ifdef CREATEMODPLUGIN_BuffDataStruct_generated_h
#error "BuffDataStruct.generated.h already included, missing '#pragma once' in BuffDataStruct.h"
#endif
#define CREATEMODPLUGIN_BuffDataStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModCommonBuff ****************************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuffDataStruct_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModCommonBuff_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModCommonBuff;
// ********** End ScriptStruct FModCommonBuff ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuffDataStruct_h

// ********** Begin Enum EModBuffType **************************************************************
#define FOREACH_ENUM_EMODBUFFTYPE(op) \
	op(EModBuffType::ForEver) \
	op(EModBuffType::FixedTime) \
	op(EModBuffType::Instant) 

enum class EModBuffType : uint8;
template<> struct TIsUEnumClass<EModBuffType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModBuffType>();
// ********** End Enum EModBuffType ****************************************************************

// ********** Begin Enum EModBuffOriginType ********************************************************
#define FOREACH_ENUM_EMODBUFFORIGINTYPE(op) \
	op(EModBuffOriginType::None) \
	op(EModBuffOriginType::Building) \
	op(EModBuffOriginType::Room) \
	op(EModBuffOriginType::CombinationBuilding) \
	op(EModBuffOriginType::NewGame) \
	op(EModBuffOriginType::Injury) \
	op(EModBuffOriginType::Weather) \
	op(EModBuffOriginType::HeatSource) \
	op(EModBuffOriginType::BuildingEffectRange) 

enum class EModBuffOriginType : uint8;
template<> struct TIsUEnumClass<EModBuffOriginType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModBuffOriginType>();
// ********** End Enum EModBuffOriginType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
