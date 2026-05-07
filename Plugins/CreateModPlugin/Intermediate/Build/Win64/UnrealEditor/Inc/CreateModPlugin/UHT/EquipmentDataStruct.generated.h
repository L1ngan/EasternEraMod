// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentDataStruct.h"

#ifdef CREATEMODPLUGIN_EquipmentDataStruct_generated_h
#error "EquipmentDataStruct.generated.h already included, missing '#pragma once' in EquipmentDataStruct.h"
#endif
#define CREATEMODPLUGIN_EquipmentDataStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModCharacterEquipment ********************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModCharacterEquipment_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModInventoryGeneralData Super;


struct FModCharacterEquipment;
// ********** End ScriptStruct FModCharacterEquipment **********************************************

// ********** Begin ScriptStruct FModCharacterTool *************************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModCharacterTool_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModCharacterEquipment Super;


struct FModCharacterTool;
// ********** End ScriptStruct FModCharacterTool ***************************************************

// ********** Begin ScriptStruct FModCharacterWeapon ***********************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModCharacterWeapon_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModCharacterEquipment Super;


struct FModCharacterWeapon;
// ********** End ScriptStruct FModCharacterWeapon *************************************************

// ********** Begin ScriptStruct FModCharacterApparel **********************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModCharacterApparel_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModCharacterEquipment Super;


struct FModCharacterApparel;
// ********** End ScriptStruct FModCharacterApparel ************************************************

// ********** Begin ScriptStruct FModFormulaData ***************************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h_274_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModFormulaData_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModFormulaData;
// ********** End ScriptStruct FModFormulaData *****************************************************

// ********** Begin ScriptStruct FModFabricateEquipmentData ****************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h_395_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModFabricateEquipmentData_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModFabricateEquipmentData;
// ********** End ScriptStruct FModFabricateEquipmentData ******************************************

// ********** Begin ScriptStruct FModEquipmentQualityRange *****************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h_412_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModEquipmentQualityRange_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModEquipmentQualityRange;
// ********** End ScriptStruct FModEquipmentQualityRange *******************************************

// ********** Begin ScriptStruct FModGenerateEquipmentData *****************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h_449_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModGenerateEquipmentData_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModGenerateEquipmentData;
// ********** End ScriptStruct FModGenerateEquipmentData *******************************************

// ********** Begin ScriptStruct FModEquipmentAttribute ********************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h_486_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModEquipmentAttribute_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModEquipmentAttribute;
// ********** End ScriptStruct FModEquipmentAttribute **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_EquipmentDataStruct_h

// ********** Begin Enum EModEquipmentType *********************************************************
#define FOREACH_ENUM_EMODEQUIPMENTTYPE(op) \
	op(EModEquipmentType::None) \
	op(EModEquipmentType::Weapon) \
	op(EModEquipmentType::Armor) \
	op(EModEquipmentType::Tool) 

enum class EModEquipmentType : uint8;
template<> struct TIsUEnumClass<EModEquipmentType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModEquipmentType>();
// ********** End Enum EModEquipmentType ***********************************************************

