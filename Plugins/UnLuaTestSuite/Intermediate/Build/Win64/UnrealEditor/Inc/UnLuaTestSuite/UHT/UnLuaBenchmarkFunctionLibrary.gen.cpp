// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Perfs/UnLuaBenchmarkFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnLuaBenchmarkFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnLuaBenchmarkFunctionLibrary Function Start ****************************
struct Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics
{
	struct UnLuaBenchmarkFunctionLibrary_eventStart_Parms
	{
		FString Title;
		int32 N;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_N_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FIntPropertyParams NewProp_N;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkFunctionLibrary_eventStart_Parms, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkFunctionLibrary_eventStart_Parms, N), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_N_MetaData), NewProp_N_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::NewProp_N,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary, nullptr, "Start", Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::UnLuaBenchmarkFunctionLibrary_eventStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::UnLuaBenchmarkFunctionLibrary_eventStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaBenchmarkFunctionLibrary::execStart)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FIntProperty,Z_Param_N);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUnLuaBenchmarkFunctionLibrary::Start(Z_Param_Title,Z_Param_N);
	P_NATIVE_END;
}
// ********** End Class UUnLuaBenchmarkFunctionLibrary Function Start ******************************

// ********** Begin Class UUnLuaBenchmarkFunctionLibrary Function StartTimer ***********************
struct Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics
{
	struct UnLuaBenchmarkFunctionLibrary_eventStartTimer_Parms
	{
		FString Title;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkFunctionLibrary_eventStartTimer_Parms, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::NewProp_Title,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary, nullptr, "StartTimer", Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::UnLuaBenchmarkFunctionLibrary_eventStartTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::UnLuaBenchmarkFunctionLibrary_eventStartTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaBenchmarkFunctionLibrary::execStartTimer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUnLuaBenchmarkFunctionLibrary::StartTimer(Z_Param_Title);
	P_NATIVE_END;
}
// ********** End Class UUnLuaBenchmarkFunctionLibrary Function StartTimer *************************

// ********** Begin Class UUnLuaBenchmarkFunctionLibrary Function Stop *****************************
struct Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaBenchmarkFunctionLibrary::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UUnLuaBenchmarkFunctionLibrary::Stop();
	P_NATIVE_END;
}
// ********** End Class UUnLuaBenchmarkFunctionLibrary Function Stop *******************************

// ********** Begin Class UUnLuaBenchmarkFunctionLibrary Function StopTimer ************************
struct Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary, nullptr, "StopTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaBenchmarkFunctionLibrary::execStopTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UUnLuaBenchmarkFunctionLibrary::StopTimer();
	P_NATIVE_END;
}
// ********** End Class UUnLuaBenchmarkFunctionLibrary Function StopTimer **************************

// ********** Begin Class UUnLuaBenchmarkFunctionLibrary *******************************************
void UUnLuaBenchmarkFunctionLibrary::StaticRegisterNativesUUnLuaBenchmarkFunctionLibrary()
{
	UClass* Class = UUnLuaBenchmarkFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Start", &UUnLuaBenchmarkFunctionLibrary::execStart },
		{ "StartTimer", &UUnLuaBenchmarkFunctionLibrary::execStartTimer },
		{ "Stop", &UUnLuaBenchmarkFunctionLibrary::execStop },
		{ "StopTimer", &UUnLuaBenchmarkFunctionLibrary::execStopTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary;
UClass* UUnLuaBenchmarkFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UUnLuaBenchmarkFunctionLibrary;
	if (!Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaBenchmarkFunctionLibrary"),
			Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUUnLuaBenchmarkFunctionLibrary,
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
	return Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_NoRegister()
{
	return UUnLuaBenchmarkFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Perfs/UnLuaBenchmarkFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Start, "Start" }, // 1701927275
		{ &Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StartTimer, "StartTimer" }, // 3821533987
		{ &Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_Stop, "Stop" }, // 3881800670
		{ &Z_Construct_UFunction_UUnLuaBenchmarkFunctionLibrary_StopTimer, "StopTimer" }, // 2535897995
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaBenchmarkFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::ClassParams = {
	&UUnLuaBenchmarkFunctionLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary.OuterSingleton;
}
UUnLuaBenchmarkFunctionLibrary::UUnLuaBenchmarkFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaBenchmarkFunctionLibrary);
UUnLuaBenchmarkFunctionLibrary::~UUnLuaBenchmarkFunctionLibrary() {}
// ********** End Class UUnLuaBenchmarkFunctionLibrary *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkFunctionLibrary_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaBenchmarkFunctionLibrary, UUnLuaBenchmarkFunctionLibrary::StaticClass, TEXT("UUnLuaBenchmarkFunctionLibrary"), &Z_Registration_Info_UClass_UUnLuaBenchmarkFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaBenchmarkFunctionLibrary), 2675342668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkFunctionLibrary_h__Script_UnLuaTestSuite_303554104(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkFunctionLibrary_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkFunctionLibrary_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
