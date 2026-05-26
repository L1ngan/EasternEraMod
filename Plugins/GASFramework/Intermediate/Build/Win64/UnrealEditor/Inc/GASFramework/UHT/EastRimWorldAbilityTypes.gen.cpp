// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EastRimWorldAbilityTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "AttributeSet.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEastRimWorldAbilityTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASFRAMEWORK_API UClass* Z_Construct_UClass_UEastRimWorldTargetType_NoRegister();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EAbilityAttackType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EAbilityUsageScenario();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EDamageType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityInit();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FControlEffectData();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileHitEventData();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileHitTargetData();
UPackage* Z_Construct_UPackage__Script_GASFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EEastRimWorldTargetType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEastRimWorldTargetType;
static UEnum* EEastRimWorldTargetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEastRimWorldTargetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEastRimWorldTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EEastRimWorldTargetType"));
	}
	return Z_Registration_Info_UEnum_EEastRimWorldTargetType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EEastRimWorldTargetType>()
{
	return EEastRimWorldTargetType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbd\x9c\xe7\x94\xa8\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Enemies.Comment", "//\xe6\x95\x8c\xe4\xba\xba\n" },
		{ "Enemies.Name", "EEastRimWorldTargetType::Enemies" },
		{ "Enemies.ToolTip", "\xe6\x95\x8c\xe4\xba\xba" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
		{ "Owner.Comment", "//\xe4\xbb\x85\xe8\x87\xaa\xe5\xb7\xb1\n" },
		{ "Owner.Name", "EEastRimWorldTargetType::Owner" },
		{ "Owner.ToolTip", "\xe4\xbb\x85\xe8\x87\xaa\xe5\xb7\xb1" },
		{ "Projectile.Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\n" },
		{ "Projectile.Name", "EEastRimWorldTargetType::Projectile" },
		{ "Projectile.ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9" },
		{ "Teammate.Comment", "//\xe9\x98\x9f\xe5\x8f\x8b\n" },
		{ "Teammate.Name", "EEastRimWorldTargetType::Teammate" },
		{ "Teammate.ToolTip", "\xe9\x98\x9f\xe5\x8f\x8b" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\x9c\xe7\x94\xa8\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEastRimWorldTargetType::Enemies", (int64)EEastRimWorldTargetType::Enemies },
		{ "EEastRimWorldTargetType::Owner", (int64)EEastRimWorldTargetType::Owner },
		{ "EEastRimWorldTargetType::Projectile", (int64)EEastRimWorldTargetType::Projectile },
		{ "EEastRimWorldTargetType::Teammate", (int64)EEastRimWorldTargetType::Teammate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EEastRimWorldTargetType",
	"EEastRimWorldTargetType",
	Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType()
{
	if (!Z_Registration_Info_UEnum_EEastRimWorldTargetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEastRimWorldTargetType.InnerSingleton, Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEastRimWorldTargetType.InnerSingleton;
}
// ********** End Enum EEastRimWorldTargetType *****************************************************

// ********** Begin Enum EDamageType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageType;
static UEnum* EDamageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDamageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EDamageType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EDamageType"));
	}
	return Z_Registration_Info_UEnum_EDamageType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EDamageType>()
{
	return EDamageType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BluntDamage.Comment", "//\xe9\x92\x9d\xe5\x99\xa8\xe4\xbc\xa4\xe5\xae\xb3\n" },
		{ "BluntDamage.Name", "EDamageType::BluntDamage" },
		{ "BluntDamage.ToolTip", "\xe9\x92\x9d\xe5\x99\xa8\xe4\xbc\xa4\xe5\xae\xb3" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbc\xa4\xe5\xae\xb3\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
		{ "None.Name", "EDamageType::None" },
		{ "PierceDamage.Comment", "//\xe7\xa9\xbf\xe5\x88\xba\xe4\xbc\xa4\xe5\xae\xb3\n" },
		{ "PierceDamage.Name", "EDamageType::PierceDamage" },
		{ "PierceDamage.ToolTip", "\xe7\xa9\xbf\xe5\x88\xba\xe4\xbc\xa4\xe5\xae\xb3" },
		{ "PoisonDamage.Comment", "//\xe6\xaf\x92\xe6\xb0\x94\xe4\xbc\xa4\xe5\xae\xb3\n" },
		{ "PoisonDamage.Name", "EDamageType::PoisonDamage" },
		{ "PoisonDamage.ToolTip", "\xe6\xaf\x92\xe6\xb0\x94\xe4\xbc\xa4\xe5\xae\xb3" },
		{ "SlashDamage.Comment", "//\xe5\x88\x87\xe5\x89\xb2\xe4\xbc\xa4\xe5\xae\xb3\n" },
		{ "SlashDamage.Name", "EDamageType::SlashDamage" },
		{ "SlashDamage.ToolTip", "\xe5\x88\x87\xe5\x89\xb2\xe4\xbc\xa4\xe5\xae\xb3" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbc\xa4\xe5\xae\xb3\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "TrueQiDamage.Comment", "//\xe7\x9c\x9f\xe6\xb0\x94\xe4\xbc\xa4\xe5\xae\xb3\n" },
		{ "TrueQiDamage.Name", "EDamageType::TrueQiDamage" },
		{ "TrueQiDamage.ToolTip", "\xe7\x9c\x9f\xe6\xb0\x94\xe4\xbc\xa4\xe5\xae\xb3" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDamageType::None", (int64)EDamageType::None },
		{ "EDamageType::PierceDamage", (int64)EDamageType::PierceDamage },
		{ "EDamageType::SlashDamage", (int64)EDamageType::SlashDamage },
		{ "EDamageType::BluntDamage", (int64)EDamageType::BluntDamage },
		{ "EDamageType::PoisonDamage", (int64)EDamageType::PoisonDamage },
		{ "EDamageType::TrueQiDamage", (int64)EDamageType::TrueQiDamage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EDamageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EDamageType",
	"EDamageType",
	Z_Construct_UEnum_GASFramework_EDamageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EDamageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EDamageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EDamageType()
{
	if (!Z_Registration_Info_UEnum_EDamageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageType.InnerSingleton, Z_Construct_UEnum_GASFramework_EDamageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDamageType.InnerSingleton;
}
// ********** End Enum EDamageType *****************************************************************

// ********** Begin ScriptStruct FGameplayEffect_SetByCaller ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameplayEffect_SetByCaller;
class UScriptStruct* FGameplayEffect_SetByCaller::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameplayEffect_SetByCaller.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameplayEffect_SetByCaller.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("GameplayEffect_SetByCaller"));
	}
	return Z_Registration_Info_UScriptStruct_FGameplayEffect_SetByCaller.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[] = {
		{ "Category", "GameplayEffect_SetByCaller" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "GameplayEffect_SetByCaller" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffect_SetByCaller>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffect_SetByCaller, GameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffect_MetaData), NewProp_GameplayEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::NewProp_Value_ValueProp = { "Value", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::NewProp_Value_Key_KeyProp = { "Value_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffect_SetByCaller, Value), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::NewProp_GameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::NewProp_Value_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::NewProp_Value_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"GameplayEffect_SetByCaller",
	Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::PropPointers),
	sizeof(FGameplayEffect_SetByCaller),
	alignof(FGameplayEffect_SetByCaller),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller()
{
	if (!Z_Registration_Info_UScriptStruct_FGameplayEffect_SetByCaller.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameplayEffect_SetByCaller.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGameplayEffect_SetByCaller.InnerSingleton;
}
// ********** End ScriptStruct FGameplayEffect_SetByCaller *****************************************

// ********** Begin ScriptStruct FAbilityInit ******************************************************
static_assert(std::is_polymorphic<FAbilityInit>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAbilityInit cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAbilityInit;
class UScriptStruct* FAbilityInit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAbilityInit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAbilityInit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityInit, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("AbilityInit"));
	}
	return Z_Registration_Info_UScriptStruct_FAbilityInit.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAbilityInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_InitAttribute_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffect_InitAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityInit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityInit_Statics::NewProp_GameplayEffect_InitAttribute = { "GameplayEffect_InitAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityInit, GameplayEffect_InitAttribute), Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffect_InitAttribute_MetaData), NewProp_GameplayEffect_InitAttribute_MetaData) }; // 3694223367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityInit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityInit_Statics::NewProp_GameplayEffect_InitAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityInit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AbilityInit",
	Z_Construct_UScriptStruct_FAbilityInit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInit_Statics::PropPointers),
	sizeof(FAbilityInit),
	alignof(FAbilityInit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityInit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityInit()
{
	if (!Z_Registration_Info_UScriptStruct_FAbilityInit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAbilityInit.InnerSingleton, Z_Construct_UScriptStruct_FAbilityInit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAbilityInit.InnerSingleton;
}
// ********** End ScriptStruct FAbilityInit ********************************************************

// ********** Begin ScriptStruct FEastRimWorldGameplayEffectContainer ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainer;
class UScriptStruct* FEastRimWorldGameplayEffectContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EastRimWorldGameplayEffectContainer"));
	}
	return Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the way that targeting happens */" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the way that targeting happens" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectClasses_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetGameplayEffectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEastRimWorldGameplayEffectContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEastRimWorldGameplayEffectContainer, TargetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UEastRimWorldTargetType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEastRimWorldGameplayEffectContainer, TargetGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGameplayEffectClasses_MetaData), NewProp_TargetGameplayEffectClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"EastRimWorldGameplayEffectContainer",
	Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::PropPointers),
	sizeof(FEastRimWorldGameplayEffectContainer),
	alignof(FEastRimWorldGameplayEffectContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer()
{
	if (!Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainer.InnerSingleton, Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainer.InnerSingleton;
}
// ********** End ScriptStruct FEastRimWorldGameplayEffectContainer ********************************

// ********** Begin ScriptStruct FEastRimWorldGameplayEffectContainerSpec **************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec;
class UScriptStruct* FEastRimWorldGameplayEffectContainerSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EastRimWorldGameplayEffectContainerSpec"));
	}
	return Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A \"processed\" version of RPGGameplayEffectContainer that can be passed around and eventually applied */" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A \"processed\" version of RPGGameplayEffectContainer that can be passed around and eventually applied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xae\xa1\xe7\xae\x97\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae */" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xa1\xe7\xae\x97\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectSpecs_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe7\x9b\xae\xe6\xa0\x87\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe6\x95\x88\xe6\x9e\x9c\xe5\x88\x97\xe8\xa1\xa8 */" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe7\x9b\xae\xe6\xa0\x87\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe6\x95\x88\xe6\x9e\x9c\xe5\x88\x97\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbd\x9c\xe7\x94\xa8\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\x9c\xe7\x94\xa8\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGameplayEffectSpecs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectSpecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEastRimWorldGameplayEffectContainerSpec>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEastRimWorldGameplayEffectContainerSpec, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2587778715
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 4275563785
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEastRimWorldGameplayEffectContainerSpec, TargetGameplayEffectSpecs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGameplayEffectSpecs_MetaData), NewProp_TargetGameplayEffectSpecs_MetaData) }; // 4275563785
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEastRimWorldGameplayEffectContainerSpec, Type), Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1331221814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"EastRimWorldGameplayEffectContainerSpec",
	Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::PropPointers),
	sizeof(FEastRimWorldGameplayEffectContainerSpec),
	alignof(FEastRimWorldGameplayEffectContainerSpec),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec()
{
	if (!Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec.InnerSingleton, Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec.InnerSingleton;
}
// ********** End ScriptStruct FEastRimWorldGameplayEffectContainerSpec ****************************

// ********** Begin ScriptStruct FProjectileHitEventData *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileHitEventData;
class UScriptStruct* FProjectileHitEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileHitEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileHitEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileHitEventData, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ProjectileHitEventData"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileHitEventData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProjectileHitEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe7\x82\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe7\x82\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x96\xb9\xe5\x90\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xb9\xe5\x90\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe8\xaf\xbb\xe5\x8f\x96\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe5\xb1\x9e\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe8\xaf\xbb\xe5\x8f\x96\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResistanceAttribute_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe6\x8a\x97\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe6\x8a\x97\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x9b\xae\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraneousData_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x99\x84\xe5\xb8\xa6\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x99\x84\xe5\xb8\xa6\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLocation_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x89\x80\xe5\xa4\x84\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe6\x89\x80\xe5\xa4\x84\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTransform_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb5\xb7\xe5\xa7\x8b\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\xb7\xe5\xa7\x8b\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x89\xa9\xe4\xbd\x99\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x89\xa9\xe4\xbd\x99\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbc\xa4\xe5\xae\xb3\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbc\xa4\xe5\xae\xb3\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "ProjectileHitEventData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbc\xa4\xe5\xae\xb3\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbc\xa4\xe5\xae\xb3\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResistanceAttribute;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraneousData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileHitEventData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 1212282043
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_ResistanceAttribute = { "ResistanceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, ResistanceAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResistanceAttribute_MetaData), NewProp_ResistanceAttribute_MetaData) }; // 1212282043
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_ExtraneousData = { "ExtraneousData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, ExtraneousData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraneousData_MetaData), NewProp_ExtraneousData_MetaData) }; // 1627169465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_ProjectileLocation = { "ProjectileLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, ProjectileLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLocation_MetaData), NewProp_ProjectileLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_StartTransform = { "StartTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, StartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTransform_MetaData), NewProp_StartTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, TimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeRemaining_MetaData), NewProp_TimeRemaining_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, DamageValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageValue_MetaData), NewProp_DamageValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileHitEventData, DamageType), Z_Construct_UEnum_GASFramework_EDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 595706218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_ResistanceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_ExtraneousData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_ProjectileLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_StartTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_TimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_DamageValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_DamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewProp_DamageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"ProjectileHitEventData",
	Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::PropPointers),
	sizeof(FProjectileHitEventData),
	alignof(FProjectileHitEventData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileHitEventData()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileHitEventData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileHitEventData.InnerSingleton, Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FProjectileHitEventData.InnerSingleton;
}
// ********** End ScriptStruct FProjectileHitEventData *********************************************

// ********** Begin ScriptStruct FProjectileHitTargetData ******************************************
static_assert(std::is_polymorphic<FProjectileHitTargetData>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FProjectileHitTargetData cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileHitTargetData;
class UScriptStruct* FProjectileHitTargetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileHitTargetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileHitTargetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileHitTargetData, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ProjectileHitTargetData"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileHitTargetData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProjectileHitTargetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileHitTargetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileHitTargetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
	&NewStructOps,
	"ProjectileHitTargetData",
	nullptr,
	0,
	sizeof(FProjectileHitTargetData),
	alignof(FProjectileHitTargetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileHitTargetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileHitTargetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileHitTargetData()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileHitTargetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileHitTargetData.InnerSingleton, Z_Construct_UScriptStruct_FProjectileHitTargetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FProjectileHitTargetData.InnerSingleton;
}
// ********** End ScriptStruct FProjectileHitTargetData ********************************************

// ********** Begin ScriptStruct FControlEffectData ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FControlEffectData;
class UScriptStruct* FControlEffectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FControlEffectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FControlEffectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlEffectData, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ControlEffectData"));
	}
	return Z_Registration_Info_UScriptStruct_FControlEffectData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FControlEffectData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\xa7\xe5\x88\xb6\xe6\x95\x88\xe6\x9e\x9c\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\xa7\xe5\x88\xb6\xe6\x95\x88\xe6\x9e\x9c\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Categories", "Status.ControlEffect" },
		{ "Category", "ControlEffectData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\xa7\xe5\x88\xb6\xe6\x95\x88\xe6\x9e\x9cTag\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\xa7\xe5\x88\xb6\xe6\x95\x88\xe6\x9e\x9cTag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "Category", "ControlEffectData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb2\xa1\xe6\x9c\x89\xe5\x88\x99\xe5\xa1\xab""0  \xe6\x9c\x80\xe7\xbb\x88\xe5\x80\xbc\xe4\xb8\xba\xe5\x8f\x91\xe8\xb5\xb7\xe8\x80\x85\xe5\x9f\xba\xe7\xa1\x80\xe5\x80\xbc + \xe9\xa2\x9d\xe5\xa4\x96\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb2\xa1\xe6\x9c\x89\xe5\x88\x99\xe5\xa1\xab""0  \xe6\x9c\x80\xe7\xbb\x88\xe5\x80\xbc\xe4\xb8\xba\xe5\x8f\x91\xe8\xb5\xb7\xe8\x80\x85\xe5\x9f\xba\xe7\xa1\x80\xe5\x80\xbc + \xe9\xa2\x9d\xe5\xa4\x96\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "ControlEffectData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe8\xaf\xbb\xe5\x8f\x96\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe5\xb1\x9e\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe8\xaf\xbb\xe5\x8f\x96\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResistanceAttribute_MetaData[] = {
		{ "Category", "ControlEffectData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe6\x8a\x97\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe6\x8a\x97\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOfDuration_MetaData[] = {
		{ "Category", "ControlEffectData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4 -1\xe4\xb8\xba\xe5\x85\xb6\xe4\xbb\x96\xe6\x95\x88\xe6\x9e\x9c\xe5\x86\xb3\xe5\xae\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4 -1\xe4\xb8\xba\xe5\x85\xb6\xe4\xbb\x96\xe6\x95\x88\xe6\x9e\x9c\xe5\x86\xb3\xe5\xae\x9a" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResistanceAttribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlEffectData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlEffectData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlEffectData, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControlEffectData_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlEffectData, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlEffectData_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlEffectData, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 1212282043
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlEffectData_Statics::NewProp_ResistanceAttribute = { "ResistanceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlEffectData, ResistanceAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResistanceAttribute_MetaData), NewProp_ResistanceAttribute_MetaData) }; // 1212282043
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControlEffectData_Statics::NewProp_TimeOfDuration = { "TimeOfDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlEffectData, TimeOfDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOfDuration_MetaData), NewProp_TimeOfDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlEffectData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlEffectData_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlEffectData_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlEffectData_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlEffectData_Statics::NewProp_ResistanceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlEffectData_Statics::NewProp_TimeOfDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlEffectData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlEffectData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"ControlEffectData",
	Z_Construct_UScriptStruct_FControlEffectData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlEffectData_Statics::PropPointers),
	sizeof(FControlEffectData),
	alignof(FControlEffectData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlEffectData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlEffectData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlEffectData()
{
	if (!Z_Registration_Info_UScriptStruct_FControlEffectData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FControlEffectData.InnerSingleton, Z_Construct_UScriptStruct_FControlEffectData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FControlEffectData.InnerSingleton;
}
// ********** End ScriptStruct FControlEffectData **************************************************

// ********** Begin Enum EEastRimWorldAbilityType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEastRimWorldAbilityType;
static UEnum* EEastRimWorldAbilityType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEastRimWorldAbilityType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEastRimWorldAbilityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EEastRimWorldAbilityType"));
	}
	return Z_Registration_Info_UEnum_EEastRimWorldAbilityType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EEastRimWorldAbilityType>()
{
	return EEastRimWorldAbilityType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActivateAbility.Comment", "//\xe6\xbf\x80\xe6\xb4\xbb\xe7\xb1\xbb\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "ActivateAbility.Name", "EEastRimWorldAbilityType::ActivateAbility" },
		{ "ActivateAbility.ToolTip", "\xe6\xbf\x80\xe6\xb4\xbb\xe7\xb1\xbb\xe6\x8a\x80\xe8\x83\xbd" },
		{ "BeingControlSkill.Comment", "//\xe8\xa2\xab\xe6\x8e\xa7\xe5\x88\xb6\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "BeingControlSkill.Name", "EEastRimWorldAbilityType::BeingControlSkill" },
		{ "BeingControlSkill.ToolTip", "\xe8\xa2\xab\xe6\x8e\xa7\xe5\x88\xb6\xe6\x8a\x80\xe8\x83\xbd" },
		{ "BlueprintType", "true" },
		{ "ChannelAbility.Comment", "//\xe5\xbc\x95\xe5\xaf\xbc\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "ChannelAbility.Name", "EEastRimWorldAbilityType::ChannelAbility" },
		{ "ChannelAbility.ToolTip", "\xe5\xbc\x95\xe5\xaf\xbc\xe6\x8a\x80\xe8\x83\xbd" },
		{ "GeneralAbility.Comment", "//\xe4\xb8\xbb\xe5\x8a\xa8\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "GeneralAbility.Name", "EEastRimWorldAbilityType::GeneralAbility" },
		{ "GeneralAbility.ToolTip", "\xe4\xb8\xbb\xe5\x8a\xa8\xe6\x8a\x80\xe8\x83\xbd" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
		{ "PassiveAbility.Comment", "//\xe8\xa2\xab\xe5\x8a\xa8\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "PassiveAbility.Name", "EEastRimWorldAbilityType::PassiveAbility" },
		{ "PassiveAbility.ToolTip", "\xe8\xa2\xab\xe5\x8a\xa8\xe6\x8a\x80\xe8\x83\xbd" },
		{ "StratagemSkill.Comment", "//\xe6\x88\x98\xe7\x95\xa5\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "StratagemSkill.Name", "EEastRimWorldAbilityType::StratagemSkill" },
		{ "StratagemSkill.ToolTip", "\xe6\x88\x98\xe7\x95\xa5\xe6\x8a\x80\xe8\x83\xbd" },
		{ "ToggleAbility.Comment", "//\xe5\xbc\x80\xe5\x85\xb3\xe7\xb1\xbb\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "ToggleAbility.Name", "EEastRimWorldAbilityType::ToggleAbility" },
		{ "ToggleAbility.ToolTip", "\xe5\xbc\x80\xe5\x85\xb3\xe7\xb1\xbb\xe6\x8a\x80\xe8\x83\xbd" },
		{ "TriggerSkill.Comment", "//\xe8\xa7\xa6\xe5\x8f\x91\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "TriggerSkill.Name", "EEastRimWorldAbilityType::TriggerSkill" },
		{ "TriggerSkill.ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe6\x8a\x80\xe8\x83\xbd" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEastRimWorldAbilityType::PassiveAbility", (int64)EEastRimWorldAbilityType::PassiveAbility },
		{ "EEastRimWorldAbilityType::GeneralAbility", (int64)EEastRimWorldAbilityType::GeneralAbility },
		{ "EEastRimWorldAbilityType::ChannelAbility", (int64)EEastRimWorldAbilityType::ChannelAbility },
		{ "EEastRimWorldAbilityType::ToggleAbility", (int64)EEastRimWorldAbilityType::ToggleAbility },
		{ "EEastRimWorldAbilityType::ActivateAbility", (int64)EEastRimWorldAbilityType::ActivateAbility },
		{ "EEastRimWorldAbilityType::TriggerSkill", (int64)EEastRimWorldAbilityType::TriggerSkill },
		{ "EEastRimWorldAbilityType::StratagemSkill", (int64)EEastRimWorldAbilityType::StratagemSkill },
		{ "EEastRimWorldAbilityType::BeingControlSkill", (int64)EEastRimWorldAbilityType::BeingControlSkill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EEastRimWorldAbilityType",
	"EEastRimWorldAbilityType",
	Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType()
{
	if (!Z_Registration_Info_UEnum_EEastRimWorldAbilityType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEastRimWorldAbilityType.InnerSingleton, Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEastRimWorldAbilityType.InnerSingleton;
}
// ********** End Enum EEastRimWorldAbilityType ****************************************************

// ********** Begin Enum EAbilityAttackType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityAttackType;
static UEnum* EAbilityAttackType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityAttackType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityAttackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EAbilityAttackType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EAbilityAttackType"));
	}
	return Z_Registration_Info_UEnum_EAbilityAttackType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EAbilityAttackType>()
{
	return EAbilityAttackType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EAbilityAttackType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe6\x94\xbb\xe5\x87\xbb\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
		{ "None.Name", "EAbilityAttackType::None" },
		{ "NormalAttack.Name", "EAbilityAttackType::NormalAttack" },
		{ "SkillAttack.Name", "EAbilityAttackType::SkillAttack" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\x94\xbb\xe5\x87\xbb\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityAttackType::NormalAttack", (int64)EAbilityAttackType::NormalAttack },
		{ "EAbilityAttackType::SkillAttack", (int64)EAbilityAttackType::SkillAttack },
		{ "EAbilityAttackType::None", (int64)EAbilityAttackType::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EAbilityAttackType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EAbilityAttackType",
	"EAbilityAttackType",
	Z_Construct_UEnum_GASFramework_EAbilityAttackType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EAbilityAttackType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EAbilityAttackType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EAbilityAttackType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EAbilityAttackType()
{
	if (!Z_Registration_Info_UEnum_EAbilityAttackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityAttackType.InnerSingleton, Z_Construct_UEnum_GASFramework_EAbilityAttackType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityAttackType.InnerSingleton;
}
// ********** End Enum EAbilityAttackType **********************************************************

// ********** Begin Enum ETriggerAbilityEffectType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETriggerAbilityEffectType;
static UEnum* ETriggerAbilityEffectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETriggerAbilityEffectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETriggerAbilityEffectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ETriggerAbilityEffectType"));
	}
	return Z_Registration_Info_UEnum_ETriggerAbilityEffectType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<ETriggerAbilityEffectType>()
{
	return ETriggerAbilityEffectType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\xa6\xe5\x8f\x91\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ContinueApplyEffects.Comment", "//\xe6\x8c\x81\xe7\xbb\xad\xe7\xbb\x99\xe8\x87\xaa\xe8\xba\xab\xe6\x96\xbd\xe5\x8a\xa0GE\n" },
		{ "ContinueApplyEffects.Name", "ETriggerAbilityEffectType::ContinueApplyEffects" },
		{ "ContinueApplyEffects.ToolTip", "\xe6\x8c\x81\xe7\xbb\xad\xe7\xbb\x99\xe8\x87\xaa\xe8\xba\xab\xe6\x96\xbd\xe5\x8a\xa0GE" },
		{ "CounterattackDamage.Comment", "//\xe5\x8f\x8d\xe4\xbc\xa4\n" },
		{ "CounterattackDamage.Name", "ETriggerAbilityEffectType::CounterattackDamage" },
		{ "CounterattackDamage.ToolTip", "\xe5\x8f\x8d\xe4\xbc\xa4" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
		{ "Normal.Comment", "//\xe6\xad\xa3\xe5\xb8\xb8\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe6\x95\x88\xe6\x9e\x9c\n" },
		{ "Normal.Name", "ETriggerAbilityEffectType::Normal" },
		{ "Normal.ToolTip", "\xe6\xad\xa3\xe5\xb8\xb8\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe6\x95\x88\xe6\x9e\x9c" },
		{ "ReduceCDs.Comment", "//\xe5\x87\x8f\xe5\xb0\x91""cd\n" },
		{ "ReduceCDs.Name", "ETriggerAbilityEffectType::ReduceCDs" },
		{ "ReduceCDs.ToolTip", "\xe5\x87\x8f\xe5\xb0\x91""cd" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETriggerAbilityEffectType::Normal", (int64)ETriggerAbilityEffectType::Normal },
		{ "ETriggerAbilityEffectType::ReduceCDs", (int64)ETriggerAbilityEffectType::ReduceCDs },
		{ "ETriggerAbilityEffectType::ContinueApplyEffects", (int64)ETriggerAbilityEffectType::ContinueApplyEffects },
		{ "ETriggerAbilityEffectType::CounterattackDamage", (int64)ETriggerAbilityEffectType::CounterattackDamage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"ETriggerAbilityEffectType",
	"ETriggerAbilityEffectType",
	Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType()
{
	if (!Z_Registration_Info_UEnum_ETriggerAbilityEffectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETriggerAbilityEffectType.InnerSingleton, Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETriggerAbilityEffectType.InnerSingleton;
}
// ********** End Enum ETriggerAbilityEffectType ***************************************************

// ********** Begin Enum EAbilityUsageScenario *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityUsageScenario;
static UEnum* EAbilityUsageScenario_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityUsageScenario.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityUsageScenario.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EAbilityUsageScenario, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EAbilityUsageScenario"));
	}
	return Z_Registration_Info_UEnum_EAbilityUsageScenario.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EAbilityUsageScenario>()
{
	return EAbilityUsageScenario_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EAbilityUsageScenario_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BattleGeneralAbility.Comment", "//\xe6\x88\x98\xe6\x96\x97\n" },
		{ "BattleGeneralAbility.Name", "EAbilityUsageScenario::BattleGeneralAbility" },
		{ "BattleGeneralAbility.ToolTip", "\xe6\x88\x98\xe6\x96\x97" },
		{ "BlueprintType", "true" },
		{ "KeepAwayFromAbility.Comment", "//\xe8\xbf\x9c\xe7\xa6\xbb\xe4\xbd\x8d\xe7\xa7\xbb\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "KeepAwayFromAbility.Name", "EAbilityUsageScenario::KeepAwayFromAbility" },
		{ "KeepAwayFromAbility.ToolTip", "\xe8\xbf\x9c\xe7\xa6\xbb\xe4\xbd\x8d\xe7\xa7\xbb\xe6\x8a\x80\xe8\x83\xbd" },
		{ "ModuleRelativePath", "Public/EastRimWorldAbilityTypes.h" },
		{ "OffensiveDisplacementAbility.Comment", "//\xe8\xbf\x9b\xe6\x94\xbb\xe4\xbd\x8d\xe7\xa7\xbb\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "OffensiveDisplacementAbility.Name", "EAbilityUsageScenario::OffensiveDisplacementAbility" },
		{ "OffensiveDisplacementAbility.ToolTip", "\xe8\xbf\x9b\xe6\x94\xbb\xe4\xbd\x8d\xe7\xa7\xbb\xe6\x8a\x80\xe8\x83\xbd" },
		{ "OtherAbility.Comment", "//\xe5\x85\xb6\xe4\xbb\x96\xe6\x8a\x80\xe8\x83\xbd\n" },
		{ "OtherAbility.Name", "EAbilityUsageScenario::OtherAbility" },
		{ "OtherAbility.ToolTip", "\xe5\x85\xb6\xe4\xbb\x96\xe6\x8a\x80\xe8\x83\xbd" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityUsageScenario::BattleGeneralAbility", (int64)EAbilityUsageScenario::BattleGeneralAbility },
		{ "EAbilityUsageScenario::OtherAbility", (int64)EAbilityUsageScenario::OtherAbility },
		{ "EAbilityUsageScenario::OffensiveDisplacementAbility", (int64)EAbilityUsageScenario::OffensiveDisplacementAbility },
		{ "EAbilityUsageScenario::KeepAwayFromAbility", (int64)EAbilityUsageScenario::KeepAwayFromAbility },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EAbilityUsageScenario_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EAbilityUsageScenario",
	"EAbilityUsageScenario",
	Z_Construct_UEnum_GASFramework_EAbilityUsageScenario_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EAbilityUsageScenario_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EAbilityUsageScenario_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EAbilityUsageScenario_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EAbilityUsageScenario()
{
	if (!Z_Registration_Info_UEnum_EAbilityUsageScenario.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityUsageScenario.InnerSingleton, Z_Construct_UEnum_GASFramework_EAbilityUsageScenario_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityUsageScenario.InnerSingleton;
}
// ********** End Enum EAbilityUsageScenario *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h__Script_GASFramework_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEastRimWorldTargetType_StaticEnum, TEXT("EEastRimWorldTargetType"), &Z_Registration_Info_UEnum_EEastRimWorldTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1331221814U) },
		{ EDamageType_StaticEnum, TEXT("EDamageType"), &Z_Registration_Info_UEnum_EDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 595706218U) },
		{ EEastRimWorldAbilityType_StaticEnum, TEXT("EEastRimWorldAbilityType"), &Z_Registration_Info_UEnum_EEastRimWorldAbilityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1414664311U) },
		{ EAbilityAttackType_StaticEnum, TEXT("EAbilityAttackType"), &Z_Registration_Info_UEnum_EAbilityAttackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2628557562U) },
		{ ETriggerAbilityEffectType_StaticEnum, TEXT("ETriggerAbilityEffectType"), &Z_Registration_Info_UEnum_ETriggerAbilityEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4049514443U) },
		{ EAbilityUsageScenario_StaticEnum, TEXT("EAbilityUsageScenario"), &Z_Registration_Info_UEnum_EAbilityUsageScenario, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4028209178U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayEffect_SetByCaller::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffect_SetByCaller_Statics::NewStructOps, TEXT("GameplayEffect_SetByCaller"), &Z_Registration_Info_UScriptStruct_FGameplayEffect_SetByCaller, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffect_SetByCaller), 3694223367U) },
		{ FAbilityInit::StaticStruct, Z_Construct_UScriptStruct_FAbilityInit_Statics::NewStructOps, TEXT("AbilityInit"), &Z_Registration_Info_UScriptStruct_FAbilityInit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityInit), 2254010044U) },
		{ FEastRimWorldGameplayEffectContainer::StaticStruct, Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer_Statics::NewStructOps, TEXT("EastRimWorldGameplayEffectContainer"), &Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEastRimWorldGameplayEffectContainer), 2161543575U) },
		{ FEastRimWorldGameplayEffectContainerSpec::StaticStruct, Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec_Statics::NewStructOps, TEXT("EastRimWorldGameplayEffectContainerSpec"), &Z_Registration_Info_UScriptStruct_FEastRimWorldGameplayEffectContainerSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEastRimWorldGameplayEffectContainerSpec), 2227113147U) },
		{ FProjectileHitEventData::StaticStruct, Z_Construct_UScriptStruct_FProjectileHitEventData_Statics::NewStructOps, TEXT("ProjectileHitEventData"), &Z_Registration_Info_UScriptStruct_FProjectileHitEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileHitEventData), 90042859U) },
		{ FProjectileHitTargetData::StaticStruct, Z_Construct_UScriptStruct_FProjectileHitTargetData_Statics::NewStructOps, TEXT("ProjectileHitTargetData"), &Z_Registration_Info_UScriptStruct_FProjectileHitTargetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileHitTargetData), 275827936U) },
		{ FControlEffectData::StaticStruct, Z_Construct_UScriptStruct_FControlEffectData_Statics::NewStructOps, TEXT("ControlEffectData"), &Z_Registration_Info_UScriptStruct_FControlEffectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlEffectData), 752987544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h__Script_GASFramework_1872567477(TEXT("/Script/GASFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h__Script_GASFramework_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h__Script_GASFramework_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h__Script_GASFramework_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldAbilityTypes_h__Script_GASFramework_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