// ********** Begin Enum EModCommonButtonType ******************************************************
#define FOREACH_ENUM_EMODCOMMONBUTTONTYPE(op) \
	op(EModCommonButtonType::None) \
	op(EModCommonButtonType::AddResource) \
	op(EModCommonButtonType::CloseFacility) \
	op(EModCommonButtonType::OpenFacility) \
	op(EModCommonButtonType::CopyList) \
	op(EModCommonButtonType::MakeMenu) \
	op(EModCommonButtonType::PasteList) \
	op(EModCommonButtonType::AllotmentOwner) \
	op(EModCommonButtonType::Fell) \
	op(EModCommonButtonType::CutOff) \
	op(EModCommonButtonType::Harvest) \
	op(EModCommonButtonType::Pick) \
	op(EModCommonButtonType::Explore) \
	op(EModCommonButtonType::MoveBuilding) \
	op(EModCommonButtonType::DestoryBuilding) \
	op(EModCommonButtonType::RebuildBuilding) \
	op(EModCommonButtonType::CancelBuild) \
	op(EModCommonButtonType::KeepClear) \
	op(EModCommonButtonType::AllSelect) \
	op(EModCommonButtonType::CancelAllSelect) \
	op(EModCommonButtonType::CopyLimit) \
	op(EModCommonButtonType::PasteLimit) \
	op(EModCommonButtonType::BackButton) \
	op(EModCommonButtonType::CancelChoose) \
	op(EModCommonButtonType::ConfirmButton) \
	op(EModCommonButtonType::Digging) \
	op(EModCommonButtonType::CatchAndHunt) \
	op(EModCommonButtonType::HuntTogether) \
	op(EModCommonButtonType::ButcherBody) \
	op(EModCommonButtonType::SearchBody) \
	op(EModCommonButtonType::ProhibitUsage) \
	op(EModCommonButtonType::Disassemble) \
	op(EModCommonButtonType::Extinguish) \
	op(EModCommonButtonType::Mining) \
	op(EModCommonButtonType::CookSimpleFood) \
	op(EModCommonButtonType::CookHomemadeFood) \
	op(EModCommonButtonType::CookExquisiteFood) \
	op(EModCommonButtonType::ChoppingWood) \
	op(EModCommonButtonType::Grinding) \
	op(EModCommonButtonType::Brewing) \
	op(EModCommonButtonType::Smelting) \
	op(EModCommonButtonType::Refining) \
	op(EModCommonButtonType::MakeWeapons) \
	op(EModCommonButtonType::Handcrafting) \
	op(EModCommonButtonType::SewHat) \
	op(EModCommonButtonType::SewBracers) \
	op(EModCommonButtonType::SewShirt) \
	op(EModCommonButtonType::SewPants) \
	op(EModCommonButtonType::SewShoes) \
	op(EModCommonButtonType::ResearchTechnology) \
	op(EModCommonButtonType::Pharmaceuticals) \
	op(EModCommonButtonType::Weaving) \
	op(EModCommonButtonType::AssignAnimals) \
	op(EModCommonButtonType::ProhibitPlanting) \
	op(EModCommonButtonType::CancelOrder) \
	op(EModCommonButtonType::ReadBook) \
	op(EModCommonButtonType::ExpandFarmland) \
	op(EModCommonButtonType::ReduceFarmland) \
	op(EModCommonButtonType::RemoveFarmland) \
	op(EModCommonButtonType::ChangePlant) \
	op(EModCommonButtonType::HarvestFarmland) \
	op(EModCommonButtonType::PracticeMartialArts) \
	op(EModCommonButtonType::Observe) \
	op(EModCommonButtonType::MakeTea) \
	op(EModCommonButtonType::ProhibitTreatSelf) \
	op(EModCommonButtonType::BeControlled) \
	op(EModCommonButtonType::BuildingAutoAddFuel) \
	op(EModCommonButtonType::SwitchRoomType) \
	op(EModCommonButtonType::SetBuildTimedSwitch) \
	op(EModCommonButtonType::SetBuildTemperatureSwitch) \
	op(EModCommonButtonType::SetBuildEnergySwitch) \
	op(EModCommonButtonType::SetBuildPipelineGroup) \
	op(EModCommonButtonType::SetBuildWhenOpenedControlPipelineGroup) \
	op(EModCommonButtonType::SetBuildWhenClosedControlPipelineGroup) \
	op(EModCommonButtonType::ChooseConsumeBuildings) \
	op(EModCommonButtonType::ChooseGenerateEnergyBuildings) \
	op(EModCommonButtonType::ChooseControlBuildings) \
	op(EModCommonButtonType::ActivateMachine) \
	op(EModCommonButtonType::ChangeRobotWork) \
	op(EModCommonButtonType::ChangeRobotState) \
	op(EModCommonButtonType::WriteCopy) \
	op(EModCommonButtonType::RobotChoosePatrolPoint) \
	op(EModCommonButtonType::SetRobotProtectTarget) \
	op(EModCommonButtonType::ApplyCeremony) \
	op(EModCommonButtonType::ToEatFood) \
	op(EModCommonButtonType::Exchange) \
	op(EModCommonButtonType::Travel) \
	op(EModCommonButtonType::SettleIn) \
	op(EModCommonButtonType::Enter) \
	op(EModCommonButtonType::GiveUp) \
	op(EModCommonButtonType::WorldPlaceExploration) \
	op(EModCommonButtonType::WorldPlaceManagement) \
	op(EModCommonButtonType::WorldPlaceAttack) \
	op(EModCommonButtonType::AddPuppet) \
	op(EModCommonButtonType::ConfirmAddPuppet) \
	op(EModCommonButtonType::GetOutOfTheJam) \
	op(EModCommonButtonType::Tame) \
	op(EModCommonButtonType::Letter) \
	op(EModCommonButtonType::ButcherTamedAnimal) \
	op(EModCommonButtonType::WaitingButcher) \
	op(EModCommonButtonType::Dialogue) \
	op(EModCommonButtonType::Trade) \
	op(EModCommonButtonType::ImmediatelyExecute) \
	op(EModCommonButtonType::Kill) \
	op(EModCommonButtonType::Imprison) \
	op(EModCommonButtonType::ReleasePrisoner) \
	op(EModCommonButtonType::ExecutePrisoner) \
	op(EModCommonButtonType::TorturePrisoner) \
	op(EModCommonButtonType::RecruitPrisoner) \
	op(EModCommonButtonType::ImprisonBack) \
	op(EModCommonButtonType::OpenTreasureList) \
	op(EModCommonButtonType::ProhibitionUse) \
	op(EModCommonButtonType::OpenBackPack) \
	op(EModCommonButtonType::CopySetting) \
	op(EModCommonButtonType::PasteSetting) \
	op(EModCommonButtonType::ReplicateBuild) \
	op(EModCommonButtonType::DestroyResources) \
	op(EModCommonButtonType::BatchAllSelect) \
	op(EModCommonButtonType::BatchCancelAllSelect) 

enum class EModCommonButtonType : uint8;
template<> struct TIsUEnumClass<EModCommonButtonType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModCommonButtonType>();
// ********** End Enum EModCommonButtonType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
