// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterDataStruct.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterDataStruct() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModAnimalAgeStage();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModArmorType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModConfigType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModHitType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModSpeciesType();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModAllTypeItemDrop();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModAnimalActionAbility();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModAnimalData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDataBase();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModHumanData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModIDs();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModOutputData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModOutputDatas();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EModHitType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModHitType;
static UEnum* EModHitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModHitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModHitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModHitType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModHitType"));
	}
	return Z_Registration_Info_UEnum_EModHitType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModHitType>()
{
	return EModHitType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModHitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x97\xe5\x87\xbb\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
		{ "None.Name", "EModHitType::None" },
		{ "NormalBackHit.Comment", "//\xe6\x99\xae\xe9\x80\x9a\xe5\x90\x8e\xe6\x96\xb9\xe5\x8f\x97\xe5\x87\xbb\n" },
		{ "NormalBackHit.Name", "EModHitType::NormalBackHit" },
		{ "NormalBackHit.ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe5\x90\x8e\xe6\x96\xb9\xe5\x8f\x97\xe5\x87\xbb" },
		{ "NormalFrontHit.Comment", "//\xe6\x99\xae\xe9\x80\x9a\xe5\x89\x8d\xe6\x96\xb9\xe5\x8f\x97\xe5\x87\xbb\n" },
		{ "NormalFrontHit.Name", "EModHitType::NormalFrontHit" },
		{ "NormalFrontHit.ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe5\x89\x8d\xe6\x96\xb9\xe5\x8f\x97\xe5\x87\xbb" },
		{ "NormalLeftHit.Comment", "//\xe6\x99\xae\xe9\x80\x9a\xe5\xb7\xa6\xe8\xbe\xb9\xe5\x8f\x97\xe5\x87\xbb\n" },
		{ "NormalLeftHit.Name", "EModHitType::NormalLeftHit" },
		{ "NormalLeftHit.ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe5\xb7\xa6\xe8\xbe\xb9\xe5\x8f\x97\xe5\x87\xbb" },
		{ "NormalRightHit.Comment", "//\xe6\x99\xae\xe9\x80\x9a\xe5\x8f\xb3\xe8\xbe\xb9\xe5\x8f\x97\xe5\x87\xbb\n" },
		{ "NormalRightHit.Name", "EModHitType::NormalRightHit" },
		{ "NormalRightHit.ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe5\x8f\xb3\xe8\xbe\xb9\xe5\x8f\x97\xe5\x87\xbb" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x97\xe5\x87\xbb\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModHitType::None", (int64)EModHitType::None },
		{ "EModHitType::NormalLeftHit", (int64)EModHitType::NormalLeftHit },
		{ "EModHitType::NormalRightHit", (int64)EModHitType::NormalRightHit },
		{ "EModHitType::NormalBackHit", (int64)EModHitType::NormalBackHit },
		{ "EModHitType::NormalFrontHit", (int64)EModHitType::NormalFrontHit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModHitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModHitType",
	"EModHitType",
	Z_Construct_UEnum_CreateModPlugin_EModHitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModHitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModHitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModHitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModHitType()
{
	if (!Z_Registration_Info_UEnum_EModHitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModHitType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModHitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModHitType.InnerSingleton;
}
// ********** End Enum EModHitType *****************************************************************

// ********** Begin Enum EModArmorType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModArmorType;
static UEnum* EModArmorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModArmorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModArmorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModArmorType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModArmorType"));
	}
	return Z_Registration_Info_UEnum_EModArmorType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModArmorType>()
{
	return EModArmorType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModArmorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Armor.Comment", "//\xe7\x9b\x94\xe7\x94\xb2\n" },
		{ "Armor.Name", "EModArmorType::Armor" },
		{ "Armor.ToolTip", "\xe7\x9b\x94\xe7\x94\xb2" },
		{ "BlueprintType", "true" },
		{ "Bracer.Comment", "//\xe6\x8a\xa4\xe8\x85\x95\xef\xbc\x88\xe6\x9c\xaa\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86\xef\xbc\x8c\xe6\x9a\x82\xe6\x97\xb6\xe6\x9c\xaa\xe5\x88\xa0\xe9\x99\xa4\xef\xbc\x89\n" },
		{ "Bracer.Name", "EModArmorType::Bracer" },
		{ "Bracer.ToolTip", "\xe6\x8a\xa4\xe8\x85\x95\xef\xbc\x88\xe6\x9c\xaa\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x86\xef\xbc\x8c\xe6\x9a\x82\xe6\x97\xb6\xe6\x9c\xaa\xe5\x88\xa0\xe9\x99\xa4\xef\xbc\x89" },
		{ "Eyes.Comment", "//\xe7\x9c\xbc\n" },
		{ "Eyes.Name", "EModArmorType::Eyes" },
		{ "Eyes.ToolTip", "\xe7\x9c\xbc" },
		{ "Helmet.Comment", "//\xe5\xa4\xb4\xe7\x9b\x94\n" },
		{ "Helmet.Name", "EModArmorType::Helmet" },
		{ "Helmet.ToolTip", "\xe5\xa4\xb4\xe7\x9b\x94" },
		{ "Max.Comment", "//\xe6\xa0\x87\xe8\xae\xb0\xe6\x9c\xab\xe4\xbd\x8d\n" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EModArmorType::Max" },
		{ "Max.ToolTip", "\xe6\xa0\x87\xe8\xae\xb0\xe6\x9c\xab\xe4\xbd\x8d" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
		{ "None.Name", "EModArmorType::None" },
		{ "Pants.Comment", "//\xe8\xa3\xa4\xe5\xad\x90\n" },
		{ "Pants.Name", "EModArmorType::Pants" },
		{ "Pants.ToolTip", "\xe8\xa3\xa4\xe5\xad\x90" },
		{ "Shoes.Comment", "//\xe9\x9e\x8b\n" },
		{ "Shoes.Name", "EModArmorType::Shoes" },
		{ "Shoes.ToolTip", "\xe9\x9e\x8b" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModArmorType::None", (int64)EModArmorType::None },
		{ "EModArmorType::Helmet", (int64)EModArmorType::Helmet },
		{ "EModArmorType::Bracer", (int64)EModArmorType::Bracer },
		{ "EModArmorType::Armor", (int64)EModArmorType::Armor },
		{ "EModArmorType::Pants", (int64)EModArmorType::Pants },
		{ "EModArmorType::Shoes", (int64)EModArmorType::Shoes },
		{ "EModArmorType::Eyes", (int64)EModArmorType::Eyes },
		{ "EModArmorType::Max", (int64)EModArmorType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModArmorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModArmorType",
	"EModArmorType",
	Z_Construct_UEnum_CreateModPlugin_EModArmorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModArmorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModArmorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModArmorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModArmorType()
{
	if (!Z_Registration_Info_UEnum_EModArmorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModArmorType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModArmorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModArmorType.InnerSingleton;
}
// ********** End Enum EModArmorType ***************************************************************

// ********** Begin ScriptStruct FModHumanData *****************************************************
static_assert(std::is_polymorphic<FModHumanData>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModHumanData cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModHumanData;
class UScriptStruct* FModHumanData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModHumanData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModHumanData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModHumanData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModHumanData"));
	}
	return Z_Registration_Info_UScriptStruct_FModHumanData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModHumanData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizationId_MetaData[] = {
		{ "Category", "CharacterCustomization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8d\x8f\xe4\xba\xba\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84id\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8d\x8f\xe4\xba\xba\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Character Customization" },
		{ "ClampMax", "250" },
		{ "ClampMin", "100" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xba\xab\xe9\xab\x98 */" },
#endif
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xba\xab\xe9\xab\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Character Customization" },
		{ "ClampMax", "200" },
		{ "ClampMin", "30" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbd\x93\xe9\x87\x8d */" },
#endif
		{ "DisplayName", "Weight" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\x93\xe9\x87\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundStory_MetaData[] = {
		{ "Category", "Character Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\x83\x8c\xe6\x99\xaf\xe6\x95\x85\xe4\xba\x8b */" },
#endif
		{ "DisplayName", "Background Story" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe6\x99\xaf\xe6\x95\x85\xe4\xba\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefuseText_MetaData[] = {
		{ "Category", "CharacterCustomization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe9\x9d\xa0\xe6\x97\xb6\xe6\x8b\x92\xe7\xbb\x9d\xe6\x96\x87\xe6\x9c\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe9\x9d\xa0\xe6\x97\xb6\xe6\x8b\x92\xe7\xbb\x9d\xe6\x96\x87\xe6\x9c\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptText_MetaData[] = {
		{ "Category", "CharacterCustomization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x95\xe9\x9d\xa0\xe6\x97\xb6\xe6\x8e\xa5\xe5\x8f\x97\xe6\x96\x87\xe6\x9c\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe9\x9d\xa0\xe6\x97\xb6\xe6\x8e\xa5\xe5\x8f\x97\xe6\x96\x87\xe6\x9c\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinText_MetaData[] = {
		{ "Category", "CharacterCustomization" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitCharacteristicIds_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe7\x89\xb9\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe7\x89\xb9\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFirstName_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe5\xa7\x93\xe6\xb0\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xa7\x93\xe6\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sex_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe6\x80\xa7\xe5\x88\xab true \xe7\x94\xb7\xef\xbc\x9a""false \xe5\xa5\xb3\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe6\x80\xa7\xe5\x88\xab true \xe7\x94\xb7\xef\xbc\x9a""false \xe5\xa5\xb3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe5\xb9\xb4\xe9\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb9\xb4\xe9\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathAnimMontage_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.AnimMontage" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xef\xbc\x8c\xe6\xad\xbb\xe4\xba\xa1\xe6\x97\xb6\xe9\x87\x8a\xe6\x94\xbeGA\xef\xbc\x8cGA\xe4\xbb\x8e\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe7\xbb\x84\xe9\x87\x8c\xe9\x9d\xa2\xe5\x8f\x96\xe5\x8a\xa8\xe7\x94\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xef\xbc\x8c\xe6\xad\xbb\xe4\xba\xa1\xe6\x97\xb6\xe9\x87\x8a\xe6\x94\xbeGA\xef\xbc\x8cGA\xe4\xbb\x8e\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe7\xbb\x84\xe9\x87\x8c\xe9\x9d\xa2\xe5\x8f\x96\xe5\x8a\xa8\xe7\x94\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontageSection_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Avatar_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa4\xb4\xe5\x83\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\xb4\xe5\x83\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Half_Avatar_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Half_TourAvatar_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xaf\x94\xe6\xad\xa6\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaf\x94\xe6\xad\xa6\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallTourAvatar_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xaf\x94\xe6\xad\xa6\xe4\xba\x94\xe4\xba\xba\xe5\xaf\xb9\xe6\x88\x98\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaf\x94\xe6\xad\xa6\xe4\xba\x94\xe4\xba\xba\xe5\xaf\xb9\xe6\x88\x98\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Half_UIAvatar_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UI\xe6\x98\xbe\xe7\xa4\xba\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI\xe6\x98\xbe\xe7\xa4\xba\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitAnimMontage_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.AnimMontage" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x97\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x97\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitWeapon_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe6\xad\xa6\xe5\x99\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe6\xad\xa6\xe5\x99\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitArmor_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe9\x98\xb2\xe5\x85\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe9\x98\xb2\xe5\x85\xb7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x86\xe7\xba\xbf\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x86\xe7\xba\xbf\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xa2\xe5\xa4\xb1\xe8\xa7\x86\xe7\xba\xbf\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xa2\xe5\xa4\xb1\xe8\xa7\x86\xe7\xba\xbf\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportTeamTeamRadius_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9b\xa2\xe9\x98\x9f\xe6\x84\x9f\xe7\x9f\xa5\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\xa2\xe9\x98\x9f\xe6\x84\x9f\xe7\x9f\xa5\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseHealingRate_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9f\xba\xe7\xa1\x80\xe7\x9a\x84\xe6\x84\x88\xe5\x90\x88\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe7\x9a\x84\xe6\x84\x88\xe5\x90\x88\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeTreat_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x83\xbd\xe5\x90\xa6\xe8\xa2\xab\xe6\xb2\xbb\xe7\x96\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xbd\xe5\x90\xa6\xe8\xa2\xab\xe6\xb2\xbb\xe7\x96\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanChooseNewGame_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9b\xe5\xbb\xba\xe6\xb8\xb8\xe6\x88\x8f\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa2\xab\xe9\x80\x89\xe4\xb8\xba\xe9\x98\x9f\xe5\x91\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe6\xb8\xb8\xe6\x88\x8f\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa2\xab\xe9\x80\x89\xe4\xb8\xba\xe9\x98\x9f\xe5\x91\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlEffectAnimMontage_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.AnimMontage" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\xa7\xe5\x88\xb6\xe6\x95\x88\xe6\x9e\x9c\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\xa7\xe5\x88\xb6\xe6\x95\x88\xe6\x9e\x9c\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitInternalStrength_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe5\x86\x85\xe5\x8a\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe5\x86\x85\xe5\x8a\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitMoves_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x90\xba\xe5\xb8\xa6\xe7\x9a\x84\xe6\x8b\x9b\xe5\xbc\x8f \xe5\x9c\xa8\xe8\xa7\xa3\xe9\x94\x81\xe4\xb8\xb9\xe7\x94\xb0\xe5\x90\x8e\xe8\x87\xaa\xe5\x8a\xa8\xe6\x90\xba\xe5\xb8\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x90\xba\xe5\xb8\xa6\xe7\x9a\x84\xe6\x8b\x9b\xe5\xbc\x8f \xe5\x9c\xa8\xe8\xa7\xa3\xe9\x94\x81\xe4\xb8\xb9\xe7\x94\xb0\xe5\x90\x8e\xe8\x87\xaa\xe5\x8a\xa8\xe6\x90\xba\xe5\xb8\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitPassive_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x90\xba\xe5\xb8\xa6\xe7\x9a\x84\xe8\xa2\xab\xe5\x8a\xa8 \xe5\x9c\xa8\xe8\xa7\xa3\xe9\x94\x81\xe4\xb8\xb9\xe7\x94\xb0\xe5\x90\x8e\xe8\x87\xaa\xe5\x8a\xa8\xe6\x90\xba\xe5\xb8\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x90\xba\xe5\xb8\xa6\xe7\x9a\x84\xe8\xa2\xab\xe5\x8a\xa8 \xe5\x9c\xa8\xe8\xa7\xa3\xe9\x94\x81\xe4\xb8\xb9\xe7\x94\xb0\xe5\x90\x8e\xe8\x87\xaa\xe5\x8a\xa8\xe6\x90\xba\xe5\xb8\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb1\x9e\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomizationId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FTextPropertyParams NewProp_BackgroundStory;
	static const UECodeGen_Private::FTextPropertyParams NewProp_RefuseText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AcceptText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_JoinText;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InitCharacteristicIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitCharacteristicIds;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterFirstName;
	static void NewProp_Sex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Sex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Age;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeathAnimMontage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeathMontageSection_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeathMontageSection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Avatar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Half_Avatar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Half_TourAvatar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmallTourAvatar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Half_UIAvatar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitAnimMontage_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HitAnimMontage_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HitAnimMontage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitAnimMontage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InitWeapon;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InitArmor_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitArmor_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitArmor_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InitArmor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReportTeamTeamRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHealingRate;
	static void NewProp_bCanBeTreat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeTreat;
	static void NewProp_bCanChooseNewGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanChooseNewGame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlEffectAnimMontage_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlEffectAnimMontage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ControlEffectAnimMontage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InitInternalStrength;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InitMoves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitMoves;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InitPassive_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitPassive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attributes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Attributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModHumanData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_CustomizationId = { "CustomizationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, CustomizationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizationId_MetaData), NewProp_CustomizationId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_BackgroundStory = { "BackgroundStory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, BackgroundStory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundStory_MetaData), NewProp_BackgroundStory_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_RefuseText = { "RefuseText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, RefuseText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefuseText_MetaData), NewProp_RefuseText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_AcceptText = { "AcceptText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, AcceptText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptText_MetaData), NewProp_AcceptText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_JoinText = { "JoinText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, JoinText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinText_MetaData), NewProp_JoinText_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitCharacteristicIds_Inner = { "InitCharacteristicIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitCharacteristicIds = { "InitCharacteristicIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, InitCharacteristicIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitCharacteristicIds_MetaData), NewProp_InitCharacteristicIds_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_CharacterFirstName = { "CharacterFirstName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, CharacterFirstName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterFirstName_MetaData), NewProp_CharacterFirstName_MetaData) };
void Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Sex_SetBit(void* Obj)
{
	((FModHumanData*)Obj)->Sex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Sex = { "Sex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModHumanData), &Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Sex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sex_MetaData), NewProp_Sex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, Age), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Age_MetaData), NewProp_Age_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_DeathAnimMontage = { "DeathAnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, DeathAnimMontage), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAnimMontage_MetaData), NewProp_DeathAnimMontage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_DeathMontageSection_Inner = { "DeathMontageSection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_DeathMontageSection = { "DeathMontageSection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, DeathMontageSection), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMontageSection_MetaData), NewProp_DeathMontageSection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, Avatar), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Avatar_MetaData), NewProp_Avatar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Half_Avatar = { "Half_Avatar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, Half_Avatar), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Half_Avatar_MetaData), NewProp_Half_Avatar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Half_TourAvatar = { "Half_TourAvatar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, Half_TourAvatar), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Half_TourAvatar_MetaData), NewProp_Half_TourAvatar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_SmallTourAvatar = { "SmallTourAvatar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, SmallTourAvatar), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallTourAvatar_MetaData), NewProp_SmallTourAvatar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Half_UIAvatar = { "Half_UIAvatar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, Half_UIAvatar), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Half_UIAvatar_MetaData), NewProp_Half_UIAvatar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_HitAnimMontage_ValueProp = { "HitAnimMontage", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_HitAnimMontage_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_HitAnimMontage_Key_KeyProp = { "HitAnimMontage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModHitType, METADATA_PARAMS(0, nullptr) }; // 4179007693
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_HitAnimMontage = { "HitAnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, HitAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitAnimMontage_MetaData), NewProp_HitAnimMontage_MetaData) }; // 4179007693
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitWeapon = { "InitWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, InitWeapon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitWeapon_MetaData), NewProp_InitWeapon_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitArmor_ValueProp = { "InitArmor", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitArmor_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitArmor_Key_KeyProp = { "InitArmor_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModArmorType, METADATA_PARAMS(0, nullptr) }; // 1577803322
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitArmor = { "InitArmor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, InitArmor), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitArmor_MetaData), NewProp_InitArmor_MetaData) }; // 1577803322
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, SightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRadius_MetaData), NewProp_SightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, LoseSightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseSightRadius_MetaData), NewProp_LoseSightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_ReportTeamTeamRadius = { "ReportTeamTeamRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, ReportTeamTeamRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportTeamTeamRadius_MetaData), NewProp_ReportTeamTeamRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_BaseHealingRate = { "BaseHealingRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, BaseHealingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseHealingRate_MetaData), NewProp_BaseHealingRate_MetaData) };
void Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_bCanBeTreat_SetBit(void* Obj)
{
	((FModHumanData*)Obj)->bCanBeTreat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_bCanBeTreat = { "bCanBeTreat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModHumanData), &Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_bCanBeTreat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeTreat_MetaData), NewProp_bCanBeTreat_MetaData) };
void Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_bCanChooseNewGame_SetBit(void* Obj)
{
	((FModHumanData*)Obj)->bCanChooseNewGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_bCanChooseNewGame = { "bCanChooseNewGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModHumanData), &Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_bCanChooseNewGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanChooseNewGame_MetaData), NewProp_bCanChooseNewGame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_ControlEffectAnimMontage_ValueProp = { "ControlEffectAnimMontage", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_ControlEffectAnimMontage_Key_KeyProp = { "ControlEffectAnimMontage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_ControlEffectAnimMontage = { "ControlEffectAnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, ControlEffectAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlEffectAnimMontage_MetaData), NewProp_ControlEffectAnimMontage_MetaData) }; // 133831994
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitInternalStrength = { "InitInternalStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, InitInternalStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitInternalStrength_MetaData), NewProp_InitInternalStrength_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitMoves_Inner = { "InitMoves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitMoves = { "InitMoves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, InitMoves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitMoves_MetaData), NewProp_InitMoves_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitPassive_Inner = { "InitPassive", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitPassive = { "InitPassive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, InitPassive), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitPassive_MetaData), NewProp_InitPassive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModHumanData, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModHumanData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_CustomizationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_BackgroundStory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_RefuseText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_AcceptText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_JoinText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitCharacteristicIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitCharacteristicIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_CharacterFirstName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Sex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Age,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_DeathAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_DeathMontageSection_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_DeathMontageSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Avatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Half_Avatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Half_TourAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_SmallTourAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Half_UIAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_HitAnimMontage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_HitAnimMontage_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_HitAnimMontage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_HitAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitArmor_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitArmor_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitArmor_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_SightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_LoseSightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_ReportTeamTeamRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_BaseHealingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_bCanBeTreat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_bCanChooseNewGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_ControlEffectAnimMontage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_ControlEffectAnimMontage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_ControlEffectAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitInternalStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitMoves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitMoves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitPassive_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_InitPassive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Attributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Attributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModHumanData_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModHumanData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModHumanData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModHumanData",
	Z_Construct_UScriptStruct_FModHumanData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModHumanData_Statics::PropPointers),
	sizeof(FModHumanData),
	alignof(FModHumanData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModHumanData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModHumanData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModHumanData()
{
	if (!Z_Registration_Info_UScriptStruct_FModHumanData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModHumanData.InnerSingleton, Z_Construct_UScriptStruct_FModHumanData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModHumanData.InnerSingleton;
}
// ********** End ScriptStruct FModHumanData *******************************************************

// ********** Begin Enum EModAnimalAgeStage ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModAnimalAgeStage;
static UEnum* EModAnimalAgeStage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModAnimalAgeStage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModAnimalAgeStage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModAnimalAgeStage, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModAnimalAgeStage"));
	}
	return Z_Registration_Info_UEnum_EModAnimalAgeStage.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModAnimalAgeStage>()
{
	return EModAnimalAgeStage_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModAnimalAgeStage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Adulthood.DisplayName", "\xe6\x88\x90\xe5\xb9\xb4" },
		{ "Adulthood.Name", "EModAnimalAgeStage::Adulthood" },
		{ "BlueprintType", "true" },
		{ "Childhood.DisplayName", "\xe5\xb9\xbc\xe5\xb9\xb4" },
		{ "Childhood.Name", "EModAnimalAgeStage::Childhood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe6\x88\x90\xe9\x95\xbf\xe9\x98\xb6\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
		{ "None.DisplayName", "\xe6\x97\xa0" },
		{ "None.Name", "EModAnimalAgeStage::None" },
		{ "Oldhood.DisplayName", "\xe8\x80\x81\xe5\xb9\xb4" },
		{ "Oldhood.Name", "EModAnimalAgeStage::Oldhood" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe6\x88\x90\xe9\x95\xbf\xe9\x98\xb6\xe6\xae\xb5" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModAnimalAgeStage::None", (int64)EModAnimalAgeStage::None },
		{ "EModAnimalAgeStage::Childhood", (int64)EModAnimalAgeStage::Childhood },
		{ "EModAnimalAgeStage::Adulthood", (int64)EModAnimalAgeStage::Adulthood },
		{ "EModAnimalAgeStage::Oldhood", (int64)EModAnimalAgeStage::Oldhood },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModAnimalAgeStage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModAnimalAgeStage",
	"EModAnimalAgeStage",
	Z_Construct_UEnum_CreateModPlugin_EModAnimalAgeStage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModAnimalAgeStage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModAnimalAgeStage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModAnimalAgeStage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModAnimalAgeStage()
{
	if (!Z_Registration_Info_UEnum_EModAnimalAgeStage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModAnimalAgeStage.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModAnimalAgeStage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModAnimalAgeStage.InnerSingleton;
}
// ********** End Enum EModAnimalAgeStage **********************************************************

// ********** Begin Enum EModAnimalBodyType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModAnimalBodyType;
static UEnum* EModAnimalBodyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModAnimalBodyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModAnimalBodyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModAnimalBodyType"));
	}
	return Z_Registration_Info_UEnum_EModAnimalBodyType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModAnimalBodyType>()
{
	return EModAnimalBodyType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Big.DisplayName", "\xe5\xa4\xa7\xe5\x9e\x8b" },
		{ "Big.Name", "EModAnimalBodyType::Big" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe4\xbd\x93\xe5\x9e\x8b\n" },
#endif
		{ "Huge.DisplayName", "\xe5\xb7\xa8\xe5\x9e\x8b" },
		{ "Huge.Name", "EModAnimalBodyType::Huge" },
		{ "Mini.DisplayName", "\xe8\xbf\xb7\xe4\xbd\xa0" },
		{ "Mini.Name", "EModAnimalBodyType::Mini" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
		{ "Normal.DisplayName", "\xe4\xb8\xad\xe5\x9e\x8b" },
		{ "Normal.Name", "EModAnimalBodyType::Normal" },
		{ "Small.DisplayName", "\xe5\xb0\x8f\xe5\x9e\x8b" },
		{ "Small.Name", "EModAnimalBodyType::Small" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe4\xbd\x93\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModAnimalBodyType::Normal", (int64)EModAnimalBodyType::Normal },
		{ "EModAnimalBodyType::Big", (int64)EModAnimalBodyType::Big },
		{ "EModAnimalBodyType::Small", (int64)EModAnimalBodyType::Small },
		{ "EModAnimalBodyType::Huge", (int64)EModAnimalBodyType::Huge },
		{ "EModAnimalBodyType::Mini", (int64)EModAnimalBodyType::Mini },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModAnimalBodyType",
	"EModAnimalBodyType",
	Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType()
{
	if (!Z_Registration_Info_UEnum_EModAnimalBodyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModAnimalBodyType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModAnimalBodyType.InnerSingleton;
}
// ********** End Enum EModAnimalBodyType **********************************************************

// ********** Begin Enum EModSpeciesType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModSpeciesType;
static UEnum* EModSpeciesType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModSpeciesType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModSpeciesType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModSpeciesType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModSpeciesType"));
	}
	return Z_Registration_Info_UEnum_EModSpeciesType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModSpeciesType>()
{
	return EModSpeciesType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModSpeciesType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Beast.Comment", "//\xe8\xb5\xb0\xe5\x85\xbd\n" },
		{ "Beast.Name", "EModSpeciesType::Beast" },
		{ "Beast.ToolTip", "\xe8\xb5\xb0\xe5\x85\xbd" },
		{ "Birds.Comment", "//\xe7\xa6\xbd\xe7\xb1\xbb\n" },
		{ "Birds.Name", "EModSpeciesType::Birds" },
		{ "Birds.ToolTip", "\xe7\xa6\xbd\xe7\xb1\xbb" },
		{ "BlueprintType", "true" },
		{ "Human.Comment", "//\xe4\xba\xba\xe7\xb1\xbb\n" },
		{ "Human.Name", "EModSpeciesType::Human" },
		{ "Human.ToolTip", "\xe4\xba\xba\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
		{ "RobotBeast.Comment", "//\xe6\x9c\xba\xe5\x85\xb3\xe5\x85\xbd\n" },
		{ "RobotBeast.Name", "EModSpeciesType::RobotBeast" },
		{ "RobotBeast.ToolTip", "\xe6\x9c\xba\xe5\x85\xb3\xe5\x85\xbd" },
		{ "RobotBirds.Comment", "//\xe6\x9c\xba\xe5\x85\xb3\xe9\xb8\x9f\n" },
		{ "RobotBirds.Name", "EModSpeciesType::RobotBirds" },
		{ "RobotBirds.ToolTip", "\xe6\x9c\xba\xe5\x85\xb3\xe9\xb8\x9f" },
		{ "RobotHuman.Comment", "//\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba\n" },
		{ "RobotHuman.Name", "EModSpeciesType::RobotHuman" },
		{ "RobotHuman.ToolTip", "\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModSpeciesType::Human", (int64)EModSpeciesType::Human },
		{ "EModSpeciesType::Beast", (int64)EModSpeciesType::Beast },
		{ "EModSpeciesType::Birds", (int64)EModSpeciesType::Birds },
		{ "EModSpeciesType::RobotHuman", (int64)EModSpeciesType::RobotHuman },
		{ "EModSpeciesType::RobotBeast", (int64)EModSpeciesType::RobotBeast },
		{ "EModSpeciesType::RobotBirds", (int64)EModSpeciesType::RobotBirds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModSpeciesType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModSpeciesType",
	"EModSpeciesType",
	Z_Construct_UEnum_CreateModPlugin_EModSpeciesType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModSpeciesType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModSpeciesType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModSpeciesType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModSpeciesType()
{
	if (!Z_Registration_Info_UEnum_EModSpeciesType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModSpeciesType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModSpeciesType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModSpeciesType.InnerSingleton;
}
// ********** End Enum EModSpeciesType *************************************************************

// ********** Begin ScriptStruct FModOutputData ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModOutputData;
class UScriptStruct* FModOutputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModOutputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModOutputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModOutputData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModOutputData"));
	}
	return Z_Registration_Info_UScriptStruct_FModOutputData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModOutputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\xb5\x84\xe6\xba\x90\xe4\xba\xa7\xe5\x87\xba\xe6\x95\xb0\xe6\x8d\xae\n */" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe4\xba\xa7\xe5\x87\xba\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "ModOutputData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xba\xa7\xe5\x87\xba\xe7\x89\xa9\xe5\x93\x81ID(\xe5\xaf\xb9\xe5\xba\x94""DT_InventoryItem\xe8\xa1\xa8\xe8\xa1\x8c\xe5\x90\x8d)\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\xa7\xe5\x87\xba\xe7\x89\xa9\xe5\x93\x81ID(\xe5\xaf\xb9\xe5\xba\x94""DT_InventoryItem\xe8\xa1\xa8\xe8\xa1\x8c\xe5\x90\x8d)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "ModOutputData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xba\xa7\xe5\x87\xba\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\xa7\xe5\x87\xba\xe7\x89\xa9\xe5\x93\x81\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[] = {
		{ "Category", "ModOutputData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xba\xa7\xe5\x87\xba\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\xa7\xe5\x87\xba\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "ModOutputData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94\xe8\xa7\x92\xe8\x89\xb2\xe8\xa1\x8c\xe4\xb8\xba,\xe5\x8f\xaa\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe8\xa1\x8c\xe4\xb8\xba\xe8\x83\xbd\xe4\xba\xa7\xe5\x87\xba\xe6\xad\xa4\xe9\xa1\xb9\xe7\x89\xa9\xe5\x93\x81(\xe5\xaf\xb9\xe5\xba\x94GOAP_Action_Data\xe8\xa1\xa8\xe8\xa1\x8c\xe5\x90\x8d)\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe8\xa7\x92\xe8\x89\xb2\xe8\xa1\x8c\xe4\xb8\xba,\xe5\x8f\xaa\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe8\xa1\x8c\xe4\xb8\xba\xe8\x83\xbd\xe4\xba\xa7\xe5\x87\xba\xe6\xad\xa4\xe9\xa1\xb9\xe7\x89\xa9\xe5\x93\x81(\xe5\xaf\xb9\xe5\xba\x94GOAP_Action_Data\xe8\xa1\xa8\xe8\xa1\x8c\xe5\x90\x8d)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightValue_MetaData[] = {
		{ "Category", "ModOutputData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9d\x83\xe9\x87\x8d\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\x83\xe9\x87\x8d\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpendCredits_MetaData[] = {
		{ "Category", "ModOutputData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe4\xb8\x80\xe6\xac\xa1\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe7\xa7\xaf\xe5\x88\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xb8\x80\xe6\xac\xa1\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe7\xa7\xaf\xe5\x88\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "ModOutputData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe5\x8f\xaf\xe9\x87\x87\xe9\x9b\x86\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\x8f\xaf\xe9\x87\x87\xe9\x9b\x86\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeightValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpendCredits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModOutputData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModOutputData, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModOutputData, ItemType), Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 1596875282
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModOutputData, Num), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Num_MetaData), NewProp_Num_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModOutputData, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_WeightValue = { "WeightValue", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModOutputData, WeightValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightValue_MetaData), NewProp_WeightValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_ExpendCredits = { "ExpendCredits", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModOutputData, ExpendCredits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpendCredits_MetaData), NewProp_ExpendCredits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModOutputData, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModOutputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_Num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_WeightValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_ExpendCredits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputData_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModOutputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModOutputData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModOutputData",
	Z_Construct_UScriptStruct_FModOutputData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModOutputData_Statics::PropPointers),
	sizeof(FModOutputData),
	alignof(FModOutputData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModOutputData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModOutputData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModOutputData()
{
	if (!Z_Registration_Info_UScriptStruct_FModOutputData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModOutputData.InnerSingleton, Z_Construct_UScriptStruct_FModOutputData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModOutputData.InnerSingleton;
}
// ********** End ScriptStruct FModOutputData ******************************************************

// ********** Begin ScriptStruct FModOutputDatas ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModOutputDatas;
class UScriptStruct* FModOutputDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModOutputDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModOutputDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModOutputDatas, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModOutputDatas"));
	}
	return Z_Registration_Info_UScriptStruct_FModOutputDatas.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModOutputDatas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Datas_MetaData[] = {
		{ "Category", "ModOutputDatas" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Datas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Datas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModOutputDatas>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModOutputDatas_Statics::NewProp_Datas_Inner = { "Datas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModOutputData, METADATA_PARAMS(0, nullptr) }; // 1721206460
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModOutputDatas_Statics::NewProp_Datas = { "Datas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModOutputDatas, Datas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Datas_MetaData), NewProp_Datas_MetaData) }; // 1721206460
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModOutputDatas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputDatas_Statics::NewProp_Datas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModOutputDatas_Statics::NewProp_Datas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModOutputDatas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModOutputDatas_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModOutputDatas",
	Z_Construct_UScriptStruct_FModOutputDatas_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModOutputDatas_Statics::PropPointers),
	sizeof(FModOutputDatas),
	alignof(FModOutputDatas),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModOutputDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModOutputDatas_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModOutputDatas()
{
	if (!Z_Registration_Info_UScriptStruct_FModOutputDatas.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModOutputDatas.InnerSingleton, Z_Construct_UScriptStruct_FModOutputDatas_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModOutputDatas.InnerSingleton;
}
// ********** End ScriptStruct FModOutputDatas *****************************************************

// ********** Begin ScriptStruct FModIDs ***********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModIDs;
class UScriptStruct* FModIDs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModIDs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModIDs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModIDs, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModIDs"));
	}
	return Z_Registration_Info_UScriptStruct_FModIDs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModIDs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[] = {
		{ "Category", "ModIDs" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_IDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModIDs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModIDs_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModIDs_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModIDs, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDs_MetaData), NewProp_IDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModIDs_Statics::NewProp_IDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModIDs_Statics::NewProp_IDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModIDs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModIDs",
	Z_Construct_UScriptStruct_FModIDs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModIDs_Statics::PropPointers),
	sizeof(FModIDs),
	alignof(FModIDs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModIDs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModIDs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModIDs()
{
	if (!Z_Registration_Info_UScriptStruct_FModIDs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModIDs.InnerSingleton, Z_Construct_UScriptStruct_FModIDs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModIDs.InnerSingleton;
}
// ********** End ScriptStruct FModIDs *************************************************************

// ********** Begin ScriptStruct FModAllTypeItemDrop ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModAllTypeItemDrop;
class UScriptStruct* FModAllTypeItemDrop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModAllTypeItemDrop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModAllTypeItemDrop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModAllTypeItemDrop, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModAllTypeItemDrop"));
	}
	return Z_Registration_Info_UScriptStruct_FModAllTypeItemDrop.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "ModAllTypeItemDrop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\x89\xe8\x90\xbd\xe7\x89\xa9\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\x89\xe8\x90\xbd\xe7\x89\xa9\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropNum_MetaData[] = {
		{ "Category", "ModAllTypeItemDrop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\x89\xe8\x90\xbd\xe7\x89\xa9\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\x89\xe8\x90\xbd\xe7\x89\xa9\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DropNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModAllTypeItemDrop>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAllTypeItemDrop, ItemType), Z_Construct_UEnum_CreateModPlugin_EModGroundInventoryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 1596875282
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::NewProp_DropNum = { "DropNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAllTypeItemDrop, DropNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropNum_MetaData), NewProp_DropNum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::NewProp_DropNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModAllTypeItemDrop",
	Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::PropPointers),
	sizeof(FModAllTypeItemDrop),
	alignof(FModAllTypeItemDrop),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModAllTypeItemDrop()
{
	if (!Z_Registration_Info_UScriptStruct_FModAllTypeItemDrop.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModAllTypeItemDrop.InnerSingleton, Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModAllTypeItemDrop.InnerSingleton;
}
// ********** End ScriptStruct FModAllTypeItemDrop *************************************************

// ********** Begin Enum EModAnimalFunc ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModAnimalFunc;
static UEnum* EModAnimalFunc_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModAnimalFunc.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModAnimalFunc.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModAnimalFunc"));
	}
	return Z_Registration_Info_UEnum_EModAnimalFunc.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModAnimalFunc>()
{
	return EModAnimalFunc_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BeControlled.DisplayName", "\xe8\xa2\xab\xe6\x8e\xa7\xe5\x88\xb6" },
		{ "BeControlled.Name", "EModAnimalFunc::BeControlled" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe5\x8d\x87\xe7\xba\xa7\xe5\x8f\xaf\xe8\x8e\xb7\xe5\xbe\x97\xe7\x9a\x84\xe5\x8a\x9f\xe8\x83\xbd\n" },
#endif
		{ "Follow.DisplayName", "\xe8\xb7\x9f\xe9\x9a\x8f" },
		{ "Follow.Name", "EModAnimalFunc::Follow" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
		{ "Patrol.DisplayName", "\xe5\xb7\xa1\xe9\x80\xbb" },
		{ "Patrol.Name", "EModAnimalFunc::Patrol" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe5\x8d\x87\xe7\xba\xa7\xe5\x8f\xaf\xe8\x8e\xb7\xe5\xbe\x97\xe7\x9a\x84\xe5\x8a\x9f\xe8\x83\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModAnimalFunc::Follow", (int64)EModAnimalFunc::Follow },
		{ "EModAnimalFunc::Patrol", (int64)EModAnimalFunc::Patrol },
		{ "EModAnimalFunc::BeControlled", (int64)EModAnimalFunc::BeControlled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModAnimalFunc",
	"EModAnimalFunc",
	Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc()
{
	if (!Z_Registration_Info_UEnum_EModAnimalFunc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModAnimalFunc.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModAnimalFunc.InnerSingleton;
}
// ********** End Enum EModAnimalFunc **************************************************************

// ********** Begin ScriptStruct FModAnimalData ****************************************************
static_assert(std::is_polymorphic<FModAnimalData>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModAnimalData cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModAnimalData;
class UScriptStruct* FModAnimalData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModAnimalData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModAnimalData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModAnimalData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModAnimalData"));
	}
	return Z_Registration_Info_UScriptStruct_FModAnimalData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModAnimalData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFirstName_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe5\xa7\x93\xe6\xb0\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xa7\x93\xe6\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sex_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe6\x80\xa7\xe5\x88\xab true \xe7\x94\xb7\xef\xbc\x9a""false \xe5\xa5\xb3\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe6\x80\xa7\xe5\x88\xab true \xe7\x94\xb7\xef\xbc\x9a""false \xe5\xa5\xb3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe5\xb9\xb4\xe9\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb9\xb4\xe9\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimGroup_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe5\x88\x86\xe7\xbb\x84\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\x8d\xe5\x90\x8c\xe9\xaa\xa8\xe9\xaa\xbc\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe7\x94\xa8\xe4\xb8\x8d\xe5\x90\x8c\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\x88\x86\xe7\xbb\x84\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\x8d\xe5\x90\x8c\xe9\xaa\xa8\xe9\xaa\xbc\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe7\x94\xa8\xe4\xb8\x8d\xe5\x90\x8c\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb1\x9e\xe6\x80\xa7 key \xe4\xb8\xba\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7\xe8\xa1\xa8 id \xe4\xb8\x8d\xe6\x98\xaf\xe5\xb1\x9e\xe6\x80\xa7\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb1\x9e\xe6\x80\xa7 key \xe4\xb8\xba\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7\xe8\xa1\xa8 id \xe4\xb8\x8d\xe6\x98\xaf\xe5\xb1\x9e\xe6\x80\xa7\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Species_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe7\xa7\x8d\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe8\x8e\xb7\xe5\x8f\x96\xe8\xba\xab\xe4\xbd\x93\xe5\x99\xa8\xe5\xae\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe7\xa7\x8d\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe8\x8e\xb7\xe5\x8f\x96\xe8\xba\xab\xe4\xbd\x93\xe5\x99\xa8\xe5\xae\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathAnimMontage_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.AnimMontage" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xef\xbc\x8c\xe6\xad\xbb\xe4\xba\xa1\xe6\x97\xb6\xe9\x87\x8a\xe6\x94\xbeGA\xef\xbc\x8cGA\xe4\xbb\x8e\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe7\xbb\x84\xe9\x87\x8c\xe9\x9d\xa2\xe5\x8f\x96\xe5\x8a\xa8\xe7\x94\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xef\xbc\x8c\xe6\xad\xbb\xe4\xba\xa1\xe6\x97\xb6\xe9\x87\x8a\xe6\x94\xbeGA\xef\xbc\x8cGA\xe4\xbb\x8e\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe7\xbb\x84\xe9\x87\x8c\xe9\x9d\xa2\xe5\x8f\x96\xe5\x8a\xa8\xe7\x94\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontageSection_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitAnimMontage_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.AnimMontage" },
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x97\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x97\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitWeapon_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe6\xad\xa6\xe5\x99\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe6\xad\xa6\xe5\x99\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitArmor_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe9\x98\xb2\xe5\x85\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe9\x98\xb2\xe5\x85\xb7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultArmor_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xbb\x98\xe8\xae\xa4\xe9\x98\xb2\xe5\x85\xb7 \xe5\x9c\xa8\xe6\xb2\xa1\xe6\x9c\x89\xe8\xa3\x85\xe5\xa4\x87\xe6\x97\xb6\xe7\x94\x9f\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe9\x98\xb2\xe5\x85\xb7 \xe5\x9c\xa8\xe6\xb2\xa1\xe6\x9c\x89\xe8\xa3\x85\xe5\xa4\x87\xe6\x97\xb6\xe7\x94\x9f\xe6\x95\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeapon_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xbb\x98\xe8\xae\xa4\xe6\xad\xa6\xe5\x99\xa8 \xe5\x9c\xa8\xe6\xb2\xa1\xe6\x9c\x89\xe8\xa3\x85\xe5\xa4\x87\xe6\xad\xa6\xe5\x99\xa8\xe6\x97\xb6\xe7\x94\x9f\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe6\xad\xa6\xe5\x99\xa8 \xe5\x9c\xa8\xe6\xb2\xa1\xe6\x9c\x89\xe8\xa3\x85\xe5\xa4\x87\xe6\xad\xa6\xe5\x99\xa8\xe6\x97\xb6\xe7\x94\x9f\xe6\x95\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xbb\xe4\xba\xa1\xe4\xba\xa7\xe5\x87\xba\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe4\xba\xa7\xe5\x87\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x86\xe7\xba\xbf\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x86\xe7\xba\xbf\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xa2\xe5\xa4\xb1\xe8\xa7\x86\xe7\xba\xbf\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xa2\xe5\xa4\xb1\xe8\xa7\x86\xe7\xba\xbf\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportTeamTeamRadius_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9b\xa2\xe9\x98\x9f\xe6\x84\x9f\xe7\x9f\xa5\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\xa2\xe9\x98\x9f\xe6\x84\x9f\xe7\x9f\xa5\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseHealingRate_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9f\xba\xe7\xa1\x80\xe7\x9a\x84\xe6\x84\x88\xe5\x90\x88\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe7\x9a\x84\xe6\x84\x88\xe5\x90\x88\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButcherWorkLoad_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb1\xa0\xe5\xae\xb0\xe9\x9c\x80\xe8\xa6\x81\xe5\xb7\xa5\xe4\xbd\x9c\xe6\x80\xbb\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb1\xa0\xe5\xae\xb0\xe9\x9c\x80\xe8\xa6\x81\xe5\xb7\xa5\xe4\xbd\x9c\xe6\x80\xbb\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeTreat_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x83\xbd\xe5\x90\xa6\xe8\xa2\xab\xe6\xb2\xbb\xe7\x96\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xbd\xe5\x90\xa6\xe8\xa2\xab\xe6\xb2\xbb\xe7\x96\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeKnockDown_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x83\xbd\xe5\x90\xa6\xe8\xa2\xab\xe5\x87\xbb\xe5\x80\x92\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xbd\xe5\x90\xa6\xe8\xa2\xab\xe5\x87\xbb\xe5\x80\x92" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanChooseNewGame_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9b\xe5\xbb\xba\xe6\xb8\xb8\xe6\x88\x8f\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa2\xab\xe9\x80\x89\xe4\xb8\xba\xe9\x98\x9f\xe5\x91\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe6\xb8\xb8\xe6\x88\x8f\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa2\xab\xe9\x80\x89\xe4\xb8\xba\xe9\x98\x9f\xe5\x91\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimalBodyType_MetaData[] = {
		{ "Category", "AnimalBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe4\xbd\x93\xe5\x9e\x8b\xef\xbc\x88\xe4\xbd\x93\xe5\x9e\x8b\xe5\xa4\xa7\xe5\xb0\x8f\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe4\xbd\x93\xe5\x9e\x8b\xef\xbc\x88\xe4\xbd\x93\xe5\x9e\x8b\xe5\xa4\xa7\xe5\xb0\x8f\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitGrowth_MetaData[] = {
		{ "Category", "AnimalBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe6\x88\x90\xe9\x95\xbf\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe6\x88\x90\xe9\x95\xbf\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrowth_MetaData[] = {
		{ "Category", "AnimalBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe6\x88\x90\xe9\x95\xbf\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe6\x88\x90\xe9\x95\xbf\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MustDieGrowth_MetaData[] = {
		{ "Category", "AnimalBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbf\x85\xe9\xa1\xbb\xe6\xad\xbb\xe4\xba\xa1\xe7\x9a\x84\xe6\x88\x90\xe9\x95\xbf\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbf\x85\xe9\xa1\xbb\xe6\xad\xbb\xe4\xba\xa1\xe7\x9a\x84\xe6\x88\x90\xe9\x95\xbf\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddGrowthValueEveryHour_MetaData[] = {
		{ "Category", "AnimalBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xaf\x8f\xe5\xb0\x8f\xe6\x97\xb6\xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84\xe6\x88\x90\xe9\x95\xbf\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaf\x8f\xe5\xb0\x8f\xe6\x97\xb6\xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84\xe6\x88\x90\xe9\x95\xbf\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimalMesh_MetaData[] = {
		{ "AllowedClasses", "SkeletalMesh" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleSize_MetaData[] = {
		{ "Category", "Capsule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x83\xb6\xe5\x9b\x8a\xe4\xbd\x93 x \xe4\xb8\xba\xe5\x8d\x8a\xe5\xbe\x84 y \xe4\xb8\xba \xe9\xab\x98\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xb6\xe5\x9b\x8a\xe4\xbd\x93 x \xe4\xb8\xba\xe5\x8d\x8a\xe5\xbe\x84 y \xe4\xb8\xba \xe9\xab\x98\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshScale_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa8\xa1\xe5\x9e\x8b\xe5\xa4\xa7\xe5\xb0\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa8\xa1\xe5\x9e\x8b\xe5\xa4\xa7\xe5\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshLocationOffset_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x81\x8f\xe7\xa7\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimalBlendSpace_MetaData[] = {
		{ "AllowedClasses", "BlendSpace1D" },
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe8\xa1\x8c\xe8\xb5\xb0\xe6\xb7\xb7\xe5\x90\x88\xe7\xa9\xba\xe9\x97\xb4""1d\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe8\xa1\x8c\xe8\xb5\xb0\xe6\xb7\xb7\xe5\x90\x88\xe7\xa9\xba\xe9\x97\xb4""1d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EatItems_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x83\xbd\xe5\x90\x83\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1ID\n// TMap<\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\xe7\xb1\xbb\xe5\x9e\x8b , \xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84ID>\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\xbd\xe5\x90\x83\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1ID\nTMap<\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\xe7\xb1\xbb\xe5\x9e\x8b , \xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84ID>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NutritionTimer_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbf\x9b\xe9\xa3\x9f\xe6\x97\xb6\xe9\x97\xb4(\xe7\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9b\xe9\xa3\x9f\xe6\x97\xb6\xe9\x97\xb4(\xe7\xa7\x92)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanTame_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe9\xa9\xaf\xe6\x9c\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe9\xa9\xaf\xe6\x9c\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TameRate_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9f\xba\xe7\xa1\x80\xe9\xa9\xaf\xe6\x9c\x8d\xe6\x9c\xba\xe7\x8e\x87\n" },
#endif
		{ "EditCondition", "bCanTame" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe9\xa9\xaf\xe6\x9c\x8d\xe6\x9c\xba\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TameCD_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xa9\xaf\xe6\x9c\x8d\xe5\x8a\xa8\xe7\x89\xa9\xe5\xa4\xb1\xe8\xb4\xa5\xe5\x90\x8e\xe5\xa4\x9a\xe4\xb9\x85\xe4\xb8\x8d\xe8\x83\xbd\xe5\x86\x8d\xe6\xac\xa1\xe9\xa9\xaf\xe6\x9c\x8d\xef\xbc\x9a\xe5\x8d\x95\xe4\xbd\x8d\xe7\xa7\x92\n" },
#endif
		{ "EditCondition", "bCanTame" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa9\xaf\xe6\x9c\x8d\xe5\x8a\xa8\xe7\x89\xa9\xe5\xa4\xb1\xe8\xb4\xa5\xe5\x90\x8e\xe5\xa4\x9a\xe4\xb9\x85\xe4\xb8\x8d\xe8\x83\xbd\xe5\x86\x8d\xe6\xac\xa1\xe9\xa9\xaf\xe6\x9c\x8d\xef\xbc\x9a\xe5\x8d\x95\xe4\xbd\x8d\xe7\xa7\x92" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TameSchedule_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xa9\xaf\xe6\x9c\x8d\xe7\x9a\x84\xe5\xb7\xa5\xe4\xbd\x9c\xe9\x87\x8f\n" },
#endif
		{ "EditCondition", "bCanTame" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa9\xaf\xe6\x9c\x8d\xe7\x9a\x84\xe5\xb7\xa5\xe4\xbd\x9c\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TameLevel_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xa9\xaf\xe6\x9c\x8d\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe7\xad\x89\xe7\xba\xa7""d\n" },
#endif
		{ "EditCondition", "bCanTame" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa9\xaf\xe6\x9c\x8d\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe7\xad\x89\xe7\xba\xa7""d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanTraining_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xae\xad\xe7\xbb\x83\n" },
#endif
		{ "EditCondition", "bCanTame" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xae\xad\xe7\xbb\x83" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainingCD_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xae\xad\xe7\xbb\x83\xe7\x9a\x84""CD\n" },
#endif
		{ "EditConditionHides", "bCanTraining" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xad\xe7\xbb\x83\xe7\x9a\x84""CD" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHaveOutput_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe4\xba\xa7\xe5\x87\xba\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe4\xba\xa7\xe5\x87\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutPutPeriod_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xba\xa7\xe5\x87\xba\xe5\x89\xaf\xe4\xba\xa7\xe5\x93\x81\xe5\x91\xa8\xe6\x9c\x9f\n" },
#endif
		{ "EditConditionHides", "bHaveOutput" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\xa7\xe5\x87\xba\xe5\x89\xaf\xe4\xba\xa7\xe5\x93\x81\xe5\x91\xa8\xe6\x9c\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NutritionInfluenceOutPeriod_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xa5\xa5\xe9\xa5\xbf\xe5\xba\xa6\xe5\xbd\xb1\xe5\x93\x8d\xe4\xba\xa7\xe5\x87\xba\xe5\x89\xaf\xe4\xba\xa7\xe5\x93\x81\xe5\x91\xa8\xe6\x9c\x9f\n" },
#endif
		{ "EditConditionHides", "bHaveOutput" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa5\xa5\xe9\xa5\xbf\xe5\xba\xa6\xe5\xbd\xb1\xe5\x93\x8d\xe4\xba\xa7\xe5\x87\xba\xe5\x89\xaf\xe4\xba\xa7\xe5\x93\x81\xe5\x91\xa8\xe6\x9c\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputProducts_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xba\xa7\xe5\x87\xba\xe7\x9a\x84\xe5\x89\xaf\xe4\xba\xa7\xe5\x93\x81\n" },
#endif
		{ "EditConditionHides", "bHaveOutput" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\xa7\xe5\x87\xba\xe7\x9a\x84\xe5\x89\xaf\xe4\xba\xa7\xe5\x93\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoodInfluenceOutPut_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbf\x83\xe6\x83\x85\xe5\xbd\xb1\xe5\x93\x8d\xe4\xba\xa7\xe5\x87\xba\n" },
#endif
		{ "EditConditionHides", "bCanTame" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbf\x83\xe6\x83\x85\xe5\xbd\xb1\xe5\x93\x8d\xe4\xba\xa7\xe5\x87\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetFuncWhenReachLevel_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\xbe\xe5\x88\xb0\xe5\xa4\x9a\xe5\xb0\x91\xe7\xba\xa7\xe5\x8f\xaf\xe4\xbb\xa5\xe8\x8e\xb7\xe5\xbe\x97\xe7\x9a\x84\xe5\x8a\x9f\xe8\x83\xbd\n" },
#endif
		{ "EditConditionHides", "bCanTame" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\xbe\xe5\x88\xb0\xe5\xa4\x9a\xe5\xb0\x91\xe7\xba\xa7\xe5\x8f\xaf\xe4\xbb\xa5\xe8\x8e\xb7\xe5\xbe\x97\xe7\x9a\x84\xe5\x8a\x9f\xe8\x83\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetAbilityWhenReachLevel_MetaData[] = {
		{ "Category", "Taming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\xbe\xe5\x88\xb0\xe5\xa4\x9a\xe5\xb0\x91\xe7\xba\xa7\xe5\x8f\xaf\xe4\xbb\xa5\xe8\x8e\xb7\xe5\xbe\x97\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd(\xe5\x85\xb3\xe8\x81\x94\xe6\x8a\x80\xe8\x83\xbd\xe8\xa1\xa8)\n" },
#endif
		{ "EditConditionHides", "bCanTame" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\xbe\xe5\x88\xb0\xe5\xa4\x9a\xe5\xb0\x91\xe7\xba\xa7\xe5\x8f\xaf\xe4\xbb\xa5\xe8\x8e\xb7\xe5\xbe\x97\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd(\xe5\x85\xb3\xe8\x81\x94\xe6\x8a\x80\xe8\x83\xbd\xe8\xa1\xa8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitGameplayAbilityByID_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\xe9\x80\x9a\xe8\xbf\x87\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\xe8\x8e\xb7\xe5\x8f\x96\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\xe9\x80\x9a\xe8\xbf\x87\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\xe8\x8e\xb7\xe5\x8f\x96" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeforeObserveName_MetaData[] = {
		{ "Category", "Observe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x82\xe5\xaf\x9f\xe5\x89\x8d\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x82\xe5\xaf\x9f\xe5\x89\x8d\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDropNum_MetaData[] = {
		{ "Category", "DeathDrop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xbb\xe4\xba\xa1\xe5\x90\x8e\xe7\x9a\x84\xe6\x8e\x89\xe8\x90\xbd\xe6\x9c\x80\xe5\xa4\xa7\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x90\x8e\xe7\x9a\x84\xe6\x8e\x89\xe8\x90\xbd\xe6\x9c\x80\xe5\xa4\xa7\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropItemConfig_MetaData[] = {
		{ "Category", "DeathDrop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xbb\xe4\xba\xa1\xe5\x90\x8e\xe7\x9a\x84\xe6\x8e\x89\xe8\x90\xbd\xe9\x85\x8d\xe7\xbd\xae \xe9\x85\x8d\xe7\xbd\xaeID -- \xe6\x8e\x89\xe8\x90\xbd\xe6\x9d\x83\xe9\x87\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x90\x8e\xe7\x9a\x84\xe6\x8e\x89\xe8\x90\xbd\xe9\x85\x8d\xe7\xbd\xae \xe9\x85\x8d\xe7\xbd\xaeID -- \xe6\x8e\x89\xe8\x90\xbd\xe6\x9d\x83\xe9\x87\x8d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterFirstName;
	static void NewProp_Sex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Sex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Age;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AnimGroup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attributes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Attributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Species_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Species;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeathAnimMontage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeathMontageSection_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeathMontageSection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitAnimMontage_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HitAnimMontage_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HitAnimMontage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitAnimMontage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InitWeapon;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InitArmor_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitArmor_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitArmor_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InitArmor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultArmor_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultArmor_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultArmor_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultArmor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultWeapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReportTeamTeamRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHealingRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ButcherWorkLoad;
	static void NewProp_bCanBeTreat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeTreat;
	static void NewProp_bCanBeKnockDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeKnockDown;
	static void NewProp_bCanChooseNewGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanChooseNewGame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimalBodyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimalBodyType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitGrowth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGrowth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MustDieGrowth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddGrowthValueEveryHour;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimalMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshLocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimalBlendSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EatItems_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EatItems_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EatItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EatItems;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NutritionTimer;
	static void NewProp_bCanTame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TameRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TameCD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TameSchedule;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TameLevel;
	static void NewProp_bCanTraining_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTraining;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrainingCD;
	static void NewProp_bHaveOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHaveOutput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPutPeriod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NutritionInfluenceOutPeriod_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NutritionInfluenceOutPeriod_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NutritionInfluenceOutPeriod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputProducts_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputProducts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutputProducts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoodInfluenceOutPut_ValueProp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoodInfluenceOutPut_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MoodInfluenceOutPut;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GetFuncWhenReachLevel_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GetFuncWhenReachLevel_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GetFuncWhenReachLevel_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GetFuncWhenReachLevel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GetAbilityWhenReachLevel_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GetAbilityWhenReachLevel_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GetAbilityWhenReachLevel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InitGameplayAbilityByID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitGameplayAbilityByID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_BeforeObserveName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDropNum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropItemConfig_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DropItemConfig_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DropItemConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModAnimalData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_CharacterFirstName = { "CharacterFirstName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, CharacterFirstName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterFirstName_MetaData), NewProp_CharacterFirstName_MetaData) };
void Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Sex_SetBit(void* Obj)
{
	((FModAnimalData*)Obj)->Sex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Sex = { "Sex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModAnimalData), &Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Sex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sex_MetaData), NewProp_Sex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, Age), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Age_MetaData), NewProp_Age_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AnimGroup = { "AnimGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, AnimGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimGroup_MetaData), NewProp_AnimGroup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Species_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Species = { "Species", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, Species), Z_Construct_UEnum_CreateModPlugin_EModSpeciesType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Species_MetaData), NewProp_Species_MetaData) }; // 3904178621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DeathAnimMontage = { "DeathAnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, DeathAnimMontage), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAnimMontage_MetaData), NewProp_DeathAnimMontage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DeathMontageSection_Inner = { "DeathMontageSection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DeathMontageSection = { "DeathMontageSection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, DeathMontageSection), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMontageSection_MetaData), NewProp_DeathMontageSection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_HitAnimMontage_ValueProp = { "HitAnimMontage", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_HitAnimMontage_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_HitAnimMontage_Key_KeyProp = { "HitAnimMontage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModHitType, METADATA_PARAMS(0, nullptr) }; // 4179007693
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_HitAnimMontage = { "HitAnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, HitAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitAnimMontage_MetaData), NewProp_HitAnimMontage_MetaData) }; // 4179007693
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitWeapon = { "InitWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, InitWeapon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitWeapon_MetaData), NewProp_InitWeapon_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitArmor_ValueProp = { "InitArmor", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitArmor_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitArmor_Key_KeyProp = { "InitArmor_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModArmorType, METADATA_PARAMS(0, nullptr) }; // 1577803322
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitArmor = { "InitArmor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, InitArmor), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitArmor_MetaData), NewProp_InitArmor_MetaData) }; // 1577803322
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DefaultArmor_ValueProp = { "DefaultArmor", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DefaultArmor_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DefaultArmor_Key_KeyProp = { "DefaultArmor_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModArmorType, METADATA_PARAMS(0, nullptr) }; // 1577803322
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DefaultArmor = { "DefaultArmor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, DefaultArmor), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultArmor_MetaData), NewProp_DefaultArmor_MetaData) }; // 1577803322
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DefaultWeapon = { "DefaultWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, DefaultWeapon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeapon_MetaData), NewProp_DefaultWeapon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, Output), Z_Construct_UScriptStruct_FModOutputDatas, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 2344238559
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, SightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRadius_MetaData), NewProp_SightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, LoseSightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseSightRadius_MetaData), NewProp_LoseSightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_ReportTeamTeamRadius = { "ReportTeamTeamRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, ReportTeamTeamRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportTeamTeamRadius_MetaData), NewProp_ReportTeamTeamRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_BaseHealingRate = { "BaseHealingRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, BaseHealingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseHealingRate_MetaData), NewProp_BaseHealingRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_ButcherWorkLoad = { "ButcherWorkLoad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, ButcherWorkLoad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButcherWorkLoad_MetaData), NewProp_ButcherWorkLoad_MetaData) };
void Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanBeTreat_SetBit(void* Obj)
{
	((FModAnimalData*)Obj)->bCanBeTreat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanBeTreat = { "bCanBeTreat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModAnimalData), &Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanBeTreat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeTreat_MetaData), NewProp_bCanBeTreat_MetaData) };
void Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanBeKnockDown_SetBit(void* Obj)
{
	((FModAnimalData*)Obj)->bCanBeKnockDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanBeKnockDown = { "bCanBeKnockDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModAnimalData), &Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanBeKnockDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeKnockDown_MetaData), NewProp_bCanBeKnockDown_MetaData) };
void Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanChooseNewGame_SetBit(void* Obj)
{
	((FModAnimalData*)Obj)->bCanChooseNewGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanChooseNewGame = { "bCanChooseNewGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModAnimalData), &Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanChooseNewGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanChooseNewGame_MetaData), NewProp_bCanChooseNewGame_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AnimalBodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AnimalBodyType = { "AnimalBodyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, AnimalBodyType), Z_Construct_UEnum_CreateModPlugin_EModAnimalBodyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimalBodyType_MetaData), NewProp_AnimalBodyType_MetaData) }; // 2145532515
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitGrowth = { "InitGrowth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, InitGrowth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitGrowth_MetaData), NewProp_InitGrowth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MaxGrowth = { "MaxGrowth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, MaxGrowth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGrowth_MetaData), NewProp_MaxGrowth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MustDieGrowth = { "MustDieGrowth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, MustDieGrowth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MustDieGrowth_MetaData), NewProp_MustDieGrowth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AddGrowthValueEveryHour = { "AddGrowthValueEveryHour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, AddGrowthValueEveryHour), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddGrowthValueEveryHour_MetaData), NewProp_AddGrowthValueEveryHour_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AnimalMesh = { "AnimalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, AnimalMesh), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimalMesh_MetaData), NewProp_AnimalMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_CapsuleSize = { "CapsuleSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, CapsuleSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleSize_MetaData), NewProp_CapsuleSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MeshScale = { "MeshScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, MeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshScale_MetaData), NewProp_MeshScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MeshLocationOffset = { "MeshLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, MeshLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshLocationOffset_MetaData), NewProp_MeshLocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AnimalBlendSpace = { "AnimalBlendSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, AnimalBlendSpace), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimalBlendSpace_MetaData), NewProp_AnimalBlendSpace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_EatItems_ValueProp = { "EatItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModIDs, METADATA_PARAMS(0, nullptr) }; // 3192921264
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_EatItems_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_EatItems_Key_KeyProp = { "EatItems_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModConfigType, METADATA_PARAMS(0, nullptr) }; // 3085131635
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_EatItems = { "EatItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, EatItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EatItems_MetaData), NewProp_EatItems_MetaData) }; // 3085131635 3192921264
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_NutritionTimer = { "NutritionTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, NutritionTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NutritionTimer_MetaData), NewProp_NutritionTimer_MetaData) };
void Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanTame_SetBit(void* Obj)
{
	((FModAnimalData*)Obj)->bCanTame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanTame = { "bCanTame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModAnimalData), &Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanTame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanTame_MetaData), NewProp_bCanTame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_TameRate = { "TameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, TameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TameRate_MetaData), NewProp_TameRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_TameCD = { "TameCD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, TameCD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TameCD_MetaData), NewProp_TameCD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_TameSchedule = { "TameSchedule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, TameSchedule), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TameSchedule_MetaData), NewProp_TameSchedule_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_TameLevel = { "TameLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, TameLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TameLevel_MetaData), NewProp_TameLevel_MetaData) };
void Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanTraining_SetBit(void* Obj)
{
	((FModAnimalData*)Obj)->bCanTraining = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanTraining = { "bCanTraining", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModAnimalData), &Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanTraining_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanTraining_MetaData), NewProp_bCanTraining_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_TrainingCD = { "TrainingCD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, TrainingCD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainingCD_MetaData), NewProp_TrainingCD_MetaData) };
void Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bHaveOutput_SetBit(void* Obj)
{
	((FModAnimalData*)Obj)->bHaveOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bHaveOutput = { "bHaveOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModAnimalData), &Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bHaveOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHaveOutput_MetaData), NewProp_bHaveOutput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_OutPutPeriod = { "OutPutPeriod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, OutPutPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutPutPeriod_MetaData), NewProp_OutPutPeriod_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_NutritionInfluenceOutPeriod_ValueProp = { "NutritionInfluenceOutPeriod", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_NutritionInfluenceOutPeriod_Key_KeyProp = { "NutritionInfluenceOutPeriod_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_NutritionInfluenceOutPeriod = { "NutritionInfluenceOutPeriod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, NutritionInfluenceOutPeriod), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NutritionInfluenceOutPeriod_MetaData), NewProp_NutritionInfluenceOutPeriod_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_OutputProducts_ValueProp = { "OutputProducts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModAllTypeItemDrop, METADATA_PARAMS(0, nullptr) }; // 3703179762
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_OutputProducts_Key_KeyProp = { "OutputProducts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_OutputProducts = { "OutputProducts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, OutputProducts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputProducts_MetaData), NewProp_OutputProducts_MetaData) }; // 3703179762
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MoodInfluenceOutPut_ValueProp = { "MoodInfluenceOutPut", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MoodInfluenceOutPut_Key_KeyProp = { "MoodInfluenceOutPut_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MoodInfluenceOutPut = { "MoodInfluenceOutPut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, MoodInfluenceOutPut), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoodInfluenceOutPut_MetaData), NewProp_MoodInfluenceOutPut_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetFuncWhenReachLevel_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetFuncWhenReachLevel_ValueProp = { "GetFuncWhenReachLevel", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_CreateModPlugin_EModAnimalFunc, METADATA_PARAMS(0, nullptr) }; // 3644062840
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetFuncWhenReachLevel_Key_KeyProp = { "GetFuncWhenReachLevel_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetFuncWhenReachLevel = { "GetFuncWhenReachLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, GetFuncWhenReachLevel), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetFuncWhenReachLevel_MetaData), NewProp_GetFuncWhenReachLevel_MetaData) }; // 3644062840
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetAbilityWhenReachLevel_ValueProp = { "GetAbilityWhenReachLevel", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetAbilityWhenReachLevel_Key_KeyProp = { "GetAbilityWhenReachLevel_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetAbilityWhenReachLevel = { "GetAbilityWhenReachLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, GetAbilityWhenReachLevel), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetAbilityWhenReachLevel_MetaData), NewProp_GetAbilityWhenReachLevel_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitGameplayAbilityByID_Inner = { "InitGameplayAbilityByID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitGameplayAbilityByID = { "InitGameplayAbilityByID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, InitGameplayAbilityByID), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitGameplayAbilityByID_MetaData), NewProp_InitGameplayAbilityByID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_BeforeObserveName = { "BeforeObserveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, BeforeObserveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeforeObserveName_MetaData), NewProp_BeforeObserveName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MaxDropNum = { "MaxDropNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, MaxDropNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDropNum_MetaData), NewProp_MaxDropNum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DropItemConfig_ValueProp = { "DropItemConfig", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DropItemConfig_Key_KeyProp = { "DropItemConfig_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DropItemConfig = { "DropItemConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalData, DropItemConfig), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropItemConfig_MetaData), NewProp_DropItemConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModAnimalData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_CharacterFirstName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Sex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Age,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AnimGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Attributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Attributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Species_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Species,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DeathAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DeathMontageSection_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DeathMontageSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_HitAnimMontage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_HitAnimMontage_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_HitAnimMontage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_HitAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitArmor_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitArmor_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitArmor_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DefaultArmor_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DefaultArmor_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DefaultArmor_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DefaultArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DefaultWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_SightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_LoseSightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_ReportTeamTeamRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_BaseHealingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_ButcherWorkLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanBeTreat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanBeKnockDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanChooseNewGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AnimalBodyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AnimalBodyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitGrowth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MaxGrowth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MustDieGrowth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AddGrowthValueEveryHour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AnimalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_CapsuleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MeshScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MeshLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_AnimalBlendSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_EatItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_EatItems_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_EatItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_EatItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_NutritionTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanTame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_TameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_TameCD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_TameSchedule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_TameLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bCanTraining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_TrainingCD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_bHaveOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_OutPutPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_NutritionInfluenceOutPeriod_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_NutritionInfluenceOutPeriod_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_NutritionInfluenceOutPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_OutputProducts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_OutputProducts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_OutputProducts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MoodInfluenceOutPut_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MoodInfluenceOutPut_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MoodInfluenceOutPut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetFuncWhenReachLevel_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetFuncWhenReachLevel_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetFuncWhenReachLevel_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetFuncWhenReachLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetAbilityWhenReachLevel_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetAbilityWhenReachLevel_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_GetAbilityWhenReachLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitGameplayAbilityByID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_InitGameplayAbilityByID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_BeforeObserveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_MaxDropNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DropItemConfig_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DropItemConfig_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalData_Statics::NewProp_DropItemConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAnimalData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModAnimalData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModAnimalData",
	Z_Construct_UScriptStruct_FModAnimalData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAnimalData_Statics::PropPointers),
	sizeof(FModAnimalData),
	alignof(FModAnimalData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAnimalData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModAnimalData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModAnimalData()
{
	if (!Z_Registration_Info_UScriptStruct_FModAnimalData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModAnimalData.InnerSingleton, Z_Construct_UScriptStruct_FModAnimalData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModAnimalData.InnerSingleton;
}
// ********** End ScriptStruct FModAnimalData ******************************************************

// ********** Begin ScriptStruct FModCharacterActionAbilityAnimSections ****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModCharacterActionAbilityAnimSections;
class UScriptStruct* FModCharacterActionAbilityAnimSections::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacterActionAbilityAnimSections.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModCharacterActionAbilityAnimSections.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModCharacterActionAbilityAnimSections"));
	}
	return Z_Registration_Info_UScriptStruct_FModCharacterActionAbilityAnimSections.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorStartSections_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x80\xe5\xa7\x8b\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorLoopSections_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorEndSections_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9d\x9f\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDistinguishSex_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8c\xba\xe5\x88\x86\xe6\x80\xa7\xe5\x88\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8c\xba\xe5\x88\x86\xe6\x80\xa7\xe5\x88\xab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WomanBehaviorStartSections_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x80\xe5\xa7\x8b\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "EditCondition", "bDistinguishSex" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe7\x9a\x84\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WomanBehaviorLoopSections_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "EditCondition", "bDistinguishSex" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WomanBehaviorEndSections_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9d\x9f\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "EditCondition", "bDistinguishSex" },
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BehaviorStartSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BehaviorStartSections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BehaviorLoopSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BehaviorLoopSections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BehaviorEndSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BehaviorEndSections;
	static void NewProp_bDistinguishSex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDistinguishSex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WomanBehaviorStartSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WomanBehaviorStartSections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WomanBehaviorLoopSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WomanBehaviorLoopSections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WomanBehaviorEndSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WomanBehaviorEndSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModCharacterActionAbilityAnimSections>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorStartSections_Inner = { "BehaviorStartSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorStartSections = { "BehaviorStartSections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterActionAbilityAnimSections, BehaviorStartSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorStartSections_MetaData), NewProp_BehaviorStartSections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorLoopSections_Inner = { "BehaviorLoopSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorLoopSections = { "BehaviorLoopSections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterActionAbilityAnimSections, BehaviorLoopSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorLoopSections_MetaData), NewProp_BehaviorLoopSections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorEndSections_Inner = { "BehaviorEndSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorEndSections = { "BehaviorEndSections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterActionAbilityAnimSections, BehaviorEndSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorEndSections_MetaData), NewProp_BehaviorEndSections_MetaData) };
void Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_bDistinguishSex_SetBit(void* Obj)
{
	((FModCharacterActionAbilityAnimSections*)Obj)->bDistinguishSex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_bDistinguishSex = { "bDistinguishSex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModCharacterActionAbilityAnimSections), &Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_bDistinguishSex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDistinguishSex_MetaData), NewProp_bDistinguishSex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorStartSections_Inner = { "WomanBehaviorStartSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorStartSections = { "WomanBehaviorStartSections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterActionAbilityAnimSections, WomanBehaviorStartSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WomanBehaviorStartSections_MetaData), NewProp_WomanBehaviorStartSections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorLoopSections_Inner = { "WomanBehaviorLoopSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorLoopSections = { "WomanBehaviorLoopSections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterActionAbilityAnimSections, WomanBehaviorLoopSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WomanBehaviorLoopSections_MetaData), NewProp_WomanBehaviorLoopSections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorEndSections_Inner = { "WomanBehaviorEndSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorEndSections = { "WomanBehaviorEndSections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacterActionAbilityAnimSections, WomanBehaviorEndSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WomanBehaviorEndSections_MetaData), NewProp_WomanBehaviorEndSections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorStartSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorStartSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorLoopSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorLoopSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorEndSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_BehaviorEndSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_bDistinguishSex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorStartSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorStartSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorLoopSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorLoopSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorEndSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewProp_WomanBehaviorEndSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModCharacterActionAbilityAnimSections",
	Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::PropPointers),
	sizeof(FModCharacterActionAbilityAnimSections),
	alignof(FModCharacterActionAbilityAnimSections),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacterActionAbilityAnimSections.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModCharacterActionAbilityAnimSections.InnerSingleton, Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModCharacterActionAbilityAnimSections.InnerSingleton;
}
// ********** End ScriptStruct FModCharacterActionAbilityAnimSections ******************************

// ********** Begin ScriptStruct FModAnimalActionAbility *******************************************
static_assert(std::is_polymorphic<FModAnimalActionAbility>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModAnimalActionAbility cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModAnimalActionAbility;
class UScriptStruct* FModAnimalActionAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModAnimalActionAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModAnimalActionAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModAnimalActionAbility, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModAnimalActionAbility"));
	}
	return Z_Registration_Info_UScriptStruct_FModAnimalActionAbility.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x8a\xa8\xe7\x89\xa9""ActionAbility\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\n */" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9""ActionAbility\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorStartAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorAnimSections_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x94\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe7\x89\x87\xe6\xae\xb5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BehaviorStartAnimMontage_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BehaviorStartAnimMontage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BehaviorStartAnimMontage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BehaviorAnimSections_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BehaviorAnimSections_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BehaviorAnimSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModAnimalActionAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorStartAnimMontage_ValueProp = { "BehaviorStartAnimMontage", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorStartAnimMontage_Key_KeyProp = { "BehaviorStartAnimMontage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorStartAnimMontage = { "BehaviorStartAnimMontage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalActionAbility, BehaviorStartAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorStartAnimMontage_MetaData), NewProp_BehaviorStartAnimMontage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorAnimSections_ValueProp = { "BehaviorAnimSections", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections, METADATA_PARAMS(0, nullptr) }; // 1480376237
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorAnimSections_Key_KeyProp = { "BehaviorAnimSections_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorAnimSections = { "BehaviorAnimSections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModAnimalActionAbility, BehaviorAnimSections), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorAnimSections_MetaData), NewProp_BehaviorAnimSections_MetaData) }; // 1480376237
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorStartAnimMontage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorStartAnimMontage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorStartAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorAnimSections_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorAnimSections_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewProp_BehaviorAnimSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModAnimalActionAbility",
	Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::PropPointers),
	sizeof(FModAnimalActionAbility),
	alignof(FModAnimalActionAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModAnimalActionAbility()
{
	if (!Z_Registration_Info_UScriptStruct_FModAnimalActionAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModAnimalActionAbility.InnerSingleton, Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModAnimalActionAbility.InnerSingleton;
}
// ********** End ScriptStruct FModAnimalActionAbility *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h__Script_CreateModPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModHitType_StaticEnum, TEXT("EModHitType"), &Z_Registration_Info_UEnum_EModHitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4179007693U) },
		{ EModArmorType_StaticEnum, TEXT("EModArmorType"), &Z_Registration_Info_UEnum_EModArmorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1577803322U) },
		{ EModAnimalAgeStage_StaticEnum, TEXT("EModAnimalAgeStage"), &Z_Registration_Info_UEnum_EModAnimalAgeStage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2757686894U) },
		{ EModAnimalBodyType_StaticEnum, TEXT("EModAnimalBodyType"), &Z_Registration_Info_UEnum_EModAnimalBodyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2145532515U) },
		{ EModSpeciesType_StaticEnum, TEXT("EModSpeciesType"), &Z_Registration_Info_UEnum_EModSpeciesType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3904178621U) },
		{ EModAnimalFunc_StaticEnum, TEXT("EModAnimalFunc"), &Z_Registration_Info_UEnum_EModAnimalFunc, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3644062840U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModHumanData::StaticStruct, Z_Construct_UScriptStruct_FModHumanData_Statics::NewStructOps, TEXT("ModHumanData"), &Z_Registration_Info_UScriptStruct_FModHumanData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModHumanData), 3282941852U) },
		{ FModOutputData::StaticStruct, Z_Construct_UScriptStruct_FModOutputData_Statics::NewStructOps, TEXT("ModOutputData"), &Z_Registration_Info_UScriptStruct_FModOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModOutputData), 1721206460U) },
		{ FModOutputDatas::StaticStruct, Z_Construct_UScriptStruct_FModOutputDatas_Statics::NewStructOps, TEXT("ModOutputDatas"), &Z_Registration_Info_UScriptStruct_FModOutputDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModOutputDatas), 2344238559U) },
		{ FModIDs::StaticStruct, Z_Construct_UScriptStruct_FModIDs_Statics::NewStructOps, TEXT("ModIDs"), &Z_Registration_Info_UScriptStruct_FModIDs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModIDs), 3192921264U) },
		{ FModAllTypeItemDrop::StaticStruct, Z_Construct_UScriptStruct_FModAllTypeItemDrop_Statics::NewStructOps, TEXT("ModAllTypeItemDrop"), &Z_Registration_Info_UScriptStruct_FModAllTypeItemDrop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModAllTypeItemDrop), 3703179762U) },
		{ FModAnimalData::StaticStruct, Z_Construct_UScriptStruct_FModAnimalData_Statics::NewStructOps, TEXT("ModAnimalData"), &Z_Registration_Info_UScriptStruct_FModAnimalData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModAnimalData), 1944760642U) },
		{ FModCharacterActionAbilityAnimSections::StaticStruct, Z_Construct_UScriptStruct_FModCharacterActionAbilityAnimSections_Statics::NewStructOps, TEXT("ModCharacterActionAbilityAnimSections"), &Z_Registration_Info_UScriptStruct_FModCharacterActionAbilityAnimSections, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModCharacterActionAbilityAnimSections), 1480376237U) },
		{ FModAnimalActionAbility::StaticStruct, Z_Construct_UScriptStruct_FModAnimalActionAbility_Statics::NewStructOps, TEXT("ModAnimalActionAbility"), &Z_Registration_Info_UScriptStruct_FModAnimalActionAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModAnimalActionAbility), 1681739639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h__Script_CreateModPlugin_1080683203(TEXT("/Script/CreateModPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CharacterDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
