// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModNewGameStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModNewGameStruct() {}

// ********** Begin Cross Module References ********************************************************
CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModNewGameConfigAsset();
CREATEMODPLUGIN_API UClass* Z_Construct_UClass_UModNewGameConfigAsset_NoRegister();
CREATEMODPLUGIN_API UEnum* Z_Construct_UEnum_CreateModPlugin_EModItemQuality();
CREATEMODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FModCharacteristicNumWeight();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_CreateModPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FModCharacteristicNumWeight ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModCharacteristicNumWeight;
class UScriptStruct* FModCharacteristicNumWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacteristicNumWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModCharacteristicNumWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModCharacteristicNumWeight, (UObject*)Z_Construct_UPackage__Script_CreateModPlugin(), TEXT("ModCharacteristicNumWeight"));
	}
	return Z_Registration_Info_UScriptStruct_FModCharacteristicNumWeight.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAndWeight_MetaData[] = {
		{ "Category", "ModCharacteristicNumWeight" },
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAndWeight_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAndWeight_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NumAndWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModCharacteristicNumWeight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::NewProp_NumAndWeight_ValueProp = { "NumAndWeight", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::NewProp_NumAndWeight_Key_KeyProp = { "NumAndWeight_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::NewProp_NumAndWeight = { "NumAndWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModCharacteristicNumWeight, NumAndWeight), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAndWeight_MetaData), NewProp_NumAndWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::NewProp_NumAndWeight_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::NewProp_NumAndWeight_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::NewProp_NumAndWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
	nullptr,
	&NewStructOps,
	"ModCharacteristicNumWeight",
	Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::PropPointers),
	sizeof(FModCharacteristicNumWeight),
	alignof(FModCharacteristicNumWeight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModCharacteristicNumWeight()
{
	if (!Z_Registration_Info_UScriptStruct_FModCharacteristicNumWeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModCharacteristicNumWeight.InnerSingleton, Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModCharacteristicNumWeight.InnerSingleton;
}
// ********** End ScriptStruct FModCharacteristicNumWeight *****************************************

// ********** Begin Class UModNewGameConfigAsset ***************************************************
void UModNewGameConfigAsset::StaticRegisterNativesUModNewGameConfigAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModNewGameConfigAsset;
UClass* UModNewGameConfigAsset::GetPrivateStaticClass()
{
	using TClass = UModNewGameConfigAsset;
	if (!Z_Registration_Info_UClass_UModNewGameConfigAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModNewGameConfigAsset"),
			Z_Registration_Info_UClass_UModNewGameConfigAsset.InnerSingleton,
			StaticRegisterNativesUModNewGameConfigAsset,
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
	return Z_Registration_Info_UClass_UModNewGameConfigAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UModNewGameConfigAsset_NoRegister()
{
	return UModNewGameConfigAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UModNewGameConfigAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x96\xb0\xe6\xb8\xb8\xe6\x88\x8f\xe6\xb5\x81\xe7\xa8\x8b\xe9\x85\x8d\xe7\xbd\xae\xe8\xb5\x84\xe4\xba\xa7\n" },
#endif
		{ "IncludePath", "ModNewGameStruct.h" },
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xb0\xe6\xb8\xb8\xe6\x88\x8f\xe6\xb5\x81\xe7\xa8\x8b\xe9\x85\x8d\xe7\xbd\xae\xe8\xb5\x84\xe4\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtagonistPresetDataID_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xbb\xe8\xa7\x92\xe9\xa2\x84\xe8\xae\xbe\xe4\xbf\xa1\xe6\x81\xafID\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa7\x92\xe9\xa2\x84\xe8\xae\xbe\xe4\xbf\xa1\xe6\x81\xafID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtagonistFemaleAvatar_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa5\xb3\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe5\xa4\xb4\xe5\x83\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa5\xb3\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe5\xa4\xb4\xe5\x83\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Half_ProtagonistFemaleAvatar_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa5\xb3\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa5\xb3\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Half_TourFemaleAvatar_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa5\xb3\xe6\x80\xa7\xe6\xaf\x94\xe6\xad\xa6\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa5\xb3\xe6\x80\xa7\xe6\xaf\x94\xe6\xad\xa6\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Small_TourFemaleAvatar_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa5\xb3\xe6\x80\xa7\xe6\xaf\x94\xe6\xad\xa6\xe5\xb0\x8f\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa5\xb3\xe6\x80\xa7\xe6\xaf\x94\xe6\xad\xa6\xe5\xb0\x8f\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Half_ProtagonistFemaleCenterAvatar_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa5\xb3\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe4\xb8\xad\xe5\xbf\x83\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa5\xb3\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe4\xb8\xad\xe5\xbf\x83\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtagonistMaleAvatar_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xb7\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe5\xa4\xb4\xe5\x83\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb7\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe5\xa4\xb4\xe5\x83\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Half_ProtagonistMaleAvatar_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xb7\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb7\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Half_TourMaleAvatar_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xb7\xe6\x80\xa7\xe6\xaf\x94\xe6\xad\xa6\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb7\xe6\x80\xa7\xe6\xaf\x94\xe6\xad\xa6\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Small_TourMaleAvatar_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xb7\xe6\x80\xa7\xe6\xaf\x94\xe6\xad\xa6\xe5\xb0\x8f\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb7\xe6\x80\xa7\xe6\xaf\x94\xe6\xad\xa6\xe5\xb0\x8f\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Half_ProtagonistMaleCenterAvatar_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xb7\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe4\xb8\xad\xe5\xbf\x83\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb7\xe6\x80\xa7\xe4\xb8\xbb\xe8\xa7\x92\xe4\xb8\xad\xe5\xbf\x83\xe5\x8d\x8a\xe8\xba\xab\xe7\xab\x8b\xe7\xbb\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtagonistSkillPoint_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xbb\xe8\xa7\x92\xe6\x8a\x80\xe8\x83\xbd\xe7\x82\xb9\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa7\x92\xe6\x8a\x80\xe8\x83\xbd\xe7\x82\xb9\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtagonistFirePoint_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xbb\xe8\xa7\x92\xe5\x85\xb4\xe8\xb6\xa3\xe7\x82\xb9\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa7\x92\xe5\x85\xb4\xe8\xb6\xa3\xe7\x82\xb9\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerSkillMaxFirePoint_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xaf\x8f\xe4\xb8\xaa\xe6\x8a\x80\xe8\x83\xbd\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe5\x85\xb4\xe8\xb6\xa3\xe7\x82\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaf\x8f\xe4\xb8\xaa\xe6\x8a\x80\xe8\x83\xbd\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x9a\x84\xe5\x85\xb4\xe8\xb6\xa3\xe7\x82\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtagonistCharacteristicNum_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9a\x8f\xe6\x9c\xba\xe7\x94\x9f\xe6\x88\x90\xe4\xb8\xbb\xe8\xa7\x92\xe5\x8f\xaf\xe9\x80\x89\xe7\x89\xb9\xe6\x80\xa7\xe7\x9a\x84\xe6\x80\xbb\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9a\x8f\xe6\x9c\xba\xe7\x94\x9f\xe6\x88\x90\xe4\xb8\xbb\xe8\xa7\x92\xe5\x8f\xaf\xe9\x80\x89\xe7\x89\xb9\xe6\x80\xa7\xe7\x9a\x84\xe6\x80\xbb\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitNewGameTeamMemberNum_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe5\x90\x8c\xe8\xa1\x8c\xe6\x88\x90\xe5\x91\x98\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x90\x8c\xe8\xa1\x8c\xe6\x88\x90\xe5\x91\x98\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnLockBuildingId_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91id(\xe5\x9c\xa8\xe5\x88\x97\xe8\xa1\xa8\xe4\xb8\xad\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe8\xa7\x81)\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe5\xbb\xba\xe7\xad\x91id(\xe5\x9c\xa8\xe5\x88\x97\xe8\xa1\xa8\xe4\xb8\xad\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe8\xa7\x81)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockFormulaId_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe9\x85\x8d\xe6\x96\xb9id\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe9\x85\x8d\xe6\x96\xb9id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockPlantId_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe7\xa7\x8d\xe6\xa4\x8d\xe7\x89\xa9id\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe8\xa7\xa3\xe9\x94\x81\xe7\x9a\x84\xe7\xa7\x8d\xe6\xa4\x8d\xe7\x89\xa9id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockGameFunction_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x96\xb0\xe6\xb8\xb8\xe6\x88\x8f\xe5\x8a\x9f\xe8\x83\xbdID\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xb0\xe6\xb8\xb8\xe6\x88\x8f\xe5\x8a\x9f\xe8\x83\xbdID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitNewGameResourceCoinNum_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\xaf\xe5\x88\x86\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\xaf\xe5\x88\x86\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitNewGameStoryCoinNum_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe5\x89\xa7\xe6\x9c\xac\xe7\xa7\xaf\xe5\x88\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x89\xa7\xe6\x9c\xac\xe7\xa7\xaf\xe5\x88\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtagonistCharacteristicRand_MetaData[] = {
		{ "Category", "ModNewGameConfigAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xbb\xe8\xa7\x92\xe7\x89\xb9\xe6\x80\xa7\xe9\x9a\x8f\xe6\x9c\xba\n" },
#endif
		{ "ModuleRelativePath", "Public/ModNewGameStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa7\x92\xe7\x89\xb9\xe6\x80\xa7\xe9\x9a\x8f\xe6\x9c\xba" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProtagonistPresetDataID;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ProtagonistFemaleAvatar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProtagonistFemaleAvatar;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Half_ProtagonistFemaleAvatar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Half_ProtagonistFemaleAvatar;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Half_TourFemaleAvatar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Half_TourFemaleAvatar;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Small_TourFemaleAvatar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Small_TourFemaleAvatar;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Half_ProtagonistFemaleCenterAvatar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Half_ProtagonistFemaleCenterAvatar;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ProtagonistMaleAvatar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProtagonistMaleAvatar;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Half_ProtagonistMaleAvatar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Half_ProtagonistMaleAvatar;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Half_TourMaleAvatar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Half_TourMaleAvatar;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Small_TourMaleAvatar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Small_TourMaleAvatar;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Half_ProtagonistMaleCenterAvatar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Half_ProtagonistMaleCenterAvatar;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProtagonistSkillPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProtagonistFirePoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerSkillMaxFirePoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProtagonistCharacteristicNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitNewGameTeamMemberNum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnLockBuildingId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnLockBuildingId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockFormulaId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockFormulaId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockPlantId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockPlantId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnlockGameFunction_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockGameFunction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitNewGameResourceCoinNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitNewGameStoryCoinNum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProtagonistCharacteristicRand_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProtagonistCharacteristicRand_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProtagonistCharacteristicRand_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ProtagonistCharacteristicRand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModNewGameConfigAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistPresetDataID = { "ProtagonistPresetDataID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, ProtagonistPresetDataID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtagonistPresetDataID_MetaData), NewProp_ProtagonistPresetDataID_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistFemaleAvatar_Inner = { "ProtagonistFemaleAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistFemaleAvatar = { "ProtagonistFemaleAvatar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, ProtagonistFemaleAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtagonistFemaleAvatar_MetaData), NewProp_ProtagonistFemaleAvatar_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistFemaleAvatar_Inner = { "Half_ProtagonistFemaleAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistFemaleAvatar = { "Half_ProtagonistFemaleAvatar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, Half_ProtagonistFemaleAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Half_ProtagonistFemaleAvatar_MetaData), NewProp_Half_ProtagonistFemaleAvatar_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_TourFemaleAvatar_Inner = { "Half_TourFemaleAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_TourFemaleAvatar = { "Half_TourFemaleAvatar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, Half_TourFemaleAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Half_TourFemaleAvatar_MetaData), NewProp_Half_TourFemaleAvatar_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Small_TourFemaleAvatar_Inner = { "Small_TourFemaleAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Small_TourFemaleAvatar = { "Small_TourFemaleAvatar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, Small_TourFemaleAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Small_TourFemaleAvatar_MetaData), NewProp_Small_TourFemaleAvatar_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistFemaleCenterAvatar_Inner = { "Half_ProtagonistFemaleCenterAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistFemaleCenterAvatar = { "Half_ProtagonistFemaleCenterAvatar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, Half_ProtagonistFemaleCenterAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Half_ProtagonistFemaleCenterAvatar_MetaData), NewProp_Half_ProtagonistFemaleCenterAvatar_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistMaleAvatar_Inner = { "ProtagonistMaleAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistMaleAvatar = { "ProtagonistMaleAvatar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, ProtagonistMaleAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtagonistMaleAvatar_MetaData), NewProp_ProtagonistMaleAvatar_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistMaleAvatar_Inner = { "Half_ProtagonistMaleAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistMaleAvatar = { "Half_ProtagonistMaleAvatar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, Half_ProtagonistMaleAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Half_ProtagonistMaleAvatar_MetaData), NewProp_Half_ProtagonistMaleAvatar_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_TourMaleAvatar_Inner = { "Half_TourMaleAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_TourMaleAvatar = { "Half_TourMaleAvatar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, Half_TourMaleAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Half_TourMaleAvatar_MetaData), NewProp_Half_TourMaleAvatar_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Small_TourMaleAvatar_Inner = { "Small_TourMaleAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Small_TourMaleAvatar = { "Small_TourMaleAvatar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, Small_TourMaleAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Small_TourMaleAvatar_MetaData), NewProp_Small_TourMaleAvatar_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistMaleCenterAvatar_Inner = { "Half_ProtagonistMaleCenterAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistMaleCenterAvatar = { "Half_ProtagonistMaleCenterAvatar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, Half_ProtagonistMaleCenterAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Half_ProtagonistMaleCenterAvatar_MetaData), NewProp_Half_ProtagonistMaleCenterAvatar_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistSkillPoint = { "ProtagonistSkillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, ProtagonistSkillPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtagonistSkillPoint_MetaData), NewProp_ProtagonistSkillPoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistFirePoint = { "ProtagonistFirePoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, ProtagonistFirePoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtagonistFirePoint_MetaData), NewProp_ProtagonistFirePoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_PerSkillMaxFirePoint = { "PerSkillMaxFirePoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, PerSkillMaxFirePoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerSkillMaxFirePoint_MetaData), NewProp_PerSkillMaxFirePoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistCharacteristicNum = { "ProtagonistCharacteristicNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, ProtagonistCharacteristicNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtagonistCharacteristicNum_MetaData), NewProp_ProtagonistCharacteristicNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_InitNewGameTeamMemberNum = { "InitNewGameTeamMemberNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, InitNewGameTeamMemberNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitNewGameTeamMemberNum_MetaData), NewProp_InitNewGameTeamMemberNum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnLockBuildingId_Inner = { "UnLockBuildingId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnLockBuildingId = { "UnLockBuildingId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, UnLockBuildingId), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnLockBuildingId_MetaData), NewProp_UnLockBuildingId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockFormulaId_Inner = { "UnlockFormulaId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockFormulaId = { "UnlockFormulaId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, UnlockFormulaId), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockFormulaId_MetaData), NewProp_UnlockFormulaId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockPlantId_Inner = { "UnlockPlantId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockPlantId = { "UnlockPlantId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, UnlockPlantId), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockPlantId_MetaData), NewProp_UnlockPlantId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockGameFunction_Inner = { "UnlockGameFunction", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockGameFunction = { "UnlockGameFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, UnlockGameFunction), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockGameFunction_MetaData), NewProp_UnlockGameFunction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_InitNewGameResourceCoinNum = { "InitNewGameResourceCoinNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, InitNewGameResourceCoinNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitNewGameResourceCoinNum_MetaData), NewProp_InitNewGameResourceCoinNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_InitNewGameStoryCoinNum = { "InitNewGameStoryCoinNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, InitNewGameStoryCoinNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitNewGameStoryCoinNum_MetaData), NewProp_InitNewGameStoryCoinNum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistCharacteristicRand_ValueProp = { "ProtagonistCharacteristicRand", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModCharacteristicNumWeight, METADATA_PARAMS(0, nullptr) }; // 2873175428
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistCharacteristicRand_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistCharacteristicRand_Key_KeyProp = { "ProtagonistCharacteristicRand_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CreateModPlugin_EModItemQuality, METADATA_PARAMS(0, nullptr) }; // 3220179462
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistCharacteristicRand = { "ProtagonistCharacteristicRand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModNewGameConfigAsset, ProtagonistCharacteristicRand), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtagonistCharacteristicRand_MetaData), NewProp_ProtagonistCharacteristicRand_MetaData) }; // 3220179462 2873175428
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModNewGameConfigAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistPresetDataID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistFemaleAvatar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistFemaleAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistFemaleAvatar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistFemaleAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_TourFemaleAvatar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_TourFemaleAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Small_TourFemaleAvatar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Small_TourFemaleAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistFemaleCenterAvatar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistFemaleCenterAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistMaleAvatar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistMaleAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistMaleAvatar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistMaleAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_TourMaleAvatar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_TourMaleAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Small_TourMaleAvatar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Small_TourMaleAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistMaleCenterAvatar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_Half_ProtagonistMaleCenterAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistSkillPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistFirePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_PerSkillMaxFirePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistCharacteristicNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_InitNewGameTeamMemberNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnLockBuildingId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnLockBuildingId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockFormulaId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockFormulaId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockPlantId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockPlantId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockGameFunction_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_UnlockGameFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_InitNewGameResourceCoinNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_InitNewGameStoryCoinNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistCharacteristicRand_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistCharacteristicRand_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistCharacteristicRand_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModNewGameConfigAsset_Statics::NewProp_ProtagonistCharacteristicRand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModNewGameConfigAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModNewGameConfigAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModNewGameConfigAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModNewGameConfigAsset_Statics::ClassParams = {
	&UModNewGameConfigAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModNewGameConfigAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModNewGameConfigAsset_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModNewGameConfigAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UModNewGameConfigAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModNewGameConfigAsset()
{
	if (!Z_Registration_Info_UClass_UModNewGameConfigAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModNewGameConfigAsset.OuterSingleton, Z_Construct_UClass_UModNewGameConfigAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModNewGameConfigAsset.OuterSingleton;
}
UModNewGameConfigAsset::UModNewGameConfigAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModNewGameConfigAsset);
UModNewGameConfigAsset::~UModNewGameConfigAsset() {}
// ********** End Class UModNewGameConfigAsset *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h__Script_CreateModPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModCharacteristicNumWeight::StaticStruct, Z_Construct_UScriptStruct_FModCharacteristicNumWeight_Statics::NewStructOps, TEXT("ModCharacteristicNumWeight"), &Z_Registration_Info_UScriptStruct_FModCharacteristicNumWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModCharacteristicNumWeight), 2873175428U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModNewGameConfigAsset, UModNewGameConfigAsset::StaticClass, TEXT("UModNewGameConfigAsset"), &Z_Registration_Info_UClass_UModNewGameConfigAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModNewGameConfigAsset), 1058017621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h__Script_CreateModPlugin_3362327718(TEXT("/Script/CreateModPlugin"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h__Script_CreateModPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h__Script_CreateModPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPlugin_Public_ModNewGameStruct_h__Script_CreateModPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
