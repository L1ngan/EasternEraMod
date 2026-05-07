// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RHS_SpawnHomingProjectileBase.h"
#include "RHS_Data.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRHS_SpawnHomingProjectileBase() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_AnimNotifyBase();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_SpawnHomingProjectileBase();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_SpawnHomingProjectileBase_NoRegister();
AURORADEVS_RHS_API UEnum* Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType();
AURORADEVS_RHS_API UScriptStruct* Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings();
AURORADEVS_RHS_API UScriptStruct* Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_RHS();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERHSHomingProjectileSpawnType *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERHSHomingProjectileSpawnType;
static UEnum* ERHSHomingProjectileSpawnType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERHSHomingProjectileSpawnType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERHSHomingProjectileSpawnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_RHS(), TEXT("ERHSHomingProjectileSpawnType"));
	}
	return Z_Registration_Info_UEnum_ERHSHomingProjectileSpawnType.OuterSingleton;
}
template<> AURORADEVS_RHS_API UEnum* StaticEnum<ERHSHomingProjectileSpawnType>()
{
	return ERHSHomingProjectileSpawnType_StaticEnum();
}
struct Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum describing the different methods for spawning multiple homing projectiles\n */" },
#endif
		{ "EvenlyAlongVector.Comment", "//Spawn along vector describing both the direction and the distance between spawned instances.\n" },
		{ "EvenlyAlongVector.Name", "ERHSHomingProjectileSpawnType::EvenlyAlongVector" },
		{ "EvenlyAlongVector.ToolTip", "Spawn along vector describing both the direction and the distance between spawned instances." },
		{ "EvenlyInCircle.Name", "ERHSHomingProjectileSpawnType::EvenlyInCircle" },
		{ "ModuleRelativePath", "Public/RHS_SpawnHomingProjectileBase.h" },
		{ "RandomBoundingBox.Comment", "//Spawn randomly inside the extents of a bounding box\n" },
		{ "RandomBoundingBox.Name", "ERHSHomingProjectileSpawnType::RandomBoundingBox" },
		{ "RandomBoundingBox.ToolTip", "Spawn randomly inside the extents of a bounding box" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum describing the different methods for spawning multiple homing projectiles" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERHSHomingProjectileSpawnType::RandomBoundingBox", (int64)ERHSHomingProjectileSpawnType::RandomBoundingBox },
		{ "ERHSHomingProjectileSpawnType::EvenlyAlongVector", (int64)ERHSHomingProjectileSpawnType::EvenlyAlongVector },
		{ "ERHSHomingProjectileSpawnType::EvenlyInCircle", (int64)ERHSHomingProjectileSpawnType::EvenlyInCircle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
	nullptr,
	"ERHSHomingProjectileSpawnType",
	"ERHSHomingProjectileSpawnType",
	Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType()
{
	if (!Z_Registration_Info_UEnum_ERHSHomingProjectileSpawnType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERHSHomingProjectileSpawnType.InnerSingleton, Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERHSHomingProjectileSpawnType.InnerSingleton;
}
// ********** End Enum ERHSHomingProjectileSpawnType ***********************************************

// ********** Begin ScriptStruct FRHSHomingProjectileSpawnTypeSettings *****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings;
class UScriptStruct* FRHSHomingProjectileSpawnTypeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings, (UObject*)Z_Construct_UPackage__Script_AuroraDevs_RHS(), TEXT("RHSHomingProjectileSpawnTypeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Settings governing homing projectiles' spawn distribution\n */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_SpawnHomingProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Settings governing homing projectiles' spawn distribution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HomingProjectileSpawnType_MetaData[] = {
		{ "Category", "Homing Projectile Setup" },
		{ "ModuleRelativePath", "Public/RHS_SpawnHomingProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationVariance_MetaData[] = {
		{ "Category", "Homing Projectile Setup" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * If SpawnType is RandomBoundingBox, then this is the box's extent.\n\x09 * If SpawnType is EvenlyAlongVector, then this describes both the direction along which projectiles are spawned, and the distance between each projectile instance.\n\x09 * This means nothing when SpawnType is EvenlyInCircle.\n\x09 */" },
#endif
		{ "EditCondition", "HomingProjectileSpawnType != ERHSHomingProjectileSpawnType::EvenlyInCircle" },
		{ "ModuleRelativePath", "Public/RHS_SpawnHomingProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* If SpawnType is RandomBoundingBox, then this is the box's extent.\n* If SpawnType is EvenlyAlongVector, then this describes both the direction along which projectiles are spawned, and the distance between each projectile instance.\n* This means nothing when SpawnType is EvenlyInCircle." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Homing Projectile Setup" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Only valid when Spawn Type is EvenlyInCircle.\n\x09 * Radius of the circle\n\x09 */" },
#endif
		{ "EditCondition", "HomingProjectileSpawnType == ERHSHomingProjectileSpawnType::EvenlyInCircle" },
		{ "ModuleRelativePath", "Public/RHS_SpawnHomingProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Only valid when Spawn Type is EvenlyInCircle.\n* Radius of the circle" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRotationAxis_MetaData[] = {
		{ "Category", "Homing Projectile Setup" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Only valid when Spawn Type is EvenlyInCircle.\n\x09 * The unit vector perpendicular to the circle and looking away from it.\n\x09*/" },
#endif
		{ "EditCondition", "HomingProjectileSpawnType == ERHSHomingProjectileSpawnType::EvenlyInCircle" },
		{ "ModuleRelativePath", "Public/RHS_SpawnHomingProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Only valid when Spawn Type is EvenlyInCircle.\n* The unit vector perpendicular to the circle and looking away from it." },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCircleAngle_MetaData[] = {
		{ "Category", "Homing Projectile Setup" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Only valid when Spawn Type is EvenlyInCircle.\n\x09 * Max circle angle, knowing that projectiles are spawned from each side of the 0 angle. This means that 360 will you give you a full circle, 180 a semi-circle, etc.\n\x09*/" },
#endif
		{ "EditCondition", "HomingProjectileSpawnType == ERHSHomingProjectileSpawnType::EvenlyInCircle" },
		{ "ModuleRelativePath", "Public/RHS_SpawnHomingProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Only valid when Spawn Type is EvenlyInCircle.\n* Max circle angle, knowing that projectiles are spawned from each side of the 0 angle. This means that 360 will you give you a full circle, 180 a semi-circle, etc." },
#endif
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HomingProjectileSpawnType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HomingProjectileSpawnType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocationVariance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CircleRotationAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCircleAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRHSHomingProjectileSpawnTypeSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_HomingProjectileSpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_HomingProjectileSpawnType = { "HomingProjectileSpawnType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSHomingProjectileSpawnTypeSettings, HomingProjectileSpawnType), Z_Construct_UEnum_AuroraDevs_RHS_ERHSHomingProjectileSpawnType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HomingProjectileSpawnType_MetaData), NewProp_HomingProjectileSpawnType_MetaData) }; // 309542429
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_SpawnLocationVariance = { "SpawnLocationVariance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSHomingProjectileSpawnTypeSettings, SpawnLocationVariance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocationVariance_MetaData), NewProp_SpawnLocationVariance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSHomingProjectileSpawnTypeSettings, CircleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRadius_MetaData), NewProp_CircleRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_CircleRotationAxis = { "CircleRotationAxis", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSHomingProjectileSpawnTypeSettings, CircleRotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRotationAxis_MetaData), NewProp_CircleRotationAxis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_MaxCircleAngle = { "MaxCircleAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRHSHomingProjectileSpawnTypeSettings, MaxCircleAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCircleAngle_MetaData), NewProp_MaxCircleAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_HomingProjectileSpawnType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_HomingProjectileSpawnType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_SpawnLocationVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_CircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_CircleRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewProp_MaxCircleAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
	nullptr,
	&NewStructOps,
	"RHSHomingProjectileSpawnTypeSettings",
	Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::PropPointers),
	sizeof(FRHSHomingProjectileSpawnTypeSettings),
	alignof(FRHSHomingProjectileSpawnTypeSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings.InnerSingleton, Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings.InnerSingleton;
}
// ********** End ScriptStruct FRHSHomingProjectileSpawnTypeSettings *******************************

// ********** Begin Class URHS_SpawnHomingProjectileBase *******************************************
void URHS_SpawnHomingProjectileBase::StaticRegisterNativesURHS_SpawnHomingProjectileBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URHS_SpawnHomingProjectileBase;
UClass* URHS_SpawnHomingProjectileBase::GetPrivateStaticClass()
{
	using TClass = URHS_SpawnHomingProjectileBase;
	if (!Z_Registration_Info_UClass_URHS_SpawnHomingProjectileBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RHS_SpawnHomingProjectileBase"),
			Z_Registration_Info_UClass_URHS_SpawnHomingProjectileBase.InnerSingleton,
			StaticRegisterNativesURHS_SpawnHomingProjectileBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_URHS_SpawnHomingProjectileBase.InnerSingleton;
}
UClass* Z_Construct_UClass_URHS_SpawnHomingProjectileBase_NoRegister()
{
	return URHS_SpawnHomingProjectileBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "RHS_SpawnHomingProjectileBase.h" },
		{ "ModuleRelativePath", "Public/RHS_SpawnHomingProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HomingProjectileSpawnSettings_MetaData[] = {
		{ "Category", "Homing Projectile Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings governing homing projectiles' spawn distribution\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_SpawnHomingProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings governing homing projectiles' spawn distribution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileBulkSpawnSettings_MetaData[] = {
		{ "Category", "Projectile Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings governing homing projectiles' bulk spawning and initial speed/velocity\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_SpawnHomingProjectileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings governing homing projectiles' bulk spawning and initial speed/velocity" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HomingProjectileSpawnSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileBulkSpawnSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URHS_SpawnHomingProjectileBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::NewProp_HomingProjectileSpawnSettings = { "HomingProjectileSpawnSettings", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_SpawnHomingProjectileBase, HomingProjectileSpawnSettings), Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HomingProjectileSpawnSettings_MetaData), NewProp_HomingProjectileSpawnSettings_MetaData) }; // 1882706257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::NewProp_ProjectileBulkSpawnSettings = { "ProjectileBulkSpawnSettings", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_SpawnHomingProjectileBase, ProjectileBulkSpawnSettings), Z_Construct_UScriptStruct_FRHSProjectileBulkSpawnSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileBulkSpawnSettings_MetaData), NewProp_ProjectileBulkSpawnSettings_MetaData) }; // 1121798872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::NewProp_HomingProjectileSpawnSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::NewProp_ProjectileBulkSpawnSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URHS_AnimNotifyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::ClassParams = {
	&URHS_SpawnHomingProjectileBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::PropPointers),
	0,
	0x001120A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URHS_SpawnHomingProjectileBase()
{
	if (!Z_Registration_Info_UClass_URHS_SpawnHomingProjectileBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URHS_SpawnHomingProjectileBase.OuterSingleton, Z_Construct_UClass_URHS_SpawnHomingProjectileBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URHS_SpawnHomingProjectileBase.OuterSingleton;
}
URHS_SpawnHomingProjectileBase::URHS_SpawnHomingProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URHS_SpawnHomingProjectileBase);
URHS_SpawnHomingProjectileBase::~URHS_SpawnHomingProjectileBase() {}
// ********** End Class URHS_SpawnHomingProjectileBase *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h__Script_AuroraDevs_RHS_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERHSHomingProjectileSpawnType_StaticEnum, TEXT("ERHSHomingProjectileSpawnType"), &Z_Registration_Info_UEnum_ERHSHomingProjectileSpawnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 309542429U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRHSHomingProjectileSpawnTypeSettings::StaticStruct, Z_Construct_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings_Statics::NewStructOps, TEXT("RHSHomingProjectileSpawnTypeSettings"), &Z_Registration_Info_UScriptStruct_FRHSHomingProjectileSpawnTypeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRHSHomingProjectileSpawnTypeSettings), 1882706257U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URHS_SpawnHomingProjectileBase, URHS_SpawnHomingProjectileBase::StaticClass, TEXT("URHS_SpawnHomingProjectileBase"), &Z_Registration_Info_UClass_URHS_SpawnHomingProjectileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URHS_SpawnHomingProjectileBase), 3115566587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h__Script_AuroraDevs_RHS_1931794349(TEXT("/Script/AuroraDevs_RHS"),
	Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h__Script_AuroraDevs_RHS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h__Script_AuroraDevs_RHS_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h__Script_AuroraDevs_RHS_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h__Script_AuroraDevs_RHS_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h__Script_AuroraDevs_RHS_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_SpawnHomingProjectileBase_h__Script_AuroraDevs_RHS_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
