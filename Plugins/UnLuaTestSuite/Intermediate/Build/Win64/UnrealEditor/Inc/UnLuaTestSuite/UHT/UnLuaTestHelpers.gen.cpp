// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestHelpers.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnLuaTestHelpers() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AUnLuaTestActor();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AUnLuaTestActor_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestFunctionLibrary();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestFunctionLibrary_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestStub();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestStub_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestStubForIssue446();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestStubForIssue446_NoRegister();
UNLUATESTSUITE_API UEnum* Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331();
UNLUATESTSUITE_API UEnum* Z_Construct_UEnum_UnLuaTestSuite_EUnLuaTestEnum();
UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature();
UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature();
UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature();
UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature();
UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature();
UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature();
UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FUnLuaTestTableRow();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FUnLuaTestSimpleEvent *************************************************
struct Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "UnLuaTestSimpleEvent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUnLuaTestSimpleEvent_DelegateWrapper(const FMulticastScriptDelegate& UnLuaTestSimpleEvent)
{
	UnLuaTestSimpleEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FUnLuaTestSimpleEvent ***************************************************

// ********** Begin Delegate FUnLuaTestSimpleHandler ***********************************************
struct Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "UnLuaTestSimpleHandler__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUnLuaTestSimpleHandler_DelegateWrapper(const FScriptDelegate& UnLuaTestSimpleHandler)
{
	UnLuaTestSimpleHandler.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FUnLuaTestSimpleHandler *************************************************

// ********** Begin Delegate FUnLuaTestComplexHandler **********************************************
struct Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics
{
	struct _Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "UnLuaTestComplexHandler__DelegateSignature", Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::_Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::_Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
int32 FUnLuaTestComplexHandler_DelegateWrapper(const FScriptDelegate& UnLuaTestComplexHandler, FString& Name)
{
	struct _Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms
	{
		FString Name;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms()
			: ReturnValue(0)
		{
		}
	};
	_Script_UnLuaTestSuite_eventUnLuaTestComplexHandler_Parms Parms;
	Parms.Name=Name;
	UnLuaTestComplexHandler.ProcessDelegate<UObject>(&Parms);
	Name=Parms.Name;
	return Parms.ReturnValue;
}
// ********** End Delegate FUnLuaTestComplexHandler ************************************************

// ********** Begin Delegate FIssue304Event ********************************************************
struct Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics
{
	struct _Script_UnLuaTestSuite_eventIssue304Event_Parms
	{
		TArray<FString> Array;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnLuaTestSuite_eventIssue304Event_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::NewProp_Array,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "Issue304Event__DelegateSignature", Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::_Script_UnLuaTestSuite_eventIssue304Event_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::_Script_UnLuaTestSuite_eventIssue304Event_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIssue304Event_DelegateWrapper(const FMulticastScriptDelegate& Issue304Event, const TArray<FString>& Array)
{
	struct _Script_UnLuaTestSuite_eventIssue304Event_Parms
	{
		TArray<FString> Array;
	};
	_Script_UnLuaTestSuite_eventIssue304Event_Parms Parms;
	Parms.Array=Array;
	Issue304Event.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIssue304Event **********************************************************

// ********** Begin Delegate FIssue362Delegate *****************************************************
struct Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics
{
	struct _Script_UnLuaTestSuite_eventIssue362Delegate_Parms
	{
		TArray<int32> Array;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnLuaTestSuite_eventIssue362Delegate_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::NewProp_Array,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "Issue362Delegate__DelegateSignature", Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::_Script_UnLuaTestSuite_eventIssue362Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::_Script_UnLuaTestSuite_eventIssue362Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIssue362Delegate_DelegateWrapper(const FScriptDelegate& Issue362Delegate, TArray<int32>& Array)
{
	struct _Script_UnLuaTestSuite_eventIssue362Delegate_Parms
	{
		TArray<int32> Array;
	};
	_Script_UnLuaTestSuite_eventIssue362Delegate_Parms Parms;
	Parms.Array=Array;
	Issue362Delegate.ProcessDelegate<UObject>(&Parms);
	Array=Parms.Array;
}
// ********** End Delegate FIssue362Delegate *******************************************************

// ********** Begin Enum EEnumForIssue331 **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnumForIssue331;
static UEnum* EEnumForIssue331_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnumForIssue331.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnumForIssue331.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331, (UObject*)Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("EEnumForIssue331"));
	}
	return Z_Registration_Info_UEnum_EEnumForIssue331.OuterSingleton;
}
template<> UNLUATESTSUITE_API UEnum* StaticEnum<EEnumForIssue331>()
{
	return EEnumForIssue331_StaticEnum();
}
struct Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
		{ "RECORD_NONE.Name", "RECORD_NONE" },
		{ "RECORD_TO_FILE.Name", "RECORD_TO_FILE" },
		{ "RECORD_TO_LOG.Name", "RECORD_TO_LOG" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RECORD_NONE", (int64)RECORD_NONE },
		{ "RECORD_TO_FILE", (int64)RECORD_TO_FILE },
		{ "RECORD_TO_LOG", (int64)RECORD_TO_LOG },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	nullptr,
	"EEnumForIssue331",
	"EEnumForIssue331",
	Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331()
{
	if (!Z_Registration_Info_UEnum_EEnumForIssue331.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnumForIssue331.InnerSingleton, Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnumForIssue331.InnerSingleton;
}
// ********** End Enum EEnumForIssue331 ************************************************************

// ********** Begin Enum EUnLuaTestEnum ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnLuaTestEnum;
static UEnum* EUnLuaTestEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUnLuaTestEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUnLuaTestEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnLuaTestSuite_EUnLuaTestEnum, (UObject*)Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("EUnLuaTestEnum"));
	}
	return Z_Registration_Info_UEnum_EUnLuaTestEnum.OuterSingleton;
}
template<> UNLUATESTSUITE_API UEnum* StaticEnum<EUnLuaTestEnum>()
{
	return EUnLuaTestEnum_StaticEnum();
}
struct Z_Construct_UEnum_UnLuaTestSuite_EUnLuaTestEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
		{ "None.DisplayName", "\xe6\x97\xa0" },
		{ "None.Name", "EUnLuaTestEnum::None" },
		{ "Value1.DisplayName", "\xe6\x95\xb0\xe5\x80\xbc""1" },
		{ "Value1.Name", "EUnLuaTestEnum::Value1" },
		{ "Value2.DisplayName", "\xe6\x95\xb0\xe5\x80\xbc""2" },
		{ "Value2.Name", "EUnLuaTestEnum::Value2" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUnLuaTestEnum::None", (int64)EUnLuaTestEnum::None },
		{ "EUnLuaTestEnum::Value1", (int64)EUnLuaTestEnum::Value1 },
		{ "EUnLuaTestEnum::Value2", (int64)EUnLuaTestEnum::Value2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnLuaTestSuite_EUnLuaTestEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	nullptr,
	"EUnLuaTestEnum",
	"EUnLuaTestEnum",
	Z_Construct_UEnum_UnLuaTestSuite_EUnLuaTestEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnLuaTestSuite_EUnLuaTestEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnLuaTestSuite_EUnLuaTestEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnLuaTestSuite_EUnLuaTestEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnLuaTestSuite_EUnLuaTestEnum()
{
	if (!Z_Registration_Info_UEnum_EUnLuaTestEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnLuaTestEnum.InnerSingleton, Z_Construct_UEnum_UnLuaTestSuite_EUnLuaTestEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUnLuaTestEnum.InnerSingleton;
}
// ********** End Enum EUnLuaTestEnum **************************************************************

// ********** Begin Class UUnLuaTestStub Function AddCount *****************************************
struct Z_Construct_UFunction_UUnLuaTestStub_AddCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaTestStub_AddCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaTestStub, nullptr, "AddCount", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestStub_AddCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaTestStub_AddCount_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUnLuaTestStub_AddCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaTestStub_AddCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaTestStub::execAddCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCount();
	P_NATIVE_END;
}
// ********** End Class UUnLuaTestStub Function AddCount *******************************************

// ********** Begin Class UUnLuaTestStub Function TestForIssue407 **********************************
struct Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics
{
	struct UnLuaTestStub_eventTestForIssue407_Parms
	{
		TArray<int32> Array;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestStub_eventTestForIssue407_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestStub_eventTestForIssue407_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaTestStub, nullptr, "TestForIssue407", Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::UnLuaTestStub_eventTestForIssue407_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::UnLuaTestStub_eventTestForIssue407_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaTestStub::execTestForIssue407)
{
	P_GET_TARRAY(int32,Z_Param_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->TestForIssue407(Z_Param_Array);
	P_NATIVE_END;
}
// ********** End Class UUnLuaTestStub Function TestForIssue407 ************************************

// ********** Begin Class UUnLuaTestStub ***********************************************************
void UUnLuaTestStub::StaticRegisterNativesUUnLuaTestStub()
{
	UClass* Class = UUnLuaTestStub::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCount", &UUnLuaTestStub::execAddCount },
		{ "TestForIssue407", &UUnLuaTestStub::execTestForIssue407 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaTestStub;
UClass* UUnLuaTestStub::GetPrivateStaticClass()
{
	using TClass = UUnLuaTestStub;
	if (!Z_Registration_Info_UClass_UUnLuaTestStub.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaTestStub"),
			Z_Registration_Info_UClass_UUnLuaTestStub.InnerSingleton,
			StaticRegisterNativesUUnLuaTestStub,
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
	return Z_Registration_Info_UClass_UUnLuaTestStub.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaTestStub_NoRegister()
{
	return UUnLuaTestStub::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaTestStub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UnLuaTestHelpers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComplexHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Issue304Event_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Issue362Delegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Counter_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapForIssue407_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SimpleEvent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_SimpleHandler;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ComplexHandler;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Issue304Event;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Issue362Delegate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Counter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapForIssue407_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapForIssue407_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MapForIssue407;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaTestStub_AddCount, "AddCount" }, // 3841087844
		{ &Z_Construct_UFunction_UUnLuaTestStub_TestForIssue407, "TestForIssue407" }, // 189251297
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaTestStub>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_SimpleEvent = { "SimpleEvent", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaTestStub, SimpleEvent), Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleEvent_MetaData), NewProp_SimpleEvent_MetaData) }; // 4075318724
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_SimpleHandler = { "SimpleHandler", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaTestStub, SimpleHandler), Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleHandler_MetaData), NewProp_SimpleHandler_MetaData) }; // 3424213884
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_ComplexHandler = { "ComplexHandler", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaTestStub, ComplexHandler), Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComplexHandler_MetaData), NewProp_ComplexHandler_MetaData) }; // 2378719735
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_Issue304Event = { "Issue304Event", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaTestStub, Issue304Event), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Issue304Event_MetaData), NewProp_Issue304Event_MetaData) }; // 757236736
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_Issue362Delegate = { "Issue362Delegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaTestStub, Issue362Delegate), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Issue362Delegate_MetaData), NewProp_Issue362Delegate_MetaData) }; // 2199469873
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_Counter = { "Counter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaTestStub, Counter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Counter_MetaData), NewProp_Counter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_MapForIssue407_ValueProp = { "MapForIssue407", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_MapForIssue407_Key_KeyProp = { "MapForIssue407_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_MapForIssue407 = { "MapForIssue407", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaTestStub, MapForIssue407), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapForIssue407_MetaData), NewProp_MapForIssue407_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnLuaTestStub_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_SimpleEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_SimpleHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_ComplexHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_Issue304Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_Issue362Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_Counter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_MapForIssue407_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_MapForIssue407_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaTestStub_Statics::NewProp_MapForIssue407,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaTestStub_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnLuaTestStub_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaTestStub_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaTestStub_Statics::ClassParams = {
	&UUnLuaTestStub::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUnLuaTestStub_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaTestStub_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaTestStub_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaTestStub_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaTestStub()
{
	if (!Z_Registration_Info_UClass_UUnLuaTestStub.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaTestStub.OuterSingleton, Z_Construct_UClass_UUnLuaTestStub_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaTestStub.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaTestStub);
UUnLuaTestStub::~UUnLuaTestStub() {}
// ********** End Class UUnLuaTestStub *************************************************************

// ********** Begin Class UUnLuaTestStubForIssue446 Function Test **********************************
static FName NAME_UUnLuaTestStubForIssue446_Test = FName(TEXT("Test"));
void UUnLuaTestStubForIssue446::Test()
{
	UFunction* Func = FindFunctionChecked(NAME_UUnLuaTestStubForIssue446_Test);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UUnLuaTestStubForIssue446_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaTestStubForIssue446_Test_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaTestStubForIssue446, nullptr, "Test", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestStubForIssue446_Test_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaTestStubForIssue446_Test_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUnLuaTestStubForIssue446_Test()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaTestStubForIssue446_Test_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UUnLuaTestStubForIssue446 Function Test ************************************

// ********** Begin Class UUnLuaTestStubForIssue446 ************************************************
void UUnLuaTestStubForIssue446::StaticRegisterNativesUUnLuaTestStubForIssue446()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaTestStubForIssue446;
UClass* UUnLuaTestStubForIssue446::GetPrivateStaticClass()
{
	using TClass = UUnLuaTestStubForIssue446;
	if (!Z_Registration_Info_UClass_UUnLuaTestStubForIssue446.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaTestStubForIssue446"),
			Z_Registration_Info_UClass_UUnLuaTestStubForIssue446.InnerSingleton,
			StaticRegisterNativesUUnLuaTestStubForIssue446,
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
	return Z_Registration_Info_UClass_UUnLuaTestStubForIssue446.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaTestStubForIssue446_NoRegister()
{
	return UUnLuaTestStubForIssue446::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnLuaTestHelpers.h" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaTestStubForIssue446_Test, "Test" }, // 1041187313
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaTestStubForIssue446>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UUnLuaTestStubForIssue446, IUnLuaInterface), false },  // 3862883213
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics::ClassParams = {
	&UUnLuaTestStubForIssue446::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaTestStubForIssue446()
{
	if (!Z_Registration_Info_UClass_UUnLuaTestStubForIssue446.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaTestStubForIssue446.OuterSingleton, Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaTestStubForIssue446.OuterSingleton;
}
UUnLuaTestStubForIssue446::UUnLuaTestStubForIssue446(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaTestStubForIssue446);
UUnLuaTestStubForIssue446::~UUnLuaTestStubForIssue446() {}
// ********** End Class UUnLuaTestStubForIssue446 **************************************************

// ********** Begin Class AUnLuaTestActor Function TestForIssue300 *********************************
struct UnLuaTestActor_eventTestForIssue300_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	UnLuaTestActor_eventTestForIssue300_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_AUnLuaTestActor_TestForIssue300 = FName(TEXT("TestForIssue300"));
int32 AUnLuaTestActor::TestForIssue300()
{
	UnLuaTestActor_eventTestForIssue300_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_AUnLuaTestActor_TestForIssue300);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestActor_eventTestForIssue300_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaTestActor, nullptr, "TestForIssue300", Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics::PropPointers), sizeof(UnLuaTestActor_eventTestForIssue300_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaTestActor_eventTestForIssue300_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AUnLuaTestActor Function TestForIssue300 ***********************************

// ********** Begin Class AUnLuaTestActor Function TestForIssue328 *********************************
struct UnLuaTestActor_eventTestForIssue328_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	UnLuaTestActor_eventTestForIssue328_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AUnLuaTestActor_TestForIssue328 = FName(TEXT("TestForIssue328"));
bool AUnLuaTestActor::TestForIssue328()
{
	UnLuaTestActor_eventTestForIssue328_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_AUnLuaTestActor_TestForIssue328);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnLuaTestActor_eventTestForIssue328_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnLuaTestActor_eventTestForIssue328_Parms), &Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaTestActor, nullptr, "TestForIssue328", Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::PropPointers), sizeof(UnLuaTestActor_eventTestForIssue328_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaTestActor_eventTestForIssue328_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AUnLuaTestActor Function TestForIssue328 ***********************************

// ********** Begin Class AUnLuaTestActor Function TestForIssue445 *********************************
struct UnLuaTestActor_eventTestForIssue445_Parms
{
	int32 Index;
	TSubclassOf<UUserWidget> ReturnValue;

	/** Constructor, initializes return property only **/
	UnLuaTestActor_eventTestForIssue445_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_AUnLuaTestActor_TestForIssue445 = FName(TEXT("TestForIssue445"));
TSubclassOf<UUserWidget> AUnLuaTestActor::TestForIssue445(int32 Index)
{
	UnLuaTestActor_eventTestForIssue445_Parms Parms;
	Parms.Index=Index;
	UFunction* Func = FindFunctionChecked(NAME_AUnLuaTestActor_TestForIssue445);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestActor_eventTestForIssue445_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestActor_eventTestForIssue445_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaTestActor, nullptr, "TestForIssue445", Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::PropPointers), sizeof(UnLuaTestActor_eventTestForIssue445_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaTestActor_eventTestForIssue445_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AUnLuaTestActor Function TestForIssue445 ***********************************

// ********** Begin Class AUnLuaTestActor **********************************************************
void AUnLuaTestActor::StaticRegisterNativesAUnLuaTestActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUnLuaTestActor;
UClass* AUnLuaTestActor::GetPrivateStaticClass()
{
	using TClass = AUnLuaTestActor;
	if (!Z_Registration_Info_UClass_AUnLuaTestActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaTestActor"),
			Z_Registration_Info_UClass_AUnLuaTestActor.InnerSingleton,
			StaticRegisterNativesAUnLuaTestActor,
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
	return Z_Registration_Info_UClass_AUnLuaTestActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AUnLuaTestActor_NoRegister()
{
	return AUnLuaTestActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUnLuaTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnLuaTestHelpers.h" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnLuaTestActor_TestForIssue300, "TestForIssue300" }, // 927261384
		{ &Z_Construct_UFunction_AUnLuaTestActor_TestForIssue328, "TestForIssue328" }, // 1309345626
		{ &Z_Construct_UFunction_AUnLuaTestActor_TestForIssue445, "TestForIssue445" }, // 1405162606
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnLuaTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUnLuaTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnLuaTestActor_Statics::ClassParams = {
	&AUnLuaTestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnLuaTestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnLuaTestActor()
{
	if (!Z_Registration_Info_UClass_AUnLuaTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnLuaTestActor.OuterSingleton, Z_Construct_UClass_AUnLuaTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnLuaTestActor.OuterSingleton;
}
AUnLuaTestActor::AUnLuaTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnLuaTestActor);
AUnLuaTestActor::~AUnLuaTestActor() {}
// ********** End Class AUnLuaTestActor ************************************************************

// ********** Begin ScriptStruct FUnLuaTestTableRow ************************************************
static_assert(std::is_polymorphic<FUnLuaTestTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUnLuaTestTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUnLuaTestTableRow;
class UScriptStruct* FUnLuaTestTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUnLuaTestTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUnLuaTestTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnLuaTestTableRow, (UObject*)Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("UnLuaTestTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_FUnLuaTestTableRow.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "UnLuaTestTableRow" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "UnLuaTestTableRow" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnLuaTestTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnLuaTestTableRow, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnLuaTestTableRow, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"UnLuaTestTableRow",
	Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::PropPointers),
	sizeof(FUnLuaTestTableRow),
	alignof(FUnLuaTestTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnLuaTestTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_FUnLuaTestTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUnLuaTestTableRow.InnerSingleton, Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUnLuaTestTableRow.InnerSingleton;
}
// ********** End ScriptStruct FUnLuaTestTableRow **************************************************

// ********** Begin Delegate FIssule294Event *******************************************************
struct Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics
{
	struct _Script_UnLuaTestSuite_eventIssule294Event_Parms
	{
		int32 Value1;
		UObject* Value2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::NewProp_Value1 = { "Value1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnLuaTestSuite_eventIssule294Event_Parms, Value1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::NewProp_Value2 = { "Value2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnLuaTestSuite_eventIssule294Event_Parms, Value2), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::NewProp_Value1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::NewProp_Value2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "Issule294Event__DelegateSignature", Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::_Script_UnLuaTestSuite_eventIssule294Event_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::_Script_UnLuaTestSuite_eventIssule294Event_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIssule294Event_DelegateWrapper(const FScriptDelegate& Issule294Event, int32 Value1, UObject* Value2)
{
	struct _Script_UnLuaTestSuite_eventIssule294Event_Parms
	{
		int32 Value1;
		UObject* Value2;
	};
	_Script_UnLuaTestSuite_eventIssule294Event_Parms Parms;
	Parms.Value1=Value1;
	Parms.Value2=Value2;
	Issule294Event.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FIssule294Event *********************************************************

// ********** Begin Class UUnLuaTestFunctionLibrary Function TestForBaseSpec1 **********************
struct Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics
{
	struct UnLuaTestFunctionLibrary_eventTestForBaseSpec1_Parms
	{
		int32 A;
		int32 B;
		int32 C;
		FString D;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FIntPropertyParams NewProp_C;
	static const UECodeGen_Private::FStrPropertyParams NewProp_D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForBaseSpec1_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForBaseSpec1_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForBaseSpec1_Parms, C), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForBaseSpec1_Parms, D), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::NewProp_D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaTestFunctionLibrary, nullptr, "TestForBaseSpec1", Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::UnLuaTestFunctionLibrary_eventTestForBaseSpec1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::UnLuaTestFunctionLibrary_eventTestForBaseSpec1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaTestFunctionLibrary::execTestForBaseSpec1)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_B);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_C);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_D);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUnLuaTestFunctionLibrary::TestForBaseSpec1(Z_Param_A,Z_Param_Out_B,Z_Param_Out_C,Z_Param_Out_D);
	P_NATIVE_END;
}
// ********** End Class UUnLuaTestFunctionLibrary Function TestForBaseSpec1 ************************

// ********** Begin Class UUnLuaTestFunctionLibrary Function TestForBaseSpec2 **********************
struct Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics
{
	struct UnLuaTestFunctionLibrary_eventTestForBaseSpec2_Parms
	{
		int32 A;
		int32 B;
		int32 C;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FIntPropertyParams NewProp_C;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForBaseSpec2_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForBaseSpec2_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForBaseSpec2_Parms, C), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnLuaTestFunctionLibrary_eventTestForBaseSpec2_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnLuaTestFunctionLibrary_eventTestForBaseSpec2_Parms), &Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaTestFunctionLibrary, nullptr, "TestForBaseSpec2", Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::UnLuaTestFunctionLibrary_eventTestForBaseSpec2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::UnLuaTestFunctionLibrary_eventTestForBaseSpec2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaTestFunctionLibrary::execTestForBaseSpec2)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_B);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_C);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUnLuaTestFunctionLibrary::TestForBaseSpec2(Z_Param_A,Z_Param_Out_B,Z_Param_Out_C);
	P_NATIVE_END;
}
// ********** End Class UUnLuaTestFunctionLibrary Function TestForBaseSpec2 ************************

// ********** Begin Class UUnLuaTestFunctionLibrary Function TestForIssue293 ***********************
struct Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics
{
	struct UnLuaTestFunctionLibrary_eventTestForIssue293_Parms
	{
		FString A;
		int32 B;
		TArray<FColor> C;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_C;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue293_Parms, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue293_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::NewProp_C_Inner = { "C", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue293_Parms, C), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue293_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::NewProp_C_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaTestFunctionLibrary, nullptr, "TestForIssue293", Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::UnLuaTestFunctionLibrary_eventTestForIssue293_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::UnLuaTestFunctionLibrary_eventTestForIssue293_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaTestFunctionLibrary::execTestForIssue293)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_C);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUnLuaTestFunctionLibrary::TestForIssue293(Z_Param_A,Z_Param_B,Z_Param_Out_C);
	P_NATIVE_END;
}
// ********** End Class UUnLuaTestFunctionLibrary Function TestForIssue293 *************************

// ********** Begin Class UUnLuaTestFunctionLibrary Function TestForIssue294 ***********************
struct Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics
{
	struct UnLuaTestFunctionLibrary_eventTestForIssue294_Parms
	{
		FString A;
		int32 B;
		FScriptDelegate Event;
		TArray<FColor> Array;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Event, Array" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue294_Parms, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue294_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue294_Parms, Event), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 1181457450
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue294_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Array_MetaData), NewProp_Array_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue294_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaTestFunctionLibrary, nullptr, "TestForIssue294", Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::UnLuaTestFunctionLibrary_eventTestForIssue294_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::UnLuaTestFunctionLibrary_eventTestForIssue294_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaTestFunctionLibrary::execTestForIssue294)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUnLuaTestFunctionLibrary::TestForIssue294(Z_Param_A,Z_Param_B,FIssule294Event(Z_Param_Out_Event),Z_Param_Out_Array);
	P_NATIVE_END;
}
// ********** End Class UUnLuaTestFunctionLibrary Function TestForIssue294 *************************

// ********** Begin Class UUnLuaTestFunctionLibrary Function TestForIssue323 ***********************
struct Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics
{
	struct UnLuaTestFunctionLibrary_eventTestForIssue323_Parms
	{
		FVector Location;
		FRotator Rotation;
		FVector2D Vector2D;
		FLinearColor LinearColor;
		FColor Color;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Color", "(R=0,G=0,B=255,A=255)" },
		{ "CPP_Default_LinearColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_Vector2D", "" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue323_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue323_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_Vector2D = { "Vector2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue323_Parms, Vector2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_LinearColor = { "LinearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue323_Parms, LinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue323_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnLuaTestFunctionLibrary_eventTestForIssue323_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnLuaTestFunctionLibrary_eventTestForIssue323_Parms), &Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_Vector2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_LinearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaTestFunctionLibrary, nullptr, "TestForIssue323", Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::UnLuaTestFunctionLibrary_eventTestForIssue323_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::UnLuaTestFunctionLibrary_eventTestForIssue323_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaTestFunctionLibrary::execTestForIssue323)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector2D,Z_Param_Vector2D);
	P_GET_STRUCT(FLinearColor,Z_Param_LinearColor);
	P_GET_STRUCT(FColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUnLuaTestFunctionLibrary::TestForIssue323(Z_Param_Location,Z_Param_Rotation,Z_Param_Vector2D,Z_Param_LinearColor,Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class UUnLuaTestFunctionLibrary Function TestForIssue323 *************************

// ********** Begin Class UUnLuaTestFunctionLibrary Function TestForIssue331 ***********************
struct Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics
{
	struct UnLuaTestFunctionLibrary_eventTestForIssue331_Parms
	{
		TEnumAsByte<EEnumForIssue331> InEnum;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_InEnum", "RECORD_TO_FILE" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InEnum;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::NewProp_InEnum = { "InEnum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue331_Parms, InEnum), Z_Construct_UEnum_UnLuaTestSuite_EEnumForIssue331, METADATA_PARAMS(0, nullptr) }; // 1623552987
void Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnLuaTestFunctionLibrary_eventTestForIssue331_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnLuaTestFunctionLibrary_eventTestForIssue331_Parms), &Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::NewProp_InEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaTestFunctionLibrary, nullptr, "TestForIssue331", Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::UnLuaTestFunctionLibrary_eventTestForIssue331_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::UnLuaTestFunctionLibrary_eventTestForIssue331_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaTestFunctionLibrary::execTestForIssue331)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InEnum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUnLuaTestFunctionLibrary::TestForIssue331(EEnumForIssue331(Z_Param_InEnum));
	P_NATIVE_END;
}
// ********** End Class UUnLuaTestFunctionLibrary Function TestForIssue331 *************************

// ********** Begin Class UUnLuaTestFunctionLibrary Function TestForIssue376 ***********************
struct Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics
{
	struct UnLuaTestFunctionLibrary_eventTestForIssue376_Parms
	{
		FUnLuaTestTableRow Struct;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaTestFunctionLibrary_eventTestForIssue376_Parms, Struct), Z_Construct_UScriptStruct_FUnLuaTestTableRow, METADATA_PARAMS(0, nullptr) }; // 1036068922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::NewProp_Struct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaTestFunctionLibrary, nullptr, "TestForIssue376", Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::UnLuaTestFunctionLibrary_eventTestForIssue376_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::UnLuaTestFunctionLibrary_eventTestForIssue376_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnLuaTestFunctionLibrary::execTestForIssue376)
{
	P_GET_STRUCT_REF(FUnLuaTestTableRow,Z_Param_Out_Struct);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUnLuaTestFunctionLibrary::TestForIssue376(Z_Param_Out_Struct);
	P_NATIVE_END;
}
// ********** End Class UUnLuaTestFunctionLibrary Function TestForIssue376 *************************

// ********** Begin Class UUnLuaTestFunctionLibrary ************************************************
void UUnLuaTestFunctionLibrary::StaticRegisterNativesUUnLuaTestFunctionLibrary()
{
	UClass* Class = UUnLuaTestFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TestForBaseSpec1", &UUnLuaTestFunctionLibrary::execTestForBaseSpec1 },
		{ "TestForBaseSpec2", &UUnLuaTestFunctionLibrary::execTestForBaseSpec2 },
		{ "TestForIssue293", &UUnLuaTestFunctionLibrary::execTestForIssue293 },
		{ "TestForIssue294", &UUnLuaTestFunctionLibrary::execTestForIssue294 },
		{ "TestForIssue323", &UUnLuaTestFunctionLibrary::execTestForIssue323 },
		{ "TestForIssue331", &UUnLuaTestFunctionLibrary::execTestForIssue331 },
		{ "TestForIssue376", &UUnLuaTestFunctionLibrary::execTestForIssue376 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaTestFunctionLibrary;
UClass* UUnLuaTestFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UUnLuaTestFunctionLibrary;
	if (!Z_Registration_Info_UClass_UUnLuaTestFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaTestFunctionLibrary"),
			Z_Registration_Info_UClass_UUnLuaTestFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUUnLuaTestFunctionLibrary,
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
	return Z_Registration_Info_UClass_UUnLuaTestFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaTestFunctionLibrary_NoRegister()
{
	return UUnLuaTestFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaTestFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnLuaTestHelpers.h" },
		{ "ModuleRelativePath", "Public/UnLuaTestHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec1, "TestForBaseSpec1" }, // 3438773930
		{ &Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForBaseSpec2, "TestForBaseSpec2" }, // 821695551
		{ &Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue293, "TestForIssue293" }, // 3553328904
		{ &Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue294, "TestForIssue294" }, // 1804701250
		{ &Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue323, "TestForIssue323" }, // 2332168405
		{ &Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue331, "TestForIssue331" }, // 195456229
		{ &Z_Construct_UFunction_UUnLuaTestFunctionLibrary_TestForIssue376, "TestForIssue376" }, // 2548687158
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaTestFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnLuaTestFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaTestFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaTestFunctionLibrary_Statics::ClassParams = {
	&UUnLuaTestFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaTestFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaTestFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaTestFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UUnLuaTestFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaTestFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUnLuaTestFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaTestFunctionLibrary.OuterSingleton;
}
UUnLuaTestFunctionLibrary::UUnLuaTestFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaTestFunctionLibrary);
UUnLuaTestFunctionLibrary::~UUnLuaTestFunctionLibrary() {}
// ********** End Class UUnLuaTestFunctionLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnumForIssue331_StaticEnum, TEXT("EEnumForIssue331"), &Z_Registration_Info_UEnum_EEnumForIssue331, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1623552987U) },
		{ EUnLuaTestEnum_StaticEnum, TEXT("EUnLuaTestEnum"), &Z_Registration_Info_UEnum_EUnLuaTestEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1660913166U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnLuaTestTableRow::StaticStruct, Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics::NewStructOps, TEXT("UnLuaTestTableRow"), &Z_Registration_Info_UScriptStruct_FUnLuaTestTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnLuaTestTableRow), 1036068922U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaTestStub, UUnLuaTestStub::StaticClass, TEXT("UUnLuaTestStub"), &Z_Registration_Info_UClass_UUnLuaTestStub, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaTestStub), 1519015134U) },
		{ Z_Construct_UClass_UUnLuaTestStubForIssue446, UUnLuaTestStubForIssue446::StaticClass, TEXT("UUnLuaTestStubForIssue446"), &Z_Registration_Info_UClass_UUnLuaTestStubForIssue446, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaTestStubForIssue446), 2585063325U) },
		{ Z_Construct_UClass_AUnLuaTestActor, AUnLuaTestActor::StaticClass, TEXT("AUnLuaTestActor"), &Z_Registration_Info_UClass_AUnLuaTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnLuaTestActor), 18877544U) },
		{ Z_Construct_UClass_UUnLuaTestFunctionLibrary, UUnLuaTestFunctionLibrary::StaticClass, TEXT("UUnLuaTestFunctionLibrary"), &Z_Registration_Info_UClass_UUnLuaTestFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaTestFunctionLibrary), 1237229153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h__Script_UnLuaTestSuite_664496617(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h__Script_UnLuaTestSuite_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h__Script_UnLuaTestSuite_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
