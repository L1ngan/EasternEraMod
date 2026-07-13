// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseDataStruct.h"

#ifdef CREATEMODPLUGIN_BaseDataStruct_generated_h
#error "BaseDataStruct.generated.h already included, missing '#pragma once' in BaseDataStruct.h"
#endif
#define CREATEMODPLUGIN_BaseDataStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModConfig ********************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModConfig_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModConfig;
// ********** End ScriptStruct FModConfig **********************************************************

// ********** Begin ScriptStruct FModAsset *********************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModAsset_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModAsset;
// ********** End ScriptStruct FModAsset ***********************************************************

// ********** Begin Class UModInformationAsset *****************************************************
CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModInformationAsset_NoRegister();

#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModInformationAsset(); \
	friend struct Z_Construct_UClass_UModInformationAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModInformationAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UModInformationAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CreateModPlugin"), Z_Construct_UClass_UModInformationAsset_NoRegister) \
	DECLARE_SERIALIZER(UModInformationAsset)


#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModInformationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModInformationAsset(UModInformationAsset&&) = delete; \
	UModInformationAsset(const UModInformationAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModInformationAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModInformationAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModInformationAsset) \
	NO_API virtual ~UModInformationAsset();


#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_113_PROLOG
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_116_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModInformationAsset;

// ********** End Class UModInformationAsset *******************************************************

// ********** Begin ScriptStruct FModDataBase ******************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModDataBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FModDataBase;
// ********** End ScriptStruct FModDataBase ********************************************************

// ********** Begin ScriptStruct FModGameplayEffectContainer ***************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_335_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModGameplayEffectContainer_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModGameplayEffectContainer;
// ********** End ScriptStruct FModGameplayEffectContainer *****************************************

// ********** Begin ScriptStruct FModFormatText ****************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_354_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModFormatText_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModFormatText;
// ********** End ScriptStruct FModFormatText ******************************************************

// ********** Begin ScriptStruct FModDropItemInfo **************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_387_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModDropItemInfo_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct();


struct FModDropItemInfo;
// ********** End ScriptStruct FModDropItemInfo ****************************************************

// ********** Begin ScriptStruct FModDropSetConfig *************************************************
#define FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h_405_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModDropSetConfig_Statics; \
	CREATEMODPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FModDataBase Super;


struct FModDropSetConfig;
// ********** End ScriptStruct FModDropSetConfig ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_BaseDataStruct_h

// ********** Begin Enum EModConfigType ************************************************************
#define FOREACH_ENUM_EMODCONFIGTYPE(op) \
	op(EModConfigType::None) \
	op(EModConfigType::InventoryItem) \
	op(EModConfigType::CharacterConfig) \
	op(EModConfigType::BuildingUI) \
	op(EModConfigType::BuildConfig) \
	op(EModConfigType::WorldPlaceConfig) \
	op(EModConfigType::CharacterAppearancePreset) \
	op(EModConfigType::CharacterAnatomyProfiles) \
	op(EModConfigType::CommonBuff) \
	op(EModConfigType::WeaponConfig) \
	op(EModConfigType::EquipmentConfig) \
	op(EModConfigType::FormulaData) \
	op(EModConfigType::FabricateEquipmentData) \
	op(EModConfigType::EquipmentQualityRange) \
	op(EModConfigType::GenerateEquipmentData) \
	op(EModConfigType::EquipmentAttributes) \
	op(EModConfigType::TechnologyConfig) \
	op(EModConfigType::ToolConfig) \
	op(EModConfigType::DropSetConfig) \
	op(EModConfigType::TechUnlockItemConig) \
	op(EModConfigType::AnimalConfig) \
	op(EModConfigType::GameAbility) \
	op(EModConfigType::Projectile) \
	op(EModConfigType::ModuleUI) \
	op(EModConfigType::CommonUI) \
	op(EModConfigType::AnimalActionAbility) \
	op(EModConfigType::EnemyAttackGenerationConfig) \
	op(EModConfigType::MonsterGenerationConfig) \
	op(EModConfigType::ThreatPoolInfo) 

enum class EModConfigType : uint8;
template<> struct TIsUEnumClass<EModConfigType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModConfigType>();
// ********** End Enum EModConfigType **************************************************************

// ********** Begin Enum EModDataAssetType *********************************************************
#define FOREACH_ENUM_EMODDATAASSETTYPE(op) \
	op(EModDataAssetType::None) \
	op(EModDataAssetType::NewGameConfiguration) 

enum class EModDataAssetType : uint8;
template<> struct TIsUEnumClass<EModDataAssetType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModDataAssetType>();
// ********** End Enum EModDataAssetType ***********************************************************

