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
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModWorldPlaceInfo;
// ********** End ScriptStruct FModWorldPlaceInfo **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h

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

PRAGMA_ENABLE_DEPRECATION_WARNINGS
