// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenerationMonster.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGenerationMonster() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModCharacterType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModInfluenceType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModThreatType();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModTipsType();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModDataBase();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModGenerationData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModGenerationRuleData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModGenerationSetData();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModMonsterGenerationConfig();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModNameIDArray();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModThreatPoolInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EModThreatType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModThreatType;
static UEnum* EModThreatType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModThreatType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModThreatType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModThreatType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModThreatType"));
	}
	return Z_Registration_Info_UEnum_EModThreatType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModThreatType>()
{
	return EModThreatType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModThreatType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimalMigration.Comment", "//\xe5\x8a\xa8\xe7\x89\xa9\xe8\xbf\x81\xe5\xbe\x99\n" },
		{ "AnimalMigration.Name", "EModThreatType::AnimalMigration" },
		{ "AnimalMigration.ToolTip", "\xe5\x8a\xa8\xe7\x89\xa9\xe8\xbf\x81\xe5\xbe\x99" },
		{ "BanditAttack.Comment", "//\xe5\xb1\xb1\xe8\xb4\xbc\xe8\xbf\x9b\xe6\x94\xbb\n" },
		{ "BanditAttack.Name", "EModThreatType::BanditAttack" },
		{ "BanditAttack.ToolTip", "\xe5\xb1\xb1\xe8\xb4\xbc\xe8\xbf\x9b\xe6\x94\xbb" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa8\x81\xe8\x83\x81\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "FrozenSoil.Comment", "//\xe5\x86\xbb\xe5\x9c\x9f\n" },
		{ "FrozenSoil.Name", "EModThreatType::FrozenSoil" },
		{ "FrozenSoil.ToolTip", "\xe5\x86\xbb\xe5\x9c\x9f" },
		{ "GhostBride.Comment", "//\xe9\xac\xbc\xe6\x96\xb0\xe5\xa8\x98\n" },
		{ "GhostBride.Name", "EModThreatType::GhostBride" },
		{ "GhostBride.ToolTip", "\xe9\xac\xbc\xe6\x96\xb0\xe5\xa8\x98" },
		{ "HostileSectAttack.Comment", "//\xe6\x95\x8c\xe5\xaf\xb9\xe9\x97\xa8\xe6\xb4\xbe\xe8\xbf\x9b\xe6\x94\xbb\n" },
		{ "HostileSectAttack.Name", "EModThreatType::HostileSectAttack" },
		{ "HostileSectAttack.ToolTip", "\xe6\x95\x8c\xe5\xaf\xb9\xe9\x97\xa8\xe6\xb4\xbe\xe8\xbf\x9b\xe6\x94\xbb" },
		{ "LoggingAutomaton.Comment", "//\xe4\xbc\x90\xe6\x9c\xa8\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba\n" },
		{ "LoggingAutomaton.Name", "EModThreatType::LoggingAutomaton" },
		{ "LoggingAutomaton.ToolTip", "\xe4\xbc\x90\xe6\x9c\xa8\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba" },
		{ "MechanismAttack.Comment", "//\xe6\x9c\xba\xe5\x85\xb3\xe6\x9c\xaf\n" },
		{ "MechanismAttack.Name", "EModThreatType::MechanismAttack" },
		{ "MechanismAttack.ToolTip", "\xe6\x9c\xba\xe5\x85\xb3\xe6\x9c\xaf" },
		{ "MiningAutomaton.Comment", "//\xe9\x87\x87\xe7\x9f\xbf\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba\n" },
		{ "MiningAutomaton.Name", "EModThreatType::MiningAutomaton" },
		{ "MiningAutomaton.ToolTip", "\xe9\x87\x87\xe7\x9f\xbf\xe6\x9c\xba\xe5\x85\xb3\xe4\xba\xba" },
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
		{ "None.Name", "EModThreatType::None" },
		{ "Plague.Comment", "//\xe7\x98\x9f\xe7\x96\xab\n" },
		{ "Plague.Name", "EModThreatType::Plague" },
		{ "Plague.ToolTip", "\xe7\x98\x9f\xe7\x96\xab" },
		{ "SearingSun.Comment", "//\xe7\x83\x88\xe9\x98\xb3\xe7\x81\xbc\xe6\x97\xa5\n" },
		{ "SearingSun.Name", "EModThreatType::SearingSun" },
		{ "SearingSun.ToolTip", "\xe7\x83\x88\xe9\x98\xb3\xe7\x81\xbc\xe6\x97\xa5" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa8\x81\xe8\x83\x81\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "Tornado.Comment", "//\xe9\xbe\x99\xe5\x8d\xb7\xe9\xa3\x8e\n" },
		{ "Tornado.Name", "EModThreatType::Tornado" },
		{ "Tornado.ToolTip", "\xe9\xbe\x99\xe5\x8d\xb7\xe9\xa3\x8e" },
		{ "ZombieRebirth.Comment", "//\xe5\x83\xb5\xe5\xb0\xb8\xe5\xa4\x8d\xe7\x94\x9f\n" },
		{ "ZombieRebirth.Name", "EModThreatType::ZombieRebirth" },
		{ "ZombieRebirth.ToolTip", "\xe5\x83\xb5\xe5\xb0\xb8\xe5\xa4\x8d\xe7\x94\x9f" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModThreatType::None", (int64)EModThreatType::None },
		{ "EModThreatType::BanditAttack", (int64)EModThreatType::BanditAttack },
		{ "EModThreatType::HostileSectAttack", (int64)EModThreatType::HostileSectAttack },
		{ "EModThreatType::MechanismAttack", (int64)EModThreatType::MechanismAttack },
		{ "EModThreatType::ZombieRebirth", (int64)EModThreatType::ZombieRebirth },
		{ "EModThreatType::GhostBride", (int64)EModThreatType::GhostBride },
		{ "EModThreatType::AnimalMigration", (int64)EModThreatType::AnimalMigration },
		{ "EModThreatType::SearingSun", (int64)EModThreatType::SearingSun },
		{ "EModThreatType::FrozenSoil", (int64)EModThreatType::FrozenSoil },
		{ "EModThreatType::Plague", (int64)EModThreatType::Plague },
		{ "EModThreatType::Tornado", (int64)EModThreatType::Tornado },
		{ "EModThreatType::LoggingAutomaton", (int64)EModThreatType::LoggingAutomaton },
		{ "EModThreatType::MiningAutomaton", (int64)EModThreatType::MiningAutomaton },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModThreatType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModThreatType",
	"EModThreatType",
	Z_Construct_UEnum_CreateModPlugin_EModThreatType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModThreatType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModThreatType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModThreatType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModThreatType()
{
	if (!Z_Registration_Info_UEnum_EModThreatType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModThreatType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModThreatType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModThreatType.InnerSingleton;
}
// ********** End Enum EModThreatType **************************************************************

// ********** Begin ScriptStruct FModNameIDArray ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModNameIDArray;
class UScriptStruct* FModNameIDArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModNameIDArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModNameIDArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModNameIDArray, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModNameIDArray"));
	}
	return Z_Registration_Info_UScriptStruct_FModNameIDArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModNameIDArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[] = {
		{ "Category", "ModNameIDArray" },
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_IDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModNameIDArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModNameIDArray_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModNameIDArray_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModNameIDArray, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDs_MetaData), NewProp_IDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModNameIDArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModNameIDArray_Statics::NewProp_IDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModNameIDArray_Statics::NewProp_IDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModNameIDArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModNameIDArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModNameIDArray",
	Z_Construct_UScriptStruct_FModNameIDArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModNameIDArray_Statics::PropPointers),
	sizeof(FModNameIDArray),
	alignof(FModNameIDArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModNameIDArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModNameIDArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModNameIDArray()
{
	if (!Z_Registration_Info_UScriptStruct_FModNameIDArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModNameIDArray.InnerSingleton, Z_Construct_UScriptStruct_FModNameIDArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModNameIDArray.InnerSingleton;
}
// ********** End ScriptStruct FModNameIDArray *****************************************************

// ********** Begin ScriptStruct FModThreatPoolInfo ************************************************
static_assert(std::is_polymorphic<FModThreatPoolInfo>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModThreatPoolInfo cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModThreatPoolInfo;
class UScriptStruct* FModThreatPoolInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModThreatPoolInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModThreatPoolInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModThreatPoolInfo, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModThreatPoolInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FModThreatPoolInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa8\x81\xe8\x83\x81\xe6\xb1\xa0\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa8\x81\xe8\x83\x81\xe6\xb1\xa0\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThreatPoolType_MetaData[] = {
		{ "Category", "ModThreatPoolInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa8\x81\xe8\x83\x81\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa8\x81\xe8\x83\x81\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RaidPoints_MetaData[] = {
		{ "Category", "ModThreatPoolInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa2\xad\xe5\x87\xbb\xe7\x82\xb9\xe6\x95\xb0(\xe5\xbf\x85\xe9\xa1\xbb\xe4\xb8\xba\xe6\x95\xb4\xe6\x95\xb0\xef\xbc\x8c\xe9\x9a\x8f\xe6\x9c\xba\xe6\x9c\x89\xe7\x94\xa8)\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa2\xad\xe5\x87\xbb\xe7\x82\xb9\xe6\x95\xb0(\xe5\xbf\x85\xe9\xa1\xbb\xe4\xb8\xba\xe6\x95\xb4\xe6\x95\xb0\xef\xbc\x8c\xe9\x9a\x8f\xe6\x9c\xba\xe6\x9c\x89\xe7\x94\xa8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[] = {
		{ "Category", "ModThreatPoolInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x86\xb7\xe5\x8d\xb4\xe6\x97\xb6\xe9\x97\xb4(\xe7\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\xb7\xe5\x8d\xb4\xe6\x97\xb6\xe9\x97\xb4(\xe7\xa7\x92)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationIDsMap_MetaData[] = {
		{ "Category", "ModThreatPoolInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9b\xe5\xbb\xba\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xaeID<\xe5\x9c\xb0\xe5\x9b\xbe\xe5\x90\x8d\xe7\xa7\xb0,\xe7\x94\x9f\xe6\x88\x90\xe9\x85\x8d\xe7\xbd\xaeID\xe6\x95\xb0\xe7\xbb\x84>\xe5\x88\x9b\xe5\xbb\xba\xe6\x80\xaa\xe7\x89\xa9IDs(\xe8\xb0\x83\xe7\x94\xa8 DT_MonsterGenerationConfig ) /\xe6\x95\x8c\xe5\xaf\xb9\xe5\x8a\xbf\xe5\x8a\x9b\xe8\xa2\xad\xe5\x87\xbbIDs \xef\xbc\x88\xe8\xb0\x83\xe7\x94\xa8 DT_EnemyAttackGenerationConfig\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xaeID<\xe5\x9c\xb0\xe5\x9b\xbe\xe5\x90\x8d\xe7\xa7\xb0,\xe7\x94\x9f\xe6\x88\x90\xe9\x85\x8d\xe7\xbd\xaeID\xe6\x95\xb0\xe7\xbb\x84>\xe5\x88\x9b\xe5\xbb\xba\xe6\x80\xaa\xe7\x89\xa9IDs(\xe8\xb0\x83\xe7\x94\xa8 DT_MonsterGenerationConfig ) /\xe6\x95\x8c\xe5\xaf\xb9\xe5\x8a\xbf\xe5\x8a\x9b\xe8\xa2\xad\xe5\x87\xbbIDs \xef\xbc\x88\xe8\xb0\x83\xe7\x94\xa8 DT_EnemyAttackGenerationConfig\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetModEnabled_MetaData[] = {
		{ "Category", "ModThreatPoolInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x90\xaf\xe7\x94\xa8\xe6\xad\xa4\xe5\xa8\x81\xe8\x83\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x90\xaf\xe7\x94\xa8\xe6\xad\xa4\xe5\xa8\x81\xe8\x83\x81" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThreatPoolType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThreatPoolType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RaidPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationIDsMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GenerationIDsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GenerationIDsMap;
	static void NewProp_SetModEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetModEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModThreatPoolInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_ThreatPoolType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_ThreatPoolType = { "ThreatPoolType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModThreatPoolInfo, ThreatPoolType), Z_Construct_UEnum_CreateModPlugin_EModThreatType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThreatPoolType_MetaData), NewProp_ThreatPoolType_MetaData) }; // 365326407
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_RaidPoints = { "RaidPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModThreatPoolInfo, RaidPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RaidPoints_MetaData), NewProp_RaidPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModThreatPoolInfo, CooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTime_MetaData), NewProp_CooldownTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_GenerationIDsMap_ValueProp = { "GenerationIDsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModNameIDArray, METADATA_PARAMS(0, nullptr) }; // 1068728390
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_GenerationIDsMap_Key_KeyProp = { "GenerationIDsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_GenerationIDsMap = { "GenerationIDsMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModThreatPoolInfo, GenerationIDsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationIDsMap_MetaData), NewProp_GenerationIDsMap_MetaData) }; // 1068728390
void Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_SetModEnabled_SetBit(void* Obj)
{
	((FModThreatPoolInfo*)Obj)->SetModEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_SetModEnabled = { "SetModEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModThreatPoolInfo), &Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_SetModEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetModEnabled_MetaData), NewProp_SetModEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_ThreatPoolType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_ThreatPoolType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_RaidPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_CooldownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_GenerationIDsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_GenerationIDsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_GenerationIDsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewProp_SetModEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModThreatPoolInfo",
	Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::PropPointers),
	sizeof(FModThreatPoolInfo),
	alignof(FModThreatPoolInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModThreatPoolInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FModThreatPoolInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModThreatPoolInfo.InnerSingleton, Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModThreatPoolInfo.InnerSingleton;
}
// ********** End ScriptStruct FModThreatPoolInfo **************************************************

// ********** Begin ScriptStruct FModGenerationData ************************************************
static_assert(std::is_polymorphic<FModGenerationData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FModGenerationData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModGenerationData;
class UScriptStruct* FModGenerationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModGenerationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModGenerationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModGenerationData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModGenerationData"));
	}
	return Z_Registration_Info_UScriptStruct_FModGenerationData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModGenerationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationPosition_MetaData[] = {
		{ "Category", "ModGenerationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae \xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xaf\xe6\x88\x98\xe5\x9c\xba\xe5\xb0\x8f\xe5\x85\xb5\xe6\xa8\xa1\xe6\x9d\xbf\xe5\x88\x99\xe4\xb8\x8d\xe5\xa1\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae \xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xaf\xe6\x88\x98\xe5\x9c\xba\xe5\xb0\x8f\xe5\x85\xb5\xe6\xa8\xa1\xe6\x9d\xbf\xe5\x88\x99\xe4\xb8\x8d\xe5\xa1\xab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterIDs_MetaData[] = {
		{ "Category", "ModGenerationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84ID \xe6\x9c\x80\xe7\xbb\x88\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\xe6\x98\xaf \xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84ID * Number \xe5\xad\x97\xe6\xae\xb5(\xe5\xa6\x82\xe6\x9e\x9cGenerationActorType\xe9\x85\x8d\xe7\xbd\xae\xe4\xb8\xbaSpawnPostStationChivalrousByPresetID\xe8\xbf\x99\xe9\x87\x8c\xe5\xa1\xab\xe9\xa2\x84\xe8\xae\xbe\xe8\xa7\x92\xe8\x89\xb2\xe8\xa1\xa8id)\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84ID \xe6\x9c\x80\xe7\xbb\x88\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\xe6\x98\xaf \xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84ID * Number \xe5\xad\x97\xe6\xae\xb5(\xe5\xa6\x82\xe6\x9e\x9cGenerationActorType\xe9\x85\x8d\xe7\xbd\xae\xe4\xb8\xbaSpawnPostStationChivalrousByPresetID\xe8\xbf\x99\xe9\x87\x8c\xe5\xa1\xab\xe9\xa2\x84\xe8\xae\xbe\xe8\xa7\x92\xe8\x89\xb2\xe8\xa1\xa8id)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[] = {
		{ "Category", "ModGenerationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[] = {
		{ "Category", "ModGenerationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddGoals_MetaData[] = {
		{ "Category", "ModGenerationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x96\xb0\xe5\xa2\x9e\xe7\x9a\x84Goals\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xb0\xe5\xa2\x9e\xe7\x9a\x84Goals" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffects_MetaData[] = {
		{ "Category", "ModGenerationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe6\x97\xb6\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84GE\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe6\x97\xb6\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84GE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingRange_MetaData[] = {
		{ "Category", "ModGenerationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x97\xb2\xe9\x80\x9b\xe6\x97\xb6\xe7\xa7\xbb\xe5\x8a\xa8\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4 \xe4\xbb\xa5\xe5\x87\xba\xe7\x94\x9f\xe7\x82\xb9\xe4\xb8\xba\xe4\xb8\xad\xe5\xbf\x83\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x97\xb2\xe9\x80\x9b\xe6\x97\xb6\xe7\xa7\xbb\xe5\x8a\xa8\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4 \xe4\xbb\xa5\xe5\x87\xba\xe7\x94\x9f\xe7\x82\xb9\xe4\xb8\xba\xe4\xb8\xad\xe5\xbf\x83" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "ModGenerationData" },
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationPosition_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GenerationPosition_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GenerationPosition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AddGoals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddGoals;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_GameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovingRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModGenerationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_GenerationPosition_ValueProp = { "GenerationPosition", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_GenerationPosition_Key_KeyProp = { "GenerationPosition_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_GenerationPosition = { "GenerationPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationData, GenerationPosition), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationPosition_MetaData), NewProp_GenerationPosition_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_CharacterIDs_Inner = { "CharacterIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_CharacterIDs = { "CharacterIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationData, CharacterIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterIDs_MetaData), NewProp_CharacterIDs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationData, Number), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Number_MetaData), NewProp_Number_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_CharacterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationData, CharacterType), Z_Construct_UEnum_CreateModPlugin_EModCharacterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterType_MetaData), NewProp_CharacterType_MetaData) }; // 901461423
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_AddGoals_Inner = { "AddGoals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_AddGoals = { "AddGoals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationData, AddGoals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddGoals_MetaData), NewProp_AddGoals_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_GameplayEffects_Inner = { "GameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_GameplayEffects = { "GameplayEffects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationData, GameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffects_MetaData), NewProp_GameplayEffects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_MovingRange = { "MovingRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationData, MovingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingRange_MetaData), NewProp_MovingRange_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationData, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModGenerationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_GenerationPosition_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_GenerationPosition_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_GenerationPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_CharacterIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_CharacterIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_CharacterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_CharacterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_AddGoals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_AddGoals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_GameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_GameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_MovingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationData_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModGenerationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ModGenerationData",
	Z_Construct_UScriptStruct_FModGenerationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationData_Statics::PropPointers),
	sizeof(FModGenerationData),
	alignof(FModGenerationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModGenerationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModGenerationData()
{
	if (!Z_Registration_Info_UScriptStruct_FModGenerationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModGenerationData.InnerSingleton, Z_Construct_UScriptStruct_FModGenerationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModGenerationData.InnerSingleton;
}
// ********** End ScriptStruct FModGenerationData **************************************************

// ********** Begin ScriptStruct FModGenerationSetData *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModGenerationSetData;
class UScriptStruct* FModGenerationSetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModGenerationSetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModGenerationSetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModGenerationSetData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModGenerationSetData"));
	}
	return Z_Registration_Info_UScriptStruct_FModGenerationSetData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModGenerationSetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationData_MetaData[] = {
		{ "Category", "ModGenerationSetData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe5\xaf\xb9\xe5\xba\x94\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84\xe6\x9d\x83\xe9\x87\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe5\xaf\xb9\xe5\xba\x94\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84\xe6\x9d\x83\xe9\x87\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationNumber_MetaData[] = {
		{ "Category", "ModGenerationSetData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\x80\xe6\xac\xa1\xe7\x94\x9f\xe6\x88\x90\xe6\x97\xb6\xe5\x8f\x96\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe9\x85\x8d\xe7\xbd\xae\xe7\x94\x9f\xe6\x88\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x80\xe6\xac\xa1\xe7\x94\x9f\xe6\x88\x90\xe6\x97\xb6\xe5\x8f\x96\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe9\x85\x8d\xe7\xbd\xae\xe7\x94\x9f\xe6\x88\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
		{ "Category", "ModGenerationSetData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9b\xa2\xe9\x98\x9fID\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\xa2\xe9\x98\x9fID" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GenerationData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModGenerationSetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewProp_GenerationData_ValueProp = { "GenerationData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewProp_GenerationData_Key_KeyProp = { "GenerationData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModGenerationData, METADATA_PARAMS(0, nullptr) }; // 1842200092
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewProp_GenerationData = { "GenerationData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationSetData, GenerationData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationData_MetaData), NewProp_GenerationData_MetaData) }; // 1842200092
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewProp_GenerationNumber = { "GenerationNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationSetData, GenerationNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationNumber_MetaData), NewProp_GenerationNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationSetData, TeamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamID_MetaData), NewProp_TeamID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModGenerationSetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewProp_GenerationData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewProp_GenerationData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewProp_GenerationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewProp_GenerationNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewProp_TeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationSetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModGenerationSetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModGenerationSetData",
	Z_Construct_UScriptStruct_FModGenerationSetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationSetData_Statics::PropPointers),
	sizeof(FModGenerationSetData),
	alignof(FModGenerationSetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationSetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModGenerationSetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModGenerationSetData()
{
	if (!Z_Registration_Info_UScriptStruct_FModGenerationSetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModGenerationSetData.InnerSingleton, Z_Construct_UScriptStruct_FModGenerationSetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModGenerationSetData.InnerSingleton;
}
// ********** End ScriptStruct FModGenerationSetData ***********************************************

// ********** Begin Enum EModGenerationRuleType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModGenerationRuleType;
static UEnum* EModGenerationRuleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModGenerationRuleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModGenerationRuleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModGenerationRuleType"));
	}
	return Z_Registration_Info_UEnum_EModGenerationRuleType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModGenerationRuleType>()
{
	return EModGenerationRuleType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe8\xa7\x84\xe5\x88\x99\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Fixed.Comment", "//\xe5\x9b\xba\xe5\xae\x9a\n" },
		{ "Fixed.Name", "EModGenerationRuleType::Fixed" },
		{ "Fixed.ToolTip", "\xe5\x9b\xba\xe5\xae\x9a" },
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
		{ "None.Name", "EModGenerationRuleType::None" },
		{ "Probability.Comment", "//\xe6\xa6\x82\xe7\x8e\x87\n" },
		{ "Probability.Name", "EModGenerationRuleType::Probability" },
		{ "Probability.ToolTip", "\xe6\xa6\x82\xe7\x8e\x87" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe8\xa7\x84\xe5\x88\x99\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModGenerationRuleType::None", (int64)EModGenerationRuleType::None },
		{ "EModGenerationRuleType::Fixed", (int64)EModGenerationRuleType::Fixed },
		{ "EModGenerationRuleType::Probability", (int64)EModGenerationRuleType::Probability },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModGenerationRuleType",
	"EModGenerationRuleType",
	Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType()
{
	if (!Z_Registration_Info_UEnum_EModGenerationRuleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModGenerationRuleType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModGenerationRuleType.InnerSingleton;
}
// ********** End Enum EModGenerationRuleType ******************************************************

// ********** Begin Enum EModInfluenceType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModInfluenceType;
static UEnum* EModInfluenceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModInfluenceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModInfluenceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModInfluenceType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModInfluenceType"));
	}
	return Z_Registration_Info_UEnum_EModInfluenceType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModInfluenceType>()
{
	return EModInfluenceType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModInfluenceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\xb1\xe5\x93\x8d\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "LackCharacterNumber.Comment", "//\xe7\xbc\xba\xe5\xb0\x91\xe7\x8e\xa9\xe5\xae\xb6\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe9\x87\x8f\n" },
		{ "LackCharacterNumber.Name", "EModInfluenceType::LackCharacterNumber" },
		{ "LackCharacterNumber.ToolTip", "\xe7\xbc\xba\xe5\xb0\x91\xe7\x8e\xa9\xe5\xae\xb6\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
		{ "None.Name", "EModInfluenceType::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\xb1\xe5\x93\x8d\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModInfluenceType::None", (int64)EModInfluenceType::None },
		{ "EModInfluenceType::LackCharacterNumber", (int64)EModInfluenceType::LackCharacterNumber },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModInfluenceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModInfluenceType",
	"EModInfluenceType",
	Z_Construct_UEnum_CreateModPlugin_EModInfluenceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModInfluenceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModInfluenceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModInfluenceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModInfluenceType()
{
	if (!Z_Registration_Info_UEnum_EModInfluenceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModInfluenceType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModInfluenceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModInfluenceType.InnerSingleton;
}
// ********** End Enum EModInfluenceType ***********************************************************

// ********** Begin ScriptStruct FModGenerationProbabilityInfluence ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModGenerationProbabilityInfluence;
class UScriptStruct* FModGenerationProbabilityInfluence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModGenerationProbabilityInfluence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModGenerationProbabilityInfluence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModGenerationProbabilityInfluence"));
	}
	return Z_Registration_Info_UScriptStruct_FModGenerationProbabilityInfluence.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87\xe5\xbd\xb1\xe5\x93\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87\xe5\xbd\xb1\xe5\x93\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceType_MetaData[] = {
		{ "Category", "ModGenerationProbabilityInfluence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\xb1\xe5\x93\x8d\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\xb1\xe5\x93\x8d\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[] = {
		{ "Category", "ModGenerationProbabilityInfluence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa6\x82\xe7\x8e\x87\xe5\x8f\x98\xe5\x8c\x96\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa6\x82\xe7\x8e\x87\xe5\x8f\x98\xe5\x8c\x96" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharacterNumber_MetaData[] = {
		{ "Category", "ModGenerationProbabilityInfluence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe4\xba\xba\xe6\x95\xb0\n" },
#endif
		{ "EditCondition", "InfluenceType == EModInfluenceType::LackCharacterNumber" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe4\xba\xba\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InfluenceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InfluenceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharacterNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModGenerationProbabilityInfluence>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::NewProp_InfluenceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::NewProp_InfluenceType = { "InfluenceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationProbabilityInfluence, InfluenceType), Z_Construct_UEnum_CreateModPlugin_EModInfluenceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluenceType_MetaData), NewProp_InfluenceType_MetaData) }; // 3792150598
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationProbabilityInfluence, Probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Probability_MetaData), NewProp_Probability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::NewProp_MaxCharacterNumber = { "MaxCharacterNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationProbabilityInfluence, MaxCharacterNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharacterNumber_MetaData), NewProp_MaxCharacterNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::NewProp_InfluenceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::NewProp_InfluenceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::NewProp_Probability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::NewProp_MaxCharacterNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModGenerationProbabilityInfluence",
	Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::PropPointers),
	sizeof(FModGenerationProbabilityInfluence),
	alignof(FModGenerationProbabilityInfluence),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence()
{
	if (!Z_Registration_Info_UScriptStruct_FModGenerationProbabilityInfluence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModGenerationProbabilityInfluence.InnerSingleton, Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModGenerationProbabilityInfluence.InnerSingleton;
}
// ********** End ScriptStruct FModGenerationProbabilityInfluence **********************************

// ********** Begin ScriptStruct FModGenerationRuleData ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModGenerationRuleData;
class UScriptStruct* FModGenerationRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModGenerationRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModGenerationRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModGenerationRuleData, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModGenerationRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_FModGenerationRuleData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModGenerationRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe8\xa7\x84\xe5\x88\x99\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe8\xa7\x84\xe5\x88\x99" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationRule_MetaData[] = {
		{ "Category", "ModGenerationRuleData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe8\xa7\x84\xe5\x88\x99\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe8\xa7\x84\xe5\x88\x99\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseProbability_MetaData[] = {
		{ "Category", "ModGenerationRuleData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9f\xba\xe7\xa1\x80\xe6\xa6\x82\xe7\x8e\x87\n" },
#endif
		{ "EditCondition", "GenerationRule == EModGenerationRuleType::Probability" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe6\xa6\x82\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbabilityInfluence_MetaData[] = {
		{ "Category", "ModGenerationRuleData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa6\x82\xe7\x8e\x87\xe7\x9a\x84\xe5\xbd\xb1\xe5\x93\x8d\xe9\x85\x8d\xe7\xbd\xae\n" },
#endif
		{ "EditCondition", "GenerationRule == EModGenerationRuleType::Probability" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa6\x82\xe7\x8e\x87\xe7\x9a\x84\xe5\xbd\xb1\xe5\x93\x8d\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationRule;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseProbability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProbabilityInfluence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProbabilityInfluence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModGenerationRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewProp_GenerationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewProp_GenerationRule = { "GenerationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationRuleData, GenerationRule), Z_Construct_UEnum_CreateModPlugin_EModGenerationRuleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationRule_MetaData), NewProp_GenerationRule_MetaData) }; // 3754388881
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewProp_BaseProbability = { "BaseProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationRuleData, BaseProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseProbability_MetaData), NewProp_BaseProbability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewProp_ProbabilityInfluence_Inner = { "ProbabilityInfluence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence, METADATA_PARAMS(0, nullptr) }; // 3640847322
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewProp_ProbabilityInfluence = { "ProbabilityInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModGenerationRuleData, ProbabilityInfluence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbabilityInfluence_MetaData), NewProp_ProbabilityInfluence_MetaData) }; // 3640847322
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewProp_GenerationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewProp_GenerationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewProp_BaseProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewProp_ProbabilityInfluence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewProp_ProbabilityInfluence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModGenerationRuleData",
	Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::PropPointers),
	sizeof(FModGenerationRuleData),
	alignof(FModGenerationRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModGenerationRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_FModGenerationRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModGenerationRuleData.InnerSingleton, Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModGenerationRuleData.InnerSingleton;
}
// ********** End ScriptStruct FModGenerationRuleData **********************************************

// ********** Begin Enum EModGenerationActorType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModGenerationActorType;
static UEnum* EModGenerationActorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModGenerationActorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModGenerationActorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("EModGenerationActorType"));
	}
	return Z_Registration_Info_UEnum_EModGenerationActorType.OuterSingleton;
}
template<> CREATEMODPLUGIN_API UEnum* StaticEnum<EModGenerationActorType>()
{
	return EModGenerationActorType_StaticEnum();
}
struct Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
		{ "None.Name", "EModGenerationActorType::None" },
		{ "Recruit.Comment", "//\xe6\x8b\x9b\xe5\x8b\x9f \xe6\x8b\x9b\xe5\x8b\x9f\xe6\xa8\xa1\xe5\xbc\x8f\xe5\x9b\xba\xe5\xae\x9a\xe5\x9c\xa8\xe6\x8b\x9b\xe5\x8b\x9f\xe5\x90\x8e\xe4\xbc\x9a\xe5\x8e\xbb\xe9\x87\x8d\n" },
		{ "Recruit.Name", "EModGenerationActorType::Recruit" },
		{ "Recruit.ToolTip", "\xe6\x8b\x9b\xe5\x8b\x9f \xe6\x8b\x9b\xe5\x8b\x9f\xe6\xa8\xa1\xe5\xbc\x8f\xe5\x9b\xba\xe5\xae\x9a\xe5\x9c\xa8\xe6\x8b\x9b\xe5\x8b\x9f\xe5\x90\x8e\xe4\xbc\x9a\xe5\x8e\xbb\xe9\x87\x8d" },
		{ "SpawnMonster.Comment", "//\xe5\x88\xb7\xe6\x96\xb0\xe6\x80\xaa\xe7\x89\xa9\n" },
		{ "SpawnMonster.Name", "EModGenerationActorType::SpawnMonster" },
		{ "SpawnMonster.ToolTip", "\xe5\x88\xb7\xe6\x96\xb0\xe6\x80\xaa\xe7\x89\xa9" },
		{ "SpawnMonsterNest.Comment", "//\xe5\x88\xb7\xe6\x96\xb0\xe8\x90\xa5\xe5\x9c\xb0\xe6\x80\xaa\xe7\x89\xa9\n" },
		{ "SpawnMonsterNest.Name", "EModGenerationActorType::SpawnMonsterNest" },
		{ "SpawnMonsterNest.ToolTip", "\xe5\x88\xb7\xe6\x96\xb0\xe8\x90\xa5\xe5\x9c\xb0\xe6\x80\xaa\xe7\x89\xa9" },
		{ "SpawnPostStationChivalrous.Comment", "//\xe5\x88\xb7\xe6\x96\xb0\xe9\xa9\xbf\xe7\xab\x99\xe6\xb1\x9f\xe6\xb9\x96\xe4\xba\xba\xe5\xa3\xab\n" },
		{ "SpawnPostStationChivalrous.Name", "EModGenerationActorType::SpawnPostStationChivalrous" },
		{ "SpawnPostStationChivalrous.ToolTip", "\xe5\x88\xb7\xe6\x96\xb0\xe9\xa9\xbf\xe7\xab\x99\xe6\xb1\x9f\xe6\xb9\x96\xe4\xba\xba\xe5\xa3\xab" },
		{ "SpawnPostStationChivalrousByPresetID.Comment", "//\xe9\x80\x9a\xe8\xbf\x87""DT_CharacterPresetConfig\xe8\xa1\xa8ID\xe5\x88\xb7\xe6\x96\xb0\xe9\xa9\xbf\xe7\xab\x99\xe6\xb1\x9f\xe6\xb9\x96\xe4\xba\xba\xe5\xa3\xab\n" },
		{ "SpawnPostStationChivalrousByPresetID.Name", "EModGenerationActorType::SpawnPostStationChivalrousByPresetID" },
		{ "SpawnPostStationChivalrousByPresetID.ToolTip", "\xe9\x80\x9a\xe8\xbf\x87""DT_CharacterPresetConfig\xe8\xa1\xa8ID\xe5\x88\xb7\xe6\x96\xb0\xe9\xa9\xbf\xe7\xab\x99\xe6\xb1\x9f\xe6\xb9\x96\xe4\xba\xba\xe5\xa3\xab" },
		{ "SpawnPostStationPeddler.Comment", "//\xe5\x88\xb7\xe6\x96\xb0\xe9\xa9\xbf\xe7\xab\x99\xe5\x95\x86\xe4\xba\xba\n" },
		{ "SpawnPostStationPeddler.Name", "EModGenerationActorType::SpawnPostStationPeddler" },
		{ "SpawnPostStationPeddler.ToolTip", "\xe5\x88\xb7\xe6\x96\xb0\xe9\xa9\xbf\xe7\xab\x99\xe5\x95\x86\xe4\xba\xba" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModGenerationActorType::None", (int64)EModGenerationActorType::None },
		{ "EModGenerationActorType::Recruit", (int64)EModGenerationActorType::Recruit },
		{ "EModGenerationActorType::SpawnMonster", (int64)EModGenerationActorType::SpawnMonster },
		{ "EModGenerationActorType::SpawnMonsterNest", (int64)EModGenerationActorType::SpawnMonsterNest },
		{ "EModGenerationActorType::SpawnPostStationChivalrous", (int64)EModGenerationActorType::SpawnPostStationChivalrous },
		{ "EModGenerationActorType::SpawnPostStationPeddler", (int64)EModGenerationActorType::SpawnPostStationPeddler },
		{ "EModGenerationActorType::SpawnPostStationChivalrousByPresetID", (int64)EModGenerationActorType::SpawnPostStationChivalrousByPresetID },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	"EModGenerationActorType",
	"EModGenerationActorType",
	Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType()
{
	if (!Z_Registration_Info_UEnum_EModGenerationActorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModGenerationActorType.InnerSingleton, Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModGenerationActorType.InnerSingleton;
}
// ********** End Enum EModGenerationActorType *****************************************************

// ********** Begin ScriptStruct FModMonsterGenerationConfig ***************************************
static_assert(std::is_polymorphic<FModMonsterGenerationConfig>() == std::is_polymorphic<FModDataBase>(), "USTRUCT FModMonsterGenerationConfig cannot be polymorphic unless super FModDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModMonsterGenerationConfig;
class UScriptStruct* FModMonsterGenerationConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModMonsterGenerationConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModMonsterGenerationConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModMonsterGenerationConfig, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModMonsterGenerationConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FModMonsterGenerationConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x80\xaa\xe7\x89\xa9\xe7\x94\x9f\xe6\x88\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x80\xaa\xe7\x89\xa9\xe7\x94\x9f\xe6\x88\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateCountDown_MetaData[] = {
		{ "Category", "ModMonsterGenerationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xbf\x80\xe6\xb4\xbb\xe5\x80\x92\xe8\xae\xa1\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xbf\x80\xe6\xb4\xbb\xe5\x80\x92\xe8\xae\xa1\xe6\x97\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationDelay_MetaData[] = {
		{ "Category", "ModMonsterGenerationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe6\x80\xaa\xe7\x89\xa9\xe7\x9a\x84\xe5\xbb\xb6\xe8\xbf\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe6\x80\xaa\xe7\x89\xa9\xe7\x9a\x84\xe5\xbb\xb6\xe8\xbf\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationSetData_MetaData[] = {
		{ "Category", "ModMonsterGenerationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe8\xae\xbe\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe8\xae\xbe\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationTimes_MetaData[] = {
		{ "Category", "ModMonsterGenerationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0 -1 \xe4\xb8\xba\xe6\x97\xa0\xe9\x99\x90\xe6\xac\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0 -1 \xe4\xb8\xba\xe6\x97\xa0\xe9\x99\x90\xe6\xac\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationInterval_MetaData[] = {
		{ "Category", "ModMonsterGenerationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationMaxNumber_MetaData[] = {
		{ "Category", "ModMonsterGenerationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xad\xa4\xe7\x94\x9f\xe6\x88\x90\xe9\x85\x8d\xe7\xbd\xae \xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\x8d\x95\xe4\xbd\x8d\xe6\x9c\x80\xe5\xa4\x9a\xe5\x90\x8c\xe6\x97\xb6\xe5\xad\x98\xe5\x9c\xa8\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa -1 \xe4\xb8\xba\xe6\x97\xa0\xe9\x99\x90\xe5\x88\xb6 \n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe7\x94\x9f\xe6\x88\x90\xe9\x85\x8d\xe7\xbd\xae \xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\x8d\x95\xe4\xbd\x8d\xe6\x9c\x80\xe5\xa4\x9a\xe5\x90\x8c\xe6\x97\xb6\xe5\xad\x98\xe5\x9c\xa8\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa -1 \xe4\xb8\xba\xe6\x97\xa0\xe9\x99\x90\xe5\x88\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateTips_MetaData[] = {
		{ "Category", "ModMonsterGenerationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8f\x90\xe7\xa4\xba \xe6\xbf\x80\xe6\xb4\xbb\xe6\x8f\x90\xe7\xa4\xba\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x90\xe7\xa4\xba \xe6\xbf\x80\xe6\xb4\xbb\xe6\x8f\x90\xe7\xa4\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationTips_MetaData[] = {
		{ "Category", "ModMonsterGenerationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8f\x90\xe7\xa4\xba \xe7\x94\x9f\xe6\x88\x90\xe6\x8f\x90\xe7\xa4\xba\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x90\xe7\xa4\xba \xe7\x94\x9f\xe6\x88\x90\xe6\x8f\x90\xe7\xa4\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationRule_MetaData[] = {
		{ "Category", "ModMonsterGenerationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe8\xa7\x84\xe5\x88\x99\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe8\xa7\x84\xe5\x88\x99" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationActorType_MetaData[] = {
		{ "Category", "ModMonsterGenerationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90""actor\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/GenerationMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90""actor\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivateCountDown;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationDelay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationSetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GenerationSetData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationTimes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationMaxNumber;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivateTips_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivateTips;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationTips_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationTips;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationActorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationActorType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModMonsterGenerationConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_ActivateCountDown = { "ActivateCountDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModMonsterGenerationConfig, ActivateCountDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateCountDown_MetaData), NewProp_ActivateCountDown_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationDelay = { "GenerationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModMonsterGenerationConfig, GenerationDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationDelay_MetaData), NewProp_GenerationDelay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationSetData_Inner = { "GenerationSetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModGenerationSetData, METADATA_PARAMS(0, nullptr) }; // 1206196191
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationSetData = { "GenerationSetData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModMonsterGenerationConfig, GenerationSetData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationSetData_MetaData), NewProp_GenerationSetData_MetaData) }; // 1206196191
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationTimes = { "GenerationTimes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModMonsterGenerationConfig, GenerationTimes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationTimes_MetaData), NewProp_GenerationTimes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationInterval = { "GenerationInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModMonsterGenerationConfig, GenerationInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationInterval_MetaData), NewProp_GenerationInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationMaxNumber = { "GenerationMaxNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModMonsterGenerationConfig, GenerationMaxNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationMaxNumber_MetaData), NewProp_GenerationMaxNumber_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_ActivateTips_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_ActivateTips = { "ActivateTips", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModMonsterGenerationConfig, ActivateTips), Z_Construct_UEnum_CreateModPlugin_EModTipsType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateTips_MetaData), NewProp_ActivateTips_MetaData) }; // 2254412518
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationTips_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationTips = { "GenerationTips", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModMonsterGenerationConfig, GenerationTips), Z_Construct_UEnum_CreateModPlugin_EModTipsType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationTips_MetaData), NewProp_GenerationTips_MetaData) }; // 2254412518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationRule = { "GenerationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModMonsterGenerationConfig, GenerationRule), Z_Construct_UScriptStruct_FModGenerationRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationRule_MetaData), NewProp_GenerationRule_MetaData) }; // 2819705291
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationActorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationActorType = { "GenerationActorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModMonsterGenerationConfig, GenerationActorType), Z_Construct_UEnum_CreateModPlugin_EModGenerationActorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationActorType_MetaData), NewProp_GenerationActorType_MetaData) }; // 2437885630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_ActivateCountDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationSetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationSetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationMaxNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_ActivateTips_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_ActivateTips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationTips_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationTips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationActorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewProp_GenerationActorType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	Z_Construct_UScriptStruct_FModDataBase,
	&NewStructOps,
	"ModMonsterGenerationConfig",
	Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::PropPointers),
	sizeof(FModMonsterGenerationConfig),
	alignof(FModMonsterGenerationConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModMonsterGenerationConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FModMonsterGenerationConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModMonsterGenerationConfig.InnerSingleton, Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModMonsterGenerationConfig.InnerSingleton;
}
// ********** End ScriptStruct FModMonsterGenerationConfig *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h__Script_CreateModPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModThreatType_StaticEnum, TEXT("EModThreatType"), &Z_Registration_Info_UEnum_EModThreatType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 365326407U) },
		{ EModGenerationRuleType_StaticEnum, TEXT("EModGenerationRuleType"), &Z_Registration_Info_UEnum_EModGenerationRuleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3754388881U) },
		{ EModInfluenceType_StaticEnum, TEXT("EModInfluenceType"), &Z_Registration_Info_UEnum_EModInfluenceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3792150598U) },
		{ EModGenerationActorType_StaticEnum, TEXT("EModGenerationActorType"), &Z_Registration_Info_UEnum_EModGenerationActorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2437885630U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModNameIDArray::StaticStruct, Z_Construct_UScriptStruct_FModNameIDArray_Statics::NewStructOps, TEXT("ModNameIDArray"), &Z_Registration_Info_UScriptStruct_FModNameIDArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModNameIDArray), 1068728390U) },
		{ FModThreatPoolInfo::StaticStruct, Z_Construct_UScriptStruct_FModThreatPoolInfo_Statics::NewStructOps, TEXT("ModThreatPoolInfo"), &Z_Registration_Info_UScriptStruct_FModThreatPoolInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModThreatPoolInfo), 591459588U) },
		{ FModGenerationData::StaticStruct, Z_Construct_UScriptStruct_FModGenerationData_Statics::NewStructOps, TEXT("ModGenerationData"), &Z_Registration_Info_UScriptStruct_FModGenerationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModGenerationData), 1842200092U) },
		{ FModGenerationSetData::StaticStruct, Z_Construct_UScriptStruct_FModGenerationSetData_Statics::NewStructOps, TEXT("ModGenerationSetData"), &Z_Registration_Info_UScriptStruct_FModGenerationSetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModGenerationSetData), 1206196191U) },
		{ FModGenerationProbabilityInfluence::StaticStruct, Z_Construct_UScriptStruct_FModGenerationProbabilityInfluence_Statics::NewStructOps, TEXT("ModGenerationProbabilityInfluence"), &Z_Registration_Info_UScriptStruct_FModGenerationProbabilityInfluence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModGenerationProbabilityInfluence), 3640847322U) },
		{ FModGenerationRuleData::StaticStruct, Z_Construct_UScriptStruct_FModGenerationRuleData_Statics::NewStructOps, TEXT("ModGenerationRuleData"), &Z_Registration_Info_UScriptStruct_FModGenerationRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModGenerationRuleData), 2819705291U) },
		{ FModMonsterGenerationConfig::StaticStruct, Z_Construct_UScriptStruct_FModMonsterGenerationConfig_Statics::NewStructOps, TEXT("ModMonsterGenerationConfig"), &Z_Registration_Info_UScriptStruct_FModMonsterGenerationConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModMonsterGenerationConfig), 3011816981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h__Script_CreateModPlugin_2345372420(TEXT("/Script/CreateModPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h__Script_CreateModPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_GenerationMonster_h__Script_CreateModPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
