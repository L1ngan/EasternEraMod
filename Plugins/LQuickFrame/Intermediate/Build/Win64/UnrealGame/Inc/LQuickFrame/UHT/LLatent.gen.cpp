// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Misc/LLatent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLLatent() {}

// ********** Begin Cross Module References ********************************************************
LQUICKFRAME_API UEnum* Z_Construct_UEnum_LQuickFrame_ELatentRespOne();
LQUICKFRAME_API UEnum* Z_Construct_UEnum_LQuickFrame_ELatentRespTwo();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELatentRespOne ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELatentRespOne;
static UEnum* ELatentRespOne_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELatentRespOne.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELatentRespOne.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LQuickFrame_ELatentRespOne, (UObject*)Z_Construct_UPackage__Script_LQuickFrame(), TEXT("ELatentRespOne"));
	}
	return Z_Registration_Info_UEnum_ELatentRespOne.OuterSingleton;
}
template<> LQUICKFRAME_API UEnum* StaticEnum<ELatentRespOne>()
{
	return ELatentRespOne_StaticEnum();
}
struct Z_Construct_UEnum_LQuickFrame_ELatentRespOne_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x93\x8d\xe5\xba\x94""1\n" },
#endif
		{ "ELR_None.Hidden", "" },
		{ "ELR_None.Name", "ELatentRespOne::ELR_None" },
		{ "Exec.Name", "ELatentRespOne::Exec" },
		{ "ModuleRelativePath", "Misc/LLatent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x93\x8d\xe5\xba\x94""1" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELatentRespOne::ELR_None", (int64)ELatentRespOne::ELR_None },
		{ "ELatentRespOne::Exec", (int64)ELatentRespOne::Exec },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LQuickFrame_ELatentRespOne_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LQuickFrame,
	nullptr,
	"ELatentRespOne",
	"ELatentRespOne",
	Z_Construct_UEnum_LQuickFrame_ELatentRespOne_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_ELatentRespOne_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_ELatentRespOne_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LQuickFrame_ELatentRespOne_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LQuickFrame_ELatentRespOne()
{
	if (!Z_Registration_Info_UEnum_ELatentRespOne.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELatentRespOne.InnerSingleton, Z_Construct_UEnum_LQuickFrame_ELatentRespOne_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELatentRespOne.InnerSingleton;
}
// ********** End Enum ELatentRespOne **************************************************************

// ********** Begin Enum ELatentRespTwo ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELatentRespTwo;
static UEnum* ELatentRespTwo_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELatentRespTwo.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELatentRespTwo.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LQuickFrame_ELatentRespTwo, (UObject*)Z_Construct_UPackage__Script_LQuickFrame(), TEXT("ELatentRespTwo"));
	}
	return Z_Registration_Info_UEnum_ELatentRespTwo.OuterSingleton;
}
template<> LQUICKFRAME_API UEnum* StaticEnum<ELatentRespTwo>()
{
	return ELatentRespTwo_StaticEnum();
}
struct Z_Construct_UEnum_LQuickFrame_ELatentRespTwo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x93\x8d\xe5\xba\x94""2\n" },
#endif
		{ "ELR_None.Hidden", "" },
		{ "ELR_None.Name", "ELatentRespTwo::ELR_None" },
		{ "Faild.Name", "ELatentRespTwo::Faild" },
		{ "ModuleRelativePath", "Misc/LLatent.h" },
		{ "Success.Name", "ELatentRespTwo::Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x93\x8d\xe5\xba\x94""2" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELatentRespTwo::ELR_None", (int64)ELatentRespTwo::ELR_None },
		{ "ELatentRespTwo::Success", (int64)ELatentRespTwo::Success },
		{ "ELatentRespTwo::Faild", (int64)ELatentRespTwo::Faild },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LQuickFrame_ELatentRespTwo_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LQuickFrame,
	nullptr,
	"ELatentRespTwo",
	"ELatentRespTwo",
	Z_Construct_UEnum_LQuickFrame_ELatentRespTwo_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_ELatentRespTwo_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_ELatentRespTwo_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LQuickFrame_ELatentRespTwo_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LQuickFrame_ELatentRespTwo()
{
	if (!Z_Registration_Info_UEnum_ELatentRespTwo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELatentRespTwo.InnerSingleton, Z_Construct_UEnum_LQuickFrame_ELatentRespTwo_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELatentRespTwo.InnerSingleton;
}
// ********** End Enum ELatentRespTwo **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLatent_h__Script_LQuickFrame_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELatentRespOne_StaticEnum, TEXT("ELatentRespOne"), &Z_Registration_Info_UEnum_ELatentRespOne, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3738547150U) },
		{ ELatentRespTwo_StaticEnum, TEXT("ELatentRespTwo"), &Z_Registration_Info_UEnum_ELatentRespTwo, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1322766538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLatent_h__Script_LQuickFrame_1312172413(TEXT("/Script/LQuickFrame"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLatent_h__Script_LQuickFrame_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLatent_h__Script_LQuickFrame_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
