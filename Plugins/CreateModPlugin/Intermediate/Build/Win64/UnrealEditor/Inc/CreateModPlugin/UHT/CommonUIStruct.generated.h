// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUIStruct.h"

#ifdef CREATEMODPLUGIN_CommonUIStruct_generated_h
#error "CommonUIStruct.generated.h already included, missing '#pragma once' in CommonUIStruct.h"
#endif
#define CREATEMODPLUGIN_CommonUIStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModTabInfo *******************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CommonUIStruct_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModTabInfo_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FModTabInfo;
// ********** End ScriptStruct FModTabInfo *********************************************************

// ********** Begin ScriptStruct FModCommonUIConfig ************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CommonUIStruct_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModCommonUIConfig_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModCommonUIConfig;
// ********** End ScriptStruct FModCommonUIConfig **************************************************

// ********** Begin ScriptStruct FModModuleUIConfig ************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CommonUIStruct_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModModuleUIConfig_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FModModuleUIConfig;
// ********** End ScriptStruct FModModuleUIConfig **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CommonUIStruct_h

// ********** Begin Enum EModTitleTypeEnum *********************************************************
#define FOREACH_ENUM_EMODTITLETYPEENUM(op) \
	op(EModTitleTypeEnum::Fixed) \
	op(EModTitleTypeEnum::ItemName) \
	op(EModTitleTypeEnum::BuildingName) \
	op(EModTitleTypeEnum::CharacterName) \
	op(EModTitleTypeEnum::NotObserved) \
	op(EModTitleTypeEnum::RoomName) \
	op(EModTitleTypeEnum::CombinationBuildName) \
	op(EModTitleTypeEnum::WorldPlaceName) \
	op(EModTitleTypeEnum::WorldMapMoveName) 

enum class EModTitleTypeEnum : uint8;
template<> struct TIsUEnumClass<EModTitleTypeEnum> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTitleTypeEnum>();
// ********** End Enum EModTitleTypeEnum ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
