// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Perfs/UnLuaBenchmarkProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnLuaBenchmarkProxy() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AUnLuaBenchmarkProxy();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AUnLuaBenchmarkProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUnLuaBenchmarkProxy Function GetCOM *************************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics
{
	struct UnLuaBenchmarkProxy_eventGetCOM_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetCOM_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetCOM", Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::UnLuaBenchmarkProxy_eventGetCOM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::UnLuaBenchmarkProxy_eventGetCOM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetCOM)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCOM();
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function GetCOM ***************************************

// ********** Begin Class AUnLuaBenchmarkProxy Function GetIndices *********************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics
{
	struct UnLuaBenchmarkProxy_eventGetIndices_Parms
	{
		TArray<int32> OutIndices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::NewProp_OutIndices_Inner = { "OutIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::NewProp_OutIndices = { "OutIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetIndices_Parms, OutIndices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::NewProp_OutIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::NewProp_OutIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetIndices", Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::UnLuaBenchmarkProxy_eventGetIndices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::UnLuaBenchmarkProxy_eventGetIndices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetIndices)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetIndices(Z_Param_Out_OutIndices);
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function GetIndices ***********************************

// ********** Begin Class AUnLuaBenchmarkProxy Function GetMeshID **********************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics
{
	struct UnLuaBenchmarkProxy_eventGetMeshID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetMeshID", Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::UnLuaBenchmarkProxy_eventGetMeshID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::UnLuaBenchmarkProxy_eventGetMeshID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetMeshID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMeshID();
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function GetMeshID ************************************

// ********** Begin Class AUnLuaBenchmarkProxy Function GetMeshInfo ********************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics
{
	struct UnLuaBenchmarkProxy_eventGetMeshInfo_Parms
	{
		int32 OutMeshID;
		FString OutMeshName;
		FVector OutCOM;
		TArray<int32> OutIndices;
		TArray<FVector> OutPositions;
		TArray<FVector> OutPredictedPositions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMeshID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMeshName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCOM;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPredictedPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPredictedPositions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutMeshID = { "OutMeshID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutMeshID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutMeshName = { "OutMeshName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutMeshName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutCOM = { "OutCOM", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutCOM), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutIndices_Inner = { "OutIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutIndices = { "OutIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutIndices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPositions_Inner = { "OutPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPositions = { "OutPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutPositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions_Inner = { "OutPredictedPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions = { "OutPredictedPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms, OutPredictedPositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnLuaBenchmarkProxy_eventGetMeshInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnLuaBenchmarkProxy_eventGetMeshInfo_Parms), &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutMeshID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutCOM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetMeshInfo", Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::UnLuaBenchmarkProxy_eventGetMeshInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::UnLuaBenchmarkProxy_eventGetMeshInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetMeshInfo)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMeshID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMeshName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCOM);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPredictedPositions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMeshInfo(Z_Param_Out_OutMeshID,Z_Param_Out_OutMeshName,Z_Param_Out_OutCOM,Z_Param_Out_OutIndices,Z_Param_Out_OutPositions,Z_Param_Out_OutPredictedPositions);
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function GetMeshInfo **********************************

// ********** Begin Class AUnLuaBenchmarkProxy Function GetMeshName ********************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics
{
	struct UnLuaBenchmarkProxy_eventGetMeshName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetMeshName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetMeshName", Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::UnLuaBenchmarkProxy_eventGetMeshName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::UnLuaBenchmarkProxy_eventGetMeshName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetMeshName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetMeshName();
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function GetMeshName **********************************

// ********** Begin Class AUnLuaBenchmarkProxy Function GetPositions *******************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics
{
	struct UnLuaBenchmarkProxy_eventGetPositions_Parms
	{
		TArray<FVector> OutPositions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPositions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::NewProp_OutPositions_Inner = { "OutPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::NewProp_OutPositions = { "OutPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetPositions_Parms, OutPositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::NewProp_OutPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::NewProp_OutPositions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetPositions", Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::UnLuaBenchmarkProxy_eventGetPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::UnLuaBenchmarkProxy_eventGetPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetPositions)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPositions(Z_Param_Out_OutPositions);
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function GetPositions *********************************

// ********** Begin Class AUnLuaBenchmarkProxy Function GetPredictedPositions **********************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics
{
	struct UnLuaBenchmarkProxy_eventGetPredictedPositions_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventGetPredictedPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "GetPredictedPositions", Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::UnLuaBenchmarkProxy_eventGetPredictedPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::UnLuaBenchmarkProxy_eventGetPredictedPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execGetPredictedPositions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPredictedPositions();
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function GetPredictedPositions ************************

// ********** Begin Class AUnLuaBenchmarkProxy Function NOP ****************************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "NOP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execNOP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NOP();
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function NOP ******************************************

// ********** Begin Class AUnLuaBenchmarkProxy Function Raycast ************************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics
{
	struct UnLuaBenchmarkProxy_eventRaycast_Parms
	{
		FVector Origin;
		FVector Direction;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventRaycast_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventRaycast_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
void Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnLuaBenchmarkProxy_eventRaycast_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnLuaBenchmarkProxy_eventRaycast_Parms), &Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "Raycast", Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::UnLuaBenchmarkProxy_eventRaycast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::UnLuaBenchmarkProxy_eventRaycast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execRaycast)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Raycast(Z_Param_Out_Origin,Z_Param_Out_Direction);
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function Raycast **************************************

// ********** Begin Class AUnLuaBenchmarkProxy Function Simulate ***********************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics
{
	struct UnLuaBenchmarkProxy_eventSimulate_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventSimulate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "Simulate", Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::UnLuaBenchmarkProxy_eventSimulate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::UnLuaBenchmarkProxy_eventSimulate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execSimulate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Simulate(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function Simulate *************************************

// ********** Begin Class AUnLuaBenchmarkProxy Function UpdateIndices ******************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics
{
	struct UnLuaBenchmarkProxy_eventUpdateIndices_Parms
	{
		TArray<int32> NewIndices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices_Inner = { "NewIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices = { "NewIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdateIndices_Parms, NewIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewIndices_MetaData), NewProp_NewIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::NewProp_NewIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "UpdateIndices", Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::UnLuaBenchmarkProxy_eventUpdateIndices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::UnLuaBenchmarkProxy_eventUpdateIndices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execUpdateIndices)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_NewIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateIndices(Z_Param_Out_NewIndices);
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function UpdateIndices ********************************

// ********** Begin Class AUnLuaBenchmarkProxy Function UpdateMeshID *******************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics
{
	struct UnLuaBenchmarkProxy_eventUpdateMeshID_Parms
	{
		int32 NewID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::NewProp_NewID = { "NewID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdateMeshID_Parms, NewID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdateMeshID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::NewProp_NewID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "UpdateMeshID", Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::UnLuaBenchmarkProxy_eventUpdateMeshID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::UnLuaBenchmarkProxy_eventUpdateMeshID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execUpdateMeshID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->UpdateMeshID(Z_Param_NewID);
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function UpdateMeshID *********************************

// ********** Begin Class AUnLuaBenchmarkProxy Function UpdateMeshName *****************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics
{
	struct UnLuaBenchmarkProxy_eventUpdateMeshName_Parms
	{
		FString NewName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdateMeshName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewName_MetaData), NewProp_NewName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdateMeshName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_NewName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "UpdateMeshName", Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::UnLuaBenchmarkProxy_eventUpdateMeshName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::UnLuaBenchmarkProxy_eventUpdateMeshName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execUpdateMeshName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->UpdateMeshName(Z_Param_NewName);
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function UpdateMeshName *******************************

// ********** Begin Class AUnLuaBenchmarkProxy Function UpdatePositions ****************************
struct Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics
{
	struct UnLuaBenchmarkProxy_eventUpdatePositions_Parms
	{
		TArray<FVector> NewPositions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPositions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewPositions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions_Inner = { "NewPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions = { "NewPositions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaBenchmarkProxy_eventUpdatePositions_Parms, NewPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPositions_MetaData), NewProp_NewPositions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::NewProp_NewPositions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnLuaBenchmarkProxy, nullptr, "UpdatePositions", Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::UnLuaBenchmarkProxy_eventUpdatePositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::UnLuaBenchmarkProxy_eventUpdatePositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnLuaBenchmarkProxy::execUpdatePositions)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_NewPositions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePositions(Z_Param_Out_NewPositions);
	P_NATIVE_END;
}
// ********** End Class AUnLuaBenchmarkProxy Function UpdatePositions ******************************

// ********** Begin Class AUnLuaBenchmarkProxy *****************************************************
void AUnLuaBenchmarkProxy::StaticRegisterNativesAUnLuaBenchmarkProxy()
{
	UClass* Class = AUnLuaBenchmarkProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCOM", &AUnLuaBenchmarkProxy::execGetCOM },
		{ "GetIndices", &AUnLuaBenchmarkProxy::execGetIndices },
		{ "GetMeshID", &AUnLuaBenchmarkProxy::execGetMeshID },
		{ "GetMeshInfo", &AUnLuaBenchmarkProxy::execGetMeshInfo },
		{ "GetMeshName", &AUnLuaBenchmarkProxy::execGetMeshName },
		{ "GetPositions", &AUnLuaBenchmarkProxy::execGetPositions },
		{ "GetPredictedPositions", &AUnLuaBenchmarkProxy::execGetPredictedPositions },
		{ "NOP", &AUnLuaBenchmarkProxy::execNOP },
		{ "Raycast", &AUnLuaBenchmarkProxy::execRaycast },
		{ "Simulate", &AUnLuaBenchmarkProxy::execSimulate },
		{ "UpdateIndices", &AUnLuaBenchmarkProxy::execUpdateIndices },
		{ "UpdateMeshID", &AUnLuaBenchmarkProxy::execUpdateMeshID },
		{ "UpdateMeshName", &AUnLuaBenchmarkProxy::execUpdateMeshName },
		{ "UpdatePositions", &AUnLuaBenchmarkProxy::execUpdatePositions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUnLuaBenchmarkProxy;
UClass* AUnLuaBenchmarkProxy::GetPrivateStaticClass()
{
	using TClass = AUnLuaBenchmarkProxy;
	if (!Z_Registration_Info_UClass_AUnLuaBenchmarkProxy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaBenchmarkProxy"),
			Z_Registration_Info_UClass_AUnLuaBenchmarkProxy.InnerSingleton,
			StaticRegisterNativesAUnLuaBenchmarkProxy,
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
	return Z_Registration_Info_UClass_AUnLuaBenchmarkProxy.InnerSingleton;
}
UClass* Z_Construct_UClass_AUnLuaBenchmarkProxy_NoRegister()
{
	return AUnLuaBenchmarkProxy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Perfs/UnLuaBenchmarkProxy.h" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshID_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_COM_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictedPositions_MetaData[] = {
		{ "Category", "UnLuaBenchmarkProxy" },
		{ "ModuleRelativePath", "Public/Perfs/UnLuaBenchmarkProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_COM;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PredictedPositions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetCOM, "GetCOM" }, // 2857576000
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetIndices, "GetIndices" }, // 3247154425
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshID, "GetMeshID" }, // 1426879388
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshInfo, "GetMeshInfo" }, // 428460439
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetMeshName, "GetMeshName" }, // 1131020643
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPositions, "GetPositions" }, // 1648262300
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_GetPredictedPositions, "GetPredictedPositions" }, // 1063334317
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_NOP, "NOP" }, // 3285772682
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_Raycast, "Raycast" }, // 3983251324
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_Simulate, "Simulate" }, // 1930536464
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateIndices, "UpdateIndices" }, // 2490279169
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshID, "UpdateMeshID" }, // 332169279
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdateMeshName, "UpdateMeshName" }, // 3305226835
		{ &Z_Construct_UFunction_AUnLuaBenchmarkProxy_UpdatePositions, "UpdatePositions" }, // 1356323899
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnLuaBenchmarkProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshID = { "MeshID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, MeshID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshID_MetaData), NewProp_MeshID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_COM = { "COM", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, COM), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_COM_MetaData), NewProp_COM_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions_Inner = { "PredictedPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions = { "PredictedPositions", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnLuaBenchmarkProxy, PredictedPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictedPositions_MetaData), NewProp_PredictedPositions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_COM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::NewProp_PredictedPositions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::ClassParams = {
	&AUnLuaBenchmarkProxy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnLuaBenchmarkProxy()
{
	if (!Z_Registration_Info_UClass_AUnLuaBenchmarkProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnLuaBenchmarkProxy.OuterSingleton, Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnLuaBenchmarkProxy.OuterSingleton;
}
AUnLuaBenchmarkProxy::AUnLuaBenchmarkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnLuaBenchmarkProxy);
AUnLuaBenchmarkProxy::~AUnLuaBenchmarkProxy() {}
// ********** End Class AUnLuaBenchmarkProxy *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnLuaBenchmarkProxy, AUnLuaBenchmarkProxy::StaticClass, TEXT("AUnLuaBenchmarkProxy"), &Z_Registration_Info_UClass_AUnLuaBenchmarkProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnLuaBenchmarkProxy), 560829168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h__Script_UnLuaTestSuite_2846219341(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
