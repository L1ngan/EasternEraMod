// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectileStruct.h"

#ifdef GASFRAMEWORK_ProjectileStruct_generated_h
#error "ProjectileStruct.generated.h already included, missing '#pragma once' in ProjectileStruct.h"
#endif
#define GASFRAMEWORK_ProjectileStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGenerateSummonInfo ***********************************************
#define FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGenerateSummonInfo;
// ********** End ScriptStruct FGenerateSummonInfo *************************************************

// ********** Begin ScriptStruct FRootMotionConstantForce ******************************************
#define FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics; \
	GASFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FRootMotionConstantForce;
// ********** End ScriptStruct FRootMotionConstantForce ********************************************

// ********** Begin ScriptStruct FRootMotionRadialForce ********************************************
#define FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics; \
	GASFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FRootMotionRadialForce;
// ********** End ScriptStruct FRootMotionRadialForce **********************************************

// ********** Begin ScriptStruct FSpawnTypeSet *****************************************************
#define FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h_244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnTypeSet_Statics; \
	GASFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FSpawnTypeSet;
// ********** End ScriptStruct FSpawnTypeSet *******************************************************

// ********** Begin ScriptStruct FProjectileSpawnSetting *******************************************
#define FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics; \
	GASFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FProjectileSpawnSetting;
// ********** End ScriptStruct FProjectileSpawnSetting *********************************************

// ********** Begin ScriptStruct FProjectileVFXConfig **********************************************
#define FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h_385_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics; \
	GASFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FProjectileVFXConfig;
// ********** End ScriptStruct FProjectileVFXConfig ************************************************

// ********** Begin ScriptStruct FProjectileStruct *************************************************
#define FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h_443_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileStruct_Statics; \
	GASFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FDataBase Super;


struct FProjectileStruct;
// ********** End ScriptStruct FProjectileStruct ***************************************************

// ********** Begin ScriptStruct FProjectileGEConfig ***********************************************
#define FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h_504_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileGEConfig_Statics; \
	GASFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FProjectileGEConfig;
// ********** End ScriptStruct FProjectileGEConfig *************************************************

// ********** Begin ScriptStruct FAbilityProjectileStruct ******************************************
#define FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h_520_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics; \
	GASFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FAbilityProjectileStruct;
// ********** End ScriptStruct FAbilityProjectileStruct ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h

// ********** Begin Enum EProjectileMoveType *******************************************************
#define FOREACH_ENUM_EPROJECTILEMOVETYPE(op) \
	op(EProjectileMoveType::Scattering) \
	op(EProjectileMoveType::RotationBySelf) \
	op(EProjectileMoveType::Idle) \
	op(EProjectileMoveType::TargetLocationByTarget) \
	op(EProjectileMoveType::Tracking) \
	op(EProjectileMoveType::ParabolicByTarget) \
	op(EProjectileMoveType::LaunchIdleAndBack) \
	op(EProjectileMoveType::ParabolicByDirection) \
	op(EProjectileMoveType::RotationByTarget) 

enum class EProjectileMoveType : uint8;
template<> struct TIsUEnumClass<EProjectileMoveType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EProjectileMoveType>();
// ********** End Enum EProjectileMoveType *********************************************************

// ********** Begin Enum EBattle *******************************************************************
#define FOREACH_ENUM_EBATTLE(op) \
	op(EBattle::LockDestination) \
	op(EBattle::Dot) 

enum class EBattle : uint8;
template<> struct TIsUEnumClass<EBattle> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EBattle>();
// ********** End Enum EBattle *********************************************************************

// ********** Begin Enum EProjectileTargetType *****************************************************
#define FOREACH_ENUM_EPROJECTILETARGETTYPE(op) \
	op(EProjectileTargetType::Emeny) \
	op(EProjectileTargetType::Player) \
	op(EProjectileTargetType::Both) 

enum class EProjectileTargetType : uint8;
template<> struct TIsUEnumClass<EProjectileTargetType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EProjectileTargetType>();
// ********** End Enum EProjectileTargetType *******************************************************

// ********** Begin Enum EProjectileGenerateType ***************************************************
#define FOREACH_ENUM_EPROJECTILEGENERATETYPE(op) \
	op(EProjectileGenerateType::ProjectileAnimNotifyBegin) \
	op(EProjectileGenerateType::ProjectileAnimNotifyCustom) 

enum class EProjectileGenerateType : uint8;
template<> struct TIsUEnumClass<EProjectileGenerateType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EProjectileGenerateType>();
// ********** End Enum EProjectileGenerateType *****************************************************

// ********** Begin Enum EProjectileSpawnType ******************************************************
#define FOREACH_ENUM_EPROJECTILESPAWNTYPE(op) \
	op(EProjectileSpawnType::None) \
	op(EProjectileSpawnType::RandomBoundingBox) \
	op(EProjectileSpawnType::EvenlyAlongVector) \
	op(EProjectileSpawnType::EvenlyInCircle) 

enum class EProjectileSpawnType : uint8;
template<> struct TIsUEnumClass<EProjectileSpawnType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EProjectileSpawnType>();
// ********** End Enum EProjectileSpawnType ********************************************************

// ********** Begin Enum EEarlyWarningType *********************************************************
#define FOREACH_ENUM_EEARLYWARNINGTYPE(op) \
	op(EEarlyWarningType::Straight) \
	op(EEarlyWarningType::Circle) 

enum class EEarlyWarningType : uint8;
template<> struct TIsUEnumClass<EEarlyWarningType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EEarlyWarningType>();
// ********** End Enum EEarlyWarningType ***********************************************************

// ********** Begin Enum ESimulationType ***********************************************************
#define FOREACH_ENUM_ESIMULATIONTYPE(op) \
	op(ESimulationType::None) \
	op(ESimulationType::Bezier) \
	op(ESimulationType::PhysicalSimulation) 

enum class ESimulationType : uint8;
template<> struct TIsUEnumClass<ESimulationType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<ESimulationType>();
// ********** End Enum ESimulationType *************************************************************

// ********** Begin Enum ETargetClassType **********************************************************
#define FOREACH_ENUM_ETARGETCLASSTYPE(op) \
	op(ETargetClassType::None) \
	op(ETargetClassType::AllEnemy) \
	op(ETargetClassType::LockEnemy) \
	op(ETargetClassType::AllFriendly) \
	op(ETargetClassType::OtherThanFriends) 

enum class ETargetClassType : uint8;
template<> struct TIsUEnumClass<ETargetClassType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<ETargetClassType>();
// ********** End Enum ETargetClassType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