// ********** Begin Enum EModCharacterBehaviorState ************************************************
#define FOREACH_ENUM_EMODCHARACTERBEHAVIORSTATE(op) \
	op(EModCharacterBehaviorState::None) \
	op(EModCharacterBehaviorState::InBattle) \
	op(EModCharacterBehaviorState::InAction) \
	op(EModCharacterBehaviorState::InStroll) \
	op(EModCharacterBehaviorState::InRide) \
	op(EModCharacterBehaviorState::Death) \
	op(EModCharacterBehaviorState::Assault) \
	op(EModCharacterBehaviorState::InControlled) \
	op(EModCharacterBehaviorState::Construct) \
	op(EModCharacterBehaviorState::Sleep_Ground) \
	op(EModCharacterBehaviorState::Sleep_Bed) \
	op(EModCharacterBehaviorState::Sleep_Mat) \
	op(EModCharacterBehaviorState::Eat_Sit) \
	op(EModCharacterBehaviorState::Eat_Stand) \
	op(EModCharacterBehaviorState::GetItem) \
	op(EModCharacterBehaviorState::TransItem) \
	op(EModCharacterBehaviorState::Logging) \
	op(EModCharacterBehaviorState::CutOff) \
	op(EModCharacterBehaviorState::Quarrying) \
	op(EModCharacterBehaviorState::Excavate) \
	op(EModCharacterBehaviorState::SearchBox) \
	op(EModCharacterBehaviorState::Transport) \
	op(EModCharacterBehaviorState::Happy_MasterChair) \
	op(EModCharacterBehaviorState::CollectPlant) \
	op(EModCharacterBehaviorState::Havest_Wheat) \
	op(EModCharacterBehaviorState::PlantCrops) \
	op(EModCharacterBehaviorState::Work_Weaving) \
	op(EModCharacterBehaviorState::Work_Forge) \
	op(EModCharacterBehaviorState::Work_SewingTable) \
	op(EModCharacterBehaviorState::Work_CookSimple) \
	op(EModCharacterBehaviorState::Work_Cook) \
	op(EModCharacterBehaviorState::Research) \
	op(EModCharacterBehaviorState::Work_Make) \
	op(EModCharacterBehaviorState::ChopFirewood) \
	op(EModCharacterBehaviorState::MakeWine) \
	op(EModCharacterBehaviorState::GrindTheMill) \
	op(EModCharacterBehaviorState::MakeMedicine) \
	op(EModCharacterBehaviorState::Animal_Sleep) \
	op(EModCharacterBehaviorState::AnimalEat_Vege) \
	op(EModCharacterBehaviorState::SimpleMelting) \
	op(EModCharacterBehaviorState::DelicateMelting) \
	op(EModCharacterBehaviorState::Practice_WoodenDummy) \
	op(EModCharacterBehaviorState::Meditation) \
	op(EModCharacterBehaviorState::MedicatedBath) \
	op(EModCharacterBehaviorState::DepressionIdle) \
	op(EModCharacterBehaviorState::EquipEquipment) \
	op(EModCharacterBehaviorState::Reading) \
	op(EModCharacterBehaviorState::Read_Sit) \
	op(EModCharacterBehaviorState::Write_Copy) \
	op(EModCharacterBehaviorState::BuildStruct) \
	op(EModCharacterBehaviorState::Observe) \
	op(EModCharacterBehaviorState::Explore) \
	op(EModCharacterBehaviorState::Work_Doctor) \
	op(EModCharacterBehaviorState::WaitBeTreat) \
	op(EModCharacterBehaviorState::SearchBody) \
	op(EModCharacterBehaviorState::ButcherBody) \
	op(EModCharacterBehaviorState::Recuperate_Ground) \
	op(EModCharacterBehaviorState::Recuperate_Bed) \
	op(EModCharacterBehaviorState::Recuperate_Mat) \
	op(EModCharacterBehaviorState::Hunting) \
	op(EModCharacterBehaviorState::DestoryBuilding) \
	op(EModCharacterBehaviorState::ManageBuildings) \
	op(EModCharacterBehaviorState::SocializeChat) \
	op(EModCharacterBehaviorState::JoinCeremony) \
	op(EModCharacterBehaviorState::Write_Self) \
	op(EModCharacterBehaviorState::Standby) \
	op(EModCharacterBehaviorState::InBuildingRecovery) \
	op(EModCharacterBehaviorState::Stop) \
	op(EModCharacterBehaviorState::RepaiRobot) \
	op(EModCharacterBehaviorState::ActiveRobot) \
	op(EModCharacterBehaviorState::RefitPuppet) \
	op(EModCharacterBehaviorState::PhysicianCarry) \
	op(EModCharacterBehaviorState::ReturnMedicalPoint) \
	op(EModCharacterBehaviorState::SeriousInjury) \
	op(EModCharacterBehaviorState::RecoverInspiration) \
	op(EModCharacterBehaviorState::OpenFabricateWork) \
	op(EModCharacterBehaviorState::CollectTheProducts) \
	op(EModCharacterBehaviorState::Taming) \
	op(EModCharacterBehaviorState::BeTamed) \
	op(EModCharacterBehaviorState::PreBattleDisplay) \
	op(EModCharacterBehaviorState::OnPatrol) \
	op(EModCharacterBehaviorState::Following) \
	op(EModCharacterBehaviorState::VictoryDisplay) \
	op(EModCharacterBehaviorState::DefeatedDisplay) \
	op(EModCharacterBehaviorState::WaitingButcher) \
	op(EModCharacterBehaviorState::Breakthrough) \
	op(EModCharacterBehaviorState::Breeding) \
	op(EModCharacterBehaviorState::WaitingBreeding) \
	op(EModCharacterBehaviorState::SpawnBaby) \
	op(EModCharacterBehaviorState::ExchangeMartialArts) \
	op(EModCharacterBehaviorState::KnockDown) \
	op(EModCharacterBehaviorState::ForceRetreat) 

