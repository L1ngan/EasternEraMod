// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUIStruct.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCommonUIStruct() {}

// ********** Begin Cross Module References ********************************************************
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModCommonUIConfig();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDataBase();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModModuleUIConfig();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModTabInfo();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FModTabInfo *******************************************************
static_assert(std::is_polymorphic<FModTabInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FModTabInfo cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModTabInfo;
class UScriptStruct* FModTabInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModTabInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModTabInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModTabInfo, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModTabInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FModTabInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModTabInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalBase_MetaData[] = {
		{ "Category", "ModTabInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x99\xae\xe9\x80\x9a\xe6\x8c\x89\xe9\x92\xae\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe6\x8c\x89\xe9\x92\xae\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalHovered_MetaData[] = {
		{ "Category", "ModTabInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x99\xae\xe9\x80\x9a\xe6\x8c\x89\xe9\x92\xae\xe6\x82\xac\xe6\xb5\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe6\x8c\x89\xe9\x92\xae\xe6\x82\xac\xe6\xb5\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalPressed_MetaData[] = {
		{ "Category", "ModTabInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x99\xae\xe9\x80\x9a\xe6\x8c\x89\xe9\x92\xae\xe6\x8c\x89\xe4\xb8\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe6\x8c\x89\xe9\x92\xae\xe6\x8c\x89\xe4\xb8\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelModuleIds_MetaData[] = {
		{ "Category", "ModTabInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97UIid\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97UIid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipTitle_MetaData[] = {
		{ "Category", "ModTabInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xa1\xb5\xe7\xad\xbetip\xe6\xa0\x87\xe9\xa2\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa1\xb5\xe7\xad\xbetip\xe6\xa0\x87\xe9\xa2\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelTipContent_MetaData[] = {
		{ "Category", "ModTabInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xa1\xb5\xe7\xad\xbetip\xe5\x86\x85\xe5\xae\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa1\xb5\xe7\xad\xbetip\xe5\x86\x85\xe5\xae\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuncButtonIds_MetaData[] = {
		{ "Category", "ModTabInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xe5\x8a\x9f\xe8\x83\xbd\xe6\x8c\x89\xe9\x92\xaeid\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xe5\x8a\x9f\xe8\x83\xbd\xe6\x8c\x89\xe9\x92\xaeid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalHovered;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalPressed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LabelModuleIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LabelModuleIds;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TipTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LabelTipContent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FuncButtonIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FuncButtonIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModTabInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_NormalBase = { "NormalBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTabInfo, NormalBase), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalBase_MetaData), NewProp_NormalBase_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_NormalHovered = { "NormalHovered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTabInfo, NormalHovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalHovered_MetaData), NewProp_NormalHovered_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_NormalPressed = { "NormalPressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTabInfo, NormalPressed), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalPressed_MetaData), NewProp_NormalPressed_MetaData) }; // 963227394
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_LabelModuleIds_Inner = { "LabelModuleIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_LabelModuleIds = { "LabelModuleIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTabInfo, LabelModuleIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelModuleIds_MetaData), NewProp_LabelModuleIds_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_TipTitle = { "TipTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTabInfo, TipTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipTitle_MetaData), NewProp_TipTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_LabelTipContent = { "LabelTipContent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTabInfo, LabelTipContent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelTipContent_MetaData), NewProp_LabelTipContent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_FuncButtonIds_Inner = { "FuncButtonIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_FuncButtonIds = { "FuncButtonIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModTabInfo, FuncButtonIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuncButtonIds_MetaData), NewProp_FuncButtonIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModTabInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_NormalBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_NormalHovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_NormalPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_LabelModuleIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_LabelModuleIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_TipTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_LabelTipContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_FuncButtonIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModTabInfo_Statics::NewProp_FuncButtonIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModTabInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModTabInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ModTabInfo",
	Z_Construct_UScriptStruct_FModTabInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModTabInfo_Statics::PropPointers),
	sizeof(FModTabInfo),
	alignof(FModTabInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModTabInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModTabInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModTabInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FModTabInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModTabInfo.InnerSingleton, Z_Construct_UScriptStruct_FModTabInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModTabInfo.InnerSingleton;
}
// ********** End ScriptStruct FModTabInfo *********************************************************

// ********** Begin Enum EModTitleTypeEnum *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModTitleTypeEnum;
static UEnum* EModTitleTypeEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModTitleTypeEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModTitleTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModTitleTypeEnum"));
	}
	return Z_Registration_Info_UEnum_EModTitleTypeEnum.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModTitleTypeEnum>()
{
	return EModTitleTypeEnum_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BuildingName.Comment", "//\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe5\x90\x8d\xe5\xad\x97\n" },
		{ "BuildingName.Name", "EModTitleTypeEnum::BuildingName" },
		{ "BuildingName.ToolTip", "\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\xe5\x90\x8d\xe5\xad\x97" },
		{ "CharacterName.Comment", "// \xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x8d\xe5\xad\x97\n" },
		{ "CharacterName.Name", "EModTitleTypeEnum::CharacterName" },
		{ "CharacterName.ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x8d\xe5\xad\x97" },
		{ "CombinationBuildName.Comment", "//\xe7\xbb\x84\xe5\x90\x88\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "CombinationBuildName.Name", "EModTitleTypeEnum::CombinationBuildName" },
		{ "CombinationBuildName.ToolTip", "\xe7\xbb\x84\xe5\x90\x88\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "Fixed.Comment", "//\xe5\x9b\xba\xe5\xae\x9a\xe6\x96\x87\xe6\x9c\xac\n" },
		{ "Fixed.Name", "EModTitleTypeEnum::Fixed" },
		{ "Fixed.ToolTip", "\xe5\x9b\xba\xe5\xae\x9a\xe6\x96\x87\xe6\x9c\xac" },
		{ "ItemName.Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8d\xe5\xad\x97\n" },
		{ "ItemName.Name", "EModTitleTypeEnum::ItemName" },
		{ "ItemName.ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8d\xe5\xad\x97" },
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
		{ "NotObserved.Comment", "//\xe6\x9c\xaa\xe8\xa7\x82\xe5\xaf\x9f\n" },
		{ "NotObserved.Name", "EModTitleTypeEnum::NotObserved" },
		{ "NotObserved.ToolTip", "\xe6\x9c\xaa\xe8\xa7\x82\xe5\xaf\x9f" },
		{ "RoomName.Comment", "//\xe6\x88\xbf\xe9\x97\xb4\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "RoomName.Name", "EModTitleTypeEnum::RoomName" },
		{ "RoomName.ToolTip", "\xe6\x88\xbf\xe9\x97\xb4\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "WorldMapMoveName.Comment", "//\xe5\xa4\xa7\xe4\xb8\x96\xe7\x95\x8c\xe7\xa7\xbb\xe5\x8a\xa8""Actor\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "WorldMapMoveName.Name", "EModTitleTypeEnum::WorldMapMoveName" },
		{ "WorldMapMoveName.ToolTip", "\xe5\xa4\xa7\xe4\xb8\x96\xe7\x95\x8c\xe7\xa7\xbb\xe5\x8a\xa8""Actor\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "WorldPlaceName.Comment", "//\xe5\xa4\xa7\xe4\xb8\x96\xe7\x95\x8c\xe5\x9f\x8e\xe9\x95\x87\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "WorldPlaceName.Name", "EModTitleTypeEnum::WorldPlaceName" },
		{ "WorldPlaceName.ToolTip", "\xe5\xa4\xa7\xe4\xb8\x96\xe7\x95\x8c\xe5\x9f\x8e\xe9\x95\x87\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModTitleTypeEnum::Fixed", (int64)EModTitleTypeEnum::Fixed },
		{ "EModTitleTypeEnum::ItemName", (int64)EModTitleTypeEnum::ItemName },
		{ "EModTitleTypeEnum::BuildingName", (int64)EModTitleTypeEnum::BuildingName },
		{ "EModTitleTypeEnum::CharacterName", (int64)EModTitleTypeEnum::CharacterName },
		{ "EModTitleTypeEnum::NotObserved", (int64)EModTitleTypeEnum::NotObserved },
		{ "EModTitleTypeEnum::RoomName", (int64)EModTitleTypeEnum::RoomName },
		{ "EModTitleTypeEnum::CombinationBuildName", (int64)EModTitleTypeEnum::CombinationBuildName },
		{ "EModTitleTypeEnum::WorldPlaceName", (int64)EModTitleTypeEnum::WorldPlaceName },
		{ "EModTitleTypeEnum::WorldMapMoveName", (int64)EModTitleTypeEnum::WorldMapMoveName },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModTitleTypeEnum",
	"EModTitleTypeEnum",
	Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum()
{
	if (!Z_Registration_Info_UEnum_EModTitleTypeEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModTitleTypeEnum.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModTitleTypeEnum.InnerSingleton;
}
// ********** End Enum EModTitleTypeEnum ***********************************************************

// ********** Begin ScriptStruct FModCommonUIConfig ************************************************
static_assert(std::is_polymorphic<FModCommonUIConfig>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModCommonUIConfig cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModCommonUIConfig;
class UScriptStruct* FModCommonUIConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModCommonUIConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModCommonUIConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModCommonUIConfig, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModCommonUIConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FModCommonUIConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModCommonUIConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleType_MetaData[] = {
		{ "Category", "ModCommonUIConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x95\x8c\xe9\x9d\xa2\xe6\xa0\x87\xe9\xa2\x98\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x95\x8c\xe9\x9d\xa2\xe6\xa0\x87\xe9\xa2\x98\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[] = {
		{ "Category", "ModCommonUIConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "EditCondition", "TitleType == EModTitleTypeEnum::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelIcon_MetaData[] = {
		{ "Category", "ModCommonUIConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa0\x87\xe9\xa2\x98\xe5\xb0\x8f\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\x87\xe9\xa2\x98\xe5\xb0\x8f\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIBigImg_MetaData[] = {
		{ "Category", "ModCommonUIConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa4\xa7\xe5\x9b\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\xa7\xe5\x9b\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonModuleIds_MetaData[] = {
		{ "Category", "ModCommonUIConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe5\x85\xac\xe5\x85\xb1\xe6\xa8\xa1\xe5\x9d\x97id\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe5\x85\xac\xe5\x85\xb1\xe6\xa8\xa1\xe5\x9d\x97id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonFuncButtonIds_MetaData[] = {
		{ "Category", "ModCommonUIConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe5\x85\xac\xe5\x85\xb1\xe6\x8c\x89\xe9\x92\xaeid\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe5\x85\xac\xe5\x85\xb1\xe6\x8c\x89\xe9\x92\xaeid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomCommonModuleIds_MetaData[] = {
		{ "Category", "ModCommonUIConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe5\x85\xac\xe5\x85\xb1\xe6\xa8\xa1\xe5\x9d\x97id(\xe4\xb8\x8e""CommonModuleIds\xe7\x9a\x84\xe5\x8c\xba\xe5\x88\xab\xe5\x9c\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe5\x9c\xa8\xe9\xa1\xb6\xe4\xb8\x8a\xe4\xb8\x80\xe4\xb8\xaa\xe5\x9c\xa8\xe6\x9c\x80\xe4\xb8\x8b\xe9\x9d\xa2,tab\xe5\xb8\xa6\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xe5\x9c\xa8\xe4\xb8\xad\xe9\x97\xb4)\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe5\x85\xac\xe5\x85\xb1\xe6\xa8\xa1\xe5\x9d\x97id(\xe4\xb8\x8e""CommonModuleIds\xe7\x9a\x84\xe5\x8c\xba\xe5\x88\xab\xe5\x9c\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe5\x9c\xa8\xe9\xa1\xb6\xe4\xb8\x8a\xe4\xb8\x80\xe4\xb8\xaa\xe5\x9c\xa8\xe6\x9c\x80\xe4\xb8\x8b\xe9\x9d\xa2,tab\xe5\xb8\xa6\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xe5\x9c\xa8\xe4\xb8\xad\xe9\x97\xb4)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabInfos_MetaData[] = {
		{ "Category", "ModCommonUIConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe9\xa1\xb5\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe9\xa1\xb5\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomFuncButtonIsd_MetaData[] = {
		{ "Category", "ModCommonUIConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xba\x95\xe9\x83\xa8\xe5\x8a\x9f\xe8\x83\xbd\xe6\x8c\x89\xe9\x92\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xba\x95\xe9\x83\xa8\xe5\x8a\x9f\xe8\x83\xbd\xe6\x8c\x89\xe9\x92\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TitleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TitleType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TitleText;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LabelIcon;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UIBigImg;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CommonModuleIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonModuleIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CommonFuncButtonIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonFuncButtonIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BottomCommonModuleIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BottomCommonModuleIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TabInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TabInfos;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BottomFuncButtonIsd_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BottomFuncButtonIsd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModCommonUIConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_TitleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_TitleType = { "TitleType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonUIConfig, TitleType), Z_Construct_UEnum_CreateModPlugin_EModTitleTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleType_MetaData), NewProp_TitleType_MetaData) }; // 330076057
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonUIConfig, TitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleText_MetaData), NewProp_TitleText_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_LabelIcon = { "LabelIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonUIConfig, LabelIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelIcon_MetaData), NewProp_LabelIcon_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_UIBigImg = { "UIBigImg", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonUIConfig, UIBigImg), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIBigImg_MetaData), NewProp_UIBigImg_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_CommonModuleIds_Inner = { "CommonModuleIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_CommonModuleIds = { "CommonModuleIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonUIConfig, CommonModuleIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonModuleIds_MetaData), NewProp_CommonModuleIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_CommonFuncButtonIds_Inner = { "CommonFuncButtonIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_CommonFuncButtonIds = { "CommonFuncButtonIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonUIConfig, CommonFuncButtonIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonFuncButtonIds_MetaData), NewProp_CommonFuncButtonIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_BottomCommonModuleIds_Inner = { "BottomCommonModuleIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_BottomCommonModuleIds = { "BottomCommonModuleIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonUIConfig, BottomCommonModuleIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomCommonModuleIds_MetaData), NewProp_BottomCommonModuleIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_TabInfos_Inner = { "TabInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModTabInfo, METADATA_PARAMS(0, nullptr) }; // 85369256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_TabInfos = { "TabInfos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonUIConfig, TabInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabInfos_MetaData), NewProp_TabInfos_MetaData) }; // 85369256
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_BottomFuncButtonIsd_Inner = { "BottomFuncButtonIsd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_BottomFuncButtonIsd = { "BottomFuncButtonIsd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCommonUIConfig, BottomFuncButtonIsd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomFuncButtonIsd_MetaData), NewProp_BottomFuncButtonIsd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_TitleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_TitleType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_TitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_LabelIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_UIBigImg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_CommonModuleIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_CommonModuleIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_CommonFuncButtonIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_CommonFuncButtonIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_BottomCommonModuleIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_BottomCommonModuleIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_TabInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_TabInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_BottomFuncButtonIsd_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewProp_BottomFuncButtonIsd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModCommonUIConfig",
	Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::PropPointers),
	sizeof(FModCommonUIConfig),
	alignof(FModCommonUIConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModCommonUIConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FModCommonUIConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModCommonUIConfig.InnerSingleton, Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModCommonUIConfig.InnerSingleton;
}
// ********** End ScriptStruct FModCommonUIConfig **************************************************

// ********** Begin ScriptStruct FModModuleUIConfig ************************************************
static_assert(std::is_polymorphic<FModModuleUIConfig>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FModModuleUIConfig cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModModuleUIConfig;
class UScriptStruct* FModModuleUIConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModModuleUIConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModModuleUIConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModModuleUIConfig, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModModuleUIConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FModModuleUIConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModModuleUIConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleWidget_MetaData[] = {
		{ "Category", "ModModuleUIConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa8\xa1\xe5\x9d\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/CommonUIStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa8\xa1\xe5\x9d\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ModuleWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModModuleUIConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::NewProp_ModuleWidget = { "ModuleWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModModuleUIConfig, ModuleWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleWidget_MetaData), NewProp_ModuleWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::NewProp_ModuleWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ModModuleUIConfig",
	Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::PropPointers),
	sizeof(FModModuleUIConfig),
	alignof(FModModuleUIConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModModuleUIConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FModModuleUIConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModModuleUIConfig.InnerSingleton, Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModModuleUIConfig.InnerSingleton;
}
// ********** End ScriptStruct FModModuleUIConfig **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CommonUIStruct_h__Script_CreateModPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModTitleTypeEnum_StaticEnum, TEXT("EModTitleTypeEnum"), &Z_Registration_Info_UEnum_EModTitleTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 330076057U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModTabInfo::StaticStruct, Z_Construct_UScriptStruct_FModTabInfo_Statics::NewStructOps, TEXT("ModTabInfo"), &Z_Registration_Info_UScriptStruct_FModTabInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModTabInfo), 85369256U) },
		{ FModCommonUIConfig::StaticStruct, Z_Construct_UScriptStruct_FModCommonUIConfig_Statics::NewStructOps, TEXT("ModCommonUIConfig"), &Z_Registration_Info_UScriptStruct_FModCommonUIConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModCommonUIConfig), 1345849000U) },
		{ FModModuleUIConfig::StaticStruct, Z_Construct_UScriptStruct_FModModuleUIConfig_Statics::NewStructOps, TEXT("ModModuleUIConfig"), &Z_Registration_Info_UScriptStruct_FModModuleUIConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModModuleUIConfig), 1089105129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CommonUIStruct_h__Script_CreateModPlugin_2499517893(TEXT("/Script/CreateModPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CommonUIStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CommonUIStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CommonUIStruct_h__Script_CreateModPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_CommonUIStruct_h__Script_CreateModPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
