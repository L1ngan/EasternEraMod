// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnLuaFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaFunctionLibrary();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLua();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnLuaFunctionLibrary Function GetFileLastModifiedTimestamp **************
struct Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics
{
	struct UnLuaFunctionLibrary_eventGetFileLastModifiedTimestamp_Parms
	{
		FString Path;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaFunctionLibrary_eventGetFileLastModifiedTimestamp_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaFunctionLibrary_eventGetFileLastModifiedTimestamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaFunctionLibrary, nullptr, "GetFileLastModifiedTimestamp", Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::UnLuaFunctionLibrary_eventGetFileLastModifiedTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::UnLuaFunctionLibrary_eventGetFileLastModifiedTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaFunctionLibrary::execGetFileLastModifiedTimestamp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UUnLuaFunctionLibrary::GetFileLastModifiedTimestamp(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UUnLuaFunctionLibrary Function GetFileLastModifiedTimestamp ****************

// ********** Begin Class UUnLuaFunctionLibrary Function GetScriptRootPath *************************
struct Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics
{
	struct UnLuaFunctionLibrary_eventGetScriptRootPath_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaFunctionLibrary_eventGetScriptRootPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaFunctionLibrary, nullptr, "GetScriptRootPath", Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::UnLuaFunctionLibrary_eventGetScriptRootPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::UnLuaFunctionLibrary_eventGetScriptRootPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaFunctionLibrary::execGetScriptRootPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UUnLuaFunctionLibrary::GetScriptRootPath();
	P_NATIVE_END;
}
// ********** End Class UUnLuaFunctionLibrary Function GetScriptRootPath ***************************

// ********** Begin Class UUnLuaFunctionLibrary Function HotReload *********************************
struct Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaFunctionLibrary, nullptr, "HotReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaFunctionLibrary::execHotReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UUnLuaFunctionLibrary::HotReload();
	P_NATIVE_END;
}
// ********** End Class UUnLuaFunctionLibrary Function HotReload ***********************************

// ********** Begin Class UUnLuaFunctionLibrary ****************************************************
void UUnLuaFunctionLibrary::StaticRegisterNativesUUnLuaFunctionLibrary()
{
	UClass* Class = UUnLuaFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFileLastModifiedTimestamp", &UUnLuaFunctionLibrary::execGetFileLastModifiedTimestamp },
		{ "GetScriptRootPath", &UUnLuaFunctionLibrary::execGetScriptRootPath },
		{ "HotReload", &UUnLuaFunctionLibrary::execHotReload },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaFunctionLibrary;
UClass* UUnLuaFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UUnLuaFunctionLibrary;
	if (!Z_Registration_Info_UClass_UUnLuaFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaFunctionLibrary"),
			Z_Registration_Info_UClass_UUnLuaFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUUnLuaFunctionLibrary,
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
	return Z_Registration_Info_UClass_UUnLuaFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaFunctionLibrary_NoRegister()
{
	return UUnLuaFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnLuaFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/UnLuaFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp, "GetFileLastModifiedTimestamp" }, // 1536448385
		{ &Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath, "GetScriptRootPath" }, // 4027262166
		{ &Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload, "HotReload" }, // 700700934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::ClassParams = {
	&UUnLuaFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UUnLuaFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaFunctionLibrary.OuterSingleton;
}
UUnLuaFunctionLibrary::UUnLuaFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaFunctionLibrary);
UUnLuaFunctionLibrary::~UUnLuaFunctionLibrary() {}
// ********** End Class UUnLuaFunctionLibrary ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h__Script_UnLua_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaFunctionLibrary, UUnLuaFunctionLibrary::StaticClass, TEXT("UUnLuaFunctionLibrary"), &Z_Registration_Info_UClass_UUnLuaFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaFunctionLibrary), 934737847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h__Script_UnLua_1716056537(TEXT("/Script/UnLua"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h__Script_UnLua_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h__Script_UnLua_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
