// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Misc/LQuickTools.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLQuickTools() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ESearchCase();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ESearchDir();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALGameMode_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALPlayerCtrl_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameInst_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULQuickTools();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULQuickTools_NoRegister();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULQuickTools Function CustomSplit ****************************************
struct Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics
{
	struct LQuickTools_eventCustomSplit_Parms
	{
		FString SourceString;
		FString InStr;
		FString LeftS;
		FString RightS;
		bool bLogError;
		TEnumAsByte<ESearchCase::Type> SearchCase;
		TEnumAsByte<ESearchDir::Type> SearchDir;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe8\xa3\x81\xe5\x89\xaa\n" },
#endif
		{ "CPP_Default_bLogError", "true" },
		{ "CPP_Default_SearchCase", "IgnoreCase" },
		{ "CPP_Default_SearchDir", "FromStart" },
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe8\xa3\x81\xe5\x89\xaa" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InStr;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeftS;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RightS;
	static void NewProp_bLogError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogError;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SearchCase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SearchDir;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_SourceString = { "SourceString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventCustomSplit_Parms, SourceString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceString_MetaData), NewProp_SourceString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_InStr = { "InStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventCustomSplit_Parms, InStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStr_MetaData), NewProp_InStr_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_LeftS = { "LeftS", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventCustomSplit_Parms, LeftS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_RightS = { "RightS", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventCustomSplit_Parms, RightS), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_bLogError_SetBit(void* Obj)
{
	((LQuickTools_eventCustomSplit_Parms*)Obj)->bLogError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_bLogError = { "bLogError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LQuickTools_eventCustomSplit_Parms), &Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_bLogError_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_SearchCase = { "SearchCase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventCustomSplit_Parms, SearchCase), Z_Construct_UEnum_CoreUObject_ESearchCase, METADATA_PARAMS(0, nullptr) }; // 1208795360
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_SearchDir = { "SearchDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventCustomSplit_Parms, SearchDir), Z_Construct_UEnum_CoreUObject_ESearchDir, METADATA_PARAMS(0, nullptr) }; // 1370445451
void Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LQuickTools_eventCustomSplit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LQuickTools_eventCustomSplit_Parms), &Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_SourceString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_InStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_LeftS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_RightS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_bLogError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_SearchCase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_SearchDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "CustomSplit", Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::LQuickTools_eventCustomSplit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::LQuickTools_eventCustomSplit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_CustomSplit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_CustomSplit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execCustomSplit)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceString);
	P_GET_PROPERTY(FStrProperty,Z_Param_InStr);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_LeftS);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_RightS);
	P_GET_UBOOL(Z_Param_bLogError);
	P_GET_PROPERTY(FByteProperty,Z_Param_SearchCase);
	P_GET_PROPERTY(FByteProperty,Z_Param_SearchDir);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULQuickTools::CustomSplit(Z_Param_SourceString,Z_Param_InStr,Z_Param_Out_LeftS,Z_Param_Out_RightS,Z_Param_bLogError,ESearchCase::Type(Z_Param_SearchCase),ESearchDir::Type(Z_Param_SearchDir));
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function CustomSplit ******************************************

