// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RHS_Data.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRHS_Data() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_RHS_API UScriptStruct* Z_Construct_UScriptStruct_FRHSDebugSettings();
AURORADEVS_RHS_API UScriptStruct* Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_RHS();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRHSDebugSettings *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRHSDebugSettings;
class UScriptStruct* FRHSDebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRHSDebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRHSDebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRHSDebugSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_RHS(), TEXT("RHSDebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FRHSDebugSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRHSDebugSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct used for setting up debugging. This is mainly used in RHS AnimNotifies\n */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct used for setting up debugging. This is mainly used in RHS AnimNotifies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugsInGame_MetaData[] = {
		{ "Category", "Aurora Devs - Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether debug shapes, which are usually draw in editor worlds, should be drawn in game worlds as well.\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether debug shapes, which are usually draw in editor worlds, should be drawn in game worlds as well." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDuration_MetaData[] = {
		{ "Category", "Aurora Devs - Debugging" },
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugThickness_MetaData[] = {
		{ "Category", "Aurora Devs - Debugging" },
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "Aurora Devs - Debugging" },
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDrawDebugsInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugsInGame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRHSDebugSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewProp_bDrawDebugsInGame_SetBit(void* Obj)
{
	((FRHSDebugSettings*)Obj)->bDrawDebugsInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewProp_bDrawDebugsInGame = { "bDrawDebugsInGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRHSDebugSettings), &Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewProp_bDrawDebugsInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugsInGame_MetaData), NewProp_bDrawDebugsInGame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewProp_DebugDuration = { "DebugDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSDebugSettings, DebugDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDuration_MetaData), NewProp_DebugDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewProp_DebugThickness = { "DebugThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSDebugSettings, DebugThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugThickness_MetaData), NewProp_DebugThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSDebugSettings, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewProp_bDrawDebugsInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewProp_DebugDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewProp_DebugThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewProp_DebugColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
	nullptr,
	&NewStructOps,
	"RHSDebugSettings",
	Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::PropPointers),
	sizeof(FRHSDebugSettings),
	alignof(FRHSDebugSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRHSDebugSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FRHSDebugSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRHSDebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRHSDebugSettings.InnerSingleton;
}
// ********** End ScriptStruct FRHSDebugSettings ***************************************************

// ********** Begin ScriptStruct FRHSProjectileBulkSpawnSetting ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRHSProjectileBulkSpawnSetting;
class UScriptStruct* FRHSProjectileBulkSpawnSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRHSProjectileBulkSpawnSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRHSProjectileBulkSpawnSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_RHS(), TEXT("RHSProjectileBulkSpawnSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FRHSProjectileBulkSpawnSetting.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct used for setting up spawning of multiple projectiles. This is mainly used in RHS AnimNotifies\n * Sets up transform, number of instances, speed and velocity\n */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct used for setting up spawning of multiple projectiles. This is mainly used in RHS AnimNotifies\nSets up transform, number of instances, speed and velocity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Aurora Devs - Projectiles" },
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Aurora Devs - Projectiles" },
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountToSpawnAtOnce_MetaData[] = {
		{ "Category", "Aurora Devs - Projectiles" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Amount of projectiles to spawn at once. For RHS_ProjectileRain, this is the amount that is spawned each time the cooldown expires.\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of projectiles to spawn at once. For RHS_ProjectileRain, this is the amount that is spawned each time the cooldown expires." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "Aurora Devs - Projectiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile speed. For RHS_ProjectileRain, the speed should be negative if you want the projectiles to fall down.\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile speed. For RHS_ProjectileRain, the speed should be negative if you want the projectiles to fall down." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinXYRandomVelocityDirection_MetaData[] = {
		{ "Category", "Aurora Devs - Projectiles" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Minimum value of the range of values that will be randomly chosen and applied to the X and Y of the velocity direction of the projectiles\n\x09 * For RHS_ProjectileRain and RHS_HomingProjectiles, This adds randomness to the direction of the projectile if you don't want them to all spawn heading the exact same way.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum value of the range of values that will be randomly chosen and applied to the X and Y of the velocity direction of the projectiles\n       * For RHS_ProjectileRain and RHS_HomingProjectiles, This adds randomness to the direction of the projectile if you don't want them to all spawn heading the exact same way." },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxXYRandomVelocityDirection_MetaData[] = {
		{ "Category", "Aurora Devs - Projectiles" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Maximum value of the range of values that will be randomly chosen and applied to the X and Y of the velocity direction of the projectiles\n\x09 * For RHS_ProjectileRain and RHS_HomingProjectiles, This adds randomness to the direction of the projectile if you don't want them to all spawn heading the exact same way.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum value of the range of values that will be randomly chosen and applied to the X and Y of the velocity direction of the projectiles\n       * For RHS_ProjectileRain and RHS_HomingProjectiles, This adds randomness to the direction of the projectile if you don't want them to all spawn heading the exact same way." },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmountToSpawnAtOnce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinXYRandomVelocityDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxXYRandomVelocityDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRHSProjectileBulkSpawnSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSProjectileBulkSpawnSetting, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSProjectileBulkSpawnSetting, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_AmountToSpawnAtOnce = { "AmountToSpawnAtOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSProjectileBulkSpawnSetting, AmountToSpawnAtOnce), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountToSpawnAtOnce_MetaData), NewProp_AmountToSpawnAtOnce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSProjectileBulkSpawnSetting, ProjectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpeed_MetaData), NewProp_ProjectileSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_MinXYRandomVelocityDirection = { "MinXYRandomVelocityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSProjectileBulkSpawnSetting, MinXYRandomVelocityDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinXYRandomVelocityDirection_MetaData), NewProp_MinXYRandomVelocityDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_MaxXYRandomVelocityDirection = { "MaxXYRandomVelocityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSProjectileBulkSpawnSetting, MaxXYRandomVelocityDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxXYRandomVelocityDirection_MetaData), NewProp_MaxXYRandomVelocityDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_AmountToSpawnAtOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_ProjectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_MinXYRandomVelocityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewProp_MaxXYRandomVelocityDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
	nullptr,
	&NewStructOps,
	"RHSProjectileBulkSpawnSetting",
	Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::PropPointers),
	sizeof(FRHSProjectileBulkSpawnSetting),
	alignof(FRHSProjectileBulkSpawnSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FRHSProjectileBulkSpawnSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRHSProjectileBulkSpawnSetting.InnerSingleton, Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRHSProjectileBulkSpawnSetting.InnerSingleton;
}
// ********** End ScriptStruct FRHSProjectileBulkSpawnSetting **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_Data_h__Script_AuroraDevs_RHS_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRHSDebugSettings::StaticStruct, Z_Construct_UScriptStruct_FRHSDebugSettings_Statics::NewStructOps, TEXT("RHSDebugSettings"), &Z_Registration_Info_UScriptStruct_FRHSDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRHSDebugSettings), 4181635107U) },
		{ FRHSProjectileBulkSpawnSetting::StaticStruct, Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting_Statics::NewStructOps, TEXT("RHSProjectileBulkSpawnSetting"), &Z_Registration_Info_UScriptStruct_FRHSProjectileBulkSpawnSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRHSProjectileBulkSpawnSetting), 1121798872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_Data_h__Script_AuroraDevs_RHS_1623787060(TEXT("/Script/AuroraDevs_RHS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_Data_h__Script_AuroraDevs_RHS_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_Data_h__Script_AuroraDevs_RHS_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
