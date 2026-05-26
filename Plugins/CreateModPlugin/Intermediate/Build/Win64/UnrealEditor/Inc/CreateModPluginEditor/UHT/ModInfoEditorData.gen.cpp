// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModInfoEditorData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModInfoEditorData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
CREATEMODPLUGINEDITOR_API UClass* Z_Construct_UClass_UModInfoData();
CREATEMODPLUGINEDITOR_API UClass* Z_Construct_UClass_UModInfoData_NoRegister();
CREATEMODPLUGINEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FModDependencyData();
UPackage* Z_Construct_UPackage__Script_CreateModPluginEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FModDependencyData ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModDependencyData;
class UScriptStruct* FModDependencyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModDependencyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModDependencyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModDependencyData, (UObject*)Z_Construct_UPackage__Script_CreateModPluginEditor(), TEXT("ModDependencyData"));
	}
	return Z_Registration_Info_UScriptStruct_FModDependencyData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModDependencyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe4\xbe\x9d\xe8\xb5\x96\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe4\xbe\x9d\xe8\xb5\x96\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[] = {
		{ "Category", "Dependency" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbe\x9d\xe8\xb5\x96\xe7\x9a\x84 Mod ID\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbe\x9d\xe8\xb5\x96\xe7\x9a\x84 Mod ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVersion_MetaData[] = {
		{ "Category", "Dependency" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xb0\x8f\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\xef\xbc\x88\xe5\x8f\xaf\xe9\x80\x89\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xb0\x8f\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\xef\xbc\x88\xe5\x8f\xaf\xe9\x80\x89\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequired_MetaData[] = {
		{ "Category", "Dependency" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\xbf\x85\xe9\x9c\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xbf\x85\xe9\x9c\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MinVersion;
	static void NewProp_bRequired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModDependencyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModDependencyData_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDependencyData, ModId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModId_MetaData), NewProp_ModId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModDependencyData_Statics::NewProp_MinVersion = { "MinVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDependencyData, MinVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVersion_MetaData), NewProp_MinVersion_MetaData) };
void Z_Construct_UScriptStruct_FModDependencyData_Statics::NewProp_bRequired_SetBit(void* Obj)
{
	((FModDependencyData*)Obj)->bRequired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModDependencyData_Statics::NewProp_bRequired = { "bRequired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModDependencyData), &Z_Construct_UScriptStruct_FModDependencyData_Statics::NewProp_bRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequired_MetaData), NewProp_bRequired_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModDependencyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDependencyData_Statics::NewProp_ModId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDependencyData_Statics::NewProp_MinVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDependencyData_Statics::NewProp_bRequired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDependencyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModDependencyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPluginEditor,
	nullptr,
	&NewStructOps,
	"ModDependencyData",
	Z_Construct_UScriptStruct_FModDependencyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDependencyData_Statics::PropPointers),
	sizeof(FModDependencyData),
	alignof(FModDependencyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDependencyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModDependencyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModDependencyData()
{
	if (!Z_Registration_Info_UScriptStruct_FModDependencyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModDependencyData.InnerSingleton, Z_Construct_UScriptStruct_FModDependencyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModDependencyData.InnerSingleton;
}
// ********** End ScriptStruct FModDependencyData **************************************************

// ********** Begin Class UModInfoData *************************************************************
void UModInfoData::StaticRegisterNativesUModInfoData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModInfoData;
UClass* UModInfoData::GetPrivateStaticClass()
{
	using TClass = UModInfoData;
	if (!Z_Registration_Info_UClass_UModInfoData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModInfoData"),
			Z_Registration_Info_UClass_UModInfoData.InnerSingleton,
			StaticRegisterNativesUModInfoData,
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
	return Z_Registration_Info_UClass_UModInfoData.InnerSingleton;
}
UClass* Z_Construct_UClass_UModInfoData_NoRegister()
{
	return UModInfoData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UModInfoData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe4\xbf\xa1\xe6\x81\xaf\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\n" },
#endif
		{ "IncludePath", "ModInfoEditorData.h" },
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe4\xbf\xa1\xe6\x81\xaf\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe5\x94\xaf\xe4\xb8\x80\xe6\xa0\x87\xe8\xaf\x86\xe7\xac\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe5\x94\xaf\xe4\xb8\x80\xe6\xa0\x87\xe8\xaf\x86\xe7\xac\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe4\xbd\x9c\xe8\x80\x85\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe4\xbd\x9c\xe8\x80\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe5\x9b\xbe\xe6\xa0\x87\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe5\x9b\xbe\xe6\xa0\x87\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainLuaFile_MetaData[] = {
		{ "Category", "Files" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xbb Lua \xe6\x96\x87\xe4\xbb\xb6\n" },
#endif
		{ "FilePath", "" },
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
		{ "RelativeToGameDir", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb Lua \xe6\x96\x87\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModInformationAssetPath_MetaData[] = {
		{ "AllowedClasses", "/Script/CreateModPlugin.ModInformationAsset" },
		{ "Category", "Files" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe4\xbf\xa1\xe6\x81\xaf\xe8\xb5\x84\xe4\xba\xa7\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe4\xbf\xa1\xe6\x81\xaf\xe8\xb5\x84\xe4\xba\xa7\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[] = {
		{ "Category", "Dependencies" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbe\x9d\xe8\xb5\x96\xe5\x88\x97\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbe\x9d\xe8\xb5\x96\xe5\x88\x97\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewGameLoad_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe6\x96\xb0\xe6\xb8\xb8\xe6\x88\x8f\xe6\x97\xb6\xe5\x8a\xa0\xe8\xbd\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe6\x96\xb0\xe6\xb8\xb8\xe6\x88\x8f\xe6\x97\xb6\xe5\x8a\xa0\xe8\xbd\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinGameVersion_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xaf\xe6\x8c\x81\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe6\x9c\x80\xe5\xb0\x8f\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xaf\xe6\x8c\x81\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe6\x9c\x80\xe5\xb0\x8f\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGameplayTags_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\x8c\x85\xe5\x90\xab GameplayTag\xe9\x85\x8d\xe7\xbd\xae \xe4\xbd\xbf\xe7\x94\xa8\xe5\xbc\x95\xe6\x93\x8eGameplayTag\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x88\x96\xe5\x88\xa0\xe9\x99\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8c\x85\xe5\x90\xab GameplayTag\xe9\x85\x8d\xe7\xbd\xae \xe4\xbd\xbf\xe7\x94\xa8\xe5\xbc\x95\xe6\x93\x8eGameplayTag\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x88\x96\xe5\x88\xa0\xe9\x99\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagsIniFile_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93 bIncludeGameplayTags \xe4\xb8\xba\xe7\x9c\x9f\xe6\x97\xb6\xef\xbc\x8cGameplayTag \xe7\x9a\x84 ini \xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x88\xe7\x9b\xb8\xe5\xaf\xb9 Mod \xe6\xa0\xb9\xe7\x9b\xae\xe5\xbd\x95\xef\xbc\x8c\xe6\x88\x96\xe9\x80\x89\xe4\xb8\xad\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x9b\xe4\xbf\x9d\xe5\xad\x98\xe6\x97\xb6\xe4\xbc\x9a\xe8\xa7\x84\xe8\x8c\x83\xe4\xb8\xba {ModId}GameplayTags.ini\xef\xbc\x89\n" },
#endif
		{ "EditCondition", "bIncludeGameplayTags" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93 bIncludeGameplayTags \xe4\xb8\xba\xe7\x9c\x9f\xe6\x97\xb6\xef\xbc\x8cGameplayTag \xe7\x9a\x84 ini \xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x88\xe7\x9b\xb8\xe5\xaf\xb9 Mod \xe6\xa0\xb9\xe7\x9b\xae\xe5\xbd\x95\xef\xbc\x8c\xe6\x88\x96\xe9\x80\x89\xe4\xb8\xad\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x9b\xe4\xbf\x9d\xe5\xad\x98\xe6\x97\xb6\xe4\xbc\x9a\xe8\xa7\x84\xe8\x8c\x83\xe4\xb8\xba {ModId}GameplayTags.ini\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModFolderPath_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mod \xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98 JSON \xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod \xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98 JSON \xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Steam \xe5\x8f\x91\xe5\xb8\x83\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6 ID\xef\xbc\x88\xe7\x94\xb1\xe4\xb8\x8a\xe4\xbc\xa0\xe6\xb5\x81\xe7\xa8\x8b\xe5\x86\x99\xe5\x85\xa5 ModInfo.json\xef\xbc\x8c\xe4\xb8\x8d\xe5\x9c\xa8\xe6\x9c\xac\xe6\x8f\x92\xe4\xbb\xb6\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe7\xbc\x96\xe8\xbe\x91\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steam \xe5\x8f\x91\xe5\xb8\x83\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6 ID\xef\xbc\x88\xe7\x94\xb1\xe4\xb8\x8a\xe4\xbc\xa0\xe6\xb5\x81\xe7\xa8\x8b\xe5\x86\x99\xe5\x85\xa5 ModInfo.json\xef\xbc\x8c\xe4\xb8\x8d\xe5\x9c\xa8\xe6\x9c\xac\xe6\x8f\x92\xe4\xbb\xb6\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe7\xbc\x96\xe8\xbe\x91\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalAssets_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Public/ModInfoEditorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional assets to include in pak file. Paths should be relative to Content directory." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MainLuaFile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModInformationAssetPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
	static void NewProp_bNewGameLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewGameLoad;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MinGameVersion;
	static void NewProp_bIncludeGameplayTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGameplayTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameplayTagsIniFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModFolderPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModInfoData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, ModId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModId_MetaData), NewProp_ModId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, ModName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModName_MetaData), NewProp_ModName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, Author), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Author_MetaData), NewProp_Author_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, Icon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_MainLuaFile = { "MainLuaFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, MainLuaFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainLuaFile_MetaData), NewProp_MainLuaFile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_ModInformationAssetPath = { "ModInformationAssetPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, ModInformationAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModInformationAssetPath_MetaData), NewProp_ModInformationAssetPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModDependencyData, METADATA_PARAMS(0, nullptr) }; // 2834030679
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dependencies_MetaData), NewProp_Dependencies_MetaData) }; // 2834030679
void Z_Construct_UClass_UModInfoData_Statics::NewProp_bNewGameLoad_SetBit(void* Obj)
{
	((UModInfoData*)Obj)->bNewGameLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_bNewGameLoad = { "bNewGameLoad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UModInfoData), &Z_Construct_UClass_UModInfoData_Statics::NewProp_bNewGameLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewGameLoad_MetaData), NewProp_bNewGameLoad_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_MinGameVersion = { "MinGameVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, MinGameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinGameVersion_MetaData), NewProp_MinGameVersion_MetaData) };
void Z_Construct_UClass_UModInfoData_Statics::NewProp_bIncludeGameplayTags_SetBit(void* Obj)
{
	((UModInfoData*)Obj)->bIncludeGameplayTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_bIncludeGameplayTags = { "bIncludeGameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UModInfoData), &Z_Construct_UClass_UModInfoData_Statics::NewProp_bIncludeGameplayTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeGameplayTags_MetaData), NewProp_bIncludeGameplayTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_GameplayTagsIniFile = { "GameplayTagsIniFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, GameplayTagsIniFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagsIniFile_MetaData), NewProp_GameplayTagsIniFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_ModFolderPath = { "ModFolderPath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, ModFolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModFolderPath_MetaData), NewProp_ModFolderPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, PublishedFileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_AdditionalAssets_Inner = { "AdditionalAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModInfoData_Statics::NewProp_AdditionalAssets = { "AdditionalAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModInfoData, AdditionalAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalAssets_MetaData), NewProp_AdditionalAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModInfoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_ModId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_ModName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_Author,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_MainLuaFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_ModInformationAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_Dependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_Dependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_bNewGameLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_MinGameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_bIncludeGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_GameplayTagsIniFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_ModFolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_AdditionalAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModInfoData_Statics::NewProp_AdditionalAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModInfoData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModInfoData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CreateModPluginEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModInfoData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModInfoData_Statics::ClassParams = {
	&UModInfoData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModInfoData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModInfoData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModInfoData_Statics::Class_MetaDataParams), Z_Construct_UClass_UModInfoData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModInfoData()
{
	if (!Z_Registration_Info_UClass_UModInfoData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModInfoData.OuterSingleton, Z_Construct_UClass_UModInfoData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModInfoData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModInfoData);
UModInfoData::~UModInfoData() {}
// ********** End Class UModInfoData ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h__Script_CreateModPluginEditor_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModDependencyData::StaticStruct, Z_Construct_UScriptStruct_FModDependencyData_Statics::NewStructOps, TEXT("ModDependencyData"), &Z_Registration_Info_UScriptStruct_FModDependencyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModDependencyData), 2834030679U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModInfoData, UModInfoData::StaticClass, TEXT("UModInfoData"), &Z_Registration_Info_UClass_UModInfoData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModInfoData), 1546052400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h__Script_CreateModPluginEditor_1867794730(TEXT("/Script/CreateModPluginEditor"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h__Script_CreateModPluginEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h__Script_CreateModPluginEditor_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h__Script_CreateModPluginEditor_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h__Script_CreateModPluginEditor_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
