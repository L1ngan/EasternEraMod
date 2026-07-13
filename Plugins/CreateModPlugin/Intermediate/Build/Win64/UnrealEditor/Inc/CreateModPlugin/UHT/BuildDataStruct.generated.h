// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildDataStruct.h"

#ifdef CREATEMODPLUGIN_BuildDataStruct_generated_h
#error "BuildDataStruct.generated.h already included, missing '#pragma once' in BuildDataStruct.h"
#endif
#define CREATEMODPLUGIN_BuildDataStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModGridPosition **************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModGridPosition_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModGridPosition;
// ********** End ScriptStruct FModGridPosition ****************************************************

// ********** Begin ScriptStruct FModRelativeGridPoses *********************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModRelativeGridPoses_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModRelativeGridPoses;
// ********** End ScriptStruct FModRelativeGridPoses ***********************************************

// ********** Begin ScriptStruct FModAutoTileMeshConfigData ****************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModAutoTileMeshConfigData_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModAutoTileMeshConfigData;
// ********** End ScriptStruct FModAutoTileMeshConfigData ******************************************

// ********** Begin ScriptStruct FModBuildLightSourceData ******************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModBuildLightSourceData_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModBuildLightSourceData;
// ********** End ScriptStruct FModBuildLightSourceData ********************************************

// ********** Begin ScriptStruct FModBuildData *****************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h_276_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModBuildData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModBuildData;
// ********** End ScriptStruct FModBuildData *******************************************************

// ********** Begin ScriptStruct FModBuildUIData ***************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h_438_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModBuildUIData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModBuildUIData;
// ********** End ScriptStruct FModBuildUIData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BuildDataStruct_h

// ********** Begin Enum EModFiveElementType *******************************************************
#define FOREACH_ENUM_EMODFIVEELEMENTTYPE(op) \
	op(EModFiveElementType::None) \
	op(EModFiveElementType::Fire) \
	op(EModFiveElementType::Metal) \
	op(EModFiveElementType::Earth) \
	op(EModFiveElementType::Wood) \
	op(EModFiveElementType::Water) 

enum class EModFiveElementType : uint8;
template<> struct TIsUEnumClass<EModFiveElementType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModFiveElementType>();
// ********** End Enum EModFiveElementType *********************************************************

// ********** Begin Enum EModAutoTileType **********************************************************
#define FOREACH_ENUM_EMODAUTOTILETYPE(op) \
	op(EModAutoTileType::Flat) \
	op(EModAutoTileType::Edge) \
	op(EModAutoTileType::CornerEdge) \
	op(EModAutoTileType::CornerEdge_Mirror) \
	op(EModAutoTileType::Corner) \
	op(EModAutoTileType::CornerCut) \
	op(EModAutoTileType::COUNT) 

enum class EModAutoTileType : uint8;
template<> struct TIsUEnumClass<EModAutoTileType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModAutoTileType>();
// ********** End Enum EModAutoTileType ************************************************************

// ********** Begin Enum EModRoofPartType **********************************************************
#define FOREACH_ENUM_EMODROOFPARTTYPE(op) \
	op(EModRoofPartType::None) \
	op(EModRoofPartType::Corner) \
	op(EModRoofPartType::Bevel) \
	op(EModRoofPartType::Flat) \
	op(EModRoofPartType::Wall) \
	op(EModRoofPartType::RidgeCorner) \
	op(EModRoofPartType::PyramidalRoof) \
	op(EModRoofPartType::PresetRoof) \
	op(EModRoofPartType::COUNT) 

enum class EModRoofPartType : uint8;
template<> struct TIsUEnumClass<EModRoofPartType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModRoofPartType>();
// ********** End Enum EModRoofPartType ************************************************************

// ********** Begin Enum EModEmbeddedWallType ******************************************************
#define FOREACH_ENUM_EMODEMBEDDEDWALLTYPE(op) \
	op(EModEmbeddedWallType::None) \
	op(EModEmbeddedWallType::Door) \
	op(EModEmbeddedWallType::DoorWide) \
	op(EModEmbeddedWallType::Window) \
	op(EModEmbeddedWallType::WindowWide) 

enum class EModEmbeddedWallType : uint8;
template<> struct TIsUEnumClass<EModEmbeddedWallType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModEmbeddedWallType>();
// ********** End Enum EModEmbeddedWallType ********************************************************

// ********** Begin Enum EModEnergyType ************************************************************
#define FOREACH_ENUM_EMODENERGYTYPE(op) \
	op(EModEnergyType::None) \
	op(EModEnergyType::TransmissionEnergy) \
	op(EModEnergyType::EnergyStorage) \
	op(EModEnergyType::ControlEnergy) \
	op(EModEnergyType::GenerateEnergy) \
	op(EModEnergyType::ConsumeEnergy) 

enum class EModEnergyType : uint8;
template<> struct TIsUEnumClass<EModEnergyType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModEnergyType>();
// ********** End Enum EModEnergyType **************************************************************

// ********** Begin Enum EModGenerateBuildingFaultType *********************************************
#define FOREACH_ENUM_EMODGENERATEBUILDINGFAULTTYPE(op) \
	op(EModGenerateBuildingFaultType::DamageSelf) \
	op(EModGenerateBuildingFaultType::OccurGiantExplosion) \
	op(EModGenerateBuildingFaultType::OccurBigExplosion) \
	op(EModGenerateBuildingFaultType::OccurMediumExplosion) \
	op(EModGenerateBuildingFaultType::OccurSmallExplosion) 

enum class EModGenerateBuildingFaultType : uint8;
template<> struct TIsUEnumClass<EModGenerateBuildingFaultType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModGenerateBuildingFaultType>();
// ********** End Enum EModGenerateBuildingFaultType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