enum class EModCharacterBehaviorState : uint8;
template<> struct TIsUEnumClass<EModCharacterBehaviorState> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModCharacterBehaviorState>();
// ********** End Enum EModCharacterBehaviorState **************************************************

// ********** Begin Enum EModGroundInventoryType ***************************************************
#define FOREACH_ENUM_EMODGROUNDINVENTORYTYPE(op) \
	op(EModGroundInventoryType::None) \
	op(EModGroundInventoryType::NormalItem) \
	op(EModGroundInventoryType::Collect) \
	op(EModGroundInventoryType::FunctionalBuilding) \
	op(EModGroundInventoryType::Equipment) \
	op(EModGroundInventoryType::PuppetEquipment) \
	op(EModGroundInventoryType::Book) 

enum class EModGroundInventoryType : uint8;
template<> struct TIsUEnumClass<EModGroundInventoryType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModGroundInventoryType>();
// ********** End Enum EModGroundInventoryType *****************************************************

// ********** Begin Enum EModCharacterType *********************************************************
#define FOREACH_ENUM_EMODCHARACTERTYPE(op) \
	op(EModCharacterType::None) \
	op(EModCharacterType::Human) \
	op(EModCharacterType::Summons) \
	op(EModCharacterType::Animal) \
	op(EModCharacterType::Robot) 

enum class EModCharacterType : uint8;
template<> struct TIsUEnumClass<EModCharacterType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModCharacterType>();
// ********** End Enum EModCharacterType ***********************************************************

// ********** Begin Enum EModTipsType **************************************************************
#define FOREACH_ENUM_EMODTIPSTYPE(op) \
	op(EModTipsType::None) \
	op(EModTipsType::EventPawn) \
	op(EModTipsType::EventRebirth) \
	op(EModTipsType::EventClose) \
	op(EModTipsType::DeathAhead) \
	op(EModTipsType::TechDevFinish) \
	op(EModTipsType::WeatherChange) \
	op(EModTipsType::WeatherDisaster) \
	op(EModTipsType::NeedBed) \
	op(EModTipsType::CharacterIdle) \
	op(EModTipsType::TechDevIdle) \
	op(EModTipsType::CharacterDeath) \
	op(EModTipsType::ObservePlantComplete) \
	op(EModTipsType::ObserveAnimalComplete) \
	op(EModTipsType::CharacterGetHurt) \
	op(EModTipsType::CharacterDying) \
	op(EModTipsType::CharacterNeedWeapon) \
	op(EModTipsType::BuildNeedMaterial) \
	op(EModTipsType::CharacterNeedClothes) \
	op(EModTipsType::TameSuccessed) \
	op(EModTipsType::TameFaild) \
	op(EModTipsType::NoneMaterial) \
	op(EModTipsType::RecentStorageTool) \
	op(EModTipsType::StorageSpaceInsufficient) \
	op(EModTipsType::FindNewMaterial) \
	op(EModTipsType::NotEquipped) \
	op(EModTipsType::EarlyWarning) \
	op(EModTipsType::Assault) \
	op(EModTipsType::RequestToJoin) \
	op(EModTipsType::EncounterWarningOfSectWar) \
	op(EModTipsType::DiscipleHungry) \
	op(EModTipsType::DepressionIdle) \
	op(EModTipsType::ChivalrousArrived) \
	op(EModTipsType::PeddlerArrived) \
	op(EModTipsType::ForceAssault) \
	op(EModTipsType::ForceAssaultRetreat) \
	op(EModTipsType::BreakThrough) \
	op(EModTipsType::TourCanSignup) \
	op(EModTipsType::ExchangeMartialArtsStart) \
	op(EModTipsType::ExchangeMartialArtsWin) \
	op(EModTipsType::ExchangeMartialArtsFailed) \
	op(EModTipsType::CanRecruitNPC) \
	op(EModTipsType::ExchangeMartialArtsOutStartTime) \
	op(EModTipsType::NeedBedRescue) \
	op(EModTipsType::NeedInspirationBuilding) 

enum class EModTipsType : uint8;
template<> struct TIsUEnumClass<EModTipsType> { enum { Value = true }; };
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTipsType>();
// ********** End Enum EModTipsType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
