// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAbilityEnum() {}

// ********** Begin Cross Module References ********************************************************
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EItemQuality();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EWeaponType();
GASFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FFormatText();
UPackage* Z_Construct_UPackage__Script_GASFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EItemQuality **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemQuality;
static UEnum* EItemQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EItemQuality, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EItemQuality"));
	}
	return Z_Registration_Info_UEnum_EItemQuality.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EItemQuality>()
{
	return EItemQuality_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EItemQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blue.Comment", "//\xe8\x93\x9d\xe8\x89\xb2\n" },
		{ "Blue.Name", "EItemQuality::Blue" },
		{ "Blue.ToolTip", "\xe8\x93\x9d\xe8\x89\xb2" },
		{ "BlueprintType", "true" },
		{ "Colorful.Comment", "//\xe7\x82\xab\xe5\xbd\xa9\n" },
		{ "Colorful.Name", "EItemQuality::Colorful" },
		{ "Colorful.ToolTip", "\xe7\x82\xab\xe5\xbd\xa9" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe5\x93\x81\xe5\x93\x81\xe8\xb4\xa8\xe6\x9e\x9a\xe4\xb8\xbe\n" },
#endif
		{ "Golden.Comment", "//\xe9\x87\x91\xe8\x89\xb2\n" },
		{ "Golden.Name", "EItemQuality::Golden" },
		{ "Golden.ToolTip", "\xe9\x87\x91\xe8\x89\xb2" },
		{ "Green.Comment", "//\xe7\xbb\xbf\xe8\x89\xb2\n" },
		{ "Green.Name", "EItemQuality::Green" },
		{ "Green.ToolTip", "\xe7\xbb\xbf\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/AbilityEnum.h" },
		{ "None.Name", "EItemQuality::None" },
		{ "Orange.Comment", "//\xe6\xa9\x99\xe8\x89\xb2\n" },
		{ "Orange.Name", "EItemQuality::Orange" },
		{ "Orange.ToolTip", "\xe6\xa9\x99\xe8\x89\xb2" },
		{ "Purple.Comment", "//\xe7\xb4\xab\xe8\x89\xb2\n" },
		{ "Purple.Name", "EItemQuality::Purple" },
		{ "Purple.ToolTip", "\xe7\xb4\xab\xe8\x89\xb2" },
		{ "Red.Comment", "//\xe7\xba\xa2\xe8\x89\xb2\n" },
		{ "Red.Name", "EItemQuality::Red" },
		{ "Red.ToolTip", "\xe7\xba\xa2\xe8\x89\xb2" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x93\x81\xe8\xb4\xa8\xe6\x9e\x9a\xe4\xb8\xbe" },
#endif
		{ "White.Comment", "//\xe7\x99\xbd\xe8\x89\xb2\n" },
		{ "White.Name", "EItemQuality::White" },
		{ "White.ToolTip", "\xe7\x99\xbd\xe8\x89\xb2" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemQuality::None", (int64)EItemQuality::None },
		{ "EItemQuality::White", (int64)EItemQuality::White },
		{ "EItemQuality::Green", (int64)EItemQuality::Green },
		{ "EItemQuality::Blue", (int64)EItemQuality::Blue },
		{ "EItemQuality::Purple", (int64)EItemQuality::Purple },
		{ "EItemQuality::Orange", (int64)EItemQuality::Orange },
		{ "EItemQuality::Golden", (int64)EItemQuality::Golden },
		{ "EItemQuality::Red", (int64)EItemQuality::Red },
		{ "EItemQuality::Colorful", (int64)EItemQuality::Colorful },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EItemQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EItemQuality",
	"EItemQuality",
	Z_Construct_UEnum_GASFramework_EItemQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EItemQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EItemQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EItemQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EItemQuality()
{
	if (!Z_Registration_Info_UEnum_EItemQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemQuality.InnerSingleton, Z_Construct_UEnum_GASFramework_EItemQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemQuality.InnerSingleton;
}
// ********** End Enum EItemQuality ****************************************************************

// ********** Begin Enum EWeaponType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
static UEnum* EWeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASFramework_EWeaponType, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("EWeaponType"));
	}
	return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
}
template<> GASFRAMEWORK_API UEnum* StaticEnum<EWeaponType>()
{
	return EWeaponType_StaticEnum();
}
struct Z_Construct_UEnum_GASFramework_EWeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ax.Comment", "//\xe6\x96\xa7\xe5\xa4\xb4\n" },
		{ "Ax.Name", "EWeaponType::Ax" },
		{ "Ax.ToolTip", "\xe6\x96\xa7\xe5\xa4\xb4" },
		{ "Blade.Comment", "//\xe5\x88\x83\xe5\x88\xba\n" },
		{ "Blade.Name", "EWeaponType::Blade" },
		{ "Blade.ToolTip", "\xe5\x88\x83\xe5\x88\xba" },
		{ "BlueprintType", "true" },
		{ "Bow.Comment", "//\xe5\xbc\x93\n" },
		{ "Bow.Name", "EWeaponType::Bow" },
		{ "Bow.ToolTip", "\xe5\xbc\x93" },
		{ "Firearm.Comment", "//\xe7\x81\xab\xe5\x99\xa8\n" },
		{ "Firearm.Name", "EWeaponType::Firearm" },
		{ "Firearm.ToolTip", "\xe7\x81\xab\xe5\x99\xa8" },
		{ "Fist.Comment", "//\xe6\x8b\xb3\xe5\xa4\xb4\n" },
		{ "Fist.Name", "EWeaponType::Fist" },
		{ "Fist.ToolTip", "\xe6\x8b\xb3\xe5\xa4\xb4" },
		{ "Hammer.Comment", "//\xe9\x94\xa4\n" },
		{ "Hammer.Name", "EWeaponType::Hammer" },
		{ "Hammer.ToolTip", "\xe9\x94\xa4" },
		{ "HiddenWeapon.Comment", "//\xe6\x9a\x97\xe5\x99\xa8\n" },
		{ "HiddenWeapon.Name", "EWeaponType::HiddenWeapon" },
		{ "HiddenWeapon.ToolTip", "\xe6\x9a\x97\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/AbilityEnum.h" },
		{ "None.Name", "EWeaponType::None" },
		{ "Spear.Comment", "//\xe6\x9e\xaa\xe6\x88\x9f\n" },
		{ "Spear.Name", "EWeaponType::Spear" },
		{ "Spear.ToolTip", "\xe6\x9e\xaa\xe6\x88\x9f" },
		{ "Sword.Comment", "//\xe5\x89\x91\n" },
		{ "Sword.Name", "EWeaponType::Sword" },
		{ "Sword.ToolTip", "\xe5\x89\x91" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponType::None", (int64)EWeaponType::None },
		{ "EWeaponType::Bow", (int64)EWeaponType::Bow },
		{ "EWeaponType::Sword", (int64)EWeaponType::Sword },
		{ "EWeaponType::Blade", (int64)EWeaponType::Blade },
		{ "EWeaponType::Spear", (int64)EWeaponType::Spear },
		{ "EWeaponType::Ax", (int64)EWeaponType::Ax },
		{ "EWeaponType::Hammer", (int64)EWeaponType::Hammer },
		{ "EWeaponType::Fist", (int64)EWeaponType::Fist },
		{ "EWeaponType::HiddenWeapon", (int64)EWeaponType::HiddenWeapon },
		{ "EWeaponType::Firearm", (int64)EWeaponType::Firearm },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASFramework_EWeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	"EWeaponType",
	"EWeaponType",
	Z_Construct_UEnum_GASFramework_EWeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EWeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASFramework_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASFramework_EWeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASFramework_EWeaponType()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_GASFramework_EWeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
}
// ********** End Enum EWeaponType *****************************************************************

// ********** Begin ScriptStruct FFormatText *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFormatText;
class UScriptStruct* FFormatText::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFormatText.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFormatText.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFormatText, (UObject*)Z_Construct_UPackage__Script_GASFramework(), TEXT("FormatText"));
	}
	return Z_Registration_Info_UScriptStruct_FFormatText.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFormatText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe6\x9b\xbf\xe6\x8d\xa2\xe6\x96\x87\xe6\x9c\xac\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityEnum.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe6\x9b\xbf\xe6\x8d\xa2\xe6\x96\x87\xe6\x9c\xac\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextMain_MetaData[] = {
		{ "Category", "FormatText" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xbb\xe6\x96\x87\xe6\x9c\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityEnum.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe6\x96\x87\xe6\x9c\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextParams_MetaData[] = {
		{ "Category", "FormatText" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9b\xbf\xe6\x8d\xa2\xe5\x8f\x98\xe9\x87\x8f\xe6\x96\x87\xe6\x9c\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityEnum.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xbf\xe6\x8d\xa2\xe5\x8f\x98\xe9\x87\x8f\xe6\x96\x87\xe6\x9c\xac" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TextMain;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TextParams_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextParams_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TextParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFormatText>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFormatText_Statics::NewProp_TextMain = { "TextMain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFormatText, TextMain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextMain_MetaData), NewProp_TextMain_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFormatText_Statics::NewProp_TextParams_ValueProp = { "TextParams", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFormatText_Statics::NewProp_TextParams_Key_KeyProp = { "TextParams_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFormatText_Statics::NewProp_TextParams = { "TextParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFormatText, TextParams), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextParams_MetaData), NewProp_TextParams_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFormatText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatText_Statics::NewProp_TextMain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatText_Statics::NewProp_TextParams_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatText_Statics::NewProp_TextParams_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatText_Statics::NewProp_TextParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFormatText_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
	nullptr,
	&NewStructOps,
	"FormatText",
	Z_Construct_UScriptStruct_FFormatText_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatText_Statics::PropPointers),
	sizeof(FFormatText),
	alignof(FFormatText),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatText_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFormatText_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFormatText()
{
	if (!Z_Registration_Info_UScriptStruct_FFormatText.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFormatText.InnerSingleton, Z_Construct_UScriptStruct_FFormatText_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFormatText.InnerSingleton;
}
// ********** End ScriptStruct FFormatText *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityEnum_h__Script_GASFramework_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemQuality_StaticEnum, TEXT("EItemQuality"), &Z_Registration_Info_UEnum_EItemQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 291458252U) },
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2123512443U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFormatText::StaticStruct, Z_Construct_UScriptStruct_FFormatText_Statics::NewStructOps, TEXT("FormatText"), &Z_Registration_Info_UScriptStruct_FFormatText, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFormatText), 2654823324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityEnum_h__Script_GASFramework_3683074511(TEXT("/Script/GASFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityEnum_h__Script_GASFramework_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityEnum_h__Script_GASFramework_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityEnum_h__Script_GASFramework_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityEnum_h__Script_GASFramework_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
