// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Mode/LGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALGameMode();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALGameMode Function GetModeComp ******************************************
struct Z_Construct_UFunction_ALGameMode_GetModeComp_Statics
{
	struct LGameMode_eventGetModeComp_Parms
	{
		const UObject* Context;
		TSubclassOf<UActorComponent> Class;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96GameMode\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96GameMode\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
		{ "WorldContext", "Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameMode_eventGetModeComp_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameMode_eventGetModeComp_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameMode_eventGetModeComp_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALGameMode, nullptr, "GetModeComp", Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::LGameMode_eventGetModeComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::LGameMode_eventGetModeComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALGameMode_GetModeComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALGameMode_GetModeComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALGameMode::execGetModeComp)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=ALGameMode::GetModeComp(Z_Param_Context,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ALGameMode Function GetModeComp ********************************************

// ********** Begin Class ALGameMode Function OnSubLevelLoaded *************************************
struct Z_Construct_UFunction_ALGameMode_OnSubLevelLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/LGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALGameMode_OnSubLevelLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALGameMode, nullptr, "OnSubLevelLoaded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALGameMode_OnSubLevelLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALGameMode_OnSubLevelLoaded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALGameMode_OnSubLevelLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALGameMode_OnSubLevelLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALGameMode::execOnSubLevelLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSubLevelLoaded();
	P_NATIVE_END;
}
// ********** End Class ALGameMode Function OnSubLevelLoaded ***************************************

// ********** Begin Class ALGameMode ***************************************************************
void ALGameMode::StaticRegisterNativesALGameMode()
{
	UClass* Class = ALGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetModeComp", &ALGameMode::execGetModeComp },
		{ "OnSubLevelLoaded", &ALGameMode::execOnSubLevelLoaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALGameMode;
UClass* ALGameMode::GetPrivateStaticClass()
{
	using TClass = ALGameMode;
	if (!Z_Registration_Info_UClass_ALGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LGameMode"),
			Z_Registration_Info_UClass_ALGameMode.InnerSingleton,
			StaticRegisterNativesALGameMode,
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
	return Z_Registration_Info_UClass_ALGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ALGameMode_NoRegister()
{
	return ALGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Mode/LGameMode.h" },
		{ "ModuleRelativePath", "Mode/LGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALGameMode_GetModeComp, "GetModeComp" }, // 1926692045
		{ &Z_Construct_UFunction_ALGameMode_OnSubLevelLoaded, "OnSubLevelLoaded" }, // 3470081951
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALGameMode_Statics::ClassParams = {
	&ALGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALGameMode()
{
	if (!Z_Registration_Info_UClass_ALGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALGameMode.OuterSingleton, Z_Construct_UClass_ALGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALGameMode);
ALGameMode::~ALGameMode() {}
// ********** End Class ALGameMode *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALGameMode, ALGameMode::StaticClass, TEXT("ALGameMode"), &Z_Registration_Info_UClass_ALGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALGameMode), 3034998851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h__Script_LQuickFrame_2804025935(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameMode_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
