// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaLatentAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnLuaLatentAction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaLatentAction();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaLatentAction_NoRegister();
UNLUA_API UFunction* Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UnLua();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FUnLuaLatentActionCallback ********************************************
struct Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics
{
	struct _Script_UnLua_eventUnLuaLatentActionCallback_Parms
	{
		int32 InLinkage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaLatentAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLinkage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::NewProp_InLinkage = { "InLinkage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnLua_eventUnLuaLatentActionCallback_Parms, InLinkage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::NewProp_InLinkage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnLua, nullptr, "UnLuaLatentActionCallback__DelegateSignature", Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::_Script_UnLua_eventUnLuaLatentActionCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::_Script_UnLua_eventUnLuaLatentActionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUnLuaLatentActionCallback_DelegateWrapper(const FScriptDelegate& UnLuaLatentActionCallback, int32 InLinkage)
{
	struct _Script_UnLua_eventUnLuaLatentActionCallback_Parms
	{
		int32 InLinkage;
	};
	_Script_UnLua_eventUnLuaLatentActionCallback_Parms Parms;
	Parms.InLinkage=InLinkage;
	UnLuaLatentActionCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FUnLuaLatentActionCallback **********************************************

// ********** Begin Class UUnLuaLatentAction Function GetTickableWhenPaused ************************
struct Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics
{
	struct UnLuaLatentAction_eventGetTickableWhenPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaLatentAction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnLuaLatentAction_eventGetTickableWhenPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnLuaLatentAction_eventGetTickableWhenPaused_Parms), &Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaLatentAction, nullptr, "GetTickableWhenPaused", Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::UnLuaLatentAction_eventGetTickableWhenPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::UnLuaLatentAction_eventGetTickableWhenPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaLatentAction::execGetTickableWhenPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTickableWhenPaused();
	P_NATIVE_END;
}
// ********** End Class UUnLuaLatentAction Function GetTickableWhenPaused **************************

// ********** Begin Class UUnLuaLatentAction Function OnCompleted **********************************
struct Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics
{
	struct UnLuaLatentAction_eventOnCompleted_Parms
	{
		int32 InLinkage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaLatentAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLinkage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::NewProp_InLinkage = { "InLinkage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaLatentAction_eventOnCompleted_Parms, InLinkage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::NewProp_InLinkage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaLatentAction, nullptr, "OnCompleted", Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::UnLuaLatentAction_eventOnCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::UnLuaLatentAction_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaLatentAction::execOnCompleted)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLinkage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_InLinkage);
	P_NATIVE_END;
}
// ********** End Class UUnLuaLatentAction Function OnCompleted ************************************

// ********** Begin Class UUnLuaLatentAction Function OnLegacyCallback *****************************
struct Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics
{
	struct UnLuaLatentAction_eventOnLegacyCallback_Parms
	{
		int32 InLinkage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End Interface FTickableGameObject\n" },
#endif
		{ "ModuleRelativePath", "Public/UnLuaLatentAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End Interface FTickableGameObject" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLinkage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::NewProp_InLinkage = { "InLinkage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaLatentAction_eventOnLegacyCallback_Parms, InLinkage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::NewProp_InLinkage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaLatentAction, nullptr, "OnLegacyCallback", Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::UnLuaLatentAction_eventOnLegacyCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::UnLuaLatentAction_eventOnLegacyCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaLatentAction::execOnLegacyCallback)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLinkage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLegacyCallback(Z_Param_InLinkage);
	P_NATIVE_END;
}
// ********** End Class UUnLuaLatentAction Function OnLegacyCallback *******************************

// ********** Begin Class UUnLuaLatentAction Function SetTickableWhenPaused ************************
struct Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics
{
	struct UnLuaLatentAction_eventSetTickableWhenPaused_Parms
	{
		bool bTickableWhenPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaLatentAction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTickableWhenPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickableWhenPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused_SetBit(void* Obj)
{
	((UnLuaLatentAction_eventSetTickableWhenPaused_Parms*)Obj)->bTickableWhenPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused = { "bTickableWhenPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnLuaLatentAction_eventSetTickableWhenPaused_Parms), &Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaLatentAction, nullptr, "SetTickableWhenPaused", Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::UnLuaLatentAction_eventSetTickableWhenPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::UnLuaLatentAction_eventSetTickableWhenPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaLatentAction::execSetTickableWhenPaused)
{
	P_GET_UBOOL(Z_Param_bTickableWhenPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTickableWhenPaused(Z_Param_bTickableWhenPaused);
	P_NATIVE_END;
}
// ********** End Class UUnLuaLatentAction Function SetTickableWhenPaused **************************

// ********** Begin Class UUnLuaLatentAction *******************************************************
void UUnLuaLatentAction::StaticRegisterNativesUUnLuaLatentAction()
{
	UClass* Class = UUnLuaLatentAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTickableWhenPaused", &UUnLuaLatentAction::execGetTickableWhenPaused },
		{ "OnCompleted", &UUnLuaLatentAction::execOnCompleted },
		{ "OnLegacyCallback", &UUnLuaLatentAction::execOnLegacyCallback },
		{ "SetTickableWhenPaused", &UUnLuaLatentAction::execSetTickableWhenPaused },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaLatentAction;
UClass* UUnLuaLatentAction::GetPrivateStaticClass()
{
	using TClass = UUnLuaLatentAction;
	if (!Z_Registration_Info_UClass_UUnLuaLatentAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaLatentAction"),
			Z_Registration_Info_UClass_UUnLuaLatentAction.InnerSingleton,
			StaticRegisterNativesUUnLuaLatentAction,
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
	return Z_Registration_Info_UClass_UUnLuaLatentAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaLatentAction_NoRegister()
{
	return UUnLuaLatentAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaLatentAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnLuaLatentAction.h" },
		{ "ModuleRelativePath", "Public/UnLuaLatentAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnLuaLatentAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTickEvenWhenPaused_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnLuaLatentAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static void NewProp_bTickEvenWhenPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickEvenWhenPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaLatentAction_GetTickableWhenPaused, "GetTickableWhenPaused" }, // 85182744
		{ &Z_Construct_UFunction_UUnLuaLatentAction_OnCompleted, "OnCompleted" }, // 327480810
		{ &Z_Construct_UFunction_UUnLuaLatentAction_OnLegacyCallback, "OnLegacyCallback" }, // 2288207230
		{ &Z_Construct_UFunction_UUnLuaLatentAction_SetTickableWhenPaused, "SetTickableWhenPaused" }, // 775739661
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaLatentAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUnLuaLatentAction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaLatentAction, Callback), Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1863967127
void Z_Construct_UClass_UUnLuaLatentAction_Statics::NewProp_bTickEvenWhenPaused_SetBit(void* Obj)
{
	((UUnLuaLatentAction*)Obj)->bTickEvenWhenPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaLatentAction_Statics::NewProp_bTickEvenWhenPaused = { "bTickEvenWhenPaused", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UUnLuaLatentAction), &Z_Construct_UClass_UUnLuaLatentAction_Statics::NewProp_bTickEvenWhenPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTickEvenWhenPaused_MetaData), NewProp_bTickEvenWhenPaused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnLuaLatentAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaLatentAction_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaLatentAction_Statics::NewProp_bTickEvenWhenPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaLatentAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnLuaLatentAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaLatentAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaLatentAction_Statics::ClassParams = {
	&UUnLuaLatentAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUnLuaLatentAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaLatentAction_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaLatentAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaLatentAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaLatentAction()
{
	if (!Z_Registration_Info_UClass_UUnLuaLatentAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaLatentAction.OuterSingleton, Z_Construct_UClass_UUnLuaLatentAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaLatentAction.OuterSingleton;
}
UUnLuaLatentAction::UUnLuaLatentAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaLatentAction);
UUnLuaLatentAction::~UUnLuaLatentAction() {}
// ********** End Class UUnLuaLatentAction *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h__Script_UnLua_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaLatentAction, UUnLuaLatentAction::StaticClass, TEXT("UUnLuaLatentAction"), &Z_Registration_Info_UClass_UUnLuaLatentAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaLatentAction), 820870894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h__Script_UnLua_2293946556(TEXT("/Script/UnLua"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h__Script_UnLua_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaLatentAction_h__Script_UnLua_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
