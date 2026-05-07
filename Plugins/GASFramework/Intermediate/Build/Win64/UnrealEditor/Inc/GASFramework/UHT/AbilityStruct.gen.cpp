// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityStruct.h"
#include "AbilityEnum.h"
#include "EastRimWorldAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "ProjectileStruct.h"
#include "ScalableFloat.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAbilityStruct() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EAbilityAttackType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EAbilityUsageScenario();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EDamageType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EItemQuality();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EWeaponType();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityAllTags();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityProjectileStruct();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FControlEffectAnimMontage();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FFormatText();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGameAbilityStruct();
LQUICKFRAME_API UScriptStruct* Z_Construct_UScriptStruct_FDataBase();
UPackage* Z_Construct_UPackage__Script_GASFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FControlEffectAnimMontage *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FControlEffectAnimMontage;
class UScriptStruct* FControlEffectAnimMontage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FControlEffectAnimMontage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FControlEffectAnimMontage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlEffectAnimMontage, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("ControlEffectAnimMontage"));
	}
	return Z_Registration_Info_UScriptStruct_FControlEffectAnimMontage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontages_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.AnimMontage" },
		{ "Category", "ControlEffectAnimMontage" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimMontages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlEffectAnimMontage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::NewProp_AnimMontages_Inner = { "AnimMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::NewProp_AnimMontages = { "AnimMontages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlEffectAnimMontage, AnimMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontages_MetaData), NewProp_AnimMontages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::NewProp_AnimMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::NewProp_AnimMontages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"ControlEffectAnimMontage",
	Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::PropPointers),
	sizeof(FControlEffectAnimMontage),
	alignof(FControlEffectAnimMontage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlEffectAnimMontage()
{
	if (!Z_Registration_Info_UScriptStruct_FControlEffectAnimMontage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FControlEffectAnimMontage.InnerSingleton, Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FControlEffectAnimMontage.InnerSingleton;
}
// ********** End ScriptStruct FControlEffectAnimMontage *******************************************

// ********** Begin ScriptStruct FAbilityAllTags ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAbilityAllTags;
class UScriptStruct* FAbilityAllTags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAbilityAllTags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAbilityAllTags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityAllTags, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("AbilityAllTags"));
	}
	return Z_Registration_Info_UScriptStruct_FAbilityAllTags.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAbilityAllTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTags_MetaData[] = {
		{ "Category", "AbilityTagCategory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\x8c\x85\xe5\x90\xab\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe(\xe5\x8f\xaf\xe9\x80\x9a\xe8\xbf\x87\xe6\xad\xa4\xe6\xa0\x87\xe7\xad\xbe\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b)\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\x8c\x85\xe5\x90\xab\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe(\xe5\x8f\xaf\xe9\x80\x9a\xe8\xbf\x87\xe6\xad\xa4\xe6\xa0\x87\xe7\xad\xbe\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAbilitiesWithTag_MetaData[] = {
		{ "Categories", "AbilityTagCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe6\xbf\x80\xe6\xb4\xbb\xe6\x97\xb6\xe5\xb8\xa6\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\xe4\xbc\x9a\xe8\xa2\xab\xe5\x8f\x96\xe6\xb6\x88\xe3\x80\x82\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe6\xbf\x80\xe6\xb4\xbb\xe6\x97\xb6\xe5\xb8\xa6\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\xe4\xbc\x9a\xe8\xa2\xab\xe5\x8f\x96\xe6\xb6\x88\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockAbilitiesWithTag_MetaData[] = {
		{ "Categories", "AbilityTagCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xa4\x84\xe4\xba\x8e\xe6\xbf\x80\xe6\xb4\xbb\xe7\x8a\xb6\xe6\x80\x81\xe6\x97\xb6\xef\xbc\x8c\xe5\xb8\xa6\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe5\xb0\x86\xe8\xa2\xab\xe9\x98\xbb\xe6\xad\xa2\xe3\x80\x82\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xa4\x84\xe4\xba\x8e\xe6\xbf\x80\xe6\xb4\xbb\xe7\x8a\xb6\xe6\x80\x81\xe6\x97\xb6\xef\xbc\x8c\xe5\xb8\xa6\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe5\xb0\x86\xe8\xa2\xab\xe9\x98\xbb\xe6\xad\xa2\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationOwnedTags_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xa4\x84\xe4\xba\x8e\xe6\xbf\x80\xe6\xb4\xbb\xe7\x8a\xb6\xe6\x80\x81\xe6\x97\xb6\xef\xbc\x8c\xe8\xb5\x8b\xe4\xba\x88\xe7\xbb\x99\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe8\x83\xbd\xe5\x8a\x9b\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe7\xa7\xbb\xe9\x99\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xa4\x84\xe4\xba\x8e\xe6\xbf\x80\xe6\xb4\xbb\xe7\x8a\xb6\xe6\x80\x81\xe6\x97\xb6\xef\xbc\x8c\xe8\xb5\x8b\xe4\xba\x88\xe7\xbb\x99\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85\xe7\x9a\x84\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe8\x83\xbd\xe5\x8a\x9b\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe7\xa7\xbb\xe9\x99\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationRequiredTags_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x85\xe5\xbd\x93\xe6\xbf\x80\xe6\xb4\xbb\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe6\x89\x80\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\x8d\xe8\x83\xbd\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x85\xe5\xbd\x93\xe6\xbf\x80\xe6\xb4\xbb\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe6\x89\x80\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\x8d\xe8\x83\xbd\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa6\x82\xe6\x9e\x9c\xe6\xbf\x80\xe6\xb4\xbb\xe7\x9a\x84\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe4\xbb\xa5\xe4\xb8\x8b\xe4\xbb\xbb\xe4\xbd\x95\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe5\x88\x99\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xb0\x86\xe8\xa2\xab\xe9\x98\xbb\xe6\xad\xa2\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe6\xbf\x80\xe6\xb4\xbb\xe7\x9a\x84\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe4\xbb\xa5\xe4\xb8\x8b\xe4\xbb\xbb\xe4\xbd\x95\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe5\x88\x99\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xb0\x86\xe8\xa2\xab\xe9\x98\xbb\xe6\xad\xa2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRequiredTags_MetaData[] = {
		{ "Categories", "SourceTagsCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x85\xe5\xbd\x93\xe6\xba\x90\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe6\x89\x80\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\x8d\xe8\x83\xbd\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x85\xe5\xbd\x93\xe6\xba\x90\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe6\x89\x80\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\x8d\xe8\x83\xbd\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBlockedTags_MetaData[] = {
		{ "Categories", "SourceTagsCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa6\x82\xe6\x9e\x9c\xe6\xba\x90\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe4\xbb\xa5\xe4\xb8\x8b\xe4\xbb\xbb\xe4\xbd\x95\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe5\x88\x99\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xb0\x86\xe8\xa2\xab\xe9\x98\xbb\xe6\xad\xa2\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe6\xba\x90\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe4\xbb\xa5\xe4\xb8\x8b\xe4\xbb\xbb\xe4\xbd\x95\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe5\x88\x99\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\xe5\xb0\x86\xe8\xa2\xab\xe9\x98\xbb\xe6\xad\xa2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRequiredTags_MetaData[] = {
		{ "Categories", "TargetTagsCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x85\xe5\xbd\x93\xe7\x9b\xae\xe6\xa0\x87\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe6\x89\x80\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\x8d\xe8\x83\xbd\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x85\xe5\xbd\x93\xe7\x9b\xae\xe6\xa0\x87\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe6\x89\x80\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\x8d\xe8\x83\xbd\xe6\xbf\x80\xe6\xb4\xbb\xe6\xad\xa4\xe8\x83\xbd\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBlockedTags_MetaData[] = {
		{ "Categories", "TargetTagsCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa6\x82\xe6\x9e\x9c\xe7\x9b\xae\xe6\xa0\x87\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe4\xbb\xa5\xe4\xb8\x8b\xe4\xbb\xbb\xe4\xbd\x95\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe5\x88\x99\xe6\xad\xa4\xe8\x83\xbd\xe5\xb0\x86\xe8\xa2\xab\xe9\x98\xbb\xe6\xad\xa2\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe7\x9b\xae\xe6\xa0\x87\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85/\xe7\xbb\x84\xe4\xbb\xb6\xe5\x85\xb7\xe6\x9c\x89\xe4\xbb\xa5\xe4\xb8\x8b\xe4\xbb\xbb\xe4\xbd\x95\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe5\x88\x99\xe6\xad\xa4\xe8\x83\xbd\xe5\xb0\x86\xe8\xa2\xab\xe9\x98\xbb\xe6\xad\xa2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationAbilityTags_MetaData[] = {
		{ "Categories", "TargetTagsCategory" },
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xbf\x80\xe6\xb4\xbb\xe8\x83\xbd\xe5\x8a\x9b\xe6\x97\xb6\xe4\xbc\x9a\xe6\xbf\x80\xe6\xb4\xbb\xe6\x89\x80\xe6\x9c\x89\xe4\xbb\xa5\xe4\xb8\x8b\xe6\xa0\x87\xe7\xad\xbe\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xbf\x80\xe6\xb4\xbb\xe8\x83\xbd\xe5\x8a\x9b\xe6\x97\xb6\xe4\xbc\x9a\xe6\xbf\x80\xe6\xb4\xbb\xe6\x89\x80\xe6\x9c\x89\xe4\xbb\xa5\xe4\xb8\x8b\xe6\xa0\x87\xe7\xad\xbe\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelAbilitiesWithTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockAbilitiesWithTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationOwnedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBlockedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBlockedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationAbilityTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityAllTags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTags_MetaData), NewProp_AbilityTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_CancelAbilitiesWithTag = { "CancelAbilitiesWithTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, CancelAbilitiesWithTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAbilitiesWithTag_MetaData), NewProp_CancelAbilitiesWithTag_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_BlockAbilitiesWithTag = { "BlockAbilitiesWithTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, BlockAbilitiesWithTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockAbilitiesWithTag_MetaData), NewProp_BlockAbilitiesWithTag_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_ActivationOwnedTags = { "ActivationOwnedTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, ActivationOwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationOwnedTags_MetaData), NewProp_ActivationOwnedTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_ActivationRequiredTags = { "ActivationRequiredTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, ActivationRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationRequiredTags_MetaData), NewProp_ActivationRequiredTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, ActivationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationBlockedTags_MetaData), NewProp_ActivationBlockedTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_SourceRequiredTags = { "SourceRequiredTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, SourceRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRequiredTags_MetaData), NewProp_SourceRequiredTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_SourceBlockedTags = { "SourceBlockedTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, SourceBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBlockedTags_MetaData), NewProp_SourceBlockedTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_TargetRequiredTags = { "TargetRequiredTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, TargetRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRequiredTags_MetaData), NewProp_TargetRequiredTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_TargetBlockedTags = { "TargetBlockedTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, TargetBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBlockedTags_MetaData), NewProp_TargetBlockedTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_ActivationAbilityTags = { "ActivationAbilityTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityAllTags, ActivationAbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationAbilityTags_MetaData), NewProp_ActivationAbilityTags_MetaData) }; // 2104890724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityAllTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_CancelAbilitiesWithTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_BlockAbilitiesWithTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_ActivationOwnedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_ActivationRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_ActivationBlockedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_SourceRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_SourceBlockedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_TargetRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_TargetBlockedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewProp_ActivationAbilityTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityAllTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityAllTags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"AbilityAllTags",
	Z_Construct_UScriptStruct_FAbilityAllTags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityAllTags_Statics::PropPointers),
	sizeof(FAbilityAllTags),
	alignof(FAbilityAllTags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityAllTags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityAllTags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityAllTags()
{
	if (!Z_Registration_Info_UScriptStruct_FAbilityAllTags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAbilityAllTags.InnerSingleton, Z_Construct_UScriptStruct_FAbilityAllTags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAbilityAllTags.InnerSingleton;
}
// ********** End ScriptStruct FAbilityAllTags *****************************************************

// ********** Begin ScriptStruct FGameAbilityStruct ************************************************
static_assert(std::is_polymorphic<FGameAbilityStruct>() == std::is_polymorphic<FDataBase>(), "USTRUCT FGameAbilityStruct cannot be polymorphic unless super FDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameAbilityStruct;
class UScriptStruct* FGameAbilityStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameAbilityStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameAbilityStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameAbilityStruct, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("GameAbilityStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FGameAbilityStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGameAbilityStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueGameplayTag_MetaData[] = {
		{ "Category", "AbilityTagCategory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*********************************************************\xe5\x85\xac\xe5\x85\xb1******************************************************///\xe6\xad\xa4\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84\xe5\x94\xaf\xe4\xb8\x80\xe6\xa0\x87\xe7\xad\xbe \xe7\x94\xa8\xe4\xba\x8e\xe6\x9f\xa5\xe8\xaf\xa2\xe6\x8a\x80\xe8\x83\xbd\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "******************************************************\xe5\x85\xac\xe5\x85\xb1*****************************************************//\xe6\xad\xa4\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84\xe5\x94\xaf\xe4\xb8\x80\xe6\xa0\x87\xe7\xad\xbe \xe7\x94\xa8\xe4\xba\x8e\xe6\x9f\xa5\xe8\xaf\xa2\xe6\x8a\x80\xe8\x83\xbd\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbility_MetaData[] = {
		{ "Category", "MustFill" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseDistance_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb7\x9d\xe7\xa6\xbb\xe7\x9b\xae\xe6\xa0\x87\xe6\x9c\x80\xe5\xa4\xa7\xe5\x8f\xaf\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe8\xb7\x9d\xe7\xa6\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb7\x9d\xe7\xa6\xbb\xe7\x9b\xae\xe6\xa0\x87\xe6\x9c\x80\xe5\xa4\xa7\xe5\x8f\xaf\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityAllTags_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityAttackType_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe6\x99\xae\xe9\x80\x9a\xe6\x94\xbb\xe5\x87\xbb\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::GeneralAbility" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe6\x99\xae\xe9\x80\x9a\xe6\x94\xbb\xe5\x87\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerToTarget_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x9b\xb4\xe6\x94\xb9\xe7\x9b\xae\xe6\xa0\x87\xe4\xb8\xba\xe8\xa7\xa6\xe5\x8f\x91\xe8\x80\x85\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x9b\xb4\xe6\x94\xb9\xe7\x9b\xae\xe6\xa0\x87\xe4\xb8\xba\xe8\xa7\xa6\xe5\x8f\x91\xe8\x80\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerProbability_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa2\xab\xe5\x8a\xa8\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa2\xab\xe5\x8a\xa8\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOfDuration_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4 -1\xe4\xb8\xba\xe6\xb0\xb8\xe4\xb9\x85 0\xe4\xb8\xba\xe7\x9e\xac\xe6\x97\xb6\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4 -1\xe4\xb8\xba\xe6\xb0\xb8\xe4\xb9\x85 0\xe4\xb8\xba\xe7\x9e\xac\xe6\x97\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerAbilityEffectType_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\xa6\xe5\x8f\x91\xe7\xb1\xbb\xe6\x8a\x80\xe8\x83\xbd\xe6\x95\x88\xe6\x9e\x9c\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe7\xb1\xbb\xe6\x8a\x80\xe8\x83\xbd\xe6\x95\x88\xe6\x9e\x9c\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReduceCDTags_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x87\x8f\xe5\xb0\x91""cd\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbdtag\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::ReduceCDs" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\x8f\xe5\xb0\x91""cd\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbdtag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReduceTime_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x87\x8f\xe5\xb0\x91\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::ReduceCDs" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\x8f\xe5\xb0\x91\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyEffects_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8c\x81\xe7\xbb\xad\xe5\x8f\xa0\xe5\x8a\xa0\xe7\x9a\x84GE\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::ContinueApplyEffects" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x81\xe7\xbb\xad\xe5\x8f\xa0\xe5\x8a\xa0\xe7\x9a\x84GE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntervalTime_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::ContinueApplyEffects" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterattackDamageEffect_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x8d\xe5\xbc\xb9\xe4\xbc\xa4\xe5\xae\xb3GE\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::CounterattackDamage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x8d\xe5\xbc\xb9\xe4\xbc\xa4\xe5\xae\xb3GE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x8d\xe5\xbc\xb9\xe4\xbc\xa4\xe5\xae\xb3\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe5\xa1\xab\xe5\x88\x99\xe7\x9b\xb4\xe6\x8e\xa5\xe5\x8f\x8d\xe5\xbc\xb9\xe5\x8f\x97\xe5\x88\xb0\xe7\x9a\x84\xe4\xbc\xa4\xe5\xae\xb3\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::CounterattackDamage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x8d\xe5\xbc\xb9\xe4\xbc\xa4\xe5\xae\xb3\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe5\xa1\xab\xe5\x88\x99\xe7\x9b\xb4\xe6\x8e\xa5\xe5\x8f\x8d\xe5\xbc\xb9\xe5\x8f\x97\xe5\x88\xb0\xe7\x9a\x84\xe4\xbc\xa4\xe5\xae\xb3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentageDamage_MetaData[] = {
		{ "Category", "MustFill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x8d\xe5\xbc\xb9\xe4\xbc\xa4\xe5\xae\xb3\xe7\x9a\x84\xe6\xaf\x94\xe4\xbe\x8b\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::TriggerSkill && TriggerAbilityEffectType == ETriggerAbilityEffectType::CounterattackDamage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x8d\xe5\xbc\xb9\xe4\xbc\xa4\xe5\xae\xb3\xe7\x9a\x84\xe6\xaf\x94\xe4\xbe\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanResistanceControl_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\xa3\x80\xe6\x9f\xa5\xe6\x8a\xb5\xe6\x8a\x97\n" },
#endif
		{ "EditCondition", "AbilityType == EEastRimWorldAbilityType::BeingControlSkill" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xa3\x80\xe6\x9f\xa5\xe6\x8a\xb5\xe6\x8a\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillName_MetaData[] = {
		{ "Category", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe5\x9b\xbe\xe6\xa0\x87ID\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe5\x9b\xbe\xe6\xa0\x87ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillDescribe_MetaData[] = {
		{ "Category", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe4\xbb\x8b\xe7\xbb\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe4\xbb\x8b\xe7\xbb\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatSkillDesc_MetaData[] = {
		{ "Category", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe6\x8f\x8f\xe8\xbf\xb0\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe6\x96\x87\xe6\x9c\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\x8f\x8f\xe8\xbf\xb0\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe6\x96\x87\xe6\x9c\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[] = {
		{ "Category", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe5\x93\x81\xe8\xb4\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe5\x93\x81\xe8\xb4\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityUsageScenario_MetaData[] = {
		{ "Category", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\xe5\x9c\xba\xe6\x99\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\xe5\x9c\xba\xe6\x99\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeedWeaponTypes_MetaData[] = {
		{ "Category", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe6\x8a\x80\xe8\x83\xbd\xe4\xbd\xbf\xe7\x94\xa8\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe6\xad\xa6\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe6\x8a\x80\xe8\x83\xbd\xe4\xbd\xbf\xe7\x94\xa8\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe6\xad\xa6\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockTargetDirection_MetaData[] = {
		{ "Category", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe9\x94\x81\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xb9\xe5\x90\x91\xe9\x87\x8a\xe6\x94\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x94\x81\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xb9\xe5\x90\x91\xe9\x87\x8a\xe6\x94\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEndAbilityReplayOtherAbilityAnimation_MetaData[] = {
		{ "Category", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\x83\xbd\xe5\x8a\x9b\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe6\x81\xa2\xe5\xa4\x8d\xe5\x85\xb6\xe4\xbb\x96\xe8\x83\xbd\xe5\x8a\x9b\xe5\x8a\xa8\xe7\x94\xbb (\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a\xe5\x87\xbb\xe9\xa3\x9e\xe8\x83\xbd\xe5\x8a\x9b\xe5\x90\x8e\xe6\x81\xa2\xe5\xa4\x8d\xe7\x9c\xa9\xe6\x99\x95\xe5\x8a\xa8\xe7\x94\xbb\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\x83\xbd\xe5\x8a\x9b\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe6\x81\xa2\xe5\xa4\x8d\xe5\x85\xb6\xe4\xbb\x96\xe8\x83\xbd\xe5\x8a\x9b\xe5\x8a\xa8\xe7\x94\xbb (\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a\xe5\x87\xbb\xe9\xa3\x9e\xe8\x83\xbd\xe5\x8a\x9b\xe5\x90\x8e\xe6\x81\xa2\xe5\xa4\x8d\xe7\x9c\xa9\xe6\x99\x95\xe5\x8a\xa8\xe7\x94\xbb\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InjuredProbability_MetaData[] = {
		{ "Category", "Common" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x97\xe5\x88\xb0\xe4\xbc\xa4\xe5\x8a\xbf\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x97\xe5\x88\xb0\xe4\xbc\xa4\xe5\x8a\xbf\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTips_MetaData[] = {
		{ "Category", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe6\x8f\x90\xe7\xa4\xba\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\x8f\x90\xe7\xa4\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHaveCoolDown_MetaData[] = {
		{ "Category", "CoolDown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*****************************************************\xe5\x86\xb7\xe5\x8d\xb4**********************************************************///\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe5\x86\xb7\xe5\x8d\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**************************************************\xe5\x86\xb7\xe5\x8d\xb4*********************************************************//\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe5\x86\xb7\xe5\x8d\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "CoolDown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x86\xb7\xe5\x8d\xb4\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "EditCondition", "bHaveCoolDown == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\xb7\xe5\x8d\xb4\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTags_MetaData[] = {
		{ "Categories", "SetByCaller.CoolDown" },
		{ "Category", "CoolDown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x86\xb7\xe5\x8d\xb4\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "EditCondition", "bHaveCoolDown == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\xb7\xe5\x8d\xb4\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHaveMontage_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*****************************************************\xe5\x8a\xa8\xe7\x94\xbb**********************************************************///\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe5\x8a\xa8\xe7\x94\xbb?!\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**************************************************\xe5\x8a\xa8\xe7\x94\xbb*********************************************************//\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe5\x8a\xa8\xe7\x94\xbb?!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n" },
#endif
		{ "EditCondition", "bHaveMontage == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe6\x8e\xa5\xe6\x94\xb6\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "EditCondition", "bHaveMontage == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe6\x8e\xa5\xe6\x94\xb6\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRate_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe7\x8e\x87 \xe9\xbb\x98\xe8\xae\xa4\xe9\x99\x90\xe5\x88\xb6\xe5\x9c\xa8\xe5\x8d\x81\xe5\x80\x8d\xe5\x86\x85\n" },
#endif
		{ "EditCondition", "bHaveMontage == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe7\x8e\x87 \xe9\xbb\x98\xe8\xae\xa4\xe9\x99\x90\xe5\x88\xb6\xe5\x9c\xa8\xe5\x8d\x81\xe5\x80\x8d\xe5\x86\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRate_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x92\xad\xe6\x94\xbe\xe5\x80\x8d\xe7\x8e\x87\n" },
#endif
		{ "EditCondition", "bHaveMontage == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x92\xad\xe6\x94\xbe\xe5\x80\x8d\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSections_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\x09\n" },
#endif
		{ "EditCondition", "bHaveMontage == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContainerMap_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe6\x95\x88\xe6\x9e\x9c\n" },
#endif
		{ "EditCondition", "bHaveMontage == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe6\x95\x88\xe6\x9e\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateGetSelfGEs_MetaData[] = {
		{ "Category", "GamePlayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*****************************************************GamePlayEffect**********************************************************///\xe6\xbf\x80\xe6\xb4\xbb\xe5\x90\x8e\xe9\xa9\xac\xe4\xb8\x8a\xe7\xbb\x99\xe4\xba\x88\xe8\x87\xaa\xe5\xb7\xb1\xe7\x9a\x84GEs;\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**************************************************GamePlayEffect*********************************************************//\xe6\xbf\x80\xe6\xb4\xbb\xe5\x90\x8e\xe9\xa9\xac\xe4\xb8\x8a\xe7\xbb\x99\xe4\xba\x88\xe8\x87\xaa\xe5\xb7\xb1\xe7\x9a\x84GEs;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateGetAllFriendlyGEs_MetaData[] = {
		{ "Category", "GamePlayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xbf\x80\xe6\xb4\xbb\xe5\x90\x8e\xe7\xbb\x99\xe4\xba\x88\xe8\x87\xaa\xe5\xb7\xb1\xe5\x8f\x8b\xe6\x96\xb9\xe5\x8c\x85\xe6\x8b\xac\xe8\x87\xaa\xe5\xb7\xb1\xe7\x9a\x84 \xef\xbc\x88\xe5\xbc\x83\xe7\x94\xa8\xe7\x9b\xb4\xe6\x8e\xa5\xe7\x94\xa8\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xbf\x80\xe6\xb4\xbb\xe5\x90\x8e\xe7\xbb\x99\xe4\xba\x88\xe8\x87\xaa\xe5\xb7\xb1\xe5\x8f\x8b\xe6\x96\xb9\xe5\x8c\x85\xe6\x8b\xac\xe8\x87\xaa\xe5\xb7\xb1\xe7\x9a\x84 \xef\xbc\x88\xe5\xbc\x83\xe7\x94\xa8\xe7\x9b\xb4\xe6\x8e\xa5\xe7\x94\xa8\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateGetTargetGEs_MetaData[] = {
		{ "Category", "GamePlayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xbf\x80\xe6\xb4\xbb\xe5\x90\x8e\xe7\xbb\x99\xe4\xba\x88\xe7\x9b\xae\xe6\xa0\x87\xe7\x9a\x84GEs\xef\xbc\x88\xe5\xbc\x83\xe7\x94\xa8\xe7\x9b\xb4\xe6\x8e\xa5\xe7\x94\xa8\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xbf\x80\xe6\xb4\xbb\xe5\x90\x8e\xe7\xbb\x99\xe4\xba\x88\xe7\x9b\xae\xe6\xa0\x87\xe7\x9a\x84GEs\xef\xbc\x88\xe5\xbc\x83\xe7\x94\xa8\xe7\x9b\xb4\xe6\x8e\xa5\xe7\x94\xa8\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerProjectile_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*****************************************************\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9**********************************************************///\xe4\xb8\x8d\xe9\x80\x9a\xe8\xbf\x87\xe6\xa0\x87\xe7\xad\xbe\xe7\xad\x89\xe9\xa2\x9d\xe5\xa4\x96\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x8c\xe5\xa7\x8b\xe7\xbb\x88\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**************************************************\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9*********************************************************//\xe4\xb8\x8d\xe9\x80\x9a\xe8\xbf\x87\xe6\xa0\x87\xe7\xad\xbe\xe7\xad\x89\xe9\xa2\x9d\xe5\xa4\x96\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x8c\xe5\xa7\x8b\xe7\xbb\x88\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileStructs_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa7\x8b\xe7\xbb\x88\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\n" },
#endif
		{ "EditCondition", "bTriggerProjectile" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa7\x8b\xe7\xbb\x88\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimationTriggerProjectile_MetaData[] = {
		{ "Category", "Animation Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x94\xbb\xe6\x98\xaf\xe5\x90\xa6\xe4\xbc\x9a\xe8\xa7\xa6\xe5\x8f\x91\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9 \xe9\xa6\x96\xe5\x85\x88\xe9\x9c\x80\xe8\xa6\x81\xe5\x8a\xa8\xe7\x94\xbb\xe9\x85\x8d\xe7\xbd\xae\xe5\xaf\xb9\xe5\xba\x94\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "EditCondition", "bHaveMontage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x94\xbb\xe6\x98\xaf\xe5\x90\xa6\xe4\xbc\x9a\xe8\xa7\xa6\xe5\x8f\x91\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9 \xe9\xa6\x96\xe5\x85\x88\xe9\x9c\x80\xe8\xa6\x81\xe5\x8a\xa8\xe7\x94\xbb\xe9\x85\x8d\xe7\xbd\xae\xe5\xaf\xb9\xe5\xba\x94\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSpawnProjectiles_MetaData[] = {
		{ "Category", "Animation Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa0\x87\xe7\xad\xbe\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\n" },
#endif
		{ "EditCondition", "bHaveMontage && bAnimationTriggerProjectile" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\x87\xe7\xad\xbe\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerSummon_MetaData[] = {
		{ "Category", "Summon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*****************************************************\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9**********************************************************///\xe6\x98\xaf\xe5\x90\xa6\xe4\xbc\x9a\xe8\xa7\xa6\xe5\x8f\x91\xe9\xa2\x9d\xe5\xa4\x96\xe5\x8f\xac\xe5\x94\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**************************************************\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9*********************************************************//\xe6\x98\xaf\xe5\x90\xa6\xe4\xbc\x9a\xe8\xa7\xa6\xe5\x8f\x91\xe9\xa2\x9d\xe5\xa4\x96\xe5\x8f\xac\xe5\x94\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummonMap_MetaData[] = {
		{ "Category", "Summon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\xa6\xe5\x8f\x91\xe5\x90\x8e\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9\xe7\x9a\x84\xe6\x95\xb0\xe7\xbb\x84 \xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9\xe8\xa1\x8c\xe5\x91\xbd\xe5\x90\x8d\xef\xbc\x8c\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "EditCondition", "bTriggerSummon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe5\x90\x8e\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9\xe7\x9a\x84\xe6\x95\xb0\xe7\xbb\x84 \xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9\xe8\xa1\x8c\xe5\x91\xbd\xe5\x90\x8d\xef\xbc\x8c\xe5\x8f\xac\xe5\x94\xa4\xe7\x89\xa9\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInSummonSkill_MetaData[] = {
		{ "Category", "Summon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8\xe5\x82\x80\xe5\x84\xa1\xe6\x8a\x80\xe8\x83\xbdUI\xe4\xb8\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8\xe5\x82\x80\xe5\x84\xa1\xe6\x8a\x80\xe8\x83\xbdUI\xe4\xb8\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddOrgansAttackedWeightMap_MetaData[] = {
		{ "Category", "Organs & Attacked" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*****************************************************\xe6\x94\xbb\xe5\x87\xbb\xe5\xaf\xb9\xe8\xba\xab\xe4\xbd\x93\xe9\x83\xa8\xe4\xbd\x8d\xe7\x9a\x84\xe5\xbd\xb1\xe5\x93\x8d**********************************************************///<\xe8\xba\xab\xe4\xbd\x93\xe9\x83\xa8\xe4\xbd\x8did,\xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84\xe5\x91\xbd\xe4\xb8\xad\xe6\xa6\x82\xe7\x8e\x87\xe6\x9d\x83\xe9\x87\x8d>\xef\xbc\x88\xe6\x94\xbb\xe5\x87\xbb\xe5\x8f\xaf\xe8\x83\xbd\xe5\xaf\xb9\xe8\xba\xab\xe4\xbd\x93\xe5\xa4\x9a\xe4\xb8\xaa\xe9\x83\xa8\xe4\xbd\x8d\xe9\x80\xa0\xe6\x88\x90\xe4\xbc\xa4\xe5\xae\xb3\xef\xbc\x8c\xe4\xbd\x86\xe6\x9c\x80\xe7\xbb\x88\xe5\x8f\xaa\xe4\xbc\x9a\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe9\x83\xa8\xe4\xbd\x8d\xe5\x8f\x97\xe4\xbc\xa4\xe3\x80\x82\xe6\x8c\x89\xe6\x9d\x83\xe9\x87\x8d\xe9\x9a\x8f\xe6\x9c\xba\xe3\x80\x82\xef\xbc\x89[\xe4\xbc\xa4\xe5\xae\xb3\xe5\x88\x86\xe6\x91\x8a\xe6\x98\xaf\xe5\x9c\xa8\xe7\xa1\xae\xe5\xae\x9a\xe4\xbc\xa4\xe5\xae\xb3\xe9\x83\xa8\xe4\xbd\x8d\xe4\xb9\x8b\xe5\x90\x8e\xe8\xbf\x9b\xe8\xa1\x8c\xe7\x9a\x84]\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**************************************************\xe6\x94\xbb\xe5\x87\xbb\xe5\xaf\xb9\xe8\xba\xab\xe4\xbd\x93\xe9\x83\xa8\xe4\xbd\x8d\xe7\x9a\x84\xe5\xbd\xb1\xe5\x93\x8d*********************************************************//<\xe8\xba\xab\xe4\xbd\x93\xe9\x83\xa8\xe4\xbd\x8did,\xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84\xe5\x91\xbd\xe4\xb8\xad\xe6\xa6\x82\xe7\x8e\x87\xe6\x9d\x83\xe9\x87\x8d>\xef\xbc\x88\xe6\x94\xbb\xe5\x87\xbb\xe5\x8f\xaf\xe8\x83\xbd\xe5\xaf\xb9\xe8\xba\xab\xe4\xbd\x93\xe5\xa4\x9a\xe4\xb8\xaa\xe9\x83\xa8\xe4\xbd\x8d\xe9\x80\xa0\xe6\x88\x90\xe4\xbc\xa4\xe5\xae\xb3\xef\xbc\x8c\xe4\xbd\x86\xe6\x9c\x80\xe7\xbb\x88\xe5\x8f\xaa\xe4\xbc\x9a\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe9\x83\xa8\xe4\xbd\x8d\xe5\x8f\x97\xe4\xbc\xa4\xe3\x80\x82\xe6\x8c\x89\xe6\x9d\x83\xe9\x87\x8d\xe9\x9a\x8f\xe6\x9c\xba\xe3\x80\x82\xef\xbc\x89[\xe4\xbc\xa4\xe5\xae\xb3\xe5\x88\x86\xe6\x91\x8a\xe6\x98\xaf\xe5\x9c\xa8\xe7\xa1\xae\xe5\xae\x9a\xe4\xbc\xa4\xe5\xae\xb3\xe9\x83\xa8\xe4\xbd\x8d\xe4\xb9\x8b\xe5\x90\x8e\xe8\xbf\x9b\xe8\xa1\x8c\xe7\x9a\x84]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueGameplayTag;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_GameplayAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UseDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityAllTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityAttackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityAttackType;
	static void NewProp_bTriggerToTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerToTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerProbability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeOfDuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerAbilityEffectType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerAbilityEffectType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReduceCDTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReduceTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ApplyEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplyEffects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntervalTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CounterattackDamageEffect;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentageDamage;
	static void NewProp_bCanResistanceControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanResistanceControl;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SkillName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SkillDescribe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FormatSkillDesc;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityUsageScenario_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityUsageScenario;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NeedWeaponTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NeedWeaponTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NeedWeaponTypes;
	static void NewProp_bLockTargetDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockTargetDirection;
	static void NewProp_bEndAbilityReplayOtherAbilityAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndAbilityReplayOtherAbilityAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InjuredProbability;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AbilityTips;
	static void NewProp_bHaveCoolDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHaveCoolDown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
	static void NewProp_bHaveMontage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHaveMontage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartSections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EffectContainerMap;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivateGetSelfGEs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivateGetSelfGEs;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivateGetAllFriendlyGEs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivateGetAllFriendlyGEs;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivateGetTargetGEs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivateGetTargetGEs;
	static void NewProp_bTriggerProjectile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerProjectile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileStructs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectileStructs;
	static void NewProp_bAnimationTriggerProjectile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimationTriggerProjectile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationSpawnProjectiles_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationSpawnProjectiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AnimationSpawnProjectiles;
	static void NewProp_bTriggerSummon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerSummon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SummonMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SummonMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SummonMap;
	static void NewProp_bShowInSummonSkill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInSummonSkill;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AddOrgansAttackedWeightMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AddOrgansAttackedWeightMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AddOrgansAttackedWeightMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameAbilityStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_UniqueGameplayTag = { "UniqueGameplayTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, UniqueGameplayTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueGameplayTag_MetaData), NewProp_UniqueGameplayTag_MetaData) }; // 2104890724
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_GameplayAbility = { "GameplayAbility", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, GameplayAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbility_MetaData), NewProp_GameplayAbility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_UseDistance = { "UseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, UseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseDistance_MetaData), NewProp_UseDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityAllTags = { "AbilityAllTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, AbilityAllTags), Z_Construct_UScriptStruct_FAbilityAllTags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityAllTags_MetaData), NewProp_AbilityAllTags_MetaData) }; // 639154078
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, AbilityType), Z_Construct_UEnum_GASFramework_EEastRimWorldAbilityType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityType_MetaData), NewProp_AbilityType_MetaData) }; // 1414664311
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityAttackType = { "AbilityAttackType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, AbilityAttackType), Z_Construct_UEnum_GASFramework_EAbilityAttackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityAttackType_MetaData), NewProp_AbilityAttackType_MetaData) }; // 2628557562
void Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerToTarget_SetBit(void* Obj)
{
	((FGameAbilityStruct*)Obj)->bTriggerToTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerToTarget = { "bTriggerToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameAbilityStruct), &Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerToTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerToTarget_MetaData), NewProp_bTriggerToTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_TriggerProbability = { "TriggerProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, TriggerProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerProbability_MetaData), NewProp_TriggerProbability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_TimeOfDuration = { "TimeOfDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, TimeOfDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOfDuration_MetaData), NewProp_TimeOfDuration_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_TriggerAbilityEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_TriggerAbilityEffectType = { "TriggerAbilityEffectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, TriggerAbilityEffectType), Z_Construct_UEnum_GASFramework_ETriggerAbilityEffectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerAbilityEffectType_MetaData), NewProp_TriggerAbilityEffectType_MetaData) }; // 4049514443
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ReduceCDTags = { "ReduceCDTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, ReduceCDTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReduceCDTags_MetaData), NewProp_ReduceCDTags_MetaData) }; // 2104890724
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ReduceTime = { "ReduceTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, ReduceTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReduceTime_MetaData), NewProp_ReduceTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ApplyEffects_Inner = { "ApplyEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ApplyEffects = { "ApplyEffects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, ApplyEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyEffects_MetaData), NewProp_ApplyEffects_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_IntervalTime = { "IntervalTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, IntervalTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntervalTime_MetaData), NewProp_IntervalTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_CounterattackDamageEffect = { "CounterattackDamageEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, CounterattackDamageEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterattackDamageEffect_MetaData), NewProp_CounterattackDamageEffect_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, DamageType), Z_Construct_UEnum_GASFramework_EDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 595706218
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_PercentageDamage = { "PercentageDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, PercentageDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentageDamage_MetaData), NewProp_PercentageDamage_MetaData) };
void Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bCanResistanceControl_SetBit(void* Obj)
{
	((FGameAbilityStruct*)Obj)->bCanResistanceControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bCanResistanceControl = { "bCanResistanceControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameAbilityStruct), &Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bCanResistanceControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanResistanceControl_MetaData), NewProp_bCanResistanceControl_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_SkillName = { "SkillName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, SkillName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillName_MetaData), NewProp_SkillName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_SkillDescribe = { "SkillDescribe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, SkillDescribe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillDescribe_MetaData), NewProp_SkillDescribe_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_FormatSkillDesc = { "FormatSkillDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, FormatSkillDesc), Z_Construct_UScriptStruct_FFormatText, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatSkillDesc_MetaData), NewProp_FormatSkillDesc_MetaData) }; // 2654823324
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, Quality), Z_Construct_UEnum_GASFramework_EItemQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quality_MetaData), NewProp_Quality_MetaData) }; // 291458252
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityUsageScenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityUsageScenario = { "AbilityUsageScenario", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, AbilityUsageScenario), Z_Construct_UEnum_GASFramework_EAbilityUsageScenario, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityUsageScenario_MetaData), NewProp_AbilityUsageScenario_MetaData) }; // 4028209178
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_NeedWeaponTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_NeedWeaponTypes_Inner = { "NeedWeaponTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_GASFramework_EWeaponType, METADATA_PARAMS(0, nullptr) }; // 2123512443
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_NeedWeaponTypes = { "NeedWeaponTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, NeedWeaponTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeedWeaponTypes_MetaData), NewProp_NeedWeaponTypes_MetaData) }; // 2123512443
void Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bLockTargetDirection_SetBit(void* Obj)
{
	((FGameAbilityStruct*)Obj)->bLockTargetDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bLockTargetDirection = { "bLockTargetDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameAbilityStruct), &Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bLockTargetDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockTargetDirection_MetaData), NewProp_bLockTargetDirection_MetaData) };
void Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bEndAbilityReplayOtherAbilityAnimation_SetBit(void* Obj)
{
	((FGameAbilityStruct*)Obj)->bEndAbilityReplayOtherAbilityAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bEndAbilityReplayOtherAbilityAnimation = { "bEndAbilityReplayOtherAbilityAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameAbilityStruct), &Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bEndAbilityReplayOtherAbilityAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEndAbilityReplayOtherAbilityAnimation_MetaData), NewProp_bEndAbilityReplayOtherAbilityAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_InjuredProbability = { "InjuredProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, InjuredProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InjuredProbability_MetaData), NewProp_InjuredProbability_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityTips = { "AbilityTips", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, AbilityTips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTips_MetaData), NewProp_AbilityTips_MetaData) };
void Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bHaveCoolDown_SetBit(void* Obj)
{
	((FGameAbilityStruct*)Obj)->bHaveCoolDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bHaveCoolDown = { "bHaveCoolDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameAbilityStruct), &Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bHaveCoolDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHaveCoolDown_MetaData), NewProp_bHaveCoolDown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, CooldownDuration), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) }; // 3660911330
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTags_MetaData), NewProp_CooldownTags_MetaData) }; // 2104890724
void Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bHaveMontage_SetBit(void* Obj)
{
	((FGameAbilityStruct*)Obj)->bHaveMontage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bHaveMontage = { "bHaveMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameAbilityStruct), &Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bHaveMontage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHaveMontage_MetaData), NewProp_bHaveMontage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Montage_MetaData), NewProp_Montage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 2104890724
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_MaxRate = { "MaxRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, MaxRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRate_MetaData), NewProp_MaxRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_DefaultRate = { "DefaultRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, DefaultRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRate_MetaData), NewProp_DefaultRate_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_StartSections_Inner = { "StartSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_StartSections = { "StartSections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, StartSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSections_MetaData), NewProp_StartSections_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_EffectContainerMap_ValueProp = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEastRimWorldGameplayEffectContainer, METADATA_PARAMS(0, nullptr) }; // 2161543575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_EffectContainerMap_Key_KeyProp = { "EffectContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_EffectContainerMap = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, EffectContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContainerMap_MetaData), NewProp_EffectContainerMap_MetaData) }; // 133831994 2161543575
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetSelfGEs_Inner = { "ActivateGetSelfGEs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetSelfGEs = { "ActivateGetSelfGEs", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, ActivateGetSelfGEs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateGetSelfGEs_MetaData), NewProp_ActivateGetSelfGEs_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetAllFriendlyGEs_Inner = { "ActivateGetAllFriendlyGEs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetAllFriendlyGEs = { "ActivateGetAllFriendlyGEs", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, ActivateGetAllFriendlyGEs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateGetAllFriendlyGEs_MetaData), NewProp_ActivateGetAllFriendlyGEs_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetTargetGEs_Inner = { "ActivateGetTargetGEs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetTargetGEs = { "ActivateGetTargetGEs", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, ActivateGetTargetGEs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateGetTargetGEs_MetaData), NewProp_ActivateGetTargetGEs_MetaData) };
void Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerProjectile_SetBit(void* Obj)
{
	((FGameAbilityStruct*)Obj)->bTriggerProjectile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerProjectile = { "bTriggerProjectile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameAbilityStruct), &Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerProjectile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerProjectile_MetaData), NewProp_bTriggerProjectile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ProjectileStructs_Inner = { "ProjectileStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAbilityProjectileStruct, METADATA_PARAMS(0, nullptr) }; // 2403324607
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ProjectileStructs = { "ProjectileStructs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, ProjectileStructs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileStructs_MetaData), NewProp_ProjectileStructs_MetaData) }; // 2403324607
void Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bAnimationTriggerProjectile_SetBit(void* Obj)
{
	((FGameAbilityStruct*)Obj)->bAnimationTriggerProjectile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bAnimationTriggerProjectile = { "bAnimationTriggerProjectile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameAbilityStruct), &Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bAnimationTriggerProjectile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimationTriggerProjectile_MetaData), NewProp_bAnimationTriggerProjectile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AnimationSpawnProjectiles_ValueProp = { "AnimationSpawnProjectiles", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAbilityProjectileStruct, METADATA_PARAMS(0, nullptr) }; // 2403324607
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AnimationSpawnProjectiles_Key_KeyProp = { "AnimationSpawnProjectiles_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AnimationSpawnProjectiles = { "AnimationSpawnProjectiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, AnimationSpawnProjectiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSpawnProjectiles_MetaData), NewProp_AnimationSpawnProjectiles_MetaData) }; // 133831994 2403324607
void Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerSummon_SetBit(void* Obj)
{
	((FGameAbilityStruct*)Obj)->bTriggerSummon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerSummon = { "bTriggerSummon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameAbilityStruct), &Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerSummon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerSummon_MetaData), NewProp_bTriggerSummon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_SummonMap_ValueProp = { "SummonMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_SummonMap_Key_KeyProp = { "SummonMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_SummonMap = { "SummonMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, SummonMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummonMap_MetaData), NewProp_SummonMap_MetaData) };
void Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bShowInSummonSkill_SetBit(void* Obj)
{
	((FGameAbilityStruct*)Obj)->bShowInSummonSkill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bShowInSummonSkill = { "bShowInSummonSkill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameAbilityStruct), &Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bShowInSummonSkill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInSummonSkill_MetaData), NewProp_bShowInSummonSkill_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AddOrgansAttackedWeightMap_ValueProp = { "AddOrgansAttackedWeightMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AddOrgansAttackedWeightMap_Key_KeyProp = { "AddOrgansAttackedWeightMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AddOrgansAttackedWeightMap = { "AddOrgansAttackedWeightMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAbilityStruct, AddOrgansAttackedWeightMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddOrgansAttackedWeightMap_MetaData), NewProp_AddOrgansAttackedWeightMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_UniqueGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_GameplayAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_UseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityAllTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityAttackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityAttackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_TriggerProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_TimeOfDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_TriggerAbilityEffectType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_TriggerAbilityEffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ReduceCDTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ReduceTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ApplyEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ApplyEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_IntervalTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_CounterattackDamageEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_DamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_PercentageDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bCanResistanceControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_SkillName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_SkillDescribe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_FormatSkillDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_Quality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityUsageScenario_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityUsageScenario,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_NeedWeaponTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_NeedWeaponTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_NeedWeaponTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bLockTargetDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bEndAbilityReplayOtherAbilityAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_InjuredProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AbilityTips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bHaveCoolDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_CooldownTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bHaveMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_EventTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_MaxRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_DefaultRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_StartSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_StartSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_EffectContainerMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_EffectContainerMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_EffectContainerMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetSelfGEs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetSelfGEs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetAllFriendlyGEs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetAllFriendlyGEs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetTargetGEs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ActivateGetTargetGEs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ProjectileStructs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_ProjectileStructs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bAnimationTriggerProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AnimationSpawnProjectiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AnimationSpawnProjectiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AnimationSpawnProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bTriggerSummon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_SummonMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_SummonMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_SummonMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_bShowInSummonSkill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AddOrgansAttackedWeightMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AddOrgansAttackedWeightMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewProp_AddOrgansAttackedWeightMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	Z_Construct_UScriptStruct_FDataBase,
	&NewStructOps,
	"GameAbilityStruct",
	Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::PropPointers),
	sizeof(FGameAbilityStruct),
	alignof(FGameAbilityStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameAbilityStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameAbilityStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameAbilityStruct.InnerSingleton, Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGameAbilityStruct.InnerSingleton;
}
// ********** End ScriptStruct FGameAbilityStruct **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityStruct_h__Script_GASFramework_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlEffectAnimMontage::StaticStruct, Z_Construct_UScriptStruct_FControlEffectAnimMontage_Statics::NewStructOps, TEXT("ControlEffectAnimMontage"), &Z_Registration_Info_UScriptStruct_FControlEffectAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlEffectAnimMontage), 4294510120U) },
		{ FAbilityAllTags::StaticStruct, Z_Construct_UScriptStruct_FAbilityAllTags_Statics::NewStructOps, TEXT("AbilityAllTags"), &Z_Registration_Info_UScriptStruct_FAbilityAllTags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityAllTags), 639154078U) },
		{ FGameAbilityStruct::StaticStruct, Z_Construct_UScriptStruct_FGameAbilityStruct_Statics::NewStructOps, TEXT("GameAbilityStruct"), &Z_Registration_Info_UScriptStruct_FGameAbilityStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameAbilityStruct), 3615339417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityStruct_h__Script_GASFramework_1089111083(TEXT("/Script/GASFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityStruct_h__Script_GASFramework_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityStruct_h__Script_GASFramework_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
