// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaManager.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnLuaManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaManager();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLua();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnLuaManager Function EnhancedInputActionAxis1D *************************
struct UnLuaManager_eventEnhancedInputActionAxis1D_Parms
{
	float ActionValue;
	float ElapsedSeconds;
	float TriggeredSeconds;
};
static FName NAME_UUnLuaManager_EnhancedInputActionAxis1D = FName(TEXT("EnhancedInputActionAxis1D"));
void UUnLuaManager::EnhancedInputActionAxis1D(float ActionValue, float ElapsedSeconds, float TriggeredSeconds)
{
	UnLuaManager_eventEnhancedInputActionAxis1D_Parms Parms;
	Parms.ActionValue=ActionValue;
	Parms.ElapsedSeconds=ElapsedSeconds;
	Parms.TriggeredSeconds=TriggeredSeconds;
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaManager_EnhancedInputActionAxis1D);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggeredSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionAxis1D_Parms, ActionValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::NewProp_ElapsedSeconds = { "ElapsedSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionAxis1D_Parms, ElapsedSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::NewProp_TriggeredSeconds = { "TriggeredSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionAxis1D_Parms, TriggeredSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::NewProp_ActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::NewProp_ElapsedSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::NewProp_TriggeredSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "EnhancedInputActionAxis1D", Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::PropPointers), sizeof(UnLuaManager_eventEnhancedInputActionAxis1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaManager_eventEnhancedInputActionAxis1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaManager Function EnhancedInputActionAxis1D ***************************

// ********** Begin Class UUnLuaManager Function EnhancedInputActionAxis2D *************************
struct UnLuaManager_eventEnhancedInputActionAxis2D_Parms
{
	FVector2D ActionValue;
	float ElapsedSeconds;
	float TriggeredSeconds;
};
static FName NAME_UUnLuaManager_EnhancedInputActionAxis2D = FName(TEXT("EnhancedInputActionAxis2D"));
void UUnLuaManager::EnhancedInputActionAxis2D(FVector2D const& ActionValue, float ElapsedSeconds, float TriggeredSeconds)
{
	UnLuaManager_eventEnhancedInputActionAxis2D_Parms Parms;
	Parms.ActionValue=ActionValue;
	Parms.ElapsedSeconds=ElapsedSeconds;
	Parms.TriggeredSeconds=TriggeredSeconds;
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaManager_EnhancedInputActionAxis2D);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggeredSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionAxis2D_Parms, ActionValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionValue_MetaData), NewProp_ActionValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::NewProp_ElapsedSeconds = { "ElapsedSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionAxis2D_Parms, ElapsedSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::NewProp_TriggeredSeconds = { "TriggeredSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionAxis2D_Parms, TriggeredSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::NewProp_ActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::NewProp_ElapsedSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::NewProp_TriggeredSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "EnhancedInputActionAxis2D", Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::PropPointers), sizeof(UnLuaManager_eventEnhancedInputActionAxis2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaManager_eventEnhancedInputActionAxis2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaManager Function EnhancedInputActionAxis2D ***************************

// ********** Begin Class UUnLuaManager Function EnhancedInputActionAxis3D *************************
struct UnLuaManager_eventEnhancedInputActionAxis3D_Parms
{
	FVector ActionValue;
	float ElapsedSeconds;
	float TriggeredSeconds;
};
static FName NAME_UUnLuaManager_EnhancedInputActionAxis3D = FName(TEXT("EnhancedInputActionAxis3D"));
void UUnLuaManager::EnhancedInputActionAxis3D(FVector const& ActionValue, float ElapsedSeconds, float TriggeredSeconds)
{
	UnLuaManager_eventEnhancedInputActionAxis3D_Parms Parms;
	Parms.ActionValue=ActionValue;
	Parms.ElapsedSeconds=ElapsedSeconds;
	Parms.TriggeredSeconds=TriggeredSeconds;
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaManager_EnhancedInputActionAxis3D);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggeredSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionAxis3D_Parms, ActionValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionValue_MetaData), NewProp_ActionValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::NewProp_ElapsedSeconds = { "ElapsedSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionAxis3D_Parms, ElapsedSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::NewProp_TriggeredSeconds = { "TriggeredSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionAxis3D_Parms, TriggeredSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::NewProp_ActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::NewProp_ElapsedSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::NewProp_TriggeredSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "EnhancedInputActionAxis3D", Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::PropPointers), sizeof(UnLuaManager_eventEnhancedInputActionAxis3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaManager_eventEnhancedInputActionAxis3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaManager Function EnhancedInputActionAxis3D ***************************

// ********** Begin Class UUnLuaManager Function EnhancedInputActionDigital ************************
struct UnLuaManager_eventEnhancedInputActionDigital_Parms
{
	bool ActionValue;
	float ElapsedSeconds;
	float TriggeredSeconds;
};
static FName NAME_UUnLuaManager_EnhancedInputActionDigital = FName(TEXT("EnhancedInputActionDigital"));
void UUnLuaManager::EnhancedInputActionDigital(bool ActionValue, float ElapsedSeconds, float TriggeredSeconds)
{
	UnLuaManager_eventEnhancedInputActionDigital_Parms Parms;
	Parms.ActionValue=ActionValue ? true : false;
	Parms.ElapsedSeconds=ElapsedSeconds;
	Parms.TriggeredSeconds=TriggeredSeconds;
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaManager_EnhancedInputActionDigital);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ActionValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggeredSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::NewProp_ActionValue_SetBit(void* Obj)
{
	((UnLuaManager_eventEnhancedInputActionDigital_Parms*)Obj)->ActionValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnLuaManager_eventEnhancedInputActionDigital_Parms), &Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::NewProp_ActionValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::NewProp_ElapsedSeconds = { "ElapsedSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionDigital_Parms, ElapsedSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::NewProp_TriggeredSeconds = { "TriggeredSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventEnhancedInputActionDigital_Parms, TriggeredSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::NewProp_ActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::NewProp_ElapsedSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::NewProp_TriggeredSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "EnhancedInputActionDigital", Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::PropPointers), sizeof(UnLuaManager_eventEnhancedInputActionDigital_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaManager_eventEnhancedInputActionDigital_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaManager Function EnhancedInputActionDigital **************************

// ********** Begin Class UUnLuaManager Function GetOrAddBindingObject *****************************
struct Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics
{
	struct UnLuaManager_eventGetOrAddBindingObject_Parms
	{
		UClass* Class;
		UClass* BindingClass;
		UDynamicBlueprintBinding* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BindingClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventGetOrAddBindingObject_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::NewProp_BindingClass = { "BindingClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventGetOrAddBindingObject_Parms, BindingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventGetOrAddBindingObject_Parms, ReturnValue), Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::NewProp_BindingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "GetOrAddBindingObject", Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::UnLuaManager_eventGetOrAddBindingObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::UnLuaManager_eventGetOrAddBindingObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaManager::execGetOrAddBindingObject)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_OBJECT(UClass,Z_Param_BindingClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicBlueprintBinding**)Z_Param__Result=P_THIS->GetOrAddBindingObject(Z_Param_Class,Z_Param_BindingClass);
	P_NATIVE_END;
}
// ********** End Class UUnLuaManager Function GetOrAddBindingObject *******************************

// ********** Begin Class UUnLuaManager Function InputAction ***************************************
struct UnLuaManager_eventInputAction_Parms
{
	FKey Key;
};
static FName NAME_UUnLuaManager_InputAction = FName(TEXT("InputAction"));
void UUnLuaManager::InputAction(FKey Key)
{
	UnLuaManager_eventInputAction_Parms Parms;
	Parms.Key=Key;
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaManager_InputAction);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UUnLuaManager_InputAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventInputAction_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "InputAction", Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::PropPointers), sizeof(UnLuaManager_eventInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaManager_eventInputAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_InputAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaManager Function InputAction *****************************************

// ********** Begin Class UUnLuaManager Function InputAxis *****************************************
struct UnLuaManager_eventInputAxis_Parms
{
	float AxisValue;
};
static FName NAME_UUnLuaManager_InputAxis = FName(TEXT("InputAxis"));
void UUnLuaManager::InputAxis(float AxisValue)
{
	UnLuaManager_eventInputAxis_Parms Parms;
	Parms.AxisValue=AxisValue;
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaManager_InputAxis);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventInputAxis_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "InputAxis", Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::PropPointers), sizeof(UnLuaManager_eventInputAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaManager_eventInputAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_InputAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaManager Function InputAxis *******************************************

// ********** Begin Class UUnLuaManager Function InputGesture **************************************
struct UnLuaManager_eventInputGesture_Parms
{
	float Value;
};
static FName NAME_UUnLuaManager_InputGesture = FName(TEXT("InputGesture"));
void UUnLuaManager::InputGesture(float Value)
{
	UnLuaManager_eventInputGesture_Parms Parms;
	Parms.Value=Value;
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaManager_InputGesture);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventInputGesture_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "InputGesture", Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::PropPointers), sizeof(UnLuaManager_eventInputGesture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaManager_eventInputGesture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_InputGesture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaManager Function InputGesture ****************************************

// ********** Begin Class UUnLuaManager Function InputTouch ****************************************
struct UnLuaManager_eventInputTouch_Parms
{
	TEnumAsByte<ETouchIndex::Type> FingerIndex;
	FVector Location;
};
static FName NAME_UUnLuaManager_InputTouch = FName(TEXT("InputTouch"));
void UUnLuaManager::InputTouch(ETouchIndex::Type FingerIndex, FVector const& Location)
{
	UnLuaManager_eventInputTouch_Parms Parms;
	Parms.FingerIndex=FingerIndex;
	Parms.Location=Location;
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaManager_InputTouch);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventInputTouch_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 3556756081
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventInputTouch_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_FingerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "InputTouch", Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::PropPointers), sizeof(UnLuaManager_eventInputTouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaManager_eventInputTouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_InputTouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaManager Function InputTouch ******************************************

// ********** Begin Class UUnLuaManager Function InputVectorAxis ***********************************
struct UnLuaManager_eventInputVectorAxis_Parms
{
	FVector AxisValue;
};
static FName NAME_UUnLuaManager_InputVectorAxis = FName(TEXT("InputVectorAxis"));
void UUnLuaManager::InputVectorAxis(FVector const& AxisValue)
{
	UnLuaManager_eventInputVectorAxis_Parms Parms;
	Parms.AxisValue=AxisValue;
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaManager_InputVectorAxis);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventInputVectorAxis_Parms, AxisValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValue_MetaData), NewProp_AxisValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "InputVectorAxis", Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::PropPointers), sizeof(UnLuaManager_eventInputVectorAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaManager_eventInputVectorAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_InputVectorAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaManager Function InputVectorAxis *************************************

// ********** Begin Class UUnLuaManager Function OnLatentActionCompleted ***************************
struct Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics
{
	struct UnLuaManager_eventOnLatentActionCompleted_Parms
	{
		int32 LinkID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LinkID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::NewProp_LinkID = { "LinkID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventOnLatentActionCompleted_Parms, LinkID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::NewProp_LinkID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "OnLatentActionCompleted", Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::UnLuaManager_eventOnLatentActionCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::UnLuaManager_eventOnLatentActionCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaManager::execOnLatentActionCompleted)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LinkID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLatentActionCompleted(Z_Param_LinkID);
	P_NATIVE_END;
}
// ********** End Class UUnLuaManager Function OnLatentActionCompleted *****************************

// ********** Begin Class UUnLuaManager Function Override ******************************************
struct Z_Construct_UFunction_UUnLuaManager_Override_Statics
{
	struct UnLuaManager_eventOverride_Parms
	{
		UClass* Class;
		FName FunctionName;
		FName LuaFunctionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LuaFunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUnLuaManager_Override_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventOverride_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUnLuaManager_Override_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventOverride_Parms, FunctionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUnLuaManager_Override_Statics::NewProp_LuaFunctionName = { "LuaFunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaManager_eventOverride_Parms, LuaFunctionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_Override_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_Override_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_Override_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_Override_Statics::NewProp_LuaFunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_Override_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_Override_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "Override", Z_Construct_UFunction_UUnLuaManager_Override_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_Override_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaManager_Override_Statics::UnLuaManager_eventOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_Override_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_Override_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaManager_Override_Statics::UnLuaManager_eventOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaManager_Override()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_Override_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaManager::execOverride)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
	P_GET_PROPERTY(FNameProperty,Z_Param_LuaFunctionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Override(Z_Param_Class,Z_Param_FunctionName,Z_Param_LuaFunctionName);
	P_NATIVE_END;
}
// ********** End Class UUnLuaManager Function Override ********************************************

// ********** Begin Class UUnLuaManager Function TriggerAnimNotify *********************************
static FName NAME_UUnLuaManager_TriggerAnimNotify = FName(TEXT("TriggerAnimNotify"));
void UUnLuaManager::TriggerAnimNotify()
{
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaManager_TriggerAnimNotify);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "TriggerAnimNotify", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaManager Function TriggerAnimNotify ***********************************

// ********** Begin Class UUnLuaManager ************************************************************
void UUnLuaManager::StaticRegisterNativesUUnLuaManager()
{
	UClass* Class = UUnLuaManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOrAddBindingObject", &UUnLuaManager::execGetOrAddBindingObject },
		{ "OnLatentActionCompleted", &UUnLuaManager::execOnLatentActionCompleted },
		{ "Override", &UUnLuaManager::execOverride },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaManager;
UClass* UUnLuaManager::GetPrivateStaticClass()
{
	using TClass = UUnLuaManager;
	if (!Z_Registration_Info_UClass_UUnLuaManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaManager"),
			Z_Registration_Info_UClass_UUnLuaManager.InnerSingleton,
			StaticRegisterNativesUUnLuaManager,
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
	return Z_Registration_Info_UClass_UUnLuaManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaManager_NoRegister()
{
	return UUnLuaManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnLuaManager.h" },
		{ "ModuleRelativePath", "Public/UnLuaManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis1D, "EnhancedInputActionAxis1D" }, // 2085483276
		{ &Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis2D, "EnhancedInputActionAxis2D" }, // 2888104486
		{ &Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionAxis3D, "EnhancedInputActionAxis3D" }, // 1299793028
		{ &Z_Construct_UFunction_UUnLuaManager_EnhancedInputActionDigital, "EnhancedInputActionDigital" }, // 867387537
		{ &Z_Construct_UFunction_UUnLuaManager_GetOrAddBindingObject, "GetOrAddBindingObject" }, // 2667964973
		{ &Z_Construct_UFunction_UUnLuaManager_InputAction, "InputAction" }, // 816320852
		{ &Z_Construct_UFunction_UUnLuaManager_InputAxis, "InputAxis" }, // 517164605
		{ &Z_Construct_UFunction_UUnLuaManager_InputGesture, "InputGesture" }, // 3602100819
		{ &Z_Construct_UFunction_UUnLuaManager_InputTouch, "InputTouch" }, // 1176842677
		{ &Z_Construct_UFunction_UUnLuaManager_InputVectorAxis, "InputVectorAxis" }, // 2431381909
		{ &Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted, "OnLatentActionCompleted" }, // 1052262772
		{ &Z_Construct_UFunction_UUnLuaManager_Override, "Override" }, // 113337737
		{ &Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify, "TriggerAnimNotify" }, // 2808412786
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnLuaManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaManager_Statics::ClassParams = {
	&UUnLuaManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaManager()
{
	if (!Z_Registration_Info_UClass_UUnLuaManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaManager.OuterSingleton, Z_Construct_UClass_UUnLuaManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaManager);
UUnLuaManager::~UUnLuaManager() {}
// ********** End Class UUnLuaManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h__Script_UnLua_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaManager, UUnLuaManager::StaticClass, TEXT("UUnLuaManager"), &Z_Registration_Info_UClass_UUnLuaManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaManager), 3142309217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h__Script_UnLua_2318833533(TEXT("/Script/UnLua"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h__Script_UnLua_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h__Script_UnLua_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
