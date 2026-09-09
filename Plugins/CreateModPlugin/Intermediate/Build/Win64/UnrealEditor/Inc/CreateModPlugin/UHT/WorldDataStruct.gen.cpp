// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldDataStruct.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWorldDataStruct() {}

// ********** Begin Cross Module References ********************************************************
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModForceOperationType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModBattleBuffGroup();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDataBase();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModForceLevelInfo();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModSubClassApparelConfig();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModWorldPlaceInfo();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EModWorldPlaceType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModWorldPlaceType;
static UEnum* EModWorldPlaceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModWorldPlaceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModWorldPlaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModWorldPlaceType"));
	}
	return Z_Registration_Info_UEnum_EModWorldPlaceType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModWorldPlaceType>()
{
	return EModWorldPlaceType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Battleground.Comment", "//\xe6\x88\x98\xe5\x9c\xba\n" },
		{ "Battleground.Name", "EModWorldPlaceType::Battleground" },
		{ "Battleground.ToolTip", "\xe6\x88\x98\xe5\x9c\xba" },
		{ "BlueprintType", "true" },
		{ "CenterCity.Comment", "//\xe4\xb8\xad\xe5\xbf\x83\xe5\x9f\x8e\xe5\xb8\x82\n" },
		{ "CenterCity.Name", "EModWorldPlaceType::CenterCity" },
		{ "CenterCity.ToolTip", "\xe4\xb8\xad\xe5\xbf\x83\xe5\x9f\x8e\xe5\xb8\x82" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\x96\xe7\x95\x8c\xe5\x9c\xb0\xe7\x82\xb9\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "EventPoint.Comment", "//\xe4\xba\x8b\xe4\xbb\xb6\xe7\x82\xb9\n" },
		{ "EventPoint.Name", "EModWorldPlaceType::EventPoint" },
		{ "EventPoint.ToolTip", "\xe4\xba\x8b\xe4\xbb\xb6\xe7\x82\xb9" },
		{ "LandscapeRemains.Comment", "//\xe6\x99\xaf\xe8\xa7\x82\xe9\x81\x97\xe8\xbf\xb9\n" },
		{ "LandscapeRemains.Name", "EModWorldPlaceType::LandscapeRemains" },
		{ "LandscapeRemains.ToolTip", "\xe6\x99\xaf\xe8\xa7\x82\xe9\x81\x97\xe8\xbf\xb9" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
		{ "None.Name", "EModWorldPlaceType::None" },
		{ "ResourcePoint.Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe7\x82\xb9\n" },
		{ "ResourcePoint.Name", "EModWorldPlaceType::ResourcePoint" },
		{ "ResourcePoint.ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\x82\xb9" },
		{ "Station.Comment", "//\xe9\xa9\xbb\xe5\x9c\xb0\n" },
		{ "Station.Name", "EModWorldPlaceType::Station" },
		{ "Station.ToolTip", "\xe9\xa9\xbb\xe5\x9c\xb0" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x96\xe7\x95\x8c\xe5\x9c\xb0\xe7\x82\xb9\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "Tournament.Comment", "//\xe9\x97\xa8\xe6\xb4\xbe\xe6\xaf\x94\xe6\xad\xa6\n" },
		{ "Tournament.Name", "EModWorldPlaceType::Tournament" },
		{ "Tournament.ToolTip", "\xe9\x97\xa8\xe6\xb4\xbe\xe6\xaf\x94\xe6\xad\xa6" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModWorldPlaceType::None", (int64)EModWorldPlaceType::None },
		{ "EModWorldPlaceType::Station", (int64)EModWorldPlaceType::Station },
		{ "EModWorldPlaceType::CenterCity", (int64)EModWorldPlaceType::CenterCity },
		{ "EModWorldPlaceType::ResourcePoint", (int64)EModWorldPlaceType::ResourcePoint },
		{ "EModWorldPlaceType::EventPoint", (int64)EModWorldPlaceType::EventPoint },
		{ "EModWorldPlaceType::Battleground", (int64)EModWorldPlaceType::Battleground },
		{ "EModWorldPlaceType::LandscapeRemains", (int64)EModWorldPlaceType::LandscapeRemains },
		{ "EModWorldPlaceType::Tournament", (int64)EModWorldPlaceType::Tournament },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModWorldPlaceType",
	"EModWorldPlaceType",
	Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType()
{
	if (!Z_Registration_Info_UEnum_EModWorldPlaceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModWorldPlaceType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModWorldPlaceType.InnerSingleton;
}
// ********** End Enum EModWorldPlaceType **********************************************************

// ********** Begin ScriptStruct FModWorldPlaceInfo ************************************************
static_assert(std::is_polymorphic<FModWorldPlaceInfo>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModWorldPlaceInfo cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModWorldPlaceInfo;
class UScriptStruct* FModWorldPlaceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModWorldPlaceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModWorldPlaceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModWorldPlaceInfo, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModWorldPlaceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FModWorldPlaceInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BattlePlaceID_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceName_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceDesc_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceLevel_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceMesh_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe7\xad\x89\xe7\xba\xa7\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe7\xad\x89\xe7\xba\xa7\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInMap_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8\xe5\x9c\xb0\xe5\x9b\xbe\xe4\xb8\x8a (\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a\xe6\x88\x98\xe6\x96\x97\xe5\x9c\xb0\xe5\x9b\xbe\xe5\x8f\xaf\xe8\x83\xbd\xe4\xb8\x8d\xe4\xbc\x9a\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8\xe5\x9c\xb0\xe5\x9b\xbe\xe4\xb8\x8a)\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8\xe5\x9c\xb0\xe5\x9b\xbe\xe4\xb8\x8a (\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a\xe6\x88\x98\xe6\x96\x97\xe5\x9c\xb0\xe5\x9b\xbe\xe5\x8f\xaf\xe8\x83\xbd\xe4\xb8\x8d\xe4\xbc\x9a\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8\xe5\x9c\xb0\xe5\x9b\xbe\xe4\xb8\x8a)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prosperity_MetaData[] = {
		{ "Category", "Prosperity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe7\xb9\x81\xe8\x8d\xa3\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe7\xb9\x81\xe8\x8d\xa3\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxProsperity_MetaData[] = {
		{ "Category", "Prosperity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe6\x9c\x80\xe5\xa4\xa7\xe7\xb9\x81\xe8\x8d\xa3\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe6\x9c\x80\xe5\xa4\xa7\xe7\xb9\x81\xe8\x8d\xa3\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProsperityIncreaseBase_MetaData[] = {
		{ "Category", "Prosperity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe6\xaf\x8f\xe6\x97\xa5\xe7\xb9\x81\xe8\x8d\xa3\xe5\xba\xa6\xe5\xa2\x9e\xe9\x95\xbf\xe5\x9f\xba\xe7\xa1\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe6\xaf\x8f\xe6\x97\xa5\xe7\xb9\x81\xe8\x8d\xa3\xe5\xba\xa6\xe5\xa2\x9e\xe9\x95\xbf\xe5\x9f\xba\xe7\xa1\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPlaceType_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceIcon_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceThumbnail_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "ModWorldPlaceInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplorationDegree_MetaData[] = {
		{ "Category", "Exploration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe5\x9c\xb0\xe5\x8c\xba\xe6\x8e\xa2\xe7\xb4\xa2\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe5\x9c\xb0\xe5\x8c\xba\xe6\x8e\xa2\xe7\xb4\xa2\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTemperature_MetaData[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9f\xba\xe7\xa1\x80\xe6\xb8\xa9\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe6\xb8\xa9\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMapPosition_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa4\x84\xe4\xba\x8e\xe4\xb8\x96\xe7\x95\x8c\xe5\x9c\xb0\xe5\x9b\xbe\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x84\xe4\xba\x8e\xe4\xb8\x96\xe7\x95\x8c\xe5\x9c\xb0\xe5\x9b\xbe\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialUnlock_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xaf\xa5\xe5\x9c\xb0\xe5\x8c\xba\xe6\x98\xaf\xe5\x90\xa6\xe5\x88\x9d\xe5\xa7\x8b\xe8\xa7\xa3\xe9\x94\x81\xe8\xbf\xb7\xe9\x9b\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5\xe5\x9c\xb0\xe5\x8c\xba\xe6\x98\xaf\xe5\x90\xa6\xe5\x88\x9d\xe5\xa7\x8b\xe8\xa7\xa3\xe9\x94\x81\xe8\xbf\xb7\xe9\x9b\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogRadius_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xaf\xa5\xe5\x9c\xb0\xe5\x8c\xba\xe8\xa7\xa3\xe9\x94\x81\xe8\xbf\xb7\xe9\x9b\xbe\xe7\x9a\x84\xe5\x8d\x8a\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5\xe5\x9c\xb0\xe5\x8c\xba\xe8\xa7\xa3\xe9\x94\x81\xe8\xbf\xb7\xe9\x9b\xbe\xe7\x9a\x84\xe5\x8d\x8a\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideInFog_MetaData[] = {
		{ "Category", "Fog" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe4\xbc\x9a\xe9\x9a\x90\xe8\x97\x8f\xe4\xba\x8e\xe8\xbf\xb7\xe9\x9b\xbe\xe4\xb8\xad\n" },
#endif
		{ "EditCondition", "bShowInMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbc\x9a\xe9\x9a\x90\xe8\x97\x8f\xe4\xba\x8e\xe8\xbf\xb7\xe9\x9b\xbe\xe4\xb8\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeforeExploreUI_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\xa2\xe7\xb4\xa2\xe5\x89\x8d\xe7\x9a\x84UI  ID\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\xa2\xe7\xb4\xa2\xe5\x89\x8d\xe7\x9a\x84UI  ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExploreCompleteUI_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\xa2\xe7\xb4\xa2\xe5\xae\x8c\xe7\x9a\x84UI  ID\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\xa2\xe7\xb4\xa2\xe5\xae\x8c\xe7\x9a\x84UI  ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AfterOccupationUI_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8d\xa0\xe9\xa2\x86\xe5\x90\x8e\xe7\x9a\x84UI  ID\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa0\xe9\xa2\x86\xe5\x90\x8e\xe7\x9a\x84UI  ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedExplore_MetaData[] = {
		{ "Category", "Exploration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe6\x8e\xa2\xe7\xb4\xa2\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe6\x8e\xa2\xe7\xb4\xa2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddAreaExplore_MetaData[] = {
		{ "Category", "Exploration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa2\x9e\xe5\x8a\xa0\xe5\x8c\xba\xe5\x9f\x9f\xe6\x8e\xa2\xe7\xb4\xa2\n" },
#endif
		{ "EditCondition", "bNeedExplore" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa2\x9e\xe5\x8a\xa0\xe5\x8c\xba\xe5\x9f\x9f\xe6\x8e\xa2\xe7\xb4\xa2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayLevelSequence_MetaData[] = {
		{ "Category", "LevelSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x92\xad\xe6\x94\xbe\xe5\x85\xb3\xe5\x8d\xa1\xe5\xba\x8f\xe5\x88\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x92\xad\xe6\x94\xbe\xe5\x85\xb3\xe5\x8d\xa1\xe5\xba\x8f\xe5\x88\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnterEveryTimePlayLevelSequence_MetaData[] = {
		{ "Category", "LevelSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\xaf\x8f\xe6\xac\xa1\xe8\xbf\x9b\xe5\x85\xa5\xe6\x97\xb6\xe9\x83\xbd\xe4\xbc\x9a\xe6\x92\xad\xe6\x94\xbe\n" },
#endif
		{ "EditCondition", "bPlayLevelSequence" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xaf\x8f\xe6\xac\xa1\xe8\xbf\x9b\xe5\x85\xa5\xe6\x97\xb6\xe9\x83\xbd\xe4\xbc\x9a\xe6\x92\xad\xe6\x94\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[] = {
		{ "Category", "LevelSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe5\x9c\xb0\xe7\x82\xb9\xe8\xbf\x9b\xe5\x85\xa5\xe6\x97\xb6\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe5\x85\xb3\xe5\x8d\xa1\xe5\xba\x8f\xe5\x88\x97\n" },
#endif
		{ "EditCondition", "bPlayLevelSequence" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe5\x9c\xb0\xe7\x82\xb9\xe8\xbf\x9b\xe5\x85\xa5\xe6\x97\xb6\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe5\x85\xb3\xe5\x8d\xa1\xe5\xba\x8f\xe5\x88\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayLevelVideos_MetaData[] = {
		{ "Category", "BinkMedia" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x92\xad\xe6\x94\xbe\xe8\xa7\x86\xe9\xa2\x91 \xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x98\xaf\xe4\xbc\x9a\xe5\x9c\xa8\xe5\x85\xb3\xe5\x8d\xa1\xe5\xba\x8f\xe5\x88\x97\xe4\xb9\x8b\xe5\x89\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x92\xad\xe6\x94\xbe\xe8\xa7\x86\xe9\xa2\x91 \xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x98\xaf\xe4\xbc\x9a\xe5\x9c\xa8\xe5\x85\xb3\xe5\x8d\xa1\xe5\xba\x8f\xe5\x88\x97\xe4\xb9\x8b\xe5\x89\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnterEveryTimePlayVideos_MetaData[] = {
		{ "Category", "BinkMedia" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\xaf\x8f\xe6\xac\xa1\xe8\xbf\x9b\xe5\x85\xa5\xe6\x97\xb6\xe9\x83\xbd\xe4\xbc\x9a\xe6\x92\xad\xe6\x94\xbe\n" },
#endif
		{ "EditCondition", "bPlayLevelVideos" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xaf\x8f\xe6\xac\xa1\xe8\xbf\x9b\xe5\x85\xa5\xe6\x97\xb6\xe9\x83\xbd\xe4\xbc\x9a\xe6\x92\xad\xe6\x94\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinkMediaPlayer_MetaData[] = {
		{ "Category", "BinkMedia" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe8\xae\xbe\xe7\xbd\xae\n" },
#endif
		{ "EditCondition", "bPlayLevelVideos" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe8\xae\xbe\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinkMediaPlayerUrl_MetaData[] = {
		{ "Category", "BinkMedia" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe8\xb5\x84\xe6\xba\x90\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "EditCondition", "bPlayLevelVideos" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe8\xb5\x84\xe6\xba\x90\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanEnterPlace_MetaData[] = {
		{ "Category", "EnterPlace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xbf\x9b\xe5\x85\xa5\xe5\x88\xb0\xe6\xad\xa4\xe5\x8c\xba\xe5\x9f\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xbf\x9b\xe5\x85\xa5\xe5\x88\xb0\xe6\xad\xa4\xe5\x8c\xba\xe5\x9f\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceMap_MetaData[] = {
		{ "Category", "EnterPlace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe5\x9c\xb0\xe5\x9b\xbe\n" },
#endif
		{ "EditCondition", "bCanEnterPlace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe5\x9c\xb0\xe5\x9b\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSavePlace_MetaData[] = {
		{ "Category", "EnterPlace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe5\x9c\xb0\xe7\x82\xb9\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe4\xbf\x9d\xe5\xad\x98\n" },
#endif
		{ "EditCondition", "bCanEnterPlace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe5\x9c\xb0\xe7\x82\xb9\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe4\xbf\x9d\xe5\xad\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PossessPlayerPawn_MetaData[] = {
		{ "Category", "EnterPlace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8b\xa5\xe6\x9c\x89\xe5\xbd\x93\xe5\x89\x8d\xe5\x9c\xb0\xe7\x82\xb9\xe6\x97\xb6\xe7\x9a\x84pawn\n" },
#endif
		{ "EditCondition", "bCanEnterPlace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\xa5\xe6\x9c\x89\xe5\xbd\x93\xe5\x89\x8d\xe5\x9c\xb0\xe7\x82\xb9\xe6\x97\xb6\xe7\x9a\x84pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherPlayerPawn_MetaData[] = {
		{ "Category", "EnterPlace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x85\xb6\xe4\xbb\x96\xe6\x83\x85\xe5\x86\xb5\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84Pawn\n" },
#endif
		{ "EditCondition", "bCanEnterPlace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb6\xe4\xbb\x96\xe6\x83\x85\xe5\x86\xb5\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84Pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWidgetUI_MetaData[] = {
		{ "Category", "EnterPlace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe5\x9c\xb0\xe7\x82\xb9\xe7\x9a\x84\xe7\x95\x8c\xe9\x9d\xa2UI\n" },
#endif
		{ "EditCondition", "bCanEnterPlace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe5\x9c\xb0\xe7\x82\xb9\xe7\x9a\x84\xe7\x95\x8c\xe9\x9d\xa2UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "Category", "EnterPlace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbf\x9b\xe5\x85\xa5\xe6\xad\xa4\xe5\x9c\xb0\xe7\x82\xb9\xe6\x97\xb6\xe7\x9a\x84\xe7\x94\x9f\xe6\x88\x90\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "EditCondition", "bCanEnterPlace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9b\xe5\x85\xa5\xe6\xad\xa4\xe5\x9c\xb0\xe7\x82\xb9\xe6\x97\xb6\xe7\x9a\x84\xe7\x94\x9f\xe6\x88\x90\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterGeneration_MetaData[] = {
		{ "Category", "Monster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe5\x9c\xb0\xe7\x82\xb9\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe7\x94\x9f\xe6\x88\x90\xe6\x80\xaa\xe7\x89\xa9\xe8\xae\xbe\xe7\xbd\xae \xe8\xaf\xbb\xe5\x8f\x96MonsterGenerationConfig \xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe5\x9c\xb0\xe7\x82\xb9\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe7\x94\x9f\xe6\x88\x90\xe6\x80\xaa\xe7\x89\xa9\xe8\xae\xbe\xe7\xbd\xae \xe8\xaf\xbb\xe5\x8f\x96MonsterGenerationConfig \xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterNest_MetaData[] = {
		{ "Category", "Monster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe5\x9c\xb0\xe7\x82\xb9\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe5\xb7\xa2\xe7\xa9\xb4\xe4\xbf\xa1\xe6\x81\xaf \xe8\xaf\xbb\xe5\x8f\x96 MonsterNestInfoConfig \xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe5\x9c\xb0\xe7\x82\xb9\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe5\xb7\xa2\xe7\xa9\xb4\xe4\xbf\xa1\xe6\x81\xaf \xe8\xaf\xbb\xe5\x8f\x96 MonsterNestInfoConfig \xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Population_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe4\xba\xba\xe5\x8f\xa3\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe4\xba\xba\xe5\x8f\xa3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPopulation_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe4\xba\xba\xe5\x8f\xa3\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe4\xba\xba\xe5\x8f\xa3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitCoin_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe9\x92\xb1\xe5\xb8\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe9\x92\xb1\xe5\xb8\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinIncreaseBase_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x92\xb1\xe5\xb8\x81\xe5\xa2\x9e\xe9\x95\xbf\xe5\x9f\xba\xe7\xa1\x80\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x92\xb1\xe5\xb8\x81\xe5\xa2\x9e\xe9\x95\xbf\xe5\x9f\xba\xe7\xa1\x80\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstVictoryAddReputation_MetaData[] = {
		{ "Category", "ModWorldPlaceInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xac\xac\xe4\xb8\x80\xe6\xac\xa1\xe8\x83\x9c\xe5\x88\xa9\xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84\xe5\xa3\xb0\xe6\x9c\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xac\xac\xe4\xb8\x80\xe6\xac\xa1\xe8\x83\x9c\xe5\x88\xa9\xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84\xe5\xa3\xb0\xe6\x9c\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PopulationIncreaseBase_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xaf\x8f\xe6\x97\xa5\xe4\xba\xba\xe5\x8f\xa3\xe5\xa2\x9e\xe9\x95\xbf\xe5\x9f\xba\xe7\xa1\x80\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaf\x8f\xe6\x97\xa5\xe4\xba\xba\xe5\x8f\xa3\xe5\xa2\x9e\xe9\x95\xbf\xe5\x9f\xba\xe7\xa1\x80\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StationedCharacterNumBase_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9f\x8e\xe9\x95\x87\xe5\x8f\xaf\xe9\xa9\xbb\xe6\x89\x8e\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe9\x87\x8f\xe5\x9f\xba\xe7\xa1\x80\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\x8e\xe9\x95\x87\xe5\x8f\xaf\xe9\xa9\xbb\xe6\x89\x8e\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe9\x87\x8f\xe5\x9f\xba\xe7\xa1\x80\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPlaceEffects_MetaData[] = {
		{ "Category", "ModWorldPlaceInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9f\x8e\xe4\xb8\xbb\xe6\x95\x88\xe6\x9e\x9c(\xe5\xaf\xb9\xe5\xba\x94""DT_WorldPlaceEffectConfig)\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\x8e\xe4\xb8\xbb\xe6\x95\x88\xe6\x9e\x9c(\xe5\xaf\xb9\xe5\xba\x94""DT_WorldPlaceEffectConfig)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceOutPutInterval_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xba\xa7\xe5\x87\xba\xe9\x97\xb4\xe9\x9a\x94(\xe5\xa4\xa9)\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\xa7\xe5\x87\xba\xe9\x97\xb4\xe9\x9a\x94(\xe5\xa4\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshLocationOffset_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe7\x82\xb9\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\xe4\xbe\xbf\xe5\xae\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe7\x82\xb9\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\xe4\xbe\xbf\xe5\xae\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostStationTransform_MetaData[] = {
		{ "Category", "PostStation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xa9\xbf\xe7\xab\x99\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa9\xbf\xe7\xab\x99\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BattlePlaceID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PlaceName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PlaceDesc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlaceLevel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlaceMesh_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlaceMesh_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlaceMesh;
	static void NewProp_bShowInMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Prosperity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProsperity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProsperityIncreaseBase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPlaceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPlaceType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlaceIcon;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlaceThumbnail;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplorationDegree;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseTemperature;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldMapPosition;
	static void NewProp_bInitialUnlock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialUnlock;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FogRadius;
	static void NewProp_bHideInFog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideInFog;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BeforeExploreUI;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExploreCompleteUI;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AfterOccupationUI;
	static void NewProp_bNeedExplore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedExplore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddAreaExplore;
	static void NewProp_bPlayLevelSequence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayLevelSequence;
	static void NewProp_bEnterEveryTimePlayLevelSequence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnterEveryTimePlayLevelSequence;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelSequence;
	static void NewProp_bPlayLevelVideos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayLevelVideos;
	static void NewProp_bEnterEveryTimePlayVideos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnterEveryTimePlayVideos;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BinkMediaPlayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BinkMediaPlayerUrl;
	static void NewProp_bCanEnterPlace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEnterPlace;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlaceMap;
	static void NewProp_bSavePlace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavePlace;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PossessPlayerPawn;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OtherPlayerPawn;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_MainWidgetUI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MonsterGeneration_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MonsterGeneration;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MonsterNest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MonsterNest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Population;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPopulation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitCoin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoinIncreaseBase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstVictoryAddReputation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PopulationIncreaseBase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StationedCharacterNumBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WorldPlaceEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldPlaceEffects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlaceOutPutInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshLocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostStationTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModWorldPlaceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_BattlePlaceID = { "BattlePlaceID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, BattlePlaceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BattlePlaceID_MetaData), NewProp_BattlePlaceID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceName = { "PlaceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PlaceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceName_MetaData), NewProp_PlaceName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceDesc = { "PlaceDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PlaceDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceDesc_MetaData), NewProp_PlaceDesc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceLevel = { "PlaceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PlaceLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceLevel_MetaData), NewProp_PlaceLevel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceMesh_ValueProp = { "PlaceMesh", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceMesh_Key_KeyProp = { "PlaceMesh_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceMesh = { "PlaceMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PlaceMesh), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceMesh_MetaData), NewProp_PlaceMesh_MetaData) };
void Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bShowInMap_SetBit(void* Obj)
{
	((FModWorldPlaceInfo*)Obj)->bShowInMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bShowInMap = { "bShowInMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModWorldPlaceInfo), &Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bShowInMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInMap_MetaData), NewProp_bShowInMap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_Prosperity = { "Prosperity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, Prosperity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prosperity_MetaData), NewProp_Prosperity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MaxProsperity = { "MaxProsperity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, MaxProsperity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxProsperity_MetaData), NewProp_MaxProsperity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_ProsperityIncreaseBase = { "ProsperityIncreaseBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, ProsperityIncreaseBase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProsperityIncreaseBase_MetaData), NewProp_ProsperityIncreaseBase_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_WorldPlaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_WorldPlaceType = { "WorldPlaceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, WorldPlaceType), Z_Construct_UEnum_CreateModPlugin_EModWorldPlaceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPlaceType_MetaData), NewProp_WorldPlaceType_MetaData) }; // 2708434759
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceIcon = { "PlaceIcon", nullptr, (EPropertyFlags)0x0014000001000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PlaceIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceIcon_MetaData), NewProp_PlaceIcon_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceThumbnail = { "PlaceThumbnail", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PlaceThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceThumbnail_MetaData), NewProp_PlaceThumbnail_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_ExplorationDegree = { "ExplorationDegree", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, ExplorationDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplorationDegree_MetaData), NewProp_ExplorationDegree_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_BaseTemperature = { "BaseTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, BaseTemperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTemperature_MetaData), NewProp_BaseTemperature_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_WorldMapPosition = { "WorldMapPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, WorldMapPosition), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMapPosition_MetaData), NewProp_WorldMapPosition_MetaData) };
void Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bInitialUnlock_SetBit(void* Obj)
{
	((FModWorldPlaceInfo*)Obj)->bInitialUnlock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bInitialUnlock = { "bInitialUnlock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModWorldPlaceInfo), &Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bInitialUnlock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialUnlock_MetaData), NewProp_bInitialUnlock_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_FogRadius = { "FogRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, FogRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogRadius_MetaData), NewProp_FogRadius_MetaData) };
void Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bHideInFog_SetBit(void* Obj)
{
	((FModWorldPlaceInfo*)Obj)->bHideInFog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bHideInFog = { "bHideInFog", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModWorldPlaceInfo), &Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bHideInFog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideInFog_MetaData), NewProp_bHideInFog_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_BeforeExploreUI = { "BeforeExploreUI", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, BeforeExploreUI), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeforeExploreUI_MetaData), NewProp_BeforeExploreUI_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_ExploreCompleteUI = { "ExploreCompleteUI", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, ExploreCompleteUI), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExploreCompleteUI_MetaData), NewProp_ExploreCompleteUI_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_AfterOccupationUI = { "AfterOccupationUI", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, AfterOccupationUI), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AfterOccupationUI_MetaData), NewProp_AfterOccupationUI_MetaData) };
void Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bNeedExplore_SetBit(void* Obj)
{
	((FModWorldPlaceInfo*)Obj)->bNeedExplore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bNeedExplore = { "bNeedExplore", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModWorldPlaceInfo), &Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bNeedExplore_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedExplore_MetaData), NewProp_bNeedExplore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_AddAreaExplore = { "AddAreaExplore", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, AddAreaExplore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddAreaExplore_MetaData), NewProp_AddAreaExplore_MetaData) };
void Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bPlayLevelSequence_SetBit(void* Obj)
{
	((FModWorldPlaceInfo*)Obj)->bPlayLevelSequence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bPlayLevelSequence = { "bPlayLevelSequence", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModWorldPlaceInfo), &Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bPlayLevelSequence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayLevelSequence_MetaData), NewProp_bPlayLevelSequence_MetaData) };
void Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bEnterEveryTimePlayLevelSequence_SetBit(void* Obj)
{
	((FModWorldPlaceInfo*)Obj)->bEnterEveryTimePlayLevelSequence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bEnterEveryTimePlayLevelSequence = { "bEnterEveryTimePlayLevelSequence", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModWorldPlaceInfo), &Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bEnterEveryTimePlayLevelSequence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnterEveryTimePlayLevelSequence_MetaData), NewProp_bEnterEveryTimePlayLevelSequence_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0014000001000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSequence_MetaData), NewProp_LevelSequence_MetaData) };
void Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bPlayLevelVideos_SetBit(void* Obj)
{
	((FModWorldPlaceInfo*)Obj)->bPlayLevelVideos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bPlayLevelVideos = { "bPlayLevelVideos", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModWorldPlaceInfo), &Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bPlayLevelVideos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayLevelVideos_MetaData), NewProp_bPlayLevelVideos_MetaData) };
void Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bEnterEveryTimePlayVideos_SetBit(void* Obj)
{
	((FModWorldPlaceInfo*)Obj)->bEnterEveryTimePlayVideos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bEnterEveryTimePlayVideos = { "bEnterEveryTimePlayVideos", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModWorldPlaceInfo), &Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bEnterEveryTimePlayVideos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnterEveryTimePlayVideos_MetaData), NewProp_bEnterEveryTimePlayVideos_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_BinkMediaPlayer = { "BinkMediaPlayer", nullptr, (EPropertyFlags)0x0014000001000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, BinkMediaPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinkMediaPlayer_MetaData), NewProp_BinkMediaPlayer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_BinkMediaPlayerUrl = { "BinkMediaPlayerUrl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, BinkMediaPlayerUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinkMediaPlayerUrl_MetaData), NewProp_BinkMediaPlayerUrl_MetaData) };
void Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bCanEnterPlace_SetBit(void* Obj)
{
	((FModWorldPlaceInfo*)Obj)->bCanEnterPlace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bCanEnterPlace = { "bCanEnterPlace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModWorldPlaceInfo), &Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bCanEnterPlace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanEnterPlace_MetaData), NewProp_bCanEnterPlace_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceMap = { "PlaceMap", nullptr, (EPropertyFlags)0x0014000001000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PlaceMap), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceMap_MetaData), NewProp_PlaceMap_MetaData) };
void Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bSavePlace_SetBit(void* Obj)
{
	((FModWorldPlaceInfo*)Obj)->bSavePlace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bSavePlace = { "bSavePlace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModWorldPlaceInfo), &Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bSavePlace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSavePlace_MetaData), NewProp_bSavePlace_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PossessPlayerPawn = { "PossessPlayerPawn", nullptr, (EPropertyFlags)0x0014000001000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PossessPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PossessPlayerPawn_MetaData), NewProp_PossessPlayerPawn_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_OtherPlayerPawn = { "OtherPlayerPawn", nullptr, (EPropertyFlags)0x0014000001000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, OtherPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherPlayerPawn_MetaData), NewProp_OtherPlayerPawn_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MainWidgetUI = { "MainWidgetUI", nullptr, (EPropertyFlags)0x0014000001000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, MainWidgetUI), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWidgetUI_MetaData), NewProp_MainWidgetUI_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MonsterGeneration_Inner = { "MonsterGeneration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MonsterGeneration = { "MonsterGeneration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, MonsterGeneration), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterGeneration_MetaData), NewProp_MonsterGeneration_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MonsterNest_Inner = { "MonsterNest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MonsterNest = { "MonsterNest", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, MonsterNest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterNest_MetaData), NewProp_MonsterNest_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_Population = { "Population", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, Population), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Population_MetaData), NewProp_Population_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MaxPopulation = { "MaxPopulation", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, MaxPopulation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPopulation_MetaData), NewProp_MaxPopulation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_InitCoin = { "InitCoin", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, InitCoin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitCoin_MetaData), NewProp_InitCoin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_CoinIncreaseBase = { "CoinIncreaseBase", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, CoinIncreaseBase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinIncreaseBase_MetaData), NewProp_CoinIncreaseBase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_FirstVictoryAddReputation = { "FirstVictoryAddReputation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, FirstVictoryAddReputation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstVictoryAddReputation_MetaData), NewProp_FirstVictoryAddReputation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PopulationIncreaseBase = { "PopulationIncreaseBase", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PopulationIncreaseBase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PopulationIncreaseBase_MetaData), NewProp_PopulationIncreaseBase_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_StationedCharacterNumBase = { "StationedCharacterNumBase", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, StationedCharacterNumBase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StationedCharacterNumBase_MetaData), NewProp_StationedCharacterNumBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_WorldPlaceEffects_Inner = { "WorldPlaceEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_WorldPlaceEffects = { "WorldPlaceEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, WorldPlaceEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPlaceEffects_MetaData), NewProp_WorldPlaceEffects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceOutPutInterval = { "PlaceOutPutInterval", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PlaceOutPutInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceOutPutInterval_MetaData), NewProp_PlaceOutPutInterval_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MeshLocationOffset = { "MeshLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, MeshLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshLocationOffset_MetaData), NewProp_MeshLocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PostStationTransform = { "PostStationTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModWorldPlaceInfo, PostStationTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostStationTransform_MetaData), NewProp_PostStationTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_BattlePlaceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceMesh_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceMesh_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bShowInMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_Prosperity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MaxProsperity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_ProsperityIncreaseBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_WorldPlaceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_WorldPlaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceThumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_ExplorationDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_BaseTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_WorldMapPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bInitialUnlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_FogRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bHideInFog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_BeforeExploreUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_ExploreCompleteUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_AfterOccupationUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bNeedExplore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_AddAreaExplore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bPlayLevelSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bEnterEveryTimePlayLevelSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_LevelSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bPlayLevelVideos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bEnterEveryTimePlayVideos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_BinkMediaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_BinkMediaPlayerUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bCanEnterPlace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_bSavePlace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PossessPlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_OtherPlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MainWidgetUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MonsterGeneration_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MonsterGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MonsterNest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MonsterNest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_Population,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MaxPopulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_InitCoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_CoinIncreaseBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_FirstVictoryAddReputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PopulationIncreaseBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_StationedCharacterNumBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_WorldPlaceEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_WorldPlaceEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PlaceOutPutInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_MeshLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewProp_PostStationTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModWorldPlaceInfo",
	Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::PropPointers),
	sizeof(FModWorldPlaceInfo),
	alignof(FModWorldPlaceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModWorldPlaceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FModWorldPlaceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModWorldPlaceInfo.InnerSingleton, Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModWorldPlaceInfo.InnerSingleton;
}
// ********** End ScriptStruct FModWorldPlaceInfo **************************************************

// ********** Begin Enum EModForceOperationType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModForceOperationType;
static UEnum* EModForceOperationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModForceOperationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModForceOperationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModForceOperationType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModForceOperationType"));
	}
	return Z_Registration_Info_UEnum_EModForceOperationType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModForceOperationType>()
{
	return EModForceOperationType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModForceOperationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alliance.Comment", "//\xe5\x90\x8c\xe7\x9b\x9f\n" },
		{ "Alliance.Name", "EModForceOperationType::Alliance" },
		{ "Alliance.ToolTip", "\xe5\x90\x8c\xe7\x9b\x9f" },
		{ "AttackTogether.Comment", "//\xe5\x85\xb1\xe5\x90\x8c\xe6\x94\xbb\xe6\x89\x93\n" },
		{ "AttackTogether.Name", "EModForceOperationType::AttackTogether" },
		{ "AttackTogether.ToolTip", "\xe5\x85\xb1\xe5\x90\x8c\xe6\x94\xbb\xe6\x89\x93" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xbf\xe5\x8a\x9b\xe5\x8f\xaf\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
		{ "None.Name", "EModForceOperationType::None" },
		{ "SubmitToSelf.Comment", "//\xe5\xb8\xae\xe6\xb4\xbe\n" },
		{ "SubmitToSelf.Name", "EModForceOperationType::SubmitToSelf" },
		{ "SubmitToSelf.ToolTip", "\xe5\xb8\xae\xe6\xb4\xbe" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xbf\xe5\x8a\x9b\xe5\x8f\xaf\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModForceOperationType::None", (int64)EModForceOperationType::None },
		{ "EModForceOperationType::AttackTogether", (int64)EModForceOperationType::AttackTogether },
		{ "EModForceOperationType::Alliance", (int64)EModForceOperationType::Alliance },
		{ "EModForceOperationType::SubmitToSelf", (int64)EModForceOperationType::SubmitToSelf },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModForceOperationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModForceOperationType",
	"EModForceOperationType",
	Z_Construct_UEnum_CreateModPlugin_EModForceOperationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModForceOperationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModForceOperationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModForceOperationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModForceOperationType()
{
	if (!Z_Registration_Info_UEnum_EModForceOperationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModForceOperationType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModForceOperationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModForceOperationType.InnerSingleton;
}
// ********** End Enum EModForceOperationType ******************************************************

// ********** Begin ScriptStruct FModBattleBuffGroup ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModBattleBuffGroup;
class UScriptStruct* FModBattleBuffGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModBattleBuffGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModBattleBuffGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModBattleBuffGroup, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModBattleBuffGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FModBattleBuffGroup.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mod\xe6\x88\x98\xe6\x96\x97""buff\xe9\x9b\x86\xe5\x90\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mod\xe6\x88\x98\xe6\x96\x97""buff\xe9\x9b\x86\xe5\x90\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyTargetTag_MetaData[] = {
		{ "Category", "ModBattleBuffGroup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x96\xbd\xe5\x8a\xa0\xe7\x9b\xae\xe6\xa0\x87\xe7\xbb\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xbd\xe5\x8a\xa0\xe7\x9b\xae\xe6\xa0\x87\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffs_MetaData[] = {
		{ "Category", "ModBattleBuffGroup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BuffID\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BuffID" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyTargetTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Buffs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModBattleBuffGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::NewProp_ApplyTargetTag = { "ApplyTargetTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBattleBuffGroup, ApplyTargetTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyTargetTag_MetaData), NewProp_ApplyTargetTag_MetaData) }; // 2104890724
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::NewProp_Buffs_Inner = { "Buffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::NewProp_Buffs = { "Buffs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModBattleBuffGroup, Buffs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffs_MetaData), NewProp_Buffs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::NewProp_ApplyTargetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::NewProp_Buffs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::NewProp_Buffs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModBattleBuffGroup",
	Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::PropPointers),
	sizeof(FModBattleBuffGroup),
	alignof(FModBattleBuffGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModBattleBuffGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FModBattleBuffGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModBattleBuffGroup.InnerSingleton, Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModBattleBuffGroup.InnerSingleton;
}
// ********** End ScriptStruct FModBattleBuffGroup *************************************************

// ********** Begin ScriptStruct FModForceLevelInfo ************************************************
static_assert(std::is_polymorphic<FModForceLevelInfo>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModForceLevelInfo cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModForceLevelInfo;
class UScriptStruct* FModForceLevelInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModForceLevelInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModForceLevelInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModForceLevelInfo, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModForceLevelInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FModForceLevelInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModForceLevelInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mod\xe5\x8a\xbf\xe5\x8a\x9b\xe7\xad\x89\xe7\xba\xa7\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x88\xe5\x8a\xbf\xe5\x8a\x9b\xe5\xa3\xb0\xe6\x9c\x9b\xe7\xba\xa7\xe5\x88\xab\xe9\x85\x8d\xe7\xbd\xae\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mod\xe5\x8a\xbf\xe5\x8a\x9b\xe7\xad\x89\xe7\xba\xa7\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x88\xe5\x8a\xbf\xe5\x8a\x9b\xe5\xa3\xb0\xe6\x9c\x9b\xe7\xba\xa7\xe5\x88\xab\xe9\x85\x8d\xe7\xbd\xae\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceLevel_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xbf\xe5\x8a\x9b\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xbf\xe5\x8a\x9b\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceLevelName_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa3\xb0\xe6\x9c\x9b\xe7\xba\xa7\xe5\x88\xab\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa3\xb0\xe6\x9c\x9b\xe7\xba\xa7\xe5\x88\xab\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpConditionIDs_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8d\x87\xe7\xba\xa7\xe6\x9d\xa1\xe4\xbb\xb6ID(\xe5\x85\xb3\xe8\x81\x94""CommonTaskCondition\xe8\xa1\xa8)(\xe4\xbb\x8e\xe4\xbd\x8e\xe4\xb8\x80\xe7\xba\xa7\xe5\x8d\x87\xe7\xba\xa7\xe5\x88\xb0\xe6\x9c\xac\xe7\xba\xa7\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6)\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x87\xe7\xba\xa7\xe6\x9d\xa1\xe4\xbb\xb6ID(\xe5\x85\xb3\xe8\x81\x94""CommonTaskCondition\xe8\xa1\xa8)(\xe4\xbb\x8e\xe4\xbd\x8e\xe4\xb8\x80\xe7\xba\xa7\xe5\x8d\x87\xe7\xba\xa7\xe5\x88\xb0\xe6\x9c\xac\xe7\xba\xa7\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockContentIDs_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\xa3\xe9\x94\x81\xe5\x86\x85\xe5\xae\xb9(\xe5\x85\xb3\xe8\x81\x94TechUnlockItemConig\xe8\xa1\xa8)\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa3\xe9\x94\x81\xe5\x86\x85\xe5\xae\xb9(\xe5\x85\xb3\xe8\x81\x94TechUnlockItemConig\xe8\xa1\xa8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelReputation_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8d\x87\xe7\xba\xa7\xe6\x89\x80\xe9\x9c\x80\xe6\x9c\x80\xe4\xbd\x8e\xe5\xa3\xb0\xe6\x9c\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x87\xe7\xba\xa7\xe6\x89\x80\xe9\x9c\x80\xe6\x9c\x80\xe4\xbd\x8e\xe5\xa3\xb0\xe6\x9c\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSubclasses_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x86\xe5\xa0\x82\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x86\xe5\xa0\x82\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceMaxCharacterNum_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xae\x97\xe9\x97\xa8\xe4\xba\xba\xe6\x95\xb0\xe4\xb8\x8a\xe9\x99\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x97\xe9\x97\xa8\xe4\xba\xba\xe6\x95\xb0\xe4\xb8\x8a\xe9\x99\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBattleDiscipleNum_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x87\xba\xe5\xbe\x81\xe5\x8f\xaf\xe6\x90\xba\xe5\xb8\xa6\xe5\xbc\x9f\xe5\xad\x90\xe4\xb8\x8a\xe9\x99\x90(\xe4\xb8\x8d\xe5\x90\xab\xe6\x8c\x87\xe6\x8c\xa5\xe5\xae\x98)\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\xba\xe5\xbe\x81\xe5\x8f\xaf\xe6\x90\xba\xe5\xb8\xa6\xe5\xbc\x9f\xe5\xad\x90\xe4\xb8\x8a\xe9\x99\x90(\xe4\xb8\x8d\xe5\x90\xab\xe6\x8c\x87\xe6\x8c\xa5\xe5\xae\x98)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSubclassesMembers_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x86\xe5\xa0\x82\xe6\x88\x90\xe5\x91\x98\xe6\x95\xb0\xe9\x87\x8f\xef\xbc\x88\xe5\x8c\x85\xe5\x90\xab\xef\xbc\x9a\xe5\x88\x86\xe5\xa0\x82\xe5\xa0\x82\xe4\xb8\xbb+\xe5\xbc\x9f\xe5\xad\x90\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x86\xe5\xa0\x82\xe6\x88\x90\xe5\x91\x98\xe6\x95\xb0\xe9\x87\x8f\xef\xbc\x88\xe5\x8c\x85\xe5\x90\xab\xef\xbc\x9a\xe5\x88\x86\xe5\xa0\x82\xe5\xa0\x82\xe4\xb8\xbb+\xe5\xbc\x9f\xe5\xad\x90\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSubclassesFeature_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x88\x86\xe5\xa0\x82\xe7\x89\xb9\xe6\x80\xa7\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x88\x86\xe5\xa0\x82\xe7\x89\xb9\xe6\x80\xa7\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubclassesFeatureIDs_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84\xe5\x88\x86\xe5\xa0\x82\xe7\x89\xb9\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84\xe5\x88\x86\xe5\xa0\x82\xe7\x89\xb9\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PurposeNum_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe6\xbf\x80\xe6\xb4\xbb\xe7\x9a\x84\xe5\xae\x97\xe6\x97\xa8\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe6\xbf\x80\xe6\xb4\xbb\xe7\x9a\x84\xe5\xae\x97\xe6\x97\xa8\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfStations_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xa9\xbb\xe5\x9c\xb0\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xa9\xbb\xe5\x9c\xb0\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfTowns_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9f\x8e\xe9\x95\x87\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\x8e\xe9\x95\x87\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfResourcePoints_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe7\x82\xb9\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\x82\xb9\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TradeMarkup_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb4\xb8\xe6\x98\x93\xe5\x8a\xa0\xe6\x88\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xb8\xe6\x98\x93\xe5\x8a\xa0\xe6\x88\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedOfTrade_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb4\xb8\xe6\x98\x93\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xb8\xe6\x98\x93\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeudalOfficialUnlockBuilding_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb0\x81\xe5\xae\x98\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x81\xe5\xae\x98\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChamberOfCommerceUnlockBuilding_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x95\x86\xe4\xbc\x9a\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x95\x86\xe4\xbc\x9a\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterSalary_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xae\x97\xe4\xb8\xbb\xe5\xb7\xa5\xe8\xb5\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x97\xe4\xb8\xbb\xe5\xb7\xa5\xe8\xb5\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubMasterSalary_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa0\x82\xe4\xb8\xbb\xe5\xb7\xa5\xe8\xb5\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa0\x82\xe4\xb8\xbb\xe5\xb7\xa5\xe8\xb5\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoreCharacterSalary_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x86\x85\xe9\x97\xa8\xe5\xb7\xa5\xe8\xb5\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x85\xe9\x97\xa8\xe5\xb7\xa5\xe8\xb5\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarginalCharacterSalary_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa4\x96\xe9\x97\xa8\xe5\xb7\xa5\xe8\xb5\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe9\x97\xa8\xe5\xb7\xa5\xe8\xb5\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionUnlockBuilding_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb8\xae\xe6\xb4\xbe\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb8\xae\xe6\xb4\xbe\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectUnlockBuilding_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x97\xa8\xe6\xb4\xbe\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x97\xa8\xe6\xb4\xbe\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HomotropyFavorability_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x90\x8c\xe5\x80\xbe\xe5\x90\x91\xe5\xa5\xbd\xe6\x84\x9f\xe5\xba\xa6\xe5\xa2\x9e\xe5\x8a\xa0\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x8c\xe5\x80\xbe\xe5\x90\x91\xe5\xa5\xbd\xe6\x84\x9f\xe5\xba\xa6\xe5\xa2\x9e\xe5\x8a\xa0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifferentTendenciesFavorability_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\x8d\xe5\x90\x8c\xe5\x80\xbe\xe5\x90\x91\xe5\xa5\xbd\xe6\x84\x9f\xe5\xba\xa6\xe5\xa2\x9e\xe5\x8a\xa0\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8d\xe5\x90\x8c\xe5\x80\xbe\xe5\x90\x91\xe5\xa5\xbd\xe6\x84\x9f\xe5\xba\xa6\xe5\xa2\x9e\xe5\x8a\xa0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanForceOperation_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x85\x81\xe8\xae\xb8\xe7\x9a\x84\xe5\x8a\xbf\xe5\x8a\x9b\xe6\x93\x8d\xe4\xbd\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\x81\xe8\xae\xb8\xe7\x9a\x84\xe5\x8a\xbf\xe5\x8a\x9b\xe6\x93\x8d\xe4\xbd\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrowScore_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//NPC\xe5\x8a\xbf\xe5\x8a\x9b\xe6\x88\x90\xe9\x95\xbf\xe7\xa7\xaf\xe5\x88\x86\xe4\xb8\x8a\xe9\x99\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NPC\xe5\x8a\xbf\xe5\x8a\x9b\xe6\x88\x90\xe9\x95\xbf\xe7\xa7\xaf\xe5\x88\x86\xe4\xb8\x8a\xe9\x99\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddGrowScore_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//NPC\xe5\x8a\xbf\xe5\x8a\x9b\xe6\x88\x90\xe9\x95\xbf\xe7\xa7\xaf\xe5\x88\x86\xe5\xae\x9a\xe6\x9c\x9f\xe5\x8a\xa0\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NPC\xe5\x8a\xbf\xe5\x8a\x9b\xe6\x88\x90\xe9\x95\xbf\xe7\xa7\xaf\xe5\x88\x86\xe5\xae\x9a\xe6\x9c\x9f\xe5\x8a\xa0\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCConstructionTimes_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xaf\x8f\xe5\x91\xa8\xe6\x9c\x9f\xe8\x87\xaa\xe5\x8a\xa8\xe5\xbb\xba\xe9\x80\xa0\xe5\x8d\x87\xe7\xba\xa7\xe8\xae\xbe\xe6\x96\xbd\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0\xe9\x9a\x8f\xe6\x9c\xba\xe6\x95\xb0\xe7\xbb\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaf\x8f\xe5\x91\xa8\xe6\x9c\x9f\xe8\x87\xaa\xe5\x8a\xa8\xe5\xbb\xba\xe9\x80\xa0\xe5\x8d\x87\xe7\xba\xa7\xe8\xae\xbe\xe6\x96\xbd\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0\xe9\x9a\x8f\xe6\x9c\xba\xe6\x95\xb0\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockDogfaceIDs_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb0\x8f\xe5\x85\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x8f\xe5\x85\xb5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockStrategicAbility_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x88\x98\xe7\x95\xa5\xe6\x8a\x80\xe8\x83\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x98\xe7\x95\xa5\xe6\x8a\x80\xe8\x83\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockTowerDefense_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x98\xb2\xe5\xbe\xa1\xe5\xa1\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\xb2\xe5\xbe\xa1\xe5\xa1\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BattleBuffGroup_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x88\x98\xe6\x96\x97\xe4\xb8\xad\xe7\x94\x9f\xe6\x95\x88\xe7\x9a\x84""Buff\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe4\xb8\xad\xe7\x94\x9f\xe6\x95\x88\xe7\x9a\x84""Buff" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddMainPlaceStationedNum_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa2\x9e\xe5\x8a\xa0\xe4\xb8\xbb\xe5\x9f\x8e\xe9\xa9\xbb\xe6\x89\x8e\xe4\xb8\x8a\xe9\x99\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa2\x9e\xe5\x8a\xa0\xe4\xb8\xbb\xe5\x9f\x8e\xe9\xa9\xbb\xe6\x89\x8e\xe4\xb8\x8a\xe9\x99\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecruitRate_MetaData[] = {
		{ "Category", "ModForceLevelInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8b\x9b\xe5\x8b\x9f\xe6\x88\x90\xe5\x8a\x9f\xe7\x8e\x87\xe5\xbd\xb1\xe5\x93\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\x9b\xe5\x8b\x9f\xe6\x88\x90\xe5\x8a\x9f\xe7\x8e\x87\xe5\xbd\xb1\xe5\x93\x8d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForceLevel;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ForceLevelName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelUpConditionIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelUpConditionIDs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockContentIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockContentIDs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelReputation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSubclasses;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForceMaxCharacterNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBattleDiscipleNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSubclassesMembers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NumberOfSubclassesMembers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSubclassesFeature;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubclassesFeatureIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubclassesFeatureIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PurposeNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfStations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfTowns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfResourcePoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TradeMarkup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedOfTrade;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FeudalOfficialUnlockBuilding_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FeudalOfficialUnlockBuilding;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChamberOfCommerceUnlockBuilding_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChamberOfCommerceUnlockBuilding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MasterSalary;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubMasterSalary;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoreCharacterSalary;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MarginalCharacterSalary;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FactionUnlockBuilding_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FactionUnlockBuilding;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectUnlockBuilding_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectUnlockBuilding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HomotropyFavorability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DifferentTendenciesFavorability;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CanForceOperation_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CanForceOperation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CanForceOperation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGrowScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddGrowScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NPCConstructionTimes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCConstructionTimes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockDogfaceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockDogfaceIDs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockStrategicAbility_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockStrategicAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockTowerDefense_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockTowerDefense;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BattleBuffGroup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BattleBuffGroup;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AddMainPlaceStationedNum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecruitRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModForceLevelInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_ForceLevel = { "ForceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, ForceLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceLevel_MetaData), NewProp_ForceLevel_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_ForceLevelName = { "ForceLevelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, ForceLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceLevelName_MetaData), NewProp_ForceLevelName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_LevelUpConditionIDs_Inner = { "LevelUpConditionIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_LevelUpConditionIDs = { "LevelUpConditionIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, LevelUpConditionIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelUpConditionIDs_MetaData), NewProp_LevelUpConditionIDs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockContentIDs_Inner = { "UnlockContentIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockContentIDs = { "UnlockContentIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, UnlockContentIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockContentIDs_MetaData), NewProp_UnlockContentIDs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_LevelReputation = { "LevelReputation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, LevelReputation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelReputation_MetaData), NewProp_LevelReputation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfSubclasses = { "NumberOfSubclasses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, NumberOfSubclasses), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSubclasses_MetaData), NewProp_NumberOfSubclasses_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_ForceMaxCharacterNum = { "ForceMaxCharacterNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, ForceMaxCharacterNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceMaxCharacterNum_MetaData), NewProp_ForceMaxCharacterNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_MaxBattleDiscipleNum = { "MaxBattleDiscipleNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, MaxBattleDiscipleNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBattleDiscipleNum_MetaData), NewProp_MaxBattleDiscipleNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfSubclassesMembers_Inner = { "NumberOfSubclassesMembers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfSubclassesMembers = { "NumberOfSubclassesMembers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, NumberOfSubclassesMembers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSubclassesMembers_MetaData), NewProp_NumberOfSubclassesMembers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfSubclassesFeature = { "NumberOfSubclassesFeature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, NumberOfSubclassesFeature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSubclassesFeature_MetaData), NewProp_NumberOfSubclassesFeature_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SubclassesFeatureIDs_Inner = { "SubclassesFeatureIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SubclassesFeatureIDs = { "SubclassesFeatureIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, SubclassesFeatureIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubclassesFeatureIDs_MetaData), NewProp_SubclassesFeatureIDs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_PurposeNum = { "PurposeNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, PurposeNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PurposeNum_MetaData), NewProp_PurposeNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfStations = { "NumberOfStations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, NumberOfStations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfStations_MetaData), NewProp_NumberOfStations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfTowns = { "NumberOfTowns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, NumberOfTowns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfTowns_MetaData), NewProp_NumberOfTowns_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfResourcePoints = { "NumberOfResourcePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, NumberOfResourcePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfResourcePoints_MetaData), NewProp_NumberOfResourcePoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_TradeMarkup = { "TradeMarkup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, TradeMarkup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TradeMarkup_MetaData), NewProp_TradeMarkup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SpeedOfTrade = { "SpeedOfTrade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, SpeedOfTrade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedOfTrade_MetaData), NewProp_SpeedOfTrade_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_FeudalOfficialUnlockBuilding_Inner = { "FeudalOfficialUnlockBuilding", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_FeudalOfficialUnlockBuilding = { "FeudalOfficialUnlockBuilding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, FeudalOfficialUnlockBuilding), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeudalOfficialUnlockBuilding_MetaData), NewProp_FeudalOfficialUnlockBuilding_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_ChamberOfCommerceUnlockBuilding_Inner = { "ChamberOfCommerceUnlockBuilding", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_ChamberOfCommerceUnlockBuilding = { "ChamberOfCommerceUnlockBuilding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, ChamberOfCommerceUnlockBuilding), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChamberOfCommerceUnlockBuilding_MetaData), NewProp_ChamberOfCommerceUnlockBuilding_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_MasterSalary = { "MasterSalary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, MasterSalary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterSalary_MetaData), NewProp_MasterSalary_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SubMasterSalary = { "SubMasterSalary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, SubMasterSalary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubMasterSalary_MetaData), NewProp_SubMasterSalary_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_CoreCharacterSalary = { "CoreCharacterSalary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, CoreCharacterSalary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoreCharacterSalary_MetaData), NewProp_CoreCharacterSalary_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_MarginalCharacterSalary = { "MarginalCharacterSalary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, MarginalCharacterSalary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarginalCharacterSalary_MetaData), NewProp_MarginalCharacterSalary_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_FactionUnlockBuilding_Inner = { "FactionUnlockBuilding", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_FactionUnlockBuilding = { "FactionUnlockBuilding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, FactionUnlockBuilding), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionUnlockBuilding_MetaData), NewProp_FactionUnlockBuilding_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SectUnlockBuilding_Inner = { "SectUnlockBuilding", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SectUnlockBuilding = { "SectUnlockBuilding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, SectUnlockBuilding), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectUnlockBuilding_MetaData), NewProp_SectUnlockBuilding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_HomotropyFavorability = { "HomotropyFavorability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, HomotropyFavorability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HomotropyFavorability_MetaData), NewProp_HomotropyFavorability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_DifferentTendenciesFavorability = { "DifferentTendenciesFavorability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, DifferentTendenciesFavorability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifferentTendenciesFavorability_MetaData), NewProp_DifferentTendenciesFavorability_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_CanForceOperation_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_CanForceOperation_Inner = { "CanForceOperation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModForceOperationType, METADATA_PARAMS(0, nullptr) }; // 3296472
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_CanForceOperation = { "CanForceOperation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, CanForceOperation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanForceOperation_MetaData), NewProp_CanForceOperation_MetaData) }; // 3296472
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_MaxGrowScore = { "MaxGrowScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, MaxGrowScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGrowScore_MetaData), NewProp_MaxGrowScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_AddGrowScore = { "AddGrowScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, AddGrowScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddGrowScore_MetaData), NewProp_AddGrowScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NPCConstructionTimes_Inner = { "NPCConstructionTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NPCConstructionTimes = { "NPCConstructionTimes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, NPCConstructionTimes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCConstructionTimes_MetaData), NewProp_NPCConstructionTimes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockDogfaceIDs_Inner = { "UnlockDogfaceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockDogfaceIDs = { "UnlockDogfaceIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, UnlockDogfaceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockDogfaceIDs_MetaData), NewProp_UnlockDogfaceIDs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockStrategicAbility_Inner = { "UnlockStrategicAbility", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockStrategicAbility = { "UnlockStrategicAbility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, UnlockStrategicAbility), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockStrategicAbility_MetaData), NewProp_UnlockStrategicAbility_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockTowerDefense_Inner = { "UnlockTowerDefense", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockTowerDefense = { "UnlockTowerDefense", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, UnlockTowerDefense), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockTowerDefense_MetaData), NewProp_UnlockTowerDefense_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_BattleBuffGroup_Inner = { "BattleBuffGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModBattleBuffGroup, METADATA_PARAMS(0, nullptr) }; // 3373408239
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_BattleBuffGroup = { "BattleBuffGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, BattleBuffGroup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BattleBuffGroup_MetaData), NewProp_BattleBuffGroup_MetaData) }; // 3373408239
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_AddMainPlaceStationedNum = { "AddMainPlaceStationedNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, AddMainPlaceStationedNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddMainPlaceStationedNum_MetaData), NewProp_AddMainPlaceStationedNum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_RecruitRate = { "RecruitRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModForceLevelInfo, RecruitRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecruitRate_MetaData), NewProp_RecruitRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_ForceLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_ForceLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_LevelUpConditionIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_LevelUpConditionIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockContentIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockContentIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_LevelReputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfSubclasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_ForceMaxCharacterNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_MaxBattleDiscipleNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfSubclassesMembers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfSubclassesMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfSubclassesFeature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SubclassesFeatureIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SubclassesFeatureIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_PurposeNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfStations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfTowns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NumberOfResourcePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_TradeMarkup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SpeedOfTrade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_FeudalOfficialUnlockBuilding_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_FeudalOfficialUnlockBuilding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_ChamberOfCommerceUnlockBuilding_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_ChamberOfCommerceUnlockBuilding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_MasterSalary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SubMasterSalary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_CoreCharacterSalary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_MarginalCharacterSalary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_FactionUnlockBuilding_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_FactionUnlockBuilding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SectUnlockBuilding_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_SectUnlockBuilding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_HomotropyFavorability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_DifferentTendenciesFavorability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_CanForceOperation_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_CanForceOperation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_CanForceOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_MaxGrowScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_AddGrowScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NPCConstructionTimes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_NPCConstructionTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockDogfaceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockDogfaceIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockStrategicAbility_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockStrategicAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockTowerDefense_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_UnlockTowerDefense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_BattleBuffGroup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_BattleBuffGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_AddMainPlaceStationedNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewProp_RecruitRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModForceLevelInfo",
	Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::PropPointers),
	sizeof(FModForceLevelInfo),
	alignof(FModForceLevelInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModForceLevelInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FModForceLevelInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModForceLevelInfo.InnerSingleton, Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModForceLevelInfo.InnerSingleton;
}
// ********** End ScriptStruct FModForceLevelInfo **************************************************

// ********** Begin ScriptStruct FModSubClassApparelConfig *****************************************
static_assert(std::is_polymorphic<FModSubClassApparelConfig>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModSubClassApparelConfig cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModSubClassApparelConfig;
class UScriptStruct* FModSubClassApparelConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModSubClassApparelConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModSubClassApparelConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModSubClassApparelConfig, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModSubClassApparelConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FModSubClassApparelConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mod\xe5\x8a\xbf\xe5\x8a\x9b\xe6\x9c\x8d\xe9\xa5\xb0\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x88\xe6\xad\xa4\xe8\xa1\xa8\xe4\xb8\xad\xe6\xb2\xa1\xe6\x9c\x89\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\xb0\xb1\xe6\x98\xaf\xe6\x97\xa0\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mod\xe5\x8a\xbf\xe5\x8a\x9b\xe6\x9c\x8d\xe9\xa5\xb0\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x88\xe6\xad\xa4\xe8\xa1\xa8\xe4\xb8\xad\xe6\xb2\xa1\xe6\x9c\x89\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\xb0\xb1\xe6\x98\xaf\xe6\x97\xa0\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApparelId_MetaData[] = {
		{ "Category", "ModSubClassApparelConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x8d\xe9\xa5\xb0ID\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x8d\xe9\xa5\xb0ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubClassIndexArr_MetaData[] = {
		{ "Category", "ModSubClassApparelConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe6\x9c\x8d\xe9\xa5\xb0\xe5\x8f\xaf\xe4\xbb\xa5\xe7\x94\xa8\xe4\xba\x8e\xe7\x9a\x84\xe5\xa0\x82\xe5\x8f\xa3\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldDataStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe6\x9c\x8d\xe9\xa5\xb0\xe5\x8f\xaf\xe4\xbb\xa5\xe7\x94\xa8\xe4\xba\x8e\xe7\x9a\x84\xe5\xa0\x82\xe5\x8f\xa3" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ApparelId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubClassIndexArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubClassIndexArr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModSubClassApparelConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::NewProp_ApparelId = { "ApparelId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModSubClassApparelConfig, ApparelId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApparelId_MetaData), NewProp_ApparelId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::NewProp_SubClassIndexArr_Inner = { "SubClassIndexArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::NewProp_SubClassIndexArr = { "SubClassIndexArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModSubClassApparelConfig, SubClassIndexArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubClassIndexArr_MetaData), NewProp_SubClassIndexArr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::NewProp_ApparelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::NewProp_SubClassIndexArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::NewProp_SubClassIndexArr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModSubClassApparelConfig",
	Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::PropPointers),
	sizeof(FModSubClassApparelConfig),
	alignof(FModSubClassApparelConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModSubClassApparelConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FModSubClassApparelConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModSubClassApparelConfig.InnerSingleton, Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModSubClassApparelConfig.InnerSingleton;
}
// ********** End ScriptStruct FModSubClassApparelConfig *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h__Script_CreateModPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModWorldPlaceType_StaticEnum, TEXT("EModWorldPlaceType"), &Z_Registration_Info_UEnum_EModWorldPlaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2708434759U) },
		{ EModForceOperationType_StaticEnum, TEXT("EModForceOperationType"), &Z_Registration_Info_UEnum_EModForceOperationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3296472U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModWorldPlaceInfo::StaticStruct, Z_Construct_UScriptStruct_FModWorldPlaceInfo_Statics::NewStructOps, TEXT("ModWorldPlaceInfo"), &Z_Registration_Info_UScriptStruct_FModWorldPlaceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModWorldPlaceInfo), 1752054016U) },
		{ FModBattleBuffGroup::StaticStruct, Z_Construct_UScriptStruct_FModBattleBuffGroup_Statics::NewStructOps, TEXT("ModBattleBuffGroup"), &Z_Registration_Info_UScriptStruct_FModBattleBuffGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModBattleBuffGroup), 3373408239U) },
		{ FModForceLevelInfo::StaticStruct, Z_Construct_UScriptStruct_FModForceLevelInfo_Statics::NewStructOps, TEXT("ModForceLevelInfo"), &Z_Registration_Info_UScriptStruct_FModForceLevelInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModForceLevelInfo), 123364734U) },
		{ FModSubClassApparelConfig::StaticStruct, Z_Construct_UScriptStruct_FModSubClassApparelConfig_Statics::NewStructOps, TEXT("ModSubClassApparelConfig"), &Z_Registration_Info_UScriptStruct_FModSubClassApparelConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModSubClassApparelConfig), 1398603536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h__Script_CreateModPlugin_729917646(TEXT("/Script/CreateModPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_WorldDataStruct_h__Script_CreateModPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
