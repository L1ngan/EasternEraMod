// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrameSetting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLQuickFrameSetting() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULQuickFrameSetting();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULQuickFrameSetting_NoRegister();
LQUICKFRAME_API UEnum* Z_Construct_UEnum_LQuickFrame_ELLogLevel();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELLogLevel ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELLogLevel;
static UEnum* ELLogLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELLogLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELLogLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LQuickFrame_ELLogLevel, (UObject*)Z_Construct_UPackage__Script_LQuickFrame(), TEXT("ELLogLevel"));
	}
	return Z_Registration_Info_UEnum_ELLogLevel.OuterSingleton;
}
template<> LQUICKFRAME_API UEnum* StaticEnum<ELLogLevel>()
{
	return ELLogLevel_StaticEnum();
}
struct Z_Construct_UEnum_LQuickFrame_ELLogLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x97\xa5\xe5\xbf\x97\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ELLOG_LEVEL_All.DisplayName", "\xe6\x89\x80\xe6\x9c\x89" },
		{ "ELLOG_LEVEL_All.Name", "ELLogLevel::ELLOG_LEVEL_All" },
		{ "ELLOG_LEVEL_ERROR.DisplayName", "\xe9\x94\x99\xe8\xaf\xaf" },
		{ "ELLOG_LEVEL_ERROR.Name", "ELLogLevel::ELLOG_LEVEL_ERROR" },
		{ "ELLOG_LEVEL_NONE.DisplayName", "\xe6\x97\xa0" },
		{ "ELLOG_LEVEL_NONE.Name", "ELLogLevel::ELLOG_LEVEL_NONE" },
		{ "ELLOG_LEVEL_Warning.DisplayName", "\xe8\xad\xa6\xe5\x91\x8a" },
		{ "ELLOG_LEVEL_Warning.Name", "ELLogLevel::ELLOG_LEVEL_Warning" },
		{ "ModuleRelativePath", "Public/LQuickFrameSetting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x97\xa5\xe5\xbf\x97\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELLogLevel::ELLOG_LEVEL_NONE", (int64)ELLogLevel::ELLOG_LEVEL_NONE },
		{ "ELLogLevel::ELLOG_LEVEL_ERROR", (int64)ELLogLevel::ELLOG_LEVEL_ERROR },
		{ "ELLogLevel::ELLOG_LEVEL_Warning", (int64)ELLogLevel::ELLOG_LEVEL_Warning },
		{ "ELLogLevel::ELLOG_LEVEL_All", (int64)ELLogLevel::ELLOG_LEVEL_All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LQuickFrame_ELLogLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LQuickFrame,
	nullptr,
	"ELLogLevel",
	"ELLogLevel",
	Z_Construct_UEnum_LQuickFrame_ELLogLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_ELLogLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_ELLogLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LQuickFrame_ELLogLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LQuickFrame_ELLogLevel()
{
	if (!Z_Registration_Info_UEnum_ELLogLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELLogLevel.InnerSingleton, Z_Construct_UEnum_LQuickFrame_ELLogLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELLogLevel.InnerSingleton;
}
// ********** End Enum ELLogLevel ******************************************************************

// ********** Begin Class ULQuickFrameSetting ******************************************************
void ULQuickFrameSetting::StaticRegisterNativesULQuickFrameSetting()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULQuickFrameSetting;
UClass* ULQuickFrameSetting::GetPrivateStaticClass()
{
	using TClass = ULQuickFrameSetting;
	if (!Z_Registration_Info_UClass_ULQuickFrameSetting.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LQuickFrameSetting"),
			Z_Registration_Info_UClass_ULQuickFrameSetting.InnerSingleton,
			StaticRegisterNativesULQuickFrameSetting,
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
	return Z_Registration_Info_UClass_ULQuickFrameSetting.InnerSingleton;
}
UClass* Z_Construct_UClass_ULQuickFrameSetting_NoRegister()
{
	return ULQuickFrameSetting::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULQuickFrameSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "LQuickFrame" },
		{ "IncludePath", "LQuickFrameSetting.h" },
		{ "ModuleRelativePath", "Public/LQuickFrameSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidget_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/LQuickFrameSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingMovies_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xad\x89\xe5\xbe\x85\xe8\xa7\x86\xe9\xa2\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/LQuickFrameSetting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xad\x89\xe5\xbe\x85\xe8\xa7\x86\xe9\xa2\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogLevel_MetaData[] = {
		{ "Category", "LLog" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x97\xa5\xe5\xbf\x97\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/LQuickFrameSetting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x97\xa5\xe5\xbf\x97\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogScreen_MetaData[] = {
		{ "Category", "LLog" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8\xe5\xb1\x8f\xe5\xb9\x95\xe4\xb8\x8a\n" },
#endif
		{ "ModuleRelativePath", "Public/LQuickFrameSetting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8\xe5\xb1\x8f\xe5\xb9\x95\xe4\xb8\x8a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogShowTime_MetaData[] = {
		{ "Category", "LLog" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xbe\xe7\xa4\xba\xe5\xb1\x8f\xe5\xb9\x95\xe4\xb8\x8a\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "EditCondition", "bLogScreen" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LQuickFrameSetting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe5\xb1\x8f\xe5\xb9\x95\xe4\xb8\x8a\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoadingWidget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LoadingMovies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadingMovies;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LogLevel;
	static void NewProp_bLogScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogScreen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LogShowTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULQuickFrameSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LoadingWidget = { "LoadingWidget", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULQuickFrameSetting, LoadingWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingWidget_MetaData), NewProp_LoadingWidget_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LoadingMovies_Inner = { "LoadingMovies", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LoadingMovies = { "LoadingMovies", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULQuickFrameSetting, LoadingMovies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingMovies_MetaData), NewProp_LoadingMovies_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LogLevel = { "LogLevel", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULQuickFrameSetting, LogLevel), Z_Construct_UEnum_LQuickFrame_ELLogLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogLevel_MetaData), NewProp_LogLevel_MetaData) }; // 1843189403
void Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_bLogScreen_SetBit(void* Obj)
{
	((ULQuickFrameSetting*)Obj)->bLogScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_bLogScreen = { "bLogScreen", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULQuickFrameSetting), &Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_bLogScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogScreen_MetaData), NewProp_bLogScreen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LogShowTime = { "LogShowTime", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULQuickFrameSetting, LogShowTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogShowTime_MetaData), NewProp_LogShowTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULQuickFrameSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LoadingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LoadingMovies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LoadingMovies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LogLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LogLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_bLogScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULQuickFrameSetting_Statics::NewProp_LogShowTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULQuickFrameSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULQuickFrameSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULQuickFrameSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULQuickFrameSetting_Statics::ClassParams = {
	&ULQuickFrameSetting::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULQuickFrameSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULQuickFrameSetting_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULQuickFrameSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_ULQuickFrameSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULQuickFrameSetting()
{
	if (!Z_Registration_Info_UClass_ULQuickFrameSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULQuickFrameSetting.OuterSingleton, Z_Construct_UClass_ULQuickFrameSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULQuickFrameSetting.OuterSingleton;
}
ULQuickFrameSetting::ULQuickFrameSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULQuickFrameSetting);
ULQuickFrameSetting::~ULQuickFrameSetting() {}
// ********** End Class ULQuickFrameSetting ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h__Script_LQuickFrame_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELLogLevel_StaticEnum, TEXT("ELLogLevel"), &Z_Registration_Info_UEnum_ELLogLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1843189403U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULQuickFrameSetting, ULQuickFrameSetting::StaticClass, TEXT("ULQuickFrameSetting"), &Z_Registration_Info_UClass_ULQuickFrameSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULQuickFrameSetting), 1582462646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h__Script_LQuickFrame_1283490973(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h__Script_LQuickFrame_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Public_LQuickFrameSetting_h__Script_LQuickFrame_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
