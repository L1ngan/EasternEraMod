// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Misc/LLog.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLLog() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULLog();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULLog_NoRegister();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULLog Function Logger ****************************************************
struct Z_Construct_UFunction_ULLog_Logger_Statics
{
	struct LLog_eventLogger_Parms
	{
		FString Content;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LLOG" },
		{ "DisplayName", "LLOG" },
		{ "ModuleRelativePath", "Misc/LLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULLog_Logger_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LLog_eventLogger_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULLog_Logger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULLog_Logger_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULLog_Logger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULLog_Logger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULLog, nullptr, "Logger", Z_Construct_UFunction_ULLog_Logger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULLog_Logger_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULLog_Logger_Statics::LLog_eventLogger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULLog_Logger_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULLog_Logger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULLog_Logger_Statics::LLog_eventLogger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULLog_Logger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULLog_Logger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULLog::execLogger)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULLog::Logger(Z_Param_Content);
	P_NATIVE_END;
}
// ********** End Class ULLog Function Logger ******************************************************

// ********** Begin Class ULLog Function LoggerError ***********************************************
struct Z_Construct_UFunction_ULLog_LoggerError_Statics
{
	struct LLog_eventLoggerError_Parms
	{
		FString Content;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LLOG" },
		{ "DisplayName", "LLOGE" },
		{ "ModuleRelativePath", "Misc/LLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULLog_LoggerError_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LLog_eventLoggerError_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULLog_LoggerError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULLog_LoggerError_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULLog_LoggerError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULLog_LoggerError_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULLog, nullptr, "LoggerError", Z_Construct_UFunction_ULLog_LoggerError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULLog_LoggerError_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULLog_LoggerError_Statics::LLog_eventLoggerError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULLog_LoggerError_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULLog_LoggerError_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULLog_LoggerError_Statics::LLog_eventLoggerError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULLog_LoggerError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULLog_LoggerError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULLog::execLoggerError)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULLog::LoggerError(Z_Param_Content);
	P_NATIVE_END;
}
// ********** End Class ULLog Function LoggerError *************************************************

// ********** Begin Class ULLog Function LoggerWarning *********************************************
struct Z_Construct_UFunction_ULLog_LoggerWarning_Statics
{
	struct LLog_eventLoggerWarning_Parms
	{
		FString Content;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LLOG" },
		{ "DisplayName", "LLOGW" },
		{ "ModuleRelativePath", "Misc/LLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULLog_LoggerWarning_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LLog_eventLoggerWarning_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULLog_LoggerWarning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULLog_LoggerWarning_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULLog_LoggerWarning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULLog_LoggerWarning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULLog, nullptr, "LoggerWarning", Z_Construct_UFunction_ULLog_LoggerWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULLog_LoggerWarning_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULLog_LoggerWarning_Statics::LLog_eventLoggerWarning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULLog_LoggerWarning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULLog_LoggerWarning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULLog_LoggerWarning_Statics::LLog_eventLoggerWarning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULLog_LoggerWarning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULLog_LoggerWarning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULLog::execLoggerWarning)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULLog::LoggerWarning(Z_Param_Content);
	P_NATIVE_END;
}
// ********** End Class ULLog Function LoggerWarning ***********************************************

// ********** Begin Class ULLog ********************************************************************
void ULLog::StaticRegisterNativesULLog()
{
	UClass* Class = ULLog::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Logger", &ULLog::execLogger },
		{ "LoggerError", &ULLog::execLoggerError },
		{ "LoggerWarning", &ULLog::execLoggerWarning },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULLog;
UClass* ULLog::GetPrivateStaticClass()
{
	using TClass = ULLog;
	if (!Z_Registration_Info_UClass_ULLog.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LLog"),
			Z_Registration_Info_UClass_ULLog.InnerSingleton,
			StaticRegisterNativesULLog,
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
	return Z_Registration_Info_UClass_ULLog.InnerSingleton;
}
UClass* Z_Construct_UClass_ULLog_NoRegister()
{
	return ULLog::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/LLog.h" },
		{ "ModuleRelativePath", "Misc/LLog.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULLog_Logger, "Logger" }, // 3621924964
		{ &Z_Construct_UFunction_ULLog_LoggerError, "LoggerError" }, // 2063676757
		{ &Z_Construct_UFunction_ULLog_LoggerWarning, "LoggerWarning" }, // 3149609232
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULLog>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULLog_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULLog_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULLog_Statics::ClassParams = {
	&ULLog::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULLog_Statics::Class_MetaDataParams), Z_Construct_UClass_ULLog_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULLog()
{
	if (!Z_Registration_Info_UClass_ULLog.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULLog.OuterSingleton, Z_Construct_UClass_ULLog_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULLog.OuterSingleton;
}
ULLog::ULLog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULLog);
ULLog::~ULLog() {}
// ********** End Class ULLog **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULLog, ULLog::StaticClass, TEXT("ULLog"), &Z_Registration_Info_UClass_ULLog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULLog), 2746051405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h__Script_LQuickFrame_3530114643(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLog_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
