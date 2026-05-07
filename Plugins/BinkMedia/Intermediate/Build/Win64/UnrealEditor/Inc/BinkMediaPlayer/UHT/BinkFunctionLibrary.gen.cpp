// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BinkFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBinkFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkFunctionLibrary();
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkFunctionLibrary_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BinkMediaPlayer();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBinkFunctionLibrary Function Bink_DrawOverlays **************************
struct Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink" },
		{ "ModuleRelativePath", "Public/BinkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkFunctionLibrary, nullptr, "Bink_DrawOverlays", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkFunctionLibrary::execBink_DrawOverlays)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UBinkFunctionLibrary::Bink_DrawOverlays();
	P_NATIVE_END;
}
// ********** End Class UBinkFunctionLibrary Function Bink_DrawOverlays ****************************

// ********** Begin Class UBinkFunctionLibrary Function BinkLoadingMovie_GetDuration ***************
struct Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics
{
	struct BinkFunctionLibrary_eventBinkLoadingMovie_GetDuration_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink" },
		{ "ModuleRelativePath", "Public/BinkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkFunctionLibrary_eventBinkLoadingMovie_GetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkFunctionLibrary, nullptr, "BinkLoadingMovie_GetDuration", Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::BinkFunctionLibrary_eventBinkLoadingMovie_GetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::BinkFunctionLibrary_eventBinkLoadingMovie_GetDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkFunctionLibrary::execBinkLoadingMovie_GetDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=UBinkFunctionLibrary::BinkLoadingMovie_GetDuration();
	P_NATIVE_END;
}
// ********** End Class UBinkFunctionLibrary Function BinkLoadingMovie_GetDuration *****************

// ********** Begin Class UBinkFunctionLibrary Function BinkLoadingMovie_GetTime *******************
struct Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics
{
	struct BinkFunctionLibrary_eventBinkLoadingMovie_GetTime_Parms
	{
		FTimespan ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink" },
		{ "ModuleRelativePath", "Public/BinkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkFunctionLibrary_eventBinkLoadingMovie_GetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkFunctionLibrary, nullptr, "BinkLoadingMovie_GetTime", Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::BinkFunctionLibrary_eventBinkLoadingMovie_GetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::BinkFunctionLibrary_eventBinkLoadingMovie_GetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkFunctionLibrary::execBinkLoadingMovie_GetTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimespan*)Z_Param__Result=UBinkFunctionLibrary::BinkLoadingMovie_GetTime();
	P_NATIVE_END;
}
// ********** End Class UBinkFunctionLibrary Function BinkLoadingMovie_GetTime *********************

// ********** Begin Class UBinkFunctionLibrary *****************************************************
void UBinkFunctionLibrary::StaticRegisterNativesUBinkFunctionLibrary()
{
	UClass* Class = UBinkFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Bink_DrawOverlays", &UBinkFunctionLibrary::execBink_DrawOverlays },
		{ "BinkLoadingMovie_GetDuration", &UBinkFunctionLibrary::execBinkLoadingMovie_GetDuration },
		{ "BinkLoadingMovie_GetTime", &UBinkFunctionLibrary::execBinkLoadingMovie_GetTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBinkFunctionLibrary;
UClass* UBinkFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UBinkFunctionLibrary;
	if (!Z_Registration_Info_UClass_UBinkFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BinkFunctionLibrary"),
			Z_Registration_Info_UClass_UBinkFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUBinkFunctionLibrary,
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
	return Z_Registration_Info_UClass_UBinkFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UBinkFunctionLibrary_NoRegister()
{
	return UBinkFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBinkFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BinkFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BinkFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays, "Bink_DrawOverlays" }, // 3904688366
		{ &Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration, "BinkLoadingMovie_GetDuration" }, // 643663906
		{ &Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime, "BinkLoadingMovie_GetTime" }, // 2854095562
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBinkFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkFunctionLibrary_Statics::ClassParams = {
	&UBinkFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBinkFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBinkFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UBinkFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBinkFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBinkFunctionLibrary.OuterSingleton;
}
UBinkFunctionLibrary::UBinkFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkFunctionLibrary);
UBinkFunctionLibrary::~UBinkFunctionLibrary() {}
// ********** End Class UBinkFunctionLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h__Script_BinkMediaPlayer_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBinkFunctionLibrary, UBinkFunctionLibrary::StaticClass, TEXT("UBinkFunctionLibrary"), &Z_Registration_Info_UClass_UBinkFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkFunctionLibrary), 714733498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h__Script_BinkMediaPlayer_2682823894(TEXT("/Script/BinkMediaPlayer"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h__Script_BinkMediaPlayer_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h__Script_BinkMediaPlayer_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
