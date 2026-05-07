// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Mode/LGameActorMng.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLGameActorMng() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALActor_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULActorComp();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameActorMng();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameActorMng_NoRegister();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULGameActorMng Function FindActorByGuid **********************************
struct Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics
{
	struct LGameActorMng_eventFindActorByGuid_Parms
	{
		FGuid Guid;
		TSubclassOf<ALActor> Class;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
		{ "CPP_Default_Class", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindActorByGuid_Parms, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindActorByGuid_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindActorByGuid_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "FindActorByGuid", Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::LGameActorMng_eventFindActorByGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::LGameActorMng_eventFindActorByGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_FindActorByGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_FindActorByGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execFindActorByGuid)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_Guid);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->FindActorByGuid(Z_Param_Out_Guid,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function FindActorByGuid ************************************

// ********** Begin Class ULGameActorMng Function FindAllByClass ***********************************
struct Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics
{
	struct LGameActorMng_eventFindAllByClass_Parms
	{
		TSubclassOf<ALActor> ActClass;
		TSubclassOf<ALActor> Class;
		FString FilterParam;
		TArray<ALActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FilterParam" },
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe6\x9f\xa5\xe6\x89\xbe\xe6\x89\x80\xe6\x9c\x89\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterAll\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "CPP_Default_FilterParam", "" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe6\x9f\xa5\xe6\x89\xbe\xe6\x89\x80\xe6\x9c\x89\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterAll\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::NewProp_ActClass = { "ActClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByClass_Parms, ActClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByClass_Parms, FilterParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterParam_MetaData), NewProp_FilterParam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::NewProp_ActClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::NewProp_FilterParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "FindAllByClass", Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::LGameActorMng_eventFindAllByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::LGameActorMng_eventFindAllByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_FindAllByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_FindAllByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execFindAllByClass)
{
	P_GET_OBJECT(UClass,Z_Param_ActClass);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilterParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ALActor*>*)Z_Param__Result=P_THIS->FindAllByClass(Z_Param_ActClass,Z_Param_Class,Z_Param_FilterParam);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function FindAllByClass *************************************

// ********** Begin Class ULGameActorMng Function FindAllByName ************************************
struct Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics
{
	struct LGameActorMng_eventFindAllByName_Parms
	{
		FName ActName;
		TSubclassOf<ALActor> Class;
		FString FilterParam;
		TArray<ALActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FilterParam" },
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x8d\xe5\xad\x97\xe6\x9f\xa5\xe6\x89\xbe\xe6\x89\x80\xe6\x9c\x89\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterAll\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "CPP_Default_FilterParam", "" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x8d\xe5\xad\x97\xe6\x9f\xa5\xe6\x89\xbe\xe6\x89\x80\xe6\x9c\x89\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterAll\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByName_Parms, ActName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByName_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByName_Parms, FilterParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterParam_MetaData), NewProp_FilterParam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::NewProp_ActName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::NewProp_FilterParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "FindAllByName", Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::LGameActorMng_eventFindAllByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::LGameActorMng_eventFindAllByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_FindAllByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_FindAllByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execFindAllByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ActName);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilterParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ALActor*>*)Z_Param__Result=P_THIS->FindAllByName(Z_Param_ActName,Z_Param_Class,Z_Param_FilterParam);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function FindAllByName **************************************

// ********** Begin Class ULGameActorMng Function FindAllByType ************************************
struct Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics
{
	struct LGameActorMng_eventFindAllByType_Parms
	{
		int32 ActType;
		TSubclassOf<ALActor> Class;
		FString FilterParam;
		TArray<ALActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FilterParam" },
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9f\xa5\xe6\x89\xbe\xe6\x89\x80\xe6\x9c\x89\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterAll\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "CPP_Default_FilterParam", "" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9f\xa5\xe6\x89\xbe\xe6\x89\x80\xe6\x9c\x89\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterAll\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::NewProp_ActType = { "ActType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByType_Parms, ActType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByType_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByType_Parms, FilterParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterParam_MetaData), NewProp_FilterParam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindAllByType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::NewProp_ActType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::NewProp_FilterParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "FindAllByType", Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::LGameActorMng_eventFindAllByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::LGameActorMng_eventFindAllByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_FindAllByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_FindAllByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execFindAllByType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ActType);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilterParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ALActor*>*)Z_Param__Result=P_THIS->FindAllByType(Z_Param_ActType,Z_Param_Class,Z_Param_FilterParam);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function FindAllByType **************************************

// ********** Begin Class ULGameActorMng Function FindCharacterByGuid ******************************
struct Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics
{
	struct LGameActorMng_eventFindCharacterByGuid_Parms
	{
		FGuid CharacterGuid;
		ACharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x9a\xe8\xbf\x87GUID\xe6\x9f\xa5\xe6\x89\xbe\xe4\xb8\x80\xe4\xb8\xaa""Character\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87GUID\xe6\x9f\xa5\xe6\x89\xbe\xe4\xb8\x80\xe4\xb8\xaa""Character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterGuid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::NewProp_CharacterGuid = { "CharacterGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindCharacterByGuid_Parms, CharacterGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterGuid_MetaData), NewProp_CharacterGuid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindCharacterByGuid_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::NewProp_CharacterGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "FindCharacterByGuid", Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::LGameActorMng_eventFindCharacterByGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::LGameActorMng_eventFindCharacterByGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execFindCharacterByGuid)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_CharacterGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACharacter**)Z_Param__Result=P_THIS->FindCharacterByGuid(Z_Param_Out_CharacterGuid);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function FindCharacterByGuid ********************************

// ********** Begin Class ULGameActorMng Function FindNearByClass **********************************
struct Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics
{
	struct LGameActorMng_eventFindNearByClass_Parms
	{
		TSubclassOf<ALActor> ActClass;
		FVector Pos;
		TSubclassOf<ALActor> Class;
		ALActor* IgnoreActor;
		FString FilterParam;
		ALActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "IgnoreActor,FilterParam" },
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe6\x9f\xa5\xe6\x89\xbe\xe6\x9c\x80\xe8\xbf\x91\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterNear\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "CPP_Default_FilterParam", "" },
		{ "CPP_Default_IgnoreActor", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe6\x9f\xa5\xe6\x89\xbe\xe6\x9c\x80\xe8\xbf\x91\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterNear\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoreActor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_ActClass = { "ActClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByClass_Parms, ActClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByClass_Parms, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_IgnoreActor = { "IgnoreActor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByClass_Parms, IgnoreActor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByClass_Parms, FilterParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterParam_MetaData), NewProp_FilterParam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByClass_Parms, ReturnValue), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_ActClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_IgnoreActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_FilterParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "FindNearByClass", Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::LGameActorMng_eventFindNearByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::LGameActorMng_eventFindNearByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_FindNearByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_FindNearByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execFindNearByClass)
{
	P_GET_OBJECT(UClass,Z_Param_ActClass);
	P_GET_STRUCT(FVector,Z_Param_Pos);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_OBJECT(ALActor,Z_Param_IgnoreActor);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilterParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALActor**)Z_Param__Result=P_THIS->FindNearByClass(Z_Param_ActClass,Z_Param_Pos,Z_Param_Class,Z_Param_IgnoreActor,Z_Param_FilterParam);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function FindNearByClass ************************************

// ********** Begin Class ULGameActorMng Function FindNearByName ***********************************
struct Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics
{
	struct LGameActorMng_eventFindNearByName_Parms
	{
		FName ActName;
		FVector Pos;
		TSubclassOf<ALActor> Class;
		ALActor* IgnoreActor;
		FString FilterParam;
		ALActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "IgnoreActor,FilterParam" },
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x8d\xe5\xad\x97\xe6\x9f\xa5\xe6\x89\xbe\xe6\x9c\x80\xe8\xbf\x91\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterNear\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "CPP_Default_FilterParam", "" },
		{ "CPP_Default_IgnoreActor", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x8d\xe5\xad\x97\xe6\x9f\xa5\xe6\x89\xbe\xe6\x9c\x80\xe8\xbf\x91\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterNear\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoreActor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByName_Parms, ActName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByName_Parms, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByName_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_IgnoreActor = { "IgnoreActor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByName_Parms, IgnoreActor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByName_Parms, FilterParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterParam_MetaData), NewProp_FilterParam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByName_Parms, ReturnValue), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_ActName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_IgnoreActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_FilterParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "FindNearByName", Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::LGameActorMng_eventFindNearByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::LGameActorMng_eventFindNearByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_FindNearByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_FindNearByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execFindNearByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ActName);
	P_GET_STRUCT(FVector,Z_Param_Pos);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_OBJECT(ALActor,Z_Param_IgnoreActor);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilterParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALActor**)Z_Param__Result=P_THIS->FindNearByName(Z_Param_ActName,Z_Param_Pos,Z_Param_Class,Z_Param_IgnoreActor,Z_Param_FilterParam);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function FindNearByName *************************************

// ********** Begin Class ULGameActorMng Function FindNearByType ***********************************
struct Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics
{
	struct LGameActorMng_eventFindNearByType_Parms
	{
		int32 ActType;
		FVector Pos;
		TSubclassOf<ALActor> Class;
		ALActor* IgnoreActor;
		FString FilterParam;
		ALActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "IgnoreActor,FilterParam" },
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9f\xa5\xe6\x89\xbe\xe6\x9c\x80\xe8\xbf\x91\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterNear\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "CPP_Default_FilterParam", "" },
		{ "CPP_Default_IgnoreActor", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9f\xa5\xe6\x89\xbe\xe6\x9c\x80\xe8\xbf\x91\xe7\x9b\xae\xe6\xa0\x87(\xe5\x8f\xaf\xe5\xae\x9e\xe7\x8e\xb0IsFilterNear\xe6\x9d\xa5\xe7\xad\x9b\xe9\x80\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoreActor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_ActType = { "ActType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByType_Parms, ActType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByType_Parms, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByType_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_IgnoreActor = { "IgnoreActor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByType_Parms, IgnoreActor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByType_Parms, FilterParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterParam_MetaData), NewProp_FilterParam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventFindNearByType_Parms, ReturnValue), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_ActType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_IgnoreActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_FilterParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "FindNearByType", Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::LGameActorMng_eventFindNearByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::LGameActorMng_eventFindNearByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_FindNearByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_FindNearByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execFindNearByType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ActType);
	P_GET_STRUCT(FVector,Z_Param_Pos);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_OBJECT(ALActor,Z_Param_IgnoreActor);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilterParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALActor**)Z_Param__Result=P_THIS->FindNearByType(Z_Param_ActType,Z_Param_Pos,Z_Param_Class,Z_Param_IgnoreActor,Z_Param_FilterParam);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function FindNearByType *************************************

// ********** Begin Class ULGameActorMng Function GetAllRoles **************************************
struct Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics
{
	struct LGameActorMng_eventGetAllRoles_Parms
	{
		TSubclassOf<AActor> Class;
		FString FilterParam;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FilterParam" },
		{ "Category", "GameActorMng" },
		{ "CPP_Default_Class", "None" },
		{ "CPP_Default_FilterParam", "" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventGetAllRoles_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventGetAllRoles_Parms, FilterParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterParam_MetaData), NewProp_FilterParam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventGetAllRoles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::NewProp_FilterParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "GetAllRoles", Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::LGameActorMng_eventGetAllRoles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::LGameActorMng_eventGetAllRoles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_GetAllRoles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_GetAllRoles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execGetAllRoles)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilterParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAllRoles(Z_Param_Class,Z_Param_FilterParam);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function GetAllRoles ****************************************

// ********** Begin Class ULGameActorMng Function IsFilterAll **************************************
struct LGameActorMng_eventIsFilterAll_Parms
{
	ALActor* Actor;
	FString FilterParam;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	LGameActorMng_eventIsFilterAll_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_ULGameActorMng_IsFilterAll = FName(TEXT("IsFilterAll"));
bool ULGameActorMng::IsFilterAll(ALActor* Actor, const FString& FilterParam)
{
	UFunction* Func = FindFunctionChecked(NAME_ULGameActorMng_IsFilterAll);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LGameActorMng_eventIsFilterAll_Parms Parms;
		Parms.Actor=Actor;
		Parms.FilterParam=FilterParam;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return IsFilterAll_Implementation(Actor, FilterParam);
	}
}
struct Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x87\xe6\xbb\xa4\xe6\x89\x80\xe6\x9c\x89\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x87\xe6\xbb\xa4\xe6\x89\x80\xe6\x9c\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterParam;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventIsFilterAll_Parms, Actor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventIsFilterAll_Parms, FilterParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterParam_MetaData), NewProp_FilterParam_MetaData) };
void Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LGameActorMng_eventIsFilterAll_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameActorMng_eventIsFilterAll_Parms), &Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::NewProp_FilterParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "IsFilterAll", Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::PropPointers), sizeof(LGameActorMng_eventIsFilterAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LGameActorMng_eventIsFilterAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_IsFilterAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_IsFilterAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execIsFilterAll)
{
	P_GET_OBJECT(ALActor,Z_Param_Actor);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilterParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFilterAll_Implementation(Z_Param_Actor,Z_Param_FilterParam);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function IsFilterAll ****************************************

// ********** Begin Class ULGameActorMng Function IsFilterNear *************************************
struct LGameActorMng_eventIsFilterNear_Parms
{
	FVector Pos;
	ALActor* Actor;
	FString FilterParam;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	LGameActorMng_eventIsFilterNear_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_ULGameActorMng_IsFilterNear = FName(TEXT("IsFilterNear"));
bool ULGameActorMng::IsFilterNear(FVector const& Pos, ALActor* Actor, const FString& FilterParam)
{
	UFunction* Func = FindFunctionChecked(NAME_ULGameActorMng_IsFilterNear);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LGameActorMng_eventIsFilterNear_Parms Parms;
		Parms.Pos=Pos;
		Parms.Actor=Actor;
		Parms.FilterParam=FilterParam;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return IsFilterNear_Implementation(Pos, Actor, FilterParam);
	}
}
struct Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x87\xe6\xbb\xa4\xe5\x8d\x95\xe4\xb8\xaa\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x87\xe6\xbb\xa4\xe5\x8d\x95\xe4\xb8\xaa" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterParam;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventIsFilterNear_Parms, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos_MetaData), NewProp_Pos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventIsFilterNear_Parms, Actor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventIsFilterNear_Parms, FilterParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterParam_MetaData), NewProp_FilterParam_MetaData) };
void Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LGameActorMng_eventIsFilterNear_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameActorMng_eventIsFilterNear_Parms), &Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::NewProp_FilterParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "IsFilterNear", Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::PropPointers), sizeof(LGameActorMng_eventIsFilterNear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LGameActorMng_eventIsFilterNear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_IsFilterNear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_IsFilterNear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execIsFilterNear)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Pos);
	P_GET_OBJECT(ALActor,Z_Param_Actor);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilterParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFilterNear_Implementation(Z_Param_Out_Pos,Z_Param_Actor,Z_Param_FilterParam);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function IsFilterNear ***************************************

// ********** Begin Class ULGameActorMng Function RegistByClass ************************************
struct Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics
{
	struct LGameActorMng_eventRegistByClass_Parms
	{
		ALActor* Actor;
		TSubclassOf<ALActor> Class;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xb1\xbb\xe6\xb3\xa8\xe5\x86\x8c\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb1\xbb\xe6\xb3\xa8\xe5\x86\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventRegistByClass_Parms, Actor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventRegistByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::NewProp_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "RegistByClass", Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::LGameActorMng_eventRegistByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::LGameActorMng_eventRegistByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_RegistByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_RegistByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execRegistByClass)
{
	P_GET_OBJECT(ALActor,Z_Param_Actor);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegistByClass(Z_Param_Actor,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function RegistByClass **************************************

// ********** Begin Class ULGameActorMng Function RegistByName *************************************
struct Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics
{
	struct LGameActorMng_eventRegistByName_Parms
	{
		ALActor* Actor;
		FName ActName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x90\x8d\xe5\xad\x97\xe6\xb3\xa8\xe5\x86\x8c\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x8d\xe5\xad\x97\xe6\xb3\xa8\xe5\x86\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventRegistByName_Parms, Actor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventRegistByName_Parms, ActName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::NewProp_ActName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "RegistByName", Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::LGameActorMng_eventRegistByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::LGameActorMng_eventRegistByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_RegistByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_RegistByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execRegistByName)
{
	P_GET_OBJECT(ALActor,Z_Param_Actor);
	P_GET_PROPERTY(FNameProperty,Z_Param_ActName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegistByName(Z_Param_Actor,Z_Param_ActName);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function RegistByName ***************************************

// ********** Begin Class ULGameActorMng Function RegistByType *************************************
struct Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics
{
	struct LGameActorMng_eventRegistByType_Parms
	{
		ALActor* Actor;
		int32 ActType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xb1\xbb\xe5\x9e\x8b\xe6\xb3\xa8\xe5\x86\x8c\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x9e\x8b\xe6\xb3\xa8\xe5\x86\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventRegistByType_Parms, Actor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::NewProp_ActType = { "ActType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventRegistByType_Parms, ActType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::NewProp_ActType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "RegistByType", Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::LGameActorMng_eventRegistByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::LGameActorMng_eventRegistByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_RegistByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_RegistByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execRegistByType)
{
	P_GET_OBJECT(ALActor,Z_Param_Actor);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegistByType(Z_Param_Actor,Z_Param_ActType);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function RegistByType ***************************************

// ********** Begin Class ULGameActorMng Function RegisterByGuid ***********************************
struct Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics
{
	struct LGameActorMng_eventRegisterByGuid_Parms
	{
		AActor* Actor;
		FGuid ActorGuid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe6\xb3\xa8\xe5\x86\x8c\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe6\xb3\xa8\xe5\x86\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventRegisterByGuid_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::NewProp_ActorGuid = { "ActorGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventRegisterByGuid_Parms, ActorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorGuid_MetaData), NewProp_ActorGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::NewProp_ActorGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "RegisterByGuid", Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::LGameActorMng_eventRegisterByGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::LGameActorMng_eventRegisterByGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_RegisterByGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_RegisterByGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execRegisterByGuid)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ActorGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterByGuid(Z_Param_Actor,Z_Param_Out_ActorGuid);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function RegisterByGuid *************************************

// ********** Begin Class ULGameActorMng Function UnRegistByClass **********************************
struct Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics
{
	struct LGameActorMng_eventUnRegistByClass_Parms
	{
		ALActor* Actor;
		TSubclassOf<ALActor> Class;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x96\xe6\xb6\x88\xe7\xb1\xbb\xe6\xb3\xa8\xe5\x86\x8c\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x96\xe6\xb6\x88\xe7\xb1\xbb\xe6\xb3\xa8\xe5\x86\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventUnRegistByClass_Parms, Actor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventUnRegistByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::NewProp_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "UnRegistByClass", Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::LGameActorMng_eventUnRegistByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::LGameActorMng_eventUnRegistByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_UnRegistByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_UnRegistByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execUnRegistByClass)
{
	P_GET_OBJECT(ALActor,Z_Param_Actor);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnRegistByClass(Z_Param_Actor,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function UnRegistByClass ************************************

// ********** Begin Class ULGameActorMng Function UnRegistByName ***********************************
struct Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics
{
	struct LGameActorMng_eventUnRegistByName_Parms
	{
		ALActor* Actor;
		FName ActName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x96\xe6\xb6\x88\xe5\x90\x8d\xe5\xad\x97\xe6\xb3\xa8\xe5\x86\x8c\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x96\xe6\xb6\x88\xe5\x90\x8d\xe5\xad\x97\xe6\xb3\xa8\xe5\x86\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventUnRegistByName_Parms, Actor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventUnRegistByName_Parms, ActName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::NewProp_ActName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "UnRegistByName", Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::LGameActorMng_eventUnRegistByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::LGameActorMng_eventUnRegistByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_UnRegistByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_UnRegistByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execUnRegistByName)
{
	P_GET_OBJECT(ALActor,Z_Param_Actor);
	P_GET_PROPERTY(FNameProperty,Z_Param_ActName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnRegistByName(Z_Param_Actor,Z_Param_ActName);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function UnRegistByName *************************************

// ********** Begin Class ULGameActorMng Function UnRegistByType ***********************************
struct Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics
{
	struct LGameActorMng_eventUnRegistByType_Parms
	{
		ALActor* Actor;
		int32 ActType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x96\xe6\xb6\x88\xe7\xb1\xbb\xe5\x9e\x8b\xe6\xb3\xa8\xe5\x86\x8c\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x96\xe6\xb6\x88\xe7\xb1\xbb\xe5\x9e\x8b\xe6\xb3\xa8\xe5\x86\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventUnRegistByType_Parms, Actor), Z_Construct_UClass_ALActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::NewProp_ActType = { "ActType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventUnRegistByType_Parms, ActType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::NewProp_ActType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "UnRegistByType", Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::LGameActorMng_eventUnRegistByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::LGameActorMng_eventUnRegistByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_UnRegistByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_UnRegistByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execUnRegistByType)
{
	P_GET_OBJECT(ALActor,Z_Param_Actor);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnRegistByType(Z_Param_Actor,Z_Param_ActType);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function UnRegistByType *************************************

// ********** Begin Class ULGameActorMng Function UnRegisterByGuid *********************************
struct Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics
{
	struct LGameActorMng_eventUnRegisterByGuid_Parms
	{
		FGuid ActorGuid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameActorMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x96\xe6\xb6\x88\xe8\xa7\x92\xe8\x89\xb2\xe6\xb3\xa8\xe5\x86\x8c\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x96\xe6\xb6\x88\xe8\xa7\x92\xe8\x89\xb2\xe6\xb3\xa8\xe5\x86\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::NewProp_ActorGuid = { "ActorGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameActorMng_eventUnRegisterByGuid_Parms, ActorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::NewProp_ActorGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameActorMng, nullptr, "UnRegisterByGuid", Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::LGameActorMng_eventUnRegisterByGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::LGameActorMng_eventUnRegisterByGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameActorMng::execUnRegisterByGuid)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ActorGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnRegisterByGuid(Z_Param_Out_ActorGuid);
	P_NATIVE_END;
}
// ********** End Class ULGameActorMng Function UnRegisterByGuid ***********************************

// ********** Begin Class ULGameActorMng ***********************************************************
void ULGameActorMng::StaticRegisterNativesULGameActorMng()
{
	UClass* Class = ULGameActorMng::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindActorByGuid", &ULGameActorMng::execFindActorByGuid },
		{ "FindAllByClass", &ULGameActorMng::execFindAllByClass },
		{ "FindAllByName", &ULGameActorMng::execFindAllByName },
		{ "FindAllByType", &ULGameActorMng::execFindAllByType },
		{ "FindCharacterByGuid", &ULGameActorMng::execFindCharacterByGuid },
		{ "FindNearByClass", &ULGameActorMng::execFindNearByClass },
		{ "FindNearByName", &ULGameActorMng::execFindNearByName },
		{ "FindNearByType", &ULGameActorMng::execFindNearByType },
		{ "GetAllRoles", &ULGameActorMng::execGetAllRoles },
		{ "IsFilterAll", &ULGameActorMng::execIsFilterAll },
		{ "IsFilterNear", &ULGameActorMng::execIsFilterNear },
		{ "RegistByClass", &ULGameActorMng::execRegistByClass },
		{ "RegistByName", &ULGameActorMng::execRegistByName },
		{ "RegistByType", &ULGameActorMng::execRegistByType },
		{ "RegisterByGuid", &ULGameActorMng::execRegisterByGuid },
		{ "UnRegistByClass", &ULGameActorMng::execUnRegistByClass },
		{ "UnRegistByName", &ULGameActorMng::execUnRegistByName },
		{ "UnRegistByType", &ULGameActorMng::execUnRegistByType },
		{ "UnRegisterByGuid", &ULGameActorMng::execUnRegisterByGuid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULGameActorMng;
UClass* ULGameActorMng::GetPrivateStaticClass()
{
	using TClass = ULGameActorMng;
	if (!Z_Registration_Info_UClass_ULGameActorMng.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LGameActorMng"),
			Z_Registration_Info_UClass_ULGameActorMng.InnerSingleton,
			StaticRegisterNativesULGameActorMng,
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
	return Z_Registration_Info_UClass_ULGameActorMng.InnerSingleton;
}
UClass* Z_Construct_UClass_ULGameActorMng_NoRegister()
{
	return ULGameActorMng::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULGameActorMng_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Mode/LGameActorMng.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Mode/LGameActorMng.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULGameActorMng_FindActorByGuid, "FindActorByGuid" }, // 1745114523
		{ &Z_Construct_UFunction_ULGameActorMng_FindAllByClass, "FindAllByClass" }, // 3775310801
		{ &Z_Construct_UFunction_ULGameActorMng_FindAllByName, "FindAllByName" }, // 4160533231
		{ &Z_Construct_UFunction_ULGameActorMng_FindAllByType, "FindAllByType" }, // 3535557547
		{ &Z_Construct_UFunction_ULGameActorMng_FindCharacterByGuid, "FindCharacterByGuid" }, // 3492017108
		{ &Z_Construct_UFunction_ULGameActorMng_FindNearByClass, "FindNearByClass" }, // 1777407902
		{ &Z_Construct_UFunction_ULGameActorMng_FindNearByName, "FindNearByName" }, // 3170506399
		{ &Z_Construct_UFunction_ULGameActorMng_FindNearByType, "FindNearByType" }, // 561603068
		{ &Z_Construct_UFunction_ULGameActorMng_GetAllRoles, "GetAllRoles" }, // 478406794
		{ &Z_Construct_UFunction_ULGameActorMng_IsFilterAll, "IsFilterAll" }, // 1036257301
		{ &Z_Construct_UFunction_ULGameActorMng_IsFilterNear, "IsFilterNear" }, // 2301451007
		{ &Z_Construct_UFunction_ULGameActorMng_RegistByClass, "RegistByClass" }, // 905396475
		{ &Z_Construct_UFunction_ULGameActorMng_RegistByName, "RegistByName" }, // 54752068
		{ &Z_Construct_UFunction_ULGameActorMng_RegistByType, "RegistByType" }, // 4245465868
		{ &Z_Construct_UFunction_ULGameActorMng_RegisterByGuid, "RegisterByGuid" }, // 1720770213
		{ &Z_Construct_UFunction_ULGameActorMng_UnRegistByClass, "UnRegistByClass" }, // 3564279001
		{ &Z_Construct_UFunction_ULGameActorMng_UnRegistByName, "UnRegistByName" }, // 3150811695
		{ &Z_Construct_UFunction_ULGameActorMng_UnRegistByType, "UnRegistByType" }, // 60099885
		{ &Z_Construct_UFunction_ULGameActorMng_UnRegisterByGuid, "UnRegisterByGuid" }, // 3673102489
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGameActorMng>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULGameActorMng_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULActorComp,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULGameActorMng_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULGameActorMng_Statics::ClassParams = {
	&ULGameActorMng::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULGameActorMng_Statics::Class_MetaDataParams), Z_Construct_UClass_ULGameActorMng_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULGameActorMng()
{
	if (!Z_Registration_Info_UClass_ULGameActorMng.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULGameActorMng.OuterSingleton, Z_Construct_UClass_ULGameActorMng_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULGameActorMng.OuterSingleton;
}
ULGameActorMng::ULGameActorMng(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULGameActorMng);
ULGameActorMng::~ULGameActorMng() {}
// ********** End Class ULGameActorMng *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULGameActorMng, ULGameActorMng::StaticClass, TEXT("ULGameActorMng"), &Z_Registration_Info_UClass_ULGameActorMng, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULGameActorMng), 1111198920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h__Script_LQuickFrame_3503443543(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameActorMng_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
