// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectileStruct.h"
#include "EastRimWorldAbilityTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectileStruct() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_ARHS_ProjectileBase_NoRegister();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EBattle();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EEarlyWarningType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EProjectileGenerateType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EProjectileMoveType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EProjectileSpawnType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EProjectileTargetType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_ESimulationType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_ETargetClassType();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityProjectileStruct();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FControlEffectData();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateSummonInfo();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileGEConfig();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileSpawnSetting();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileStruct();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileVFXConfig();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionConstantForce();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionRadialForce();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnTypeSet();
LQUICKFRAME_API UScriptStruct* Z_Construct_UScriptStruct_FDataBase();
UPackage* Z_Construct_UPackage__Script_GASFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EProjectileMoveType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileMoveType;
static UEnum* EProjectileMoveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileMoveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileMoveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EProjectileMoveType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EProjectileMoveType"));
	}
	return Z_Registration_Info_UEnum_EProjectileMoveType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EProjectileMoveType>()
{
	return EProjectileMoveType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EProjectileMoveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "Idle.Comment", "// \xe5\x8f\x91\xe5\xb0\x84\xe4\xbd\x8d\xe7\xbd\xae\xe7\x94\x9f\xe6\x88\x90 \xe8\x87\xaa\xe8\xba\xab\xe4\xb8\x8d\xe4\xbc\x9a\xe7\xa7\xbb\xe5\x8a\xa8\n" },
		{ "Idle.Name", "EProjectileMoveType::Idle" },
		{ "Idle.ToolTip", "\xe5\x8f\x91\xe5\xb0\x84\xe4\xbd\x8d\xe7\xbd\xae\xe7\x94\x9f\xe6\x88\x90 \xe8\x87\xaa\xe8\xba\xab\xe4\xb8\x8d\xe4\xbc\x9a\xe7\xa7\xbb\xe5\x8a\xa8" },
		{ "LaunchIdleAndBack.Comment", "//\xe5\x8f\x91\xe5\x8a\xa8\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe4\xbd\x8d\xe7\xbd\xae\xe5\x90\x8e\xe5\x81\x9c\xe6\xad\xa2\xe5\x90\x8e\xe8\xbf\x94\xe5\x9b\x9e\xe6\x88\x96\xe8\x80\x85\xe8\xbf\x94\xe5\x9b\x9e\n" },
		{ "LaunchIdleAndBack.Name", "EProjectileMoveType::LaunchIdleAndBack" },
		{ "LaunchIdleAndBack.ToolTip", "\xe5\x8f\x91\xe5\x8a\xa8\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe4\xbd\x8d\xe7\xbd\xae\xe5\x90\x8e\xe5\x81\x9c\xe6\xad\xa2\xe5\x90\x8e\xe8\xbf\x94\xe5\x9b\x9e\xe6\x88\x96\xe8\x80\x85\xe8\xbf\x94\xe5\x9b\x9e" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
		{ "ParabolicByDirection.Comment", "//\xe6\x8a\x9b\xe7\x89\xa9\xe7\xba\xbf\xe6\x9c\x9d\xe6\x96\xb9\xe5\x90\x91\xe7\xa7\xbb\xe5\x8a\xa8\n" },
		{ "ParabolicByDirection.Name", "EProjectileMoveType::ParabolicByDirection" },
		{ "ParabolicByDirection.ToolTip", "\xe6\x8a\x9b\xe7\x89\xa9\xe7\xba\xbf\xe6\x9c\x9d\xe6\x96\xb9\xe5\x90\x91\xe7\xa7\xbb\xe5\x8a\xa8" },
		{ "ParabolicByTarget.Comment", "//\xe6\x8a\x9b\xe7\x89\xa9\xe7\xba\xbf\xe9\x94\x81\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87\n" },
		{ "ParabolicByTarget.Name", "EProjectileMoveType::ParabolicByTarget" },
		{ "ParabolicByTarget.ToolTip", "\xe6\x8a\x9b\xe7\x89\xa9\xe7\xba\xbf\xe9\x94\x81\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87" },
		{ "RotationBySelf.Comment", "//\xe5\x9b\xb4\xe7\xbb\x95\xe5\x8f\x91\xe5\x87\xba\xe8\x80\x85\xe6\x97\x8b\xe8\xbd\xac\n" },
		{ "RotationBySelf.Name", "EProjectileMoveType::RotationBySelf" },
		{ "RotationBySelf.ToolTip", "\xe5\x9b\xb4\xe7\xbb\x95\xe5\x8f\x91\xe5\x87\xba\xe8\x80\x85\xe6\x97\x8b\xe8\xbd\xac" },
		{ "RotationByTarget.Comment", "//\xe5\x9b\xb4\xe7\xbb\x95\xe7\x9b\xae\xe6\xa0\x87\xe6\x97\x8b\xe8\xbd\xac\n" },
		{ "RotationByTarget.Name", "EProjectileMoveType::RotationByTarget" },
		{ "RotationByTarget.ToolTip", "\xe5\x9b\xb4\xe7\xbb\x95\xe7\x9b\xae\xe6\xa0\x87\xe6\x97\x8b\xe8\xbd\xac" },
		{ "Scattering.Comment", "//\xe6\x8c\x89\xe8\xa7\x92\xe5\xba\xa6\xe5\x88\x86\xe5\xb8\x83\xef\xbc\x8c\xe7\x9b\xb4\xe7\xba\xbf\xe5\x8f\x91\xe5\xb0\x84\n" },
		{ "Scattering.Name", "EProjectileMoveType::Scattering" },
		{ "Scattering.ToolTip", "\xe6\x8c\x89\xe8\xa7\x92\xe5\xba\xa6\xe5\x88\x86\xe5\xb8\x83\xef\xbc\x8c\xe7\x9b\xb4\xe7\xba\xbf\xe5\x8f\x91\xe5\xb0\x84" },
		{ "TargetLocationByTarget.Comment", "//\xe5\x9c\xa8\xe7\x9b\xae\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae\xe7\x9b\xb4\xe6\x8e\xa5\xe7\x94\x9f\xe6\x88\x90\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\n" },
		{ "TargetLocationByTarget.Name", "EProjectileMoveType::TargetLocationByTarget" },
		{ "TargetLocationByTarget.ToolTip", "\xe5\x9c\xa8\xe7\x9b\xae\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae\xe7\x9b\xb4\xe6\x8e\xa5\xe7\x94\x9f\xe6\x88\x90\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
		{ "Tracking.Comment", "//\xe8\xbf\xbd\xe8\xb8\xaa\n" },
		{ "Tracking.Name", "EProjectileMoveType::Tracking" },
		{ "Tracking.ToolTip", "\xe8\xbf\xbd\xe8\xb8\xaa" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileMoveType::Scattering", (int64)EProjectileMoveType::Scattering },
		{ "EProjectileMoveType::RotationBySelf", (int64)EProjectileMoveType::RotationBySelf },
		{ "EProjectileMoveType::Idle", (int64)EProjectileMoveType::Idle },
		{ "EProjectileMoveType::TargetLocationByTarget", (int64)EProjectileMoveType::TargetLocationByTarget },
		{ "EProjectileMoveType::Tracking", (int64)EProjectileMoveType::Tracking },
		{ "EProjectileMoveType::ParabolicByTarget", (int64)EProjectileMoveType::ParabolicByTarget },
		{ "EProjectileMoveType::LaunchIdleAndBack", (int64)EProjectileMoveType::LaunchIdleAndBack },
		{ "EProjectileMoveType::ParabolicByDirection", (int64)EProjectileMoveType::ParabolicByDirection },
		{ "EProjectileMoveType::RotationByTarget", (int64)EProjectileMoveType::RotationByTarget },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EProjectileMoveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EProjectileMoveType",
	"EProjectileMoveType",
	Z_Construct_UEnum_GASFramework_EProjectileMoveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EProjectileMoveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EProjectileMoveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EProjectileMoveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EProjectileMoveType()
{
	if (!Z_Registration_Info_UEnum_EProjectileMoveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileMoveType.InnerSingleton, Z_Construct_UEnum_GASFramework_EProjectileMoveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileMoveType.InnerSingleton;
}
// ********** End Enum EProjectileMoveType *********************************************************

// ********** Begin Enum EBattle *******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBattle;
static UEnum* EBattle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBattle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBattle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EBattle, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EBattle"));
	}
	return Z_Registration_Info_UEnum_EBattle.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EBattle>()
{
	return EBattle_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EBattle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dot.Comment", "//\xe6\x8c\x81\xe7\xbb\xad\xe4\xbc\xa4\xe5\xae\xb3\n" },
		{ "Dot.Name", "EBattle::Dot" },
		{ "Dot.ToolTip", "\xe6\x8c\x81\xe7\xbb\xad\xe4\xbc\xa4\xe5\xae\xb3" },
		{ "LockDestination.Comment", "// \xe9\x94\x81\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87\n" },
		{ "LockDestination.Name", "EBattle::LockDestination" },
		{ "LockDestination.ToolTip", "\xe9\x94\x81\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBattle::LockDestination", (int64)EBattle::LockDestination },
		{ "EBattle::Dot", (int64)EBattle::Dot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EBattle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EBattle",
	"EBattle",
	Z_Construct_UEnum_GASFramework_EBattle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EBattle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EBattle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EBattle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EBattle()
{
	if (!Z_Registration_Info_UEnum_EBattle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBattle.InnerSingleton, Z_Construct_UEnum_GASFramework_EBattle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBattle.InnerSingleton;
}
// ********** End Enum EBattle *********************************************************************

// ********** Begin Enum EProjectileTargetType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileTargetType;
static UEnum* EProjectileTargetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileTargetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EProjectileTargetType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EProjectileTargetType"));
	}
	return Z_Registration_Info_UEnum_EProjectileTargetType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EProjectileTargetType>()
{
	return EProjectileTargetType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EProjectileTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Comment", "//\xe6\x96\xbd\xe5\x8a\xa0\xe7\xbb\x99\xe5\x8f\x8c\xe6\x96\xb9\n" },
		{ "Both.Name", "EProjectileTargetType::Both" },
		{ "Both.ToolTip", "\xe6\x96\xbd\xe5\x8a\xa0\xe7\xbb\x99\xe5\x8f\x8c\xe6\x96\xb9" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Emeny.Comment", "//\xe6\x96\xbd\xe5\x8a\xa0\xe7\xbb\x99\xe6\x95\x8c\xe4\xba\xba\n" },
		{ "Emeny.Name", "EProjectileTargetType::Emeny" },
		{ "Emeny.ToolTip", "\xe6\x96\xbd\xe5\x8a\xa0\xe7\xbb\x99\xe6\x95\x8c\xe4\xba\xba" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
		{ "Player.Comment", "//\xe6\x96\xbd\xe5\x8a\xa0\xe7\xbb\x99\xe9\x98\x9f\xe5\x8f\x8b\n" },
		{ "Player.Name", "EProjectileTargetType::Player" },
		{ "Player.ToolTip", "\xe6\x96\xbd\xe5\x8a\xa0\xe7\xbb\x99\xe9\x98\x9f\xe5\x8f\x8b" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileTargetType::Emeny", (int64)EProjectileTargetType::Emeny },
		{ "EProjectileTargetType::Player", (int64)EProjectileTargetType::Player },
		{ "EProjectileTargetType::Both", (int64)EProjectileTargetType::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EProjectileTargetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EProjectileTargetType",
	"EProjectileTargetType",
	Z_Construct_UEnum_GASFramework_EProjectileTargetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EProjectileTargetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EProjectileTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EProjectileTargetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EProjectileTargetType()
{
	if (!Z_Registration_Info_UEnum_EProjectileTargetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileTargetType.InnerSingleton, Z_Construct_UEnum_GASFramework_EProjectileTargetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileTargetType.InnerSingleton;
}
// ********** End Enum EProjectileTargetType *******************************************************

// ********** Begin Enum EProjectileGenerateType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileGenerateType;
static UEnum* EProjectileGenerateType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileGenerateType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileGenerateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EProjectileGenerateType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EProjectileGenerateType"));
	}
	return Z_Registration_Info_UEnum_EProjectileGenerateType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EProjectileGenerateType>()
{
	return EProjectileGenerateType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EProjectileGenerateType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x86\xb3\xe5\xae\x9a\xe7\x94\x9f\xe6\x88\x90\xe7\x89\xa9\xe4\xbd\x95\xe6\x97\xb6\xe5\x8e\xbb\xe7\x94\x9f\xe6\x88\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
		{ "ProjectileAnimNotifyBegin.Comment", "// \xe9\x85\x8d\xe7\xbd\xae\xe5\x9c\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe7\x9a\x84\xe9\x80\x9a\xe7\x9f\xa5\xe8\xb5\xb7\xe5\xa7\x8b\xe7\x82\xb9\n" },
		{ "ProjectileAnimNotifyBegin.Name", "EProjectileGenerateType::ProjectileAnimNotifyBegin" },
		{ "ProjectileAnimNotifyBegin.ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe5\x9c\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe7\x9a\x84\xe9\x80\x9a\xe7\x9f\xa5\xe8\xb5\xb7\xe5\xa7\x8b\xe7\x82\xb9" },
		{ "ProjectileAnimNotifyCustom.Comment", "// \xe9\x85\x8d\xe7\xbd\xae\xe5\x9c\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe7\x9a\x84\xe5\x9b\xba\xe5\xae\x9a\xe9\x80\x9a\xe7\x9f\xa5\xe7\x82\xb9\n" },
		{ "ProjectileAnimNotifyCustom.Name", "EProjectileGenerateType::ProjectileAnimNotifyCustom" },
		{ "ProjectileAnimNotifyCustom.ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe5\x9c\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe7\x9a\x84\xe5\x9b\xba\xe5\xae\x9a\xe9\x80\x9a\xe7\x9f\xa5\xe7\x82\xb9" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\xb3\xe5\xae\x9a\xe7\x94\x9f\xe6\x88\x90\xe7\x89\xa9\xe4\xbd\x95\xe6\x97\xb6\xe5\x8e\xbb\xe7\x94\x9f\xe6\x88\x90" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileGenerateType::ProjectileAnimNotifyBegin", (int64)EProjectileGenerateType::ProjectileAnimNotifyBegin },
		{ "EProjectileGenerateType::ProjectileAnimNotifyCustom", (int64)EProjectileGenerateType::ProjectileAnimNotifyCustom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EProjectileGenerateType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EProjectileGenerateType",
	"EProjectileGenerateType",
	Z_Construct_UEnum_GASFramework_EProjectileGenerateType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EProjectileGenerateType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EProjectileGenerateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EProjectileGenerateType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EProjectileGenerateType()
{
	if (!Z_Registration_Info_UEnum_EProjectileGenerateType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileGenerateType.InnerSingleton, Z_Construct_UEnum_GASFramework_EProjectileGenerateType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileGenerateType.InnerSingleton;
}
// ********** End Enum EProjectileGenerateType *****************************************************

// ********** Begin Enum EProjectileSpawnType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileSpawnType;
static UEnum* EProjectileSpawnType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileSpawnType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileSpawnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EProjectileSpawnType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EProjectileSpawnType"));
	}
	return Z_Registration_Info_UEnum_EProjectileSpawnType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EProjectileSpawnType>()
{
	return EProjectileSpawnType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EProjectileSpawnType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x94\x9f\xe6\x88\x90\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "EvenlyAlongVector.Comment", "//\xe6\xb2\xbf\xe7\x9d\x80\xe4\xb8\x80\xe6\x9d\xa1\xe7\x9f\xa2\xe9\x87\x8f\xe7\x94\x9f\xe6\x88\x90\n" },
		{ "EvenlyAlongVector.Name", "EProjectileSpawnType::EvenlyAlongVector" },
		{ "EvenlyAlongVector.ToolTip", "\xe6\xb2\xbf\xe7\x9d\x80\xe4\xb8\x80\xe6\x9d\xa1\xe7\x9f\xa2\xe9\x87\x8f\xe7\x94\x9f\xe6\x88\x90" },
		{ "EvenlyInCircle.Comment", "//\xe6\xb2\xbf\xe7\x9d\x80\xe5\x9c\x86\xe5\xbd\xa2\xe7\x94\x9f\xe6\x88\x90\n" },
		{ "EvenlyInCircle.Name", "EProjectileSpawnType::EvenlyInCircle" },
		{ "EvenlyInCircle.ToolTip", "\xe6\xb2\xbf\xe7\x9d\x80\xe5\x9c\x86\xe5\xbd\xa2\xe7\x94\x9f\xe6\x88\x90" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
		{ "None.Name", "EProjectileSpawnType::None" },
		{ "RandomBoundingBox.Comment", "//\xe4\xbb\x8e\xe7\x9b\x92\xe4\xbd\x93\xe5\x86\x85\xe9\x9a\x8f\xe6\x9c\xba\xe7\x94\x9f\xe6\x88\x90\n" },
		{ "RandomBoundingBox.Name", "EProjectileSpawnType::RandomBoundingBox" },
		{ "RandomBoundingBox.ToolTip", "\xe4\xbb\x8e\xe7\x9b\x92\xe4\xbd\x93\xe5\x86\x85\xe9\x9a\x8f\xe6\x9c\xba\xe7\x94\x9f\xe6\x88\x90" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x94\x9f\xe6\x88\x90\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileSpawnType::None", (int64)EProjectileSpawnType::None },
		{ "EProjectileSpawnType::RandomBoundingBox", (int64)EProjectileSpawnType::RandomBoundingBox },
		{ "EProjectileSpawnType::EvenlyAlongVector", (int64)EProjectileSpawnType::EvenlyAlongVector },
		{ "EProjectileSpawnType::EvenlyInCircle", (int64)EProjectileSpawnType::EvenlyInCircle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EProjectileSpawnType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EProjectileSpawnType",
	"EProjectileSpawnType",
	Z_Construct_UEnum_GASFramework_EProjectileSpawnType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EProjectileSpawnType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EProjectileSpawnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EProjectileSpawnType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EProjectileSpawnType()
{
	if (!Z_Registration_Info_UEnum_EProjectileSpawnType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileSpawnType.InnerSingleton, Z_Construct_UEnum_GASFramework_EProjectileSpawnType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileSpawnType.InnerSingleton;
}
// ********** End Enum EProjectileSpawnType ********************************************************

// ********** Begin Enum EEarlyWarningType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEarlyWarningType;
static UEnum* EEarlyWarningType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEarlyWarningType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEarlyWarningType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EEarlyWarningType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EEarlyWarningType"));
	}
	return Z_Registration_Info_UEnum_EEarlyWarningType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EEarlyWarningType>()
{
	return EEarlyWarningType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EEarlyWarningType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Circle.Name", "EEarlyWarningType::Circle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xa2\x84\xe8\xad\xa6\xe7\x9a\x84\xe6\x9e\x9a\xe4\xb8\xbe \xe6\x84\x9f\xe8\xa7\x89\xe4\xb8\x8d\xe4\xbc\x9a\xe5\x8a\xa0\xe4\xba\x86\xe6\x89\x80\xe4\xbb\xa5\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x9e\x9a\xe4\xb8\xbe\xe5\xae\x9a\xe6\xad\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
		{ "Straight.Name", "EEarlyWarningType::Straight" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa2\x84\xe8\xad\xa6\xe7\x9a\x84\xe6\x9e\x9a\xe4\xb8\xbe \xe6\x84\x9f\xe8\xa7\x89\xe4\xb8\x8d\xe4\xbc\x9a\xe5\x8a\xa0\xe4\xba\x86\xe6\x89\x80\xe4\xbb\xa5\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x9e\x9a\xe4\xb8\xbe\xe5\xae\x9a\xe6\xad\xbb" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEarlyWarningType::Straight", (int64)EEarlyWarningType::Straight },
		{ "EEarlyWarningType::Circle", (int64)EEarlyWarningType::Circle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EEarlyWarningType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EEarlyWarningType",
	"EEarlyWarningType",
	Z_Construct_UEnum_GASFramework_EEarlyWarningType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EEarlyWarningType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EEarlyWarningType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EEarlyWarningType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EEarlyWarningType()
{
	if (!Z_Registration_Info_UEnum_EEarlyWarningType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEarlyWarningType.InnerSingleton, Z_Construct_UEnum_GASFramework_EEarlyWarningType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEarlyWarningType.InnerSingleton;
}
// ********** End Enum EEarlyWarningType ***********************************************************

// ********** Begin Enum ESimulationType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimulationType;
static UEnum* ESimulationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimulationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimulationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_ESimulationType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ESimulationType"));
	}
	return Z_Registration_Info_UEnum_ESimulationType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<ESimulationType>()
{
	return ESimulationType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_ESimulationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bezier.Name", "ESimulationType::Bezier" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
		{ "None.Name", "ESimulationType::None" },
		{ "PhysicalSimulation.Name", "ESimulationType::PhysicalSimulation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimulationType::None", (int64)ESimulationType::None },
		{ "ESimulationType::Bezier", (int64)ESimulationType::Bezier },
		{ "ESimulationType::PhysicalSimulation", (int64)ESimulationType::PhysicalSimulation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_ESimulationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"ESimulationType",
	"ESimulationType",
	Z_Construct_UEnum_GASFramework_ESimulationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_ESimulationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_ESimulationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_ESimulationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_ESimulationType()
{
	if (!Z_Registration_Info_UEnum_ESimulationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimulationType.InnerSingleton, Z_Construct_UEnum_GASFramework_ESimulationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimulationType.InnerSingleton;
}
// ********** End Enum ESimulationType *************************************************************

// ********** Begin Enum ETargetClassType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetClassType;
static UEnum* ETargetClassType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETargetClassType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETargetClassType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_ETargetClassType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ETargetClassType"));
	}
	return Z_Registration_Info_UEnum_ETargetClassType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<ETargetClassType>()
{
	return ETargetClassType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_ETargetClassType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllEnemy.Comment", "//\xe6\x89\x80\xe6\x9c\x89\xe6\x95\x8c\xe4\xba\xba\n" },
		{ "AllEnemy.Name", "ETargetClassType::AllEnemy" },
		{ "AllEnemy.ToolTip", "\xe6\x89\x80\xe6\x9c\x89\xe6\x95\x8c\xe4\xba\xba" },
		{ "AllFriendly.Comment", "//\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\x8b\xe6\x96\xb9\xe5\x8c\x85\xe6\x8b\xac\xe8\x87\xaa\xe5\xb7\xb1\n" },
		{ "AllFriendly.Name", "ETargetClassType::AllFriendly" },
		{ "AllFriendly.ToolTip", "\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\x8b\xe6\x96\xb9\xe5\x8c\x85\xe6\x8b\xac\xe8\x87\xaa\xe5\xb7\xb1" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe4\xbd\x9c\xe7\x94\xa8\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "LockEnemy.Comment", "//\xe9\x94\x81\xe5\xae\x9a\xe6\x95\x8c\xe4\xba\xba\n" },
		{ "LockEnemy.Name", "ETargetClassType::LockEnemy" },
		{ "LockEnemy.ToolTip", "\xe9\x94\x81\xe5\xae\x9a\xe6\x95\x8c\xe4\xba\xba" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
		{ "None.Comment", "//\xe7\xa9\xba\n" },
		{ "None.Name", "ETargetClassType::None" },
		{ "None.ToolTip", "\xe7\xa9\xba" },
		{ "OtherThanFriends.Comment", "//\xe9\x99\xa4\xe4\xba\x86\xe5\x8f\x8b\xe6\x96\xb9\xe7\x9a\x84\xe5\x85\xb6\xe4\xbb\x96\xe5\x8d\x95\xe4\xbd\x8d\n" },
		{ "OtherThanFriends.Name", "ETargetClassType::OtherThanFriends" },
		{ "OtherThanFriends.ToolTip", "\xe9\x99\xa4\xe4\xba\x86\xe5\x8f\x8b\xe6\x96\xb9\xe7\x9a\x84\xe5\x85\xb6\xe4\xbb\x96\xe5\x8d\x95\xe4\xbd\x8d" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe4\xbd\x9c\xe7\x94\xa8\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETargetClassType::None", (int64)ETargetClassType::None },
		{ "ETargetClassType::AllEnemy", (int64)ETargetClassType::AllEnemy },
		{ "ETargetClassType::LockEnemy", (int64)ETargetClassType::LockEnemy },
		{ "ETargetClassType::AllFriendly", (int64)ETargetClassType::AllFriendly },
		{ "ETargetClassType::OtherThanFriends", (int64)ETargetClassType::OtherThanFriends },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_ETargetClassType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"ETargetClassType",
	"ETargetClassType",
	Z_Construct_UEnum_GASFramework_ETargetClassType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_ETargetClassType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_ETargetClassType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_ETargetClassType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_ETargetClassType()
{
	if (!Z_Registration_Info_UEnum_ETargetClassType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetClassType.InnerSingleton, Z_Construct_UEnum_GASFramework_ETargetClassType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETargetClassType.InnerSingleton;
}
// ********** End Enum ETargetClassType ************************************************************

// ********** Begin ScriptStruct FGenerateSummonInfo ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGenerateSummonInfo;
class UScriptStruct* FGenerateSummonInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGenerateSummonInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGenerateSummonInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateSummonInfo, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("GenerateSummonInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FGenerateSummonInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummonID_MetaData[] = {
		{ "Category", "GenerateSummonInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9id\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyGEs_MetaData[] = {
		{ "Category", "GenerateSummonInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x99\xe4\xba\x88\xe7\x9a\x84GE\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x99\xe4\xba\x88\xe7\x9a\x84GE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
		{ "Category", "GenerateSummonInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xad\x98\xe6\xb4\xbb\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xad\x98\xe6\xb4\xbb\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateNumber_MetaData[] = {
		{ "Category", "GenerateSummonInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SummonID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ApplyGEs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplyGEs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerateNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateSummonInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewProp_SummonID = { "SummonID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateSummonInfo, SummonID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummonID_MetaData), NewProp_SummonID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewProp_ApplyGEs_Inner = { "ApplyGEs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewProp_ApplyGEs = { "ApplyGEs", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateSummonInfo, ApplyGEs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyGEs_MetaData), NewProp_ApplyGEs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateSummonInfo, Lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifetime_MetaData), NewProp_Lifetime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewProp_GenerateNumber = { "GenerateNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateSummonInfo, GenerateNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateNumber_MetaData), NewProp_GenerateNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewProp_SummonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewProp_ApplyGEs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewProp_ApplyGEs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewProp_GenerateNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"GenerateSummonInfo",
	Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::PropPointers),
	sizeof(FGenerateSummonInfo),
	alignof(FGenerateSummonInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenerateSummonInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FGenerateSummonInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGenerateSummonInfo.InnerSingleton, Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGenerateSummonInfo.InnerSingleton;
}
// ********** End ScriptStruct FGenerateSummonInfo *************************************************

// ********** Begin ScriptStruct FRootMotionConstantForce ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRootMotionConstantForce;
class UScriptStruct* FRootMotionConstantForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRootMotionConstantForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRootMotionConstantForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionConstantForce, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("RootMotionConstantForce"));
	}
	return Z_Registration_Info_UScriptStruct_FRootMotionConstantForce.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9f\xba\xe7\xa1\x80\xe5\x8a\x9b\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe5\x8a\x9b\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceName_MetaData[] = {
		{ "Category", "RootMotionConstantForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldDirection_MetaData[] = {
		{ "Category", "RootMotionConstantForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\x9b\xe7\x9a\x84\xe6\x96\xb9\xe5\x90\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\x9b\xe7\x9a\x84\xe6\x96\xb9\xe5\x90\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "RootMotionConstantForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\x9b\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\x9b\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "RootMotionConstantForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\x9b\xe7\x9a\x84\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\x9b\xe7\x9a\x84\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAdditive_MetaData[] = {
		{ "Category", "RootMotionConstantForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe8\xbf\x98\xe6\x98\xaf\xe8\xa6\x86\xe7\x9b\x96\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe8\xbf\x98\xe6\x98\xaf\xe8\xa6\x86\xe7\x9b\x96" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[] = {
		{ "Category", "RootMotionConstantForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\x9b\xe5\x92\x8c\xe8\xb7\x9d\xe7\xa6\xbb\xe7\x9a\x84\xe5\x85\xb3\xe7\xb3\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\x9b\xe5\x92\x8c\xe8\xb7\x9d\xe7\xa6\xbb\xe7\x9a\x84\xe5\x85\xb3\xe7\xb3\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishVelocityMode_MetaData[] = {
		{ "Category", "RootMotionConstantForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe7\x9a\x84\xe9\x80\x9f\xe5\xba\xa6\xe8\xae\xbe\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe7\x9a\x84\xe9\x80\x9f\xe5\xba\xa6\xe8\xae\xbe\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishSetVelocity_MetaData[] = {
		{ "Category", "RootMotionConstantForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xa2\xab\xe9\x80\x89\xe5\xae\x9a\xe4\xb8\xba \xe2\x80\x9c\xe8\xae\xbe\xe7\xbd\xae\xe9\x80\x9f\xe5\xba\xa6\xe2\x80\x9c\xe5\x90\x8e\xef\xbc\x8c\xe5\xbd\x93\xe6\xa0\xb9\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe8\xa7\x92\xe8\x89\xb2\xe9\x80\x9f\xe5\xba\xa6\xe8\xa2\xab\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xba\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc */" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xa2\xab\xe9\x80\x89\xe5\xae\x9a\xe4\xb8\xba \xe2\x80\x9c\xe8\xae\xbe\xe7\xbd\xae\xe9\x80\x9f\xe5\xba\xa6\xe2\x80\x9c\xe5\x90\x8e\xef\xbc\x8c\xe5\xbd\x93\xe6\xa0\xb9\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe8\xa7\x92\xe8\x89\xb2\xe9\x80\x9f\xe5\xba\xa6\xe8\xa2\xab\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xba\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishClampVelocity_MetaData[] = {
		{ "Category", "RootMotionConstantForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xa2\xab\xe9\x80\x89\xe5\xae\x9a\xe4\xb8\xba \xe2\x80\x9c\xe9\x99\x90\xe5\x88\xb6\xe9\x80\x9f\xe5\xba\xa6\xe2\x80\x9d\xe5\x90\x8e\xef\xbc\x8c\xe5\xbd\x93\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe8\xa7\x92\xe8\x89\xb2\xe9\x80\x9f\xe5\xba\xa6\xe4\xbc\x9a\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xe5\x9c\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc */" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xa2\xab\xe9\x80\x89\xe5\xae\x9a\xe4\xb8\xba \xe2\x80\x9c\xe9\x99\x90\xe5\x88\xb6\xe9\x80\x9f\xe5\xba\xa6\xe2\x80\x9d\xe5\x90\x8e\xef\xbc\x8c\xe5\xbd\x93\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe8\xa7\x92\xe8\x89\xb2\xe9\x80\x9f\xe5\xba\xa6\xe4\xbc\x9a\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xe5\x9c\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_IsAdditive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAdditive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinishVelocityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinishVelocityMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinishSetVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinishClampVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionConstantForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionConstantForce, TaskInstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskInstanceName_MetaData), NewProp_TaskInstanceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionConstantForce, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldDirection_MetaData), NewProp_WorldDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionConstantForce, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionConstantForce, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_IsAdditive_SetBit(void* Obj)
{
	((FRootMotionConstantForce*)Obj)->IsAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_IsAdditive = { "IsAdditive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRootMotionConstantForce), &Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_IsAdditive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAdditive_MetaData), NewProp_IsAdditive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionConstantForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthOverTime_MetaData), NewProp_StrengthOverTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_FinishVelocityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_FinishVelocityMode = { "FinishVelocityMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionConstantForce, FinishVelocityMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishVelocityMode_MetaData), NewProp_FinishVelocityMode_MetaData) }; // 754916493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_FinishSetVelocity = { "FinishSetVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionConstantForce, FinishSetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishSetVelocity_MetaData), NewProp_FinishSetVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_FinishClampVelocity = { "FinishClampVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionConstantForce, FinishClampVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishClampVelocity_MetaData), NewProp_FinishClampVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_WorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_IsAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_StrengthOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_FinishVelocityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_FinishVelocityMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_FinishSetVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewProp_FinishClampVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"RootMotionConstantForce",
	Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::PropPointers),
	sizeof(FRootMotionConstantForce),
	alignof(FRootMotionConstantForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionConstantForce()
{
	if (!Z_Registration_Info_UScriptStruct_FRootMotionConstantForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRootMotionConstantForce.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRootMotionConstantForce.InnerSingleton;
}
// ********** End ScriptStruct FRootMotionConstantForce ********************************************

// ********** Begin ScriptStruct FRootMotionRadialForce ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRootMotionRadialForce;
class UScriptStruct* FRootMotionRadialForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRootMotionRadialForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRootMotionRadialForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionRadialForce, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("RootMotionRadialForce"));
	}
	return Z_Registration_Info_UScriptStruct_FRootMotionRadialForce.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbe\x84\xe5\x90\x91\xe5\x8a\x9b\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbe\x84\xe5\x90\x91\xe5\x8a\x9b\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceName_MetaData[] = {
		{ "Category", "RootMotionRadialForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldDirection_MetaData[] = {
		{ "Category", "RootMotionRadialForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\x9b\xe7\x9a\x84\xe6\x96\xb9\xe5\x90\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\x9b\xe7\x9a\x84\xe6\x96\xb9\xe5\x90\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "RootMotionRadialForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\x9b\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\x9b\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "RootMotionRadialForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\x9b\xe7\x9a\x84\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\x9b\xe7\x9a\x84\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAdditive_MetaData[] = {
		{ "Category", "RootMotionRadialForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe8\xbf\x98\xe6\x98\xaf\xe8\xa6\x86\xe7\x9b\x96\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe8\xbf\x98\xe6\x98\xaf\xe8\xa6\x86\xe7\x9b\x96" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[] = {
		{ "Category", "RootMotionRadialForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\x9b\xe5\x92\x8c\xe8\xb7\x9d\xe7\xa6\xbb\xe7\x9a\x84\xe5\x85\xb3\xe7\xb3\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\x9b\xe5\x92\x8c\xe8\xb7\x9d\xe7\xa6\xbb\xe7\x9a\x84\xe5\x85\xb3\xe7\xb3\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishVelocityMode_MetaData[] = {
		{ "Category", "RootMotionRadialForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe7\x9a\x84\xe9\x80\x9f\xe5\xba\xa6\xe8\xae\xbe\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe7\x9a\x84\xe9\x80\x9f\xe5\xba\xa6\xe8\xae\xbe\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishSetVelocity_MetaData[] = {
		{ "Category", "RootMotionRadialForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xa2\xab\xe9\x80\x89\xe5\xae\x9a\xe4\xb8\xba \xe2\x80\x9c\xe8\xae\xbe\xe7\xbd\xae\xe9\x80\x9f\xe5\xba\xa6\xe2\x80\x9c\xe5\x90\x8e\xef\xbc\x8c\xe5\xbd\x93\xe6\xa0\xb9\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe8\xa7\x92\xe8\x89\xb2\xe9\x80\x9f\xe5\xba\xa6\xe8\xa2\xab\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xba\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc */" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xa2\xab\xe9\x80\x89\xe5\xae\x9a\xe4\xb8\xba \xe2\x80\x9c\xe8\xae\xbe\xe7\xbd\xae\xe9\x80\x9f\xe5\xba\xa6\xe2\x80\x9c\xe5\x90\x8e\xef\xbc\x8c\xe5\xbd\x93\xe6\xa0\xb9\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe8\xa7\x92\xe8\x89\xb2\xe9\x80\x9f\xe5\xba\xa6\xe8\xa2\xab\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xba\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishClampVelocity_MetaData[] = {
		{ "Category", "RootMotionRadialForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xa2\xab\xe9\x80\x89\xe5\xae\x9a\xe4\xb8\xba \xe2\x80\x9c\xe9\x99\x90\xe5\x88\xb6\xe9\x80\x9f\xe5\xba\xa6\xe2\x80\x9d\xe5\x90\x8e\xef\xbc\x8c\xe5\xbd\x93\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe8\xa7\x92\xe8\x89\xb2\xe9\x80\x9f\xe5\xba\xa6\xe4\xbc\x9a\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xe5\x9c\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc */" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xa2\xab\xe9\x80\x89\xe5\xae\x9a\xe4\xb8\xba \xe2\x80\x9c\xe9\x99\x90\xe5\x88\xb6\xe9\x80\x9f\xe5\xba\xa6\xe2\x80\x9d\xe5\x90\x8e\xef\xbc\x8c\xe5\xbd\x93\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe8\xa7\x92\xe8\x89\xb2\xe9\x80\x9f\xe5\xba\xa6\xe4\xbc\x9a\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xe5\x9c\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_IsAdditive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAdditive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinishVelocityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinishVelocityMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinishSetVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinishClampVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionRadialForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionRadialForce, TaskInstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskInstanceName_MetaData), NewProp_TaskInstanceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionRadialForce, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldDirection_MetaData), NewProp_WorldDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionRadialForce, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionRadialForce, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_IsAdditive_SetBit(void* Obj)
{
	((FRootMotionRadialForce*)Obj)->IsAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_IsAdditive = { "IsAdditive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRootMotionRadialForce), &Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_IsAdditive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAdditive_MetaData), NewProp_IsAdditive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionRadialForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthOverTime_MetaData), NewProp_StrengthOverTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_FinishVelocityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_FinishVelocityMode = { "FinishVelocityMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionRadialForce, FinishVelocityMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishVelocityMode_MetaData), NewProp_FinishVelocityMode_MetaData) }; // 754916493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_FinishSetVelocity = { "FinishSetVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionRadialForce, FinishSetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishSetVelocity_MetaData), NewProp_FinishSetVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_FinishClampVelocity = { "FinishClampVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionRadialForce, FinishClampVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishClampVelocity_MetaData), NewProp_FinishClampVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_WorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_IsAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_StrengthOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_FinishVelocityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_FinishVelocityMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_FinishSetVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewProp_FinishClampVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"RootMotionRadialForce",
	Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::PropPointers),
	sizeof(FRootMotionRadialForce),
	alignof(FRootMotionRadialForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionRadialForce()
{
	if (!Z_Registration_Info_UScriptStruct_FRootMotionRadialForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRootMotionRadialForce.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRootMotionRadialForce.InnerSingleton;
}
// ********** End ScriptStruct FRootMotionRadialForce **********************************************

// ********** Begin ScriptStruct FSpawnTypeSet *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpawnTypeSet;
class UScriptStruct* FSpawnTypeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSpawnTypeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSpawnTypeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnTypeSet, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("SpawnTypeSet"));
	}
	return Z_Registration_Info_UScriptStruct_FSpawnTypeSet.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSpawnTypeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnType_MetaData[] = {
		{ "Category", "Projectile Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// //\xe5\x88\xb7\xe5\x87\xba\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\xb7\xe5\x87\xba\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Projectile Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * \xe7\xbb\x98\xe5\x88\xb6\xe5\x9b\xbe\xe5\xbd\xa2\xe7\x9a\x84\xe6\x95\xb4\xe4\xbd\x93\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xe7\xbb\x98\xe5\x88\xb6\xe5\x9b\xbe\xe5\xbd\xa2\xe7\x9a\x84\xe6\x95\xb4\xe4\xbd\x93\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Projectile Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xbb\x98\xe5\x88\xb6\xe5\x9b\xbe\xe5\xbd\xa2\xe7\x9a\x84\xe6\x95\xb4\xe4\xbd\x93\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x98\xe5\x88\xb6\xe5\x9b\xbe\xe5\xbd\xa2\xe7\x9a\x84\xe6\x95\xb4\xe4\xbd\x93\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationVariance_MetaData[] = {
		{ "Category", "Projectile Setup" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * \xe5\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xba""box\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x97\xb6 \xe4\xbb\xa3\xe8\xa1\xa8\xe7\x9b\x92\xe5\xad\x90\xe7\x9a\x84\xe9\x95\xbf\xe5\xae\xbd\xe9\xab\x98 \xe9\x9a\x8f\xe6\x9c\xba\xe7\x94\x9f\xe6\x88\x90\xe5\x9c\xa8\xe6\x9e\x84\xe6\x88\x90\xe7\x9a\x84\xe7\x9b\x92\xe5\xad\x90\xe8\x8c\x83\xe5\x9b\xb4\n\x09 * \xe5\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xba\xe7\x9b\xb4\xe7\xba\xbf\xe6\x97\xb6\xef\xbc\x8c\xe4\xbb\xa5x y z \xe9\x99\xa4\xe4\xbb\xa5 2 \xe5\xbd\xa2\xe6\x88\x90\xe7\x9a\x84""2\xe4\xb8\xaa\xe7\x82\xb9\xe5\x81\x9a\xe7\x9b\xb4\xe7\xba\xbf\n\x09 */" },
#endif
		{ "EditCondition", "SpawnType != EProjectileSpawnType::EvenlyInCircle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xe5\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xba""box\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x97\xb6 \xe4\xbb\xa3\xe8\xa1\xa8\xe7\x9b\x92\xe5\xad\x90\xe7\x9a\x84\xe9\x95\xbf\xe5\xae\xbd\xe9\xab\x98 \xe9\x9a\x8f\xe6\x9c\xba\xe7\x94\x9f\xe6\x88\x90\xe5\x9c\xa8\xe6\x9e\x84\xe6\x88\x90\xe7\x9a\x84\xe7\x9b\x92\xe5\xad\x90\xe8\x8c\x83\xe5\x9b\xb4\n* \xe5\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xba\xe7\x9b\xb4\xe7\xba\xbf\xe6\x97\xb6\xef\xbc\x8c\xe4\xbb\xa5x y z \xe9\x99\xa4\xe4\xbb\xa5 2 \xe5\xbd\xa2\xe6\x88\x90\xe7\x9a\x84""2\xe4\xb8\xaa\xe7\x82\xb9\xe5\x81\x9a\xe7\x9b\xb4\xe7\xba\xbf" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Projectile Setup" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * \xe4\xbb\x85\xe5\xbd\x93\xe6\xb2\xbf\xe7\x9d\x80\xe5\x9c\x86\xe5\xbd\xa2\xe7\x94\x9f\xe6\x88\x90\xe7\xb1\xbb\xe5\x9e\x8b \xe6\x97\xb6\xe6\x9c\x89\xe6\x95\x88;\n\x09 * \xe5\x9c\x86\xe7\x9a\x84\xe5\x8d\x8a\xe5\xbe\x84.\n\x09*/" },
#endif
		{ "EditCondition", "SpawnType == EProjectileSpawnType::EvenlyInCircle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xe4\xbb\x85\xe5\xbd\x93\xe6\xb2\xbf\xe7\x9d\x80\xe5\x9c\x86\xe5\xbd\xa2\xe7\x94\x9f\xe6\x88\x90\xe7\xb1\xbb\xe5\x9e\x8b \xe6\x97\xb6\xe6\x9c\x89\xe6\x95\x88;\n* \xe5\x9c\x86\xe7\x9a\x84\xe5\x8d\x8a\xe5\xbe\x84." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCircleAngle_MetaData[] = {
		{ "Category", "Projectile Setup" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * \xe4\xbb\x85\xe5\xbd\x93\xe6\xb2\xbf\xe7\x9d\x80\xe5\x9c\x86\xe5\xbd\xa2\xe7\x94\x9f\xe6\x88\x90\xe7\xb1\xbb\xe5\x9e\x8b \xe6\x97\xb6\xe6\x9c\x89\xe6\x95\x88;\n\x09 * \xe6\x9c\x80\xe5\xa4\xa7\xe5\x9c\x86\xe7\x9a\x84\xe8\xa7\x92\xe5\xba\xa6.\n\x09*/" },
#endif
		{ "EditCondition", "SpawnType == EProjectileSpawnType::EvenlyInCircle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xe4\xbb\x85\xe5\xbd\x93\xe6\xb2\xbf\xe7\x9d\x80\xe5\x9c\x86\xe5\xbd\xa2\xe7\x94\x9f\xe6\x88\x90\xe7\xb1\xbb\xe5\x9e\x8b \xe6\x97\xb6\xe6\x9c\x89\xe6\x95\x88;\n* \xe6\x9c\x80\xe5\xa4\xa7\xe5\x9c\x86\xe7\x9a\x84\xe8\xa7\x92\xe5\xba\xa6." },
#endif
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocationVariance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCircleAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnTypeSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_SpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_SpawnType = { "SpawnType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSet, SpawnType), Z_Construct_UEnum_GASFramework_EProjectileSpawnType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnType_MetaData), NewProp_SpawnType_MetaData) }; // 226892828
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSet, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSet, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_SpawnLocationVariance = { "SpawnLocationVariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSet, SpawnLocationVariance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocationVariance_MetaData), NewProp_SpawnLocationVariance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSet, CircleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRadius_MetaData), NewProp_CircleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_MaxCircleAngle = { "MaxCircleAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSet, MaxCircleAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCircleAngle_MetaData), NewProp_MaxCircleAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_SpawnType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_SpawnType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_SpawnLocationVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_CircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewProp_MaxCircleAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"SpawnTypeSet",
	Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::PropPointers),
	sizeof(FSpawnTypeSet),
	alignof(FSpawnTypeSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnTypeSet()
{
	if (!Z_Registration_Info_UScriptStruct_FSpawnTypeSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpawnTypeSet.InnerSingleton, Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSpawnTypeSet.InnerSingleton;
}
// ********** End ScriptStruct FSpawnTypeSet *******************************************************

// ********** Begin ScriptStruct FProjectileSpawnSetting *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileSpawnSetting;
class UScriptStruct* FProjectileSpawnSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileSpawnSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileSpawnSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileSpawnSetting, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ProjectileSpawnSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileSpawnSetting.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveType_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\xbb\xe5\x8a\xa8\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePointDirectionToRotation_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x94\x9f\xe6\x88\x90\xe6\x96\xb9\xe5\x90\x91\xe4\xbd\x9c\xe4\xb8\xba\xe6\x97\x8b\xe8\xbd\xac\xe6\x96\xb9\xe5\x90\x91\xe5\x92\x8c\xe5\x8f\x91\xe5\xb0\x84\xe6\x96\xb9\xe5\x90\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x94\x9f\xe6\x88\x90\xe6\x96\xb9\xe5\x90\x91\xe4\xbd\x9c\xe4\xb8\xba\xe6\x97\x8b\xe8\xbd\xac\xe6\x96\xb9\xe5\x90\x91\xe5\x92\x8c\xe5\x8f\x91\xe5\xb0\x84\xe6\x96\xb9\xe5\x90\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionOffset_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\xb0\x84\xe6\x96\xb9\xe5\x90\x91\xe5\x8f\x8a\xe8\x87\xaa\xe8\xba\xab\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\xb0\x84\xe6\x96\xb9\xe5\x90\x91\xe5\x8f\x8a\xe8\x87\xaa\xe8\xba\xab\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountToSpawnAtOnce_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\x80\xe6\xac\xa1\xe6\x80\xa7\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x80\xe6\xac\xa1\xe6\x80\xa7\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\n" },
#endif
		{ "EditCondition", "MoveType != EProjectileMoveType::LaunchIdleAndBack" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileVolume_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x89\xa9\xe6\x89\xa9\xe5\xa4\xa7\xe5\x80\x8d\xe7\x8e\x87 \xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe4\xb8\xba""0;\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x89\xa9\xe6\x89\xa9\xe5\xa4\xa7\xe5\x80\x8d\xe7\x8e\x87 \xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe4\xb8\xba""0;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttachOwner_MetaData[] = {
		{ "Category", "Attach setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe9\x99\x84\xe5\x8a\xa0\xe5\x88\xb0\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x99\x84\xe5\x8a\xa0\xe5\x88\xb0\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentSocket_MetaData[] = {
		{ "Category", "Attach setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb7\x9f\xe9\x9a\x8f\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x8f\x92\xe6\xa7\xbd\xe7\x82\xb9\n" },
#endif
		{ "EditCondition", "bAttachOwner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb7\x9f\xe9\x9a\x8f\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x8f\x92\xe6\xa7\xbd\xe7\x82\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentRule_MetaData[] = {
		{ "Category", "Attach setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x99\x84\xe5\x8a\xa0\xe5\x88\xb0\xe6\x8f\x92\xe6\xa7\xbd\xe7\x9a\x84\xe8\xa7\x84\xe5\x88\x99\n" },
#endif
		{ "EditCondition", "bAttachOwner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x99\x84\xe5\x8a\xa0\xe5\x88\xb0\xe6\x8f\x92\xe6\xa7\xbd\xe7\x9a\x84\xe8\xa7\x84\xe5\x88\x99" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayLaunchTime_MetaData[] = {
		{ "Category", "Attach setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbb\xb6\xe8\xbf\x9f\xe5\x8f\x91\xe5\xb0\x84\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "EditCondition", "MoveType != EProjectileMoveType::Idle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xb6\xe8\xbf\x9f\xe5\x8f\x91\xe5\xb0\x84\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSeparation_MetaData[] = {
		{ "Category", "Attach setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x91\xe5\xb0\x84\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe8\x84\xb1\xe7\xa6\xbb\xe7\x88\xb6\xe8\x8a\x82\xe7\x82\xb9\n" },
#endif
		{ "EditCondition", "bAttachOwner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe5\xb0\x84\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe8\x84\xb1\xe7\xa6\xbb\xe7\x88\xb6\xe8\x8a\x82\xe7\x82\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe7\x9b\x92\xe5\xad\x90\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe7\x9b\x92\xe5\xad\x90\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionShapeInfo_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe7\x9b\x92\xe5\xa4\xa7\xe5\xb0\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe7\x9b\x92\xe5\xa4\xa7\xe5\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe7\xa2\xb0\xe6\x92\x9e\xe9\x80\x9a\xe9\x81\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe7\xa2\xb0\xe6\x92\x9e\xe9\x80\x9a\xe9\x81\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionOffset_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotatorToParent_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe6\xa1\x86\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe6\x98\xaf\xe5\x90\xa6\xe5\x9f\xba\xe4\xba\x8e\xe7\xa2\xb0\xe6\x92\x9e\xe6\xa1\x86\xe7\x88\xb6\xe8\x8a\x82\xe7\x82\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe6\xa1\x86\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe6\x98\xaf\xe5\x90\xa6\xe5\x9f\xba\xe4\xba\x8e\xe7\xa2\xb0\xe6\x92\x9e\xe6\xa1\x86\xe7\x88\xb6\xe8\x8a\x82\xe7\x82\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRotatorOffset_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnOtherProjectile_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe7\x94\x9f\xe6\x88\x90\xe5\x85\xb6\xe4\xbb\x96\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe7\x94\x9f\xe6\x88\x90\xe5\x85\xb6\xe4\xbb\x96\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckApplyEffect_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe5\x88\xa4\xe6\x96\xad\xe6\x98\xaf\xe5\x90\xa6\xe5\xba\x94\xe7\x94\xa8\xe6\x95\x88\xe6\x9e\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe5\x88\xa4\xe6\x96\xad\xe6\x98\xaf\xe5\x90\xa6\xe5\xba\x94\xe7\x94\xa8\xe6\x95\x88\xe6\x9e\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParabolicSpawnProjectileID_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe9\xa2\x9d\xe5\xa4\x96\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9ID\n" },
#endif
		{ "EditCondition", "bSpawnOtherProjectile" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe9\xa2\x9d\xe5\xa4\x96\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurroundAngularSpeed_MetaData[] = {
		{ "Category", "Projectile Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\x92\xe9\x80\x9f\xe5\xba\xa6\xe5\xa4\xa7\xe5\xb0\x8f\n" },
#endif
		{ "EditCondition", "MoveType == EProjectileMoveType::RotationBySelf" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe9\x80\x9f\xe5\xba\xa6\xe5\xa4\xa7\xe5\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurroundRadiusSize_MetaData[] = {
		{ "Category", "Projectile Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9b\xb4\xe7\xbb\x95\xe7\x9a\x84\xe5\x8d\x8a\xe5\xbe\x84\xe5\xa4\xa7\xe5\xb0\x8f\n" },
#endif
		{ "EditCondition", "MoveType == EProjectileMoveType::RotationBySelf" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\xb4\xe7\xbb\x95\xe7\x9a\x84\xe5\x8d\x8a\xe5\xbe\x84\xe5\xa4\xa7\xe5\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\xb9\xe9\x81\x93\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "EditCondition", "MoveType != EProjectileMoveType::RotationBySelf && MoveType != EProjectileMoveType::Idle && MoveType != EProjectileMoveType::TargetLocationByTarget" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\xb9\xe9\x81\x93\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayHomingTarget_MetaData[] = {
		{ "Category", "Attach setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbb\xb6\xe8\xbf\x9f\xe8\xbf\xbd\xe8\xb8\xaa\xe7\x9b\xae\xe6\xa0\x87\xef\xbc\x8c\xe5\x85\x88\xe6\x8c\x89\xe7\x85\xa7\xe5\x8f\x91\xe5\xb0\x84\xe6\x96\xb9\xe5\x90\x91\xe7\xa7\xbb\xe5\x8a\xa8\n" },
#endif
		{ "EditCondition", "MoveType == EProjectileMoveType::Tracking" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xb6\xe8\xbf\x9f\xe8\xbf\xbd\xe8\xb8\xaa\xe7\x9b\xae\xe6\xa0\x87\xef\xbc\x8c\xe5\x85\x88\xe6\x8c\x89\xe7\x85\xa7\xe5\x8f\x91\xe5\xb0\x84\xe6\x96\xb9\xe5\x90\x91\xe7\xa7\xbb\xe5\x8a\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlyTime_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe9\xa3\x9e\xe8\xa1\x8c\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "EditCondition", "MoveType == EProjectileMoveType::LaunchIdleAndBack" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe9\xa3\x9e\xe8\xa1\x8c\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleTime_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x81\x9c\xe7\x95\x99\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "EditCondition", "MoveType == EProjectileMoveType::LaunchIdleAndBack" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x81\x9c\xe7\x95\x99\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBackSource_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x94\xe5\x9b\x9e\xe9\x87\x8a\xe6\x94\xbe\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "EditCondition", "MoveType == EProjectileMoveType::LaunchIdleAndBack" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x94\xe5\x9b\x9e\xe9\x87\x8a\xe6\x94\xbe\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoSourceLifeTime_MetaData[] = {
		{ "Category", "SpawnSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\x8d\xe8\x83\xbd\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9b\xae\xe6\xa0\x87\xe6\x88\x96\xe7\x9b\xae\xe6\xa0\x87\xe6\xad\xbb\xe4\xba\xa1\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\xad\x98\xe6\xb4\xbb\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "EditCondition", "bBackSource" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8d\xe8\x83\xbd\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9b\xae\xe6\xa0\x87\xe6\x88\x96\xe7\x9b\xae\xe6\xa0\x87\xe6\xad\xbb\xe4\xba\xa1\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\xad\x98\xe6\xb4\xbb\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveType;
	static void NewProp_bUsePointDirectionToRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePointDirectionToRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmountToSpawnAtOnce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileVolume;
	static void NewProp_bAttachOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachOwner;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentSocket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentRule;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayLaunchTime;
	static void NewProp_bSeparation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ShapeType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionShapeInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionOffset;
	static void NewProp_bRotatorToParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotatorToParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionRotatorOffset;
	static void NewProp_bSpawnOtherProjectile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnOtherProjectile;
	static void NewProp_bCheckApplyEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckApplyEffect;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParabolicSpawnProjectileID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundAngularSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundRadiusSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayHomingTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlyTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleTime;
	static void NewProp_bBackSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBackSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoSourceLifeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileSpawnSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, MoveType), Z_Construct_UEnum_GASFramework_EProjectileMoveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveType_MetaData), NewProp_MoveType_MetaData) }; // 692421392
void Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bUsePointDirectionToRotation_SetBit(void* Obj)
{
	((FProjectileSpawnSetting*)Obj)->bUsePointDirectionToRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bUsePointDirectionToRotation = { "bUsePointDirectionToRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileSpawnSetting), &Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bUsePointDirectionToRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePointDirectionToRotation_MetaData), NewProp_bUsePointDirectionToRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_DirectionOffset = { "DirectionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, DirectionOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionOffset_MetaData), NewProp_DirectionOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_AmountToSpawnAtOnce = { "AmountToSpawnAtOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, AmountToSpawnAtOnce), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountToSpawnAtOnce_MetaData), NewProp_AmountToSpawnAtOnce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, LifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeTime_MetaData), NewProp_LifeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_ProjectileVolume = { "ProjectileVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, ProjectileVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileVolume_MetaData), NewProp_ProjectileVolume_MetaData) };
void Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bAttachOwner_SetBit(void* Obj)
{
	((FProjectileSpawnSetting*)Obj)->bAttachOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bAttachOwner = { "bAttachOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileSpawnSetting), &Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bAttachOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttachOwner_MetaData), NewProp_bAttachOwner_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_ParentSocket = { "ParentSocket", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, ParentSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentSocket_MetaData), NewProp_ParentSocket_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_AttachmentRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_AttachmentRule = { "AttachmentRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, AttachmentRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentRule_MetaData), NewProp_AttachmentRule_MetaData) }; // 366982490
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_DelayLaunchTime = { "DelayLaunchTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, DelayLaunchTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayLaunchTime_MetaData), NewProp_DelayLaunchTime_MetaData) };
void Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bSeparation_SetBit(void* Obj)
{
	((FProjectileSpawnSetting*)Obj)->bSeparation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bSeparation = { "bSeparation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileSpawnSetting), &Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bSeparation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSeparation_MetaData), NewProp_bSeparation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, ShapeType), Z_Construct_UClass_UClass, Z_Construct_UClass_URHS_CollisionShape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeType_MetaData), NewProp_ShapeType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_CollisionShapeInfo = { "CollisionShapeInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, CollisionShapeInfo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionShapeInfo_MetaData), NewProp_CollisionShapeInfo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, CollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionProfileName_MetaData), NewProp_CollisionProfileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_CollisionOffset = { "CollisionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, CollisionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionOffset_MetaData), NewProp_CollisionOffset_MetaData) };
void Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bRotatorToParent_SetBit(void* Obj)
{
	((FProjectileSpawnSetting*)Obj)->bRotatorToParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bRotatorToParent = { "bRotatorToParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileSpawnSetting), &Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bRotatorToParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotatorToParent_MetaData), NewProp_bRotatorToParent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_CollisionRotatorOffset = { "CollisionRotatorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, CollisionRotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRotatorOffset_MetaData), NewProp_CollisionRotatorOffset_MetaData) };
void Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bSpawnOtherProjectile_SetBit(void* Obj)
{
	((FProjectileSpawnSetting*)Obj)->bSpawnOtherProjectile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bSpawnOtherProjectile = { "bSpawnOtherProjectile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileSpawnSetting), &Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bSpawnOtherProjectile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnOtherProjectile_MetaData), NewProp_bSpawnOtherProjectile_MetaData) };
void Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bCheckApplyEffect_SetBit(void* Obj)
{
	((FProjectileSpawnSetting*)Obj)->bCheckApplyEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bCheckApplyEffect = { "bCheckApplyEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileSpawnSetting), &Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bCheckApplyEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckApplyEffect_MetaData), NewProp_bCheckApplyEffect_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_ParabolicSpawnProjectileID = { "ParabolicSpawnProjectileID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, ParabolicSpawnProjectileID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParabolicSpawnProjectileID_MetaData), NewProp_ParabolicSpawnProjectileID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_SurroundAngularSpeed = { "SurroundAngularSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, SurroundAngularSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurroundAngularSpeed_MetaData), NewProp_SurroundAngularSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_SurroundRadiusSize = { "SurroundRadiusSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, SurroundRadiusSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurroundRadiusSize_MetaData), NewProp_SurroundRadiusSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, ProjectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpeed_MetaData), NewProp_ProjectileSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_DelayHomingTarget = { "DelayHomingTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, DelayHomingTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayHomingTarget_MetaData), NewProp_DelayHomingTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_FlyTime = { "FlyTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, FlyTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlyTime_MetaData), NewProp_FlyTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_IdleTime = { "IdleTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, IdleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleTime_MetaData), NewProp_IdleTime_MetaData) };
void Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bBackSource_SetBit(void* Obj)
{
	((FProjectileSpawnSetting*)Obj)->bBackSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bBackSource = { "bBackSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileSpawnSetting), &Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bBackSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBackSource_MetaData), NewProp_bBackSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_NoSourceLifeTime = { "NoSourceLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileSpawnSetting, NoSourceLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoSourceLifeTime_MetaData), NewProp_NoSourceLifeTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_MoveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_MoveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bUsePointDirectionToRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_DirectionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_AmountToSpawnAtOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_ProjectileVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bAttachOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_ParentSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_AttachmentRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_AttachmentRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_DelayLaunchTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bSeparation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_ShapeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_CollisionShapeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_CollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_CollisionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bRotatorToParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_CollisionRotatorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bSpawnOtherProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bCheckApplyEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_ParabolicSpawnProjectileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_SurroundAngularSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_SurroundRadiusSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_ProjectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_DelayHomingTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_FlyTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_IdleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_bBackSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewProp_NoSourceLifeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"ProjectileSpawnSetting",
	Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::PropPointers),
	sizeof(FProjectileSpawnSetting),
	alignof(FProjectileSpawnSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileSpawnSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileSpawnSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileSpawnSetting.InnerSingleton, Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FProjectileSpawnSetting.InnerSingleton;
}
// ********** End ScriptStruct FProjectileSpawnSetting *********************************************

// ********** Begin ScriptStruct FProjectileVFXConfig **********************************************
static_assert(std::is_polymorphic<FProjectileVFXConfig>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FProjectileVFXConfig cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileVFXConfig;
class UScriptStruct* FProjectileVFXConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileVFXConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileVFXConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileVFXConfig, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ProjectileVFXConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileVFXConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x89\xb9\xe6\x95\x88\xe9\x85\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x89\xb9\xe6\x95\x88\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationVFX_MetaData[] = {
		{ "Category", "Projectile VFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\x87\xba \xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\x87\xba \xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailVFX_MetaData[] = {
		{ "Category", "Projectile VFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x8b\x96\xe5\xb0\xbe \xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x8b\x96\xe5\xb0\xbe \xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVFX_MetaData[] = {
		{ "Category", "Projectile VFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x88\x86\xe7\x82\xb9 \xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x88\x86\xe7\x82\xb9 \xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationScale_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\x87\xba \xe5\xb0\xba\xe5\xaf\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\x87\xba \xe5\xb0\xba\xe5\xaf\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailScale_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x8b\x96\xe5\xb0\xbe \xe5\xb0\xba\xe5\xaf\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x8b\x96\xe5\xb0\xbe \xe5\xb0\xba\xe5\xaf\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactScale_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x88\x86\xe7\x82\xb9 \xe5\xb0\xba\xe5\xaf\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x88\x86\xe7\x82\xb9 \xe5\xb0\xba\xe5\xaf\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationSFX_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\x87\xba \xe9\x9f\xb3\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\x87\xba \xe9\x9f\xb3\xe6\x95\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailSFX_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x8b\x96\xe5\xb0\xbe \xe9\x9f\xb3\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x8b\x96\xe5\xb0\xbe \xe9\x9f\xb3\xe6\x95\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSFX_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x88\x86\xe7\x82\xb9 \xe9\x9f\xb3\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x88\x86\xe7\x82\xb9 \xe9\x9f\xb3\xe6\x95\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationSoundDelayTime_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\x87\xba\xe9\x9f\xb3\xe6\x95\x88\xe5\xbb\xb6\xe8\xbf\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\x87\xba\xe9\x9f\xb3\xe6\x95\x88\xe5\xbb\xb6\xe8\xbf\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailSoundDelayTime_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x8b\x96\xe5\xb0\xbe\xe9\x9f\xb3\xe6\x95\x88\xe5\xbb\xb6\xe8\xbf\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x8b\x96\xe5\xb0\xbe\xe9\x9f\xb3\xe6\x95\x88\xe5\xbb\xb6\xe8\xbf\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSoundDelayTime_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x88\x86\xe7\x82\xb9\xe5\xbb\xb6\xe8\xbf\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x88\x86\xe7\x82\xb9\xe5\xbb\xb6\xe8\xbf\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationOffset_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe7\x89\xb9\xe6\x95\x88\xe7\x9a\x84 \xe5\x81\x8f\xe7\xa7\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe7\x89\xb9\xe6\x95\x88\xe7\x9a\x84 \xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailOffset_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8b\x96\xe5\xb0\xbe\xe7\x89\xb9\xe6\x95\x88\xe7\x9a\x84 \xe5\x81\x8f\xe7\xa7\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\x96\xe5\xb0\xbe\xe7\x89\xb9\xe6\x95\x88\xe7\x9a\x84 \xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailRotatorOffset_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8b\x96\xe5\xb0\xbe\xe7\x89\xb9\xe6\x95\x88\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\x96\xe5\xb0\xbe\xe7\x89\xb9\xe6\x95\x88\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationRotatorOffset_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe7\x89\xb9\xe6\x95\x88\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe7\x89\xb9\xe6\x95\x88\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatorOffset_MetaData[] = {
		{ "Category", "Projectile SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x88\x86\xe7\x82\xb9\xe7\x89\xb9\xe6\x95\x88\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x88\x86\xe7\x82\xb9\xe7\x89\xb9\xe6\x95\x88\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActivationVFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TrailVFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ImpactVFX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactScale;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActivationSFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TrailSFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ImpactSFX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivationSoundDelayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailSoundDelayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactSoundDelayTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailRotatorOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationRotatorOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotatorOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileVFXConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationVFX = { "ActivationVFX", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, ActivationVFX), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationVFX_MetaData), NewProp_ActivationVFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailVFX = { "TrailVFX", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, TrailVFX), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailVFX_MetaData), NewProp_TrailVFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ImpactVFX = { "ImpactVFX", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, ImpactVFX), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactVFX_MetaData), NewProp_ImpactVFX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationScale = { "ActivationScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, ActivationScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationScale_MetaData), NewProp_ActivationScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailScale = { "TrailScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, TrailScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailScale_MetaData), NewProp_TrailScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ImpactScale = { "ImpactScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, ImpactScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactScale_MetaData), NewProp_ImpactScale_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationSFX = { "ActivationSFX", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, ActivationSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationSFX_MetaData), NewProp_ActivationSFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailSFX = { "TrailSFX", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, TrailSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailSFX_MetaData), NewProp_TrailSFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ImpactSFX = { "ImpactSFX", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, ImpactSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSFX_MetaData), NewProp_ImpactSFX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationSoundDelayTime = { "ActivationSoundDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, ActivationSoundDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationSoundDelayTime_MetaData), NewProp_ActivationSoundDelayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailSoundDelayTime = { "TrailSoundDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, TrailSoundDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailSoundDelayTime_MetaData), NewProp_TrailSoundDelayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ImpactSoundDelayTime = { "ImpactSoundDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, ImpactSoundDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSoundDelayTime_MetaData), NewProp_ImpactSoundDelayTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationOffset = { "ActivationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, ActivationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationOffset_MetaData), NewProp_ActivationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailOffset = { "TrailOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, TrailOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailOffset_MetaData), NewProp_TrailOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailRotatorOffset = { "TrailRotatorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, TrailRotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailRotatorOffset_MetaData), NewProp_TrailRotatorOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationRotatorOffset = { "ActivationRotatorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, ActivationRotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationRotatorOffset_MetaData), NewProp_ActivationRotatorOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_RotatorOffset = { "RotatorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileVFXConfig, RotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatorOffset_MetaData), NewProp_RotatorOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ImpactVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ImpactScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ImpactSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationSoundDelayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailSoundDelayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ImpactSoundDelayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_TrailRotatorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_ActivationRotatorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewProp_RotatorOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ProjectileVFXConfig",
	Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::PropPointers),
	sizeof(FProjectileVFXConfig),
	alignof(FProjectileVFXConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileVFXConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileVFXConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileVFXConfig.InnerSingleton, Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FProjectileVFXConfig.InnerSingleton;
}
// ********** End ScriptStruct FProjectileVFXConfig ************************************************

// ********** Begin ScriptStruct FProjectileStruct *************************************************
static_assert(std::is_polymorphic<FProjectileStruct>() == std::is_polymorphic<FDataBase>(), "USTRUCT FProjectileStruct cannot be polymorphic unless super FDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileStruct;
class UScriptStruct* FProjectileStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileStruct, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ProjectileStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProjectileStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueTag_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa1\xa8\xe6\x98\x8e\xe8\xaf\xa5\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\xa8\xe6\x98\x8e\xe8\xaf\xa5\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeTags_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa1\xa8\xe6\x98\x8e\xe8\xaf\xa5\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\xa8\xe6\x98\x8e\xe8\xaf\xa5\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlyTheTargetHit_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaa\xe4\xbc\x9a\xe5\x91\xbd\xe4\xb8\xad\xe9\x80\x89\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaa\xe4\xbc\x9a\xe5\x91\xbd\xe4\xb8\xad\xe9\x80\x89\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTargetNumber_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe9\x87\x8f (\xe4\xb8\xba-1\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x89\xa9\xe6\x95\xb0\xe9\x87\x8f\xe9\x80\x89\xe5\x8f\x96\xe7\x9b\xae\xe6\xa0\x87)\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe9\x87\x8f (\xe4\xb8\xba-1\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x89\xa9\xe6\x95\xb0\xe9\x87\x8f\xe9\x80\x89\xe5\x8f\x96\xe7\x9b\xae\xe6\xa0\x87)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\x9f\xe6\x88\x90\xe7\x89\xa9\xe7\x9a\x84\xe5\xaf\xb9\xe5\xba\x94\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb \n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x89\xa9\xe7\x9a\x84\xe5\xaf\xb9\xe5\xba\x94\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDot_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe6\x8c\x81\xe7\xbb\xad\xe4\xbc\xa4\xe5\xae\xb3\xe5\x9e\x8b\xef\xbc\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe6\x8c\x81\xe7\xbb\xad\xe4\xbc\xa4\xe5\xae\xb3\xe5\x9e\x8b\xef\xbc\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageFrequency_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbc\xa4\xe5\xae\xb3\xe9\xa2\x91\xe7\x8e\x87 \n" },
#endif
		{ "EditCondition", "bDot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbc\xa4\xe5\xae\xb3\xe9\xa2\x91\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageDelay_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbc\xa4\xe5\xae\xb3\xe7\x94\x9f\xe6\x95\x88\xe7\x9a\x84\xe5\xbb\xb6\xe8\xbf\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbc\xa4\xe5\xae\xb3\xe7\x94\x9f\xe6\x95\x88\xe7\x9a\x84\xe5\xbb\xb6\xe8\xbf\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerCount_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x95\x88\xe6\xac\xa1\xe6\x95\xb0 0\xe4\xb8\xba\xe5\xbd\x93\xe5\x89\x8d\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\xaf\xe5\xaf\xb9\xe5\x90\x8c\xe4\xb8\x80\xe4\xb8\xaa\xe7\x9b\xae\xe6\xa0\x87\xe5\x8f\x8d\xe5\xa4\x8d\xe8\xa7\xa6\xe5\x8f\x91\xe6\x97\xa0\xe6\x95\xb0\xe6\xac\xa1 \n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x95\x88\xe6\xac\xa1\xe6\x95\xb0 0\xe4\xb8\xba\xe5\xbd\x93\xe5\x89\x8d\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\xaf\xe5\xaf\xb9\xe5\x90\x8c\xe4\xb8\x80\xe4\xb8\xaa\xe7\x9b\xae\xe6\xa0\x87\xe5\x8f\x8d\xe5\xa4\x8d\xe8\xa7\xa6\xe5\x8f\x91\xe6\x97\xa0\xe6\x95\xb0\xe6\xac\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeCount_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe4\xbc\xa4\xe5\xae\xb3\xe6\xac\xa1\xe6\x95\xb0\xef\xbc\x8c\xe6\xb6\x88\xe8\x80\x97\xe6\xae\x86\xe5\xb0\xbd\xe5\xb0\xb1\xe4\xbc\x9a\xe8\xa2\xab\xe6\x91\xa7\xe6\xaf\x81\xef\xbc\x8c-1\xe4\xb8\xba\xe7\xa9\xbf\xe9\x80\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe4\xbc\xa4\xe5\xae\xb3\xe6\xac\xa1\xe6\x95\xb0\xef\xbc\x8c\xe6\xb6\x88\xe8\x80\x97\xe6\xae\x86\xe5\xb0\xbd\xe5\xb0\xb1\xe4\xbc\x9a\xe8\xa2\xab\xe6\x91\xa7\xe6\xaf\x81\xef\xbc\x8c-1\xe4\xb8\xba\xe7\xa9\xbf\xe9\x80\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTypeSet_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\x9f\xe6\x88\x90\xe6\x96\xb9\xe5\xbc\x8f\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "DisplayName", "Spawn Type" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe6\x96\xb9\xe5\xbc\x8f\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnSetting_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\x9f\xe6\x88\x90\xe7\x89\xa9\xe8\xae\xbe\xe7\xbd\xae\n" },
#endif
		{ "DisplayName", "Spawn Setting" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x89\xa9\xe8\xae\xbe\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VfxConfig_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xb9\xe6\x95\x88\xe9\x85\x8d\xe7\xbd\xae\n" },
#endif
		{ "DisplayName", "Vfx" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xb9\xe6\x95\x88\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugsInGame_MetaData[] = {
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb0\x83\xe8\xaf\x95\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xae\xbe\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb0\x83\xe8\xaf\x95\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xae\xbe\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb0\x83\xe8\xaf\x95\xe7\xba\xbf\xe6\x9d\xa1\xe7\xb2\x97\xe7\xbb\x86\n" },
#endif
		{ "EditCondition", "bDrawDebugsInGame" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb0\x83\xe8\xaf\x95\xe7\xba\xbf\xe6\x9d\xa1\xe7\xb2\x97\xe7\xbb\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb0\x83\xe8\xaf\x95\xe7\xba\xbf\xe6\x9d\xa1\xe9\xa2\x9c\xe8\x89\xb2\n" },
#endif
		{ "EditCondition", "bDrawDebugsInGame" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb0\x83\xe8\xaf\x95\xe7\xba\xbf\xe6\x9d\xa1\xe9\xa2\x9c\xe8\x89\xb2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateSummon_MetaData[] = {
		{ "Category", "Summon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeTags;
	static void NewProp_OnlyTheTargetHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTheTargetHit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTargetNumber;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ProjectileClass;
	static void NewProp_bDot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TriggerCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumeCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTypeSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileSpawnSetting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VfxConfig;
	static void NewProp_bDrawDebugsInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugsInGame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerateSummon_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GenerateSummon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_UniqueTag = { "UniqueTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, UniqueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueTag_MetaData), NewProp_UniqueTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_TypeTags = { "TypeTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, TypeTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeTags_MetaData), NewProp_TypeTags_MetaData) }; // 2104890724
void Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_OnlyTheTargetHit_SetBit(void* Obj)
{
	((FProjectileStruct*)Obj)->OnlyTheTargetHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_OnlyTheTargetHit = { "OnlyTheTargetHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileStruct), &Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_OnlyTheTargetHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlyTheTargetHit_MetaData), NewProp_OnlyTheTargetHit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_MaxTargetNumber = { "MaxTargetNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, MaxTargetNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTargetNumber_MetaData), NewProp_MaxTargetNumber_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, ProjectileClass), Z_Construct_UClass_ARHS_ProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
void Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_bDot_SetBit(void* Obj)
{
	((FProjectileStruct*)Obj)->bDot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_bDot = { "bDot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileStruct), &Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_bDot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDot_MetaData), NewProp_bDot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_DamageFrequency = { "DamageFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, DamageFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageFrequency_MetaData), NewProp_DamageFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_DamageDelay = { "DamageDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, DamageDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageDelay_MetaData), NewProp_DamageDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_TriggerCount = { "TriggerCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, TriggerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerCount_MetaData), NewProp_TriggerCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_ConsumeCount = { "ConsumeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, ConsumeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumeCount_MetaData), NewProp_ConsumeCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_SpawnTypeSet = { "SpawnTypeSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, SpawnTypeSet), Z_Construct_UScriptStruct_FSpawnTypeSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTypeSet_MetaData), NewProp_SpawnTypeSet_MetaData) }; // 3444328378
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_ProjectileSpawnSetting = { "ProjectileSpawnSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, ProjectileSpawnSetting), Z_Construct_UScriptStruct_FProjectileSpawnSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpawnSetting_MetaData), NewProp_ProjectileSpawnSetting_MetaData) }; // 1545291484
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_VfxConfig = { "VfxConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, VfxConfig), Z_Construct_UScriptStruct_FProjectileVFXConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VfxConfig_MetaData), NewProp_VfxConfig_MetaData) }; // 3077722349
void Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_bDrawDebugsInGame_SetBit(void* Obj)
{
	((FProjectileStruct*)Obj)->bDrawDebugsInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_bDrawDebugsInGame = { "bDrawDebugsInGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileStruct), &Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_bDrawDebugsInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugsInGame_MetaData), NewProp_bDrawDebugsInGame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_GenerateSummon_Inner = { "GenerateSummon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGenerateSummonInfo, METADATA_PARAMS(0, nullptr) }; // 1801729689
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_GenerateSummon = { "GenerateSummon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileStruct, GenerateSummon), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateSummon_MetaData), NewProp_GenerateSummon_MetaData) }; // 1801729689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_UniqueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_TypeTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_OnlyTheTargetHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_MaxTargetNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_bDot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_DamageFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_DamageDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_TriggerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_ConsumeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_SpawnTypeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_ProjectileSpawnSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_VfxConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_bDrawDebugsInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_GenerateSummon_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewProp_GenerateSummon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	Z_Construct_UScriptStruct_FDataBase,
	&NewStructOps,
	"ProjectileStruct",
	Z_Construct_UScriptStruct_FProjectileStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStruct_Statics::PropPointers),
	sizeof(FProjectileStruct),
	alignof(FProjectileStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileStruct.InnerSingleton, Z_Construct_UScriptStruct_FProjectileStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FProjectileStruct.InnerSingleton;
}
// ********** End ScriptStruct FProjectileStruct ***************************************************

// ********** Begin ScriptStruct FProjectileGEConfig ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileGEConfig;
class UScriptStruct* FProjectileGEConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileGEConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileGEConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileGEConfig, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ProjectileGEConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileGEConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProjectileGEConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileGEs_MetaData[] = {
		{ "Category", "ProjectileGEConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xaf\xa5\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\xe7\xbb\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlEffect_MetaData[] = {
		{ "Category", "ControlEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\xa7\xe5\x88\xb6\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\xa7\xe5\x88\xb6\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingDamage_MetaData[] = {
		{ "Category", "ProjectileGEConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe4\xbc\xa4\xe5\xae\xb3\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe4\xbc\xa4\xe5\xae\xb3" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileGEs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectileGEs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlEffect_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildingDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileGEConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewProp_ProjectileGEs_Inner = { "ProjectileGEs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewProp_ProjectileGEs = { "ProjectileGEs", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileGEConfig, ProjectileGEs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileGEs_MetaData), NewProp_ProjectileGEs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewProp_ControlEffect_Inner = { "ControlEffect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlEffectData, METADATA_PARAMS(0, nullptr) }; // 752987544
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewProp_ControlEffect = { "ControlEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileGEConfig, ControlEffect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlEffect_MetaData), NewProp_ControlEffect_MetaData) }; // 752987544
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewProp_BuildingDamage = { "BuildingDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileGEConfig, BuildingDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingDamage_MetaData), NewProp_BuildingDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewProp_ProjectileGEs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewProp_ProjectileGEs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewProp_ControlEffect_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewProp_ControlEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewProp_BuildingDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"ProjectileGEConfig",
	Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::PropPointers),
	sizeof(FProjectileGEConfig),
	alignof(FProjectileGEConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileGEConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileGEConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileGEConfig.InnerSingleton, Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FProjectileGEConfig.InnerSingleton;
}
// ********** End ScriptStruct FProjectileGEConfig *************************************************

// ********** Begin ScriptStruct FAbilityProjectileStruct ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAbilityProjectileStruct;
class UScriptStruct* FAbilityProjectileStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAbilityProjectileStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAbilityProjectileStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityProjectileStruct, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("AbilityProjectileStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FAbilityProjectileStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileName_MetaData[] = {
		{ "Category", "AbilityProjectileStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x93\xbe\xe6\x8e\xa5ProjectileConfig\xe8\xbf\x99\xe4\xb8\xaa\xe8\xa1\xa8\xe7\x9a\x84RowName\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x93\xbe\xe6\x8e\xa5ProjectileConfig\xe8\xbf\x99\xe4\xb8\xaa\xe8\xa1\xa8\xe7\x9a\x84RowName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTypeMap_MetaData[] = {
		{ "Category", "AbilityProjectileStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8c\x87\xe6\x98\x8e\xe4\xbd\x9c\xe7\x94\xa8\xe5\xaf\xb9\xe8\xb1\xa1\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x8c\xe6\x8c\x87\xe6\x98\x8e\xe6\x96\xbd\xe5\x8a\xa0\xe9\x82\xa3\xe4\xba\x9bGE\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x87\xe6\x98\x8e\xe4\xbd\x9c\xe7\x94\xa8\xe5\xaf\xb9\xe8\xb1\xa1\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x8c\xe6\x8c\x87\xe6\x98\x8e\xe6\x96\xbd\xe5\x8a\xa0\xe9\x82\xa3\xe4\xba\x9bGE" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTypeMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetTypeMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetTypeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetTypeMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityProjectileStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewProp_ProjectileName = { "ProjectileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityProjectileStruct, ProjectileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileName_MetaData), NewProp_ProjectileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewProp_TargetTypeMap_ValueProp = { "TargetTypeMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FProjectileGEConfig, METADATA_PARAMS(0, nullptr) }; // 568944812
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewProp_TargetTypeMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewProp_TargetTypeMap_Key_KeyProp = { "TargetTypeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_GASFramework_ETargetClassType, METADATA_PARAMS(0, nullptr) }; // 2681073076
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewProp_TargetTypeMap = { "TargetTypeMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityProjectileStruct, TargetTypeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTypeMap_MetaData), NewProp_TargetTypeMap_MetaData) }; // 2681073076 568944812
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewProp_ProjectileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewProp_TargetTypeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewProp_TargetTypeMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewProp_TargetTypeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewProp_TargetTypeMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"AbilityProjectileStruct",
	Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::PropPointers),
	sizeof(FAbilityProjectileStruct),
	alignof(FAbilityProjectileStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityProjectileStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAbilityProjectileStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAbilityProjectileStruct.InnerSingleton, Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAbilityProjectileStruct.InnerSingleton;
}
// ********** End ScriptStruct FAbilityProjectileStruct ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h__Script_GASFramework_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectileMoveType_StaticEnum, TEXT("EProjectileMoveType"), &Z_Registration_Info_UEnum_EProjectileMoveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 692421392U) },
		{ EBattle_StaticEnum, TEXT("EBattle"), &Z_Registration_Info_UEnum_EBattle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2539519625U) },
		{ EProjectileTargetType_StaticEnum, TEXT("EProjectileTargetType"), &Z_Registration_Info_UEnum_EProjectileTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2562395621U) },
		{ EProjectileGenerateType_StaticEnum, TEXT("EProjectileGenerateType"), &Z_Registration_Info_UEnum_EProjectileGenerateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2170473124U) },
		{ EProjectileSpawnType_StaticEnum, TEXT("EProjectileSpawnType"), &Z_Registration_Info_UEnum_EProjectileSpawnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 226892828U) },
		{ EEarlyWarningType_StaticEnum, TEXT("EEarlyWarningType"), &Z_Registration_Info_UEnum_EEarlyWarningType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3444693179U) },
		{ ESimulationType_StaticEnum, TEXT("ESimulationType"), &Z_Registration_Info_UEnum_ESimulationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2263486662U) },
		{ ETargetClassType_StaticEnum, TEXT("ETargetClassType"), &Z_Registration_Info_UEnum_ETargetClassType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2681073076U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGenerateSummonInfo::StaticStruct, Z_Construct_UScriptStruct_FGenerateSummonInfo_Statics::NewStructOps, TEXT("GenerateSummonInfo"), &Z_Registration_Info_UScriptStruct_FGenerateSummonInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateSummonInfo), 1801729689U) },
		{ FRootMotionConstantForce::StaticStruct, Z_Construct_UScriptStruct_FRootMotionConstantForce_Statics::NewStructOps, TEXT("RootMotionConstantForce"), &Z_Registration_Info_UScriptStruct_FRootMotionConstantForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionConstantForce), 3577456179U) },
		{ FRootMotionRadialForce::StaticStruct, Z_Construct_UScriptStruct_FRootMotionRadialForce_Statics::NewStructOps, TEXT("RootMotionRadialForce"), &Z_Registration_Info_UScriptStruct_FRootMotionRadialForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionRadialForce), 3163682138U) },
		{ FSpawnTypeSet::StaticStruct, Z_Construct_UScriptStruct_FSpawnTypeSet_Statics::NewStructOps, TEXT("SpawnTypeSet"), &Z_Registration_Info_UScriptStruct_FSpawnTypeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnTypeSet), 3444328378U) },
		{ FProjectileSpawnSetting::StaticStruct, Z_Construct_UScriptStruct_FProjectileSpawnSetting_Statics::NewStructOps, TEXT("ProjectileSpawnSetting"), &Z_Registration_Info_UScriptStruct_FProjectileSpawnSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileSpawnSetting), 1545291484U) },
		{ FProjectileVFXConfig::StaticStruct, Z_Construct_UScriptStruct_FProjectileVFXConfig_Statics::NewStructOps, TEXT("ProjectileVFXConfig"), &Z_Registration_Info_UScriptStruct_FProjectileVFXConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileVFXConfig), 3077722349U) },
		{ FProjectileStruct::StaticStruct, Z_Construct_UScriptStruct_FProjectileStruct_Statics::NewStructOps, TEXT("ProjectileStruct"), &Z_Registration_Info_UScriptStruct_FProjectileStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileStruct), 958801702U) },
		{ FProjectileGEConfig::StaticStruct, Z_Construct_UScriptStruct_FProjectileGEConfig_Statics::NewStructOps, TEXT("ProjectileGEConfig"), &Z_Registration_Info_UScriptStruct_FProjectileGEConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileGEConfig), 568944812U) },
		{ FAbilityProjectileStruct::StaticStruct, Z_Construct_UScriptStruct_FAbilityProjectileStruct_Statics::NewStructOps, TEXT("AbilityProjectileStruct"), &Z_Registration_Info_UScriptStruct_FAbilityProjectileStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityProjectileStruct), 2403324607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h__Script_GASFramework_3497088391(TEXT("/Script/GASFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h__Script_GASFramework_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h__Script_GASFramework_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h__Script_GASFramework_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_ProjectileStruct_h__Script_GASFramework_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
