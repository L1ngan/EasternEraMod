// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemDataStruct.h"

#ifdef CREATEMODPLUGIN_ItemDataStruct_generated_h
#error "ItemDataStruct.generated.h already included, missing '#pragma once' in ItemDataStruct.h"
#endif
#define CREATEMODPLUGIN_ItemDataStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModStackModel ****************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModStackModel_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModStackModel;
// ********** End ScriptStruct FModStackModel ******************************************************

// ********** Begin ScriptStruct FModEfficiencyByTemperature ***************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModEfficiencyByTemperature_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModEfficiencyByTemperature;
// ********** End ScriptStruct FModEfficiencyByTemperature *****************************************

// ********** Begin ScriptStruct FModGroupCorrespondingAnim ****************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModGroupCorrespondingAnim_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModGroupCorrespondingAnim;
// ********** End ScriptStruct FModGroupCorrespondingAnim ******************************************

// ********** Begin ScriptStruct FModInventoryGeneralData ******************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModInventoryGeneralData_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModInventoryGeneralData;
// ********** End ScriptStruct FModInventoryGeneralData ********************************************

// ********** Begin ScriptStruct FModInventoryItem *************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModInventoryItem_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModInventoryGeneralData Super;


struct FModInventoryItem;
// ********** End ScriptStruct FModInventoryItem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ItemDataStruct_h

// ********** Begin Enum EModItemQuality ***********************************************************
#define FOREACH_ENUM_EMODITEMQUALITY(op) \
	op(EModItemQuality::None) \
	op(EModItemQuality::White) \
	op(EModItemQuality::Green) \
	op(EModItemQuality::Blue) \
	op(EModItemQuality::Purple) \
	op(EModItemQuality::Orange) \
	op(EModItemQuality::Golden) \
	op(EModItemQuality::Red) \
	op(EModItemQuality::Colorful) 

enum class EModItemQuality : uint8;
template<> struct TIsUEnumClass<EModItemQuality> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModItemQuality>();
// ********** End Enum EModItemQuality *************************************************************

// ********** Begin Enum EModGroundSoilType ********************************************************
#define FOREACH_ENUM_EMODGROUNDSOILTYPE(op) \
	op(EModGroundSoilType::None) \
	op(EModGroundSoilType::GravelSoil) \
	op(EModGroundSoilType::SandySoil) \
	op(EModGroundSoilType::Clay) \
	op(EModGroundSoilType::Silt) \
	op(EModGroundSoilType::FatSoil) 

enum class EModGroundSoilType : uint8;
template<> struct TIsUEnumClass<EModGroundSoilType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModGroundSoilType>();
// ********** End Enum EModGroundSoilType **********************************************************

// ********** Begin Enum EModStorageSpace **********************************************************
#define FOREACH_ENUM_EMODSTORAGESPACE(op) \
	op(EModStorageSpace::None) \
	op(EModStorageSpace::OutDoor) \
	op(EModStorageSpace::UnderRoof) \
	op(EModStorageSpace::InDoor) 

enum class EModStorageSpace : uint8;
template<> struct TIsUEnumClass<EModStorageSpace> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModStorageSpace>();
// ********** End Enum EModStorageSpace ************************************************************

// ********** Begin Enum EModItemType **************************************************************
#define FOREACH_ENUM_EMODITEMTYPE(op) \
	op(EModItemType::None) \
	op(EModItemType::Food) \
	op(EModItemType::Materials) \
	op(EModItemType::Drug) \
	op(EModItemType::Rubbish) \
	op(EModItemType::AnimalFood) 

enum class EModItemType : uint8;
template<> struct TIsUEnumClass<EModItemType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModItemType>();
// ********** End Enum EModItemType ****************************************************************

// ********** Begin Enum EModFoodType **************************************************************
#define FOREACH_ENUM_EMODFOODTYPE(op) \
	op(EModFoodType::None) \
	op(EModFoodType::Vegetarian) \
	op(EModFoodType::Meat) 

enum class EModFoodType : uint8;
template<> struct TIsUEnumClass<EModFoodType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModFoodType>();
// ********** End Enum EModFoodType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