// ********** Begin Class ULQuickTools Function GetActorComp ***************************************
struct Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics
{
	struct LQuickTools_eventGetActorComp_Parms
	{
		AActor* Actor;
		TSubclassOf<UActorComponent> Class;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96""Actor\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96""Actor\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetActorComp_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetActorComp_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetActorComp_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "GetActorComp", Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::LQuickTools_eventGetActorComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::LQuickTools_eventGetActorComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_GetActorComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_GetActorComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execGetActorComp)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=ULQuickTools::GetActorComp(Z_Param_Actor,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function GetActorComp *****************************************

// ********** Begin Class ULQuickTools Function GetGameInst ****************************************
struct Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics
{
	struct LQuickTools_eventGetGameInst_Parms
	{
		const UObject* Context;
		TSubclassOf<ULGameInst> Class;
		ULGameInst* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96GameInstance\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "DisplayName", "GameInst" },
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96GameInstance" },
#endif
		{ "WorldContext", "Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetGameInst_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetGameInst_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ULGameInst_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetGameInst_Parms, ReturnValue), Z_Construct_UClass_ULGameInst_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "GetGameInst", Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::LQuickTools_eventGetGameInst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::LQuickTools_eventGetGameInst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_GetGameInst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_GetGameInst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execGetGameInst)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULGameInst**)Z_Param__Result=ULQuickTools::GetGameInst(Z_Param_Context,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function GetGameInst ******************************************

// ********** Begin Class ULQuickTools Function GetGameMode ****************************************
struct Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics
{
	struct LQuickTools_eventGetGameMode_Parms
	{
		const UObject* Context;
		TSubclassOf<ALGameMode> Class;
		ALGameMode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96GameMode\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "DisplayName", "GameMode" },
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96GameMode" },
#endif
		{ "WorldContext", "Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetGameMode_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetGameMode_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALGameMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetGameMode_Parms, ReturnValue), Z_Construct_UClass_ALGameMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "GetGameMode", Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::LQuickTools_eventGetGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::LQuickTools_eventGetGameMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_GetGameMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_GetGameMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execGetGameMode)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALGameMode**)Z_Param__Result=ULQuickTools::GetGameMode(Z_Param_Context,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function GetGameMode ******************************************

// ********** Begin Class ULQuickTools Function GetLevelObject *************************************
struct Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics
{
	struct LQuickTools_eventGetLevelObject_Parms
	{
		UObject* Context;
		TSoftObjectPtr<UWorld> Level;
		ULevel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe5\x85\xb3\xe5\x8d\xa1\xe5\xae\x9e\xe4\xbe\x8b\n" },
#endif
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe5\x85\xb3\xe5\x8d\xa1\xe5\xae\x9e\xe4\xbe\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelObject_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelObject_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelObject_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "GetLevelObject", Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::LQuickTools_eventGetLevelObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::LQuickTools_eventGetLevelObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_GetLevelObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_GetLevelObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execGetLevelObject)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UWorld>,Z_Param_Out_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevel**)Z_Param__Result=ULQuickTools::GetLevelObject(Z_Param_Context,Z_Param_Out_Level);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function GetLevelObject ***************************************

// ********** Begin Class ULQuickTools Function GetLevelObjectByName *******************************
struct Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics
{
	struct LQuickTools_eventGetLevelObjectByName_Parms
	{
		UObject* Context;
		FName LevelName;
		ULevel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9a\xe5\x90\x8d\xe5\xad\x97\xe7\x9a\x84\xe5\x85\xb3\xe5\x8d\xa1\xe5\xaf\xb9\xe8\xb1\xa1\n" },
#endif
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9a\xe5\x90\x8d\xe5\xad\x97\xe7\x9a\x84\xe5\x85\xb3\xe5\x8d\xa1\xe5\xaf\xb9\xe8\xb1\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelObjectByName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelObjectByName_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelObjectByName_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "GetLevelObjectByName", Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::LQuickTools_eventGetLevelObjectByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::LQuickTools_eventGetLevelObjectByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execGetLevelObjectByName)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevel**)Z_Param__Result=ULQuickTools::GetLevelObjectByName(Z_Param_Context,Z_Param_LevelName);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function GetLevelObjectByName *********************************

// ********** Begin Class ULQuickTools Function GetLevelStreamingObject ****************************
struct Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics
{
	struct LQuickTools_eventGetLevelStreamingObject_Parms
	{
		UObject* Context;
		TSoftObjectPtr<UWorld> Level;
		ULevelStreaming* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe6\xb5\x81\xe5\x85\xb3\xe5\x8d\xa1\xe5\xae\x9e\xe4\xbe\x8b\n" },
#endif
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe6\xb5\x81\xe5\x85\xb3\xe5\x8d\xa1\xe5\xae\x9e\xe4\xbe\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelStreamingObject_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelStreamingObject_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelStreamingObject_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "GetLevelStreamingObject", Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::LQuickTools_eventGetLevelStreamingObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::LQuickTools_eventGetLevelStreamingObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execGetLevelStreamingObject)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UWorld>,Z_Param_Out_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevelStreaming**)Z_Param__Result=ULQuickTools::GetLevelStreamingObject(Z_Param_Context,Z_Param_Out_Level);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function GetLevelStreamingObject ******************************

// ********** Begin Class ULQuickTools Function GetLevelStreamingObjectByName **********************
struct Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics
{
	struct LQuickTools_eventGetLevelStreamingObjectByName_Parms
	{
		UObject* Context;
		FName LevelName;
		ULevelStreaming* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9a\xe5\x90\x8d\xe5\xad\x97\xe7\x9a\x84\xe6\xb5\x81\xe5\x85\xb3\xe5\x8d\xa1\xe5\xaf\xb9\xe8\xb1\xa1\n" },
#endif
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9a\xe5\x90\x8d\xe5\xad\x97\xe7\x9a\x84\xe6\xb5\x81\xe5\x85\xb3\xe5\x8d\xa1\xe5\xaf\xb9\xe8\xb1\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelStreamingObjectByName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelStreamingObjectByName_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetLevelStreamingObjectByName_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "GetLevelStreamingObjectByName", Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::LQuickTools_eventGetLevelStreamingObjectByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::LQuickTools_eventGetLevelStreamingObjectByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execGetLevelStreamingObjectByName)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevelStreaming**)Z_Param__Result=ULQuickTools::GetLevelStreamingObjectByName(Z_Param_Context,Z_Param_LevelName);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function GetLevelStreamingObjectByName ************************

// ********** Begin Class ULQuickTools Function GetPlayerCtrl **************************************
struct Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics
{
	struct LQuickTools_eventGetPlayerCtrl_Parms
	{
		const UObject* Context;
		TSubclassOf<ALPlayerCtrl> Class;
		ALPlayerCtrl* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96PlayerCtrl\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "DisplayName", "PlayerCtrl" },
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96PlayerCtrl" },
#endif
		{ "WorldContext", "Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetPlayerCtrl_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetPlayerCtrl_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ALPlayerCtrl_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetPlayerCtrl_Parms, ReturnValue), Z_Construct_UClass_ALPlayerCtrl_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "GetPlayerCtrl", Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::LQuickTools_eventGetPlayerCtrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::LQuickTools_eventGetPlayerCtrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execGetPlayerCtrl)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALPlayerCtrl**)Z_Param__Result=ULQuickTools::GetPlayerCtrl(Z_Param_Context,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function GetPlayerCtrl ****************************************

// ********** Begin Class ULQuickTools Function GetPlayerHUD ***************************************
struct Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics
{
	struct LQuickTools_eventGetPlayerHUD_Parms
	{
		const UObject* Context;
		TSubclassOf<AHUD> Class;
		AHUD* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96HUD\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "DisplayName", "PlayerHUD" },
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96HUD" },
#endif
		{ "WorldContext", "Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetPlayerHUD_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetPlayerHUD_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AHUD_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetPlayerHUD_Parms, ReturnValue), Z_Construct_UClass_AHUD_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "GetPlayerHUD", Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::LQuickTools_eventGetPlayerHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::LQuickTools_eventGetPlayerHUD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_GetPlayerHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_GetPlayerHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execGetPlayerHUD)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHUD**)Z_Param__Result=ULQuickTools::GetPlayerHUD(Z_Param_Context,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function GetPlayerHUD *****************************************

// ********** Begin Class ULQuickTools Function GetPlayerPawn **************************************
struct Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics
{
	struct LQuickTools_eventGetPlayerPawn_Parms
	{
		const UObject* Context;
		TSubclassOf<APawn> Class;
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8e\xa7\xe5\x88\xb6pawn\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "DisplayName", "PlayerPawn" },
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8e\xa7\xe5\x88\xb6pawn" },
#endif
		{ "WorldContext", "Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetPlayerPawn_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetPlayerPawn_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventGetPlayerPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "GetPlayerPawn", Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::LQuickTools_eventGetPlayerPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::LQuickTools_eventGetPlayerPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_GetPlayerPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_GetPlayerPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execGetPlayerPawn)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=ULQuickTools::GetPlayerPawn(Z_Param_Context,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function GetPlayerPawn ****************************************

// ********** Begin Class ULQuickTools Function ScreenTraceChannel *********************************
struct Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics
{
	struct LQuickTools_eventScreenTraceChannel_Parms
	{
		const UObject* Context;
		FVector2D Pos;
		TEnumAsByte<ETraceTypeQuery> Channel;
		bool bComplex;
		TArray<AActor*> ActorsToIgnore;
		FHitResult Result;
		bool bIgnoreSelf;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b(\xe9\x80\x9a\xe9\x81\x93)\n" },
#endif
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b(\xe9\x80\x9a\xe9\x81\x93)" },
#endif
		{ "WorldContext", "Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static void NewProp_bComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventScreenTraceChannel_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventScreenTraceChannel_Parms, Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos_MetaData), NewProp_Pos_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventScreenTraceChannel_Parms, Channel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
void Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_bComplex_SetBit(void* Obj)
{
	((LQuickTools_eventScreenTraceChannel_Parms*)Obj)->bComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_bComplex = { "bComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LQuickTools_eventScreenTraceChannel_Parms), &Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_bComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventScreenTraceChannel_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventScreenTraceChannel_Parms, Result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
void Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((LQuickTools_eventScreenTraceChannel_Parms*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LQuickTools_eventScreenTraceChannel_Parms), &Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LQuickTools_eventScreenTraceChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LQuickTools_eventScreenTraceChannel_Parms), &Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_bComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "ScreenTraceChannel", Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::LQuickTools_eventScreenTraceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::LQuickTools_eventScreenTraceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execScreenTraceChannel)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Pos);
	P_GET_PROPERTY(FByteProperty,Z_Param_Channel);
	P_GET_UBOOL(Z_Param_bComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Result);
	P_GET_UBOOL(Z_Param_bIgnoreSelf);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULQuickTools::ScreenTraceChannel(Z_Param_Context,Z_Param_Out_Pos,ETraceTypeQuery(Z_Param_Channel),Z_Param_bComplex,Z_Param_Out_ActorsToIgnore,Z_Param_Out_Result,Z_Param_bIgnoreSelf);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function ScreenTraceChannel ***********************************

// ********** Begin Class ULQuickTools Function ScreenTraceObjects *********************************
struct Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics
{
	struct LQuickTools_eventScreenTraceObjects_Parms
	{
		const UObject* Context;
		FVector2D Pos;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool bComplex;
		TArray<AActor*> ActorsToIgnore;
		FHitResult Result;
		bool bIgnoreSelf;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b(\xe5\xaf\xb9\xe8\xb1\xa1)\n" },
#endif
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b(\xe5\xaf\xb9\xe8\xb1\xa1)" },
#endif
		{ "WorldContext", "Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
	static void NewProp_bComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventScreenTraceObjects_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventScreenTraceObjects_Parms, Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos_MetaData), NewProp_Pos_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventScreenTraceObjects_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
void Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_bComplex_SetBit(void* Obj)
{
	((LQuickTools_eventScreenTraceObjects_Parms*)Obj)->bComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_bComplex = { "bComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LQuickTools_eventScreenTraceObjects_Parms), &Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_bComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventScreenTraceObjects_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventScreenTraceObjects_Parms, Result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
void Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((LQuickTools_eventScreenTraceObjects_Parms*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LQuickTools_eventScreenTraceObjects_Parms), &Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LQuickTools_eventScreenTraceObjects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LQuickTools_eventScreenTraceObjects_Parms), &Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_bComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "ScreenTraceObjects", Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::LQuickTools_eventScreenTraceObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::LQuickTools_eventScreenTraceObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execScreenTraceObjects)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Pos);
	P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
	P_GET_UBOOL(Z_Param_bComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Result);
	P_GET_UBOOL(Z_Param_bIgnoreSelf);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULQuickTools::ScreenTraceObjects(Z_Param_Context,Z_Param_Out_Pos,Z_Param_Out_ObjectTypes,Z_Param_bComplex,Z_Param_Out_ActorsToIgnore,Z_Param_Out_Result,Z_Param_bIgnoreSelf);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function ScreenTraceObjects ***********************************

// ********** Begin Class ULQuickTools Function StrCompare *****************************************
struct Z_Construct_UFunction_ULQuickTools_StrCompare_Statics
{
	struct LQuickTools_eventStrCompare_Parms
	{
		FString Str1;
		FString Str2;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LQuickTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\xaf\x94\xe8\xbe\x83(1\xe5\xa4\xa7\xef\xbc\x8c""0\xe7\xad\x89\xef\xbc\x8c-1\xe5\xb0\x8f)\n" },
#endif
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\xaf\x94\xe8\xbe\x83(1\xe5\xa4\xa7\xef\xbc\x8c""0\xe7\xad\x89\xef\xbc\x8c-1\xe5\xb0\x8f)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Str1_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Str2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Str1;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Str2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::NewProp_Str1 = { "Str1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventStrCompare_Parms, Str1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Str1_MetaData), NewProp_Str1_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::NewProp_Str2 = { "Str2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventStrCompare_Parms, Str2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Str2_MetaData), NewProp_Str2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LQuickTools_eventStrCompare_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::NewProp_Str1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::NewProp_Str2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULQuickTools, nullptr, "StrCompare", Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::LQuickTools_eventStrCompare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::LQuickTools_eventStrCompare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULQuickTools_StrCompare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULQuickTools_StrCompare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULQuickTools::execStrCompare)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Str1);
	P_GET_PROPERTY(FStrProperty,Z_Param_Str2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=ULQuickTools::StrCompare(Z_Param_Str1,Z_Param_Str2);
	P_NATIVE_END;
}
// ********** End Class ULQuickTools Function StrCompare *******************************************

// ********** Begin Class ULQuickTools *************************************************************
void ULQuickTools::StaticRegisterNativesULQuickTools()
{
	UClass* Class = ULQuickTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CustomSplit", &ULQuickTools::execCustomSplit },
		{ "GetActorComp", &ULQuickTools::execGetActorComp },
		{ "GetGameInst", &ULQuickTools::execGetGameInst },
		{ "GetGameMode", &ULQuickTools::execGetGameMode },
		{ "GetLevelObject", &ULQuickTools::execGetLevelObject },
		{ "GetLevelObjectByName", &ULQuickTools::execGetLevelObjectByName },
		{ "GetLevelStreamingObject", &ULQuickTools::execGetLevelStreamingObject },
		{ "GetLevelStreamingObjectByName", &ULQuickTools::execGetLevelStreamingObjectByName },
		{ "GetPlayerCtrl", &ULQuickTools::execGetPlayerCtrl },
		{ "GetPlayerHUD", &ULQuickTools::execGetPlayerHUD },
		{ "GetPlayerPawn", &ULQuickTools::execGetPlayerPawn },
		{ "ScreenTraceChannel", &ULQuickTools::execScreenTraceChannel },
		{ "ScreenTraceObjects", &ULQuickTools::execScreenTraceObjects },
		{ "StrCompare", &ULQuickTools::execStrCompare },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULQuickTools;
UClass* ULQuickTools::GetPrivateStaticClass()
{
	using TClass = ULQuickTools;
	if (!Z_Registration_Info_UClass_ULQuickTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LQuickTools"),
			Z_Registration_Info_UClass_ULQuickTools.InnerSingleton,
			StaticRegisterNativesULQuickTools,
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
	return Z_Registration_Info_UClass_ULQuickTools.InnerSingleton;
}
UClass* Z_Construct_UClass_ULQuickTools_NoRegister()
{
	return ULQuickTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULQuickTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/LQuickTools.h" },
		{ "ModuleRelativePath", "Misc/LQuickTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULQuickTools_CustomSplit, "CustomSplit" }, // 1851542894
		{ &Z_Construct_UFunction_ULQuickTools_GetActorComp, "GetActorComp" }, // 3542029916
		{ &Z_Construct_UFunction_ULQuickTools_GetGameInst, "GetGameInst" }, // 1436487836
		{ &Z_Construct_UFunction_ULQuickTools_GetGameMode, "GetGameMode" }, // 1849979702
		{ &Z_Construct_UFunction_ULQuickTools_GetLevelObject, "GetLevelObject" }, // 2129514019
		{ &Z_Construct_UFunction_ULQuickTools_GetLevelObjectByName, "GetLevelObjectByName" }, // 4146299352
		{ &Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObject, "GetLevelStreamingObject" }, // 342659480
		{ &Z_Construct_UFunction_ULQuickTools_GetLevelStreamingObjectByName, "GetLevelStreamingObjectByName" }, // 2945607086
		{ &Z_Construct_UFunction_ULQuickTools_GetPlayerCtrl, "GetPlayerCtrl" }, // 3828500562
		{ &Z_Construct_UFunction_ULQuickTools_GetPlayerHUD, "GetPlayerHUD" }, // 1533683010
		{ &Z_Construct_UFunction_ULQuickTools_GetPlayerPawn, "GetPlayerPawn" }, // 1648536716
		{ &Z_Construct_UFunction_ULQuickTools_ScreenTraceChannel, "ScreenTraceChannel" }, // 1686851066
		{ &Z_Construct_UFunction_ULQuickTools_ScreenTraceObjects, "ScreenTraceObjects" }, // 2546940243
		{ &Z_Construct_UFunction_ULQuickTools_StrCompare, "StrCompare" }, // 3059588192
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULQuickTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULQuickTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULQuickTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULQuickTools_Statics::ClassParams = {
	&ULQuickTools::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULQuickTools_Statics::Class_MetaDataParams), Z_Construct_UClass_ULQuickTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULQuickTools()
{
	if (!Z_Registration_Info_UClass_ULQuickTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULQuickTools.OuterSingleton, Z_Construct_UClass_ULQuickTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULQuickTools.OuterSingleton;
}
ULQuickTools::ULQuickTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULQuickTools);
ULQuickTools::~ULQuickTools() {}
// ********** End Class ULQuickTools ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULQuickTools, ULQuickTools::StaticClass, TEXT("ULQuickTools"), &Z_Registration_Info_UClass_ULQuickTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULQuickTools), 3170854694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h__Script_LQuickFrame_517632091(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LQuickTools_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
