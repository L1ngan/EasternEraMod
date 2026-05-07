// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Misc/LFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLFile() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULAsyncFile();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULAsyncFile_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULFile();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULFile_NoRegister();
LQUICKFRAME_API UFunction* Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULFile Function CaptureScreen ********************************************
struct Z_Construct_UFunction_ULFile_CaptureScreen_Statics
{
	struct LFile_eventCaptureScreen_Parms
	{
		int32 Width;
		FString FullPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LFile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb1\x8f\xe5\xb9\x95\xe6\x88\xaa\xe5\xb1\x8f\n" },
#endif
		{ "ModuleRelativePath", "Misc/LFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb1\x8f\xe5\xb9\x95\xe6\x88\xaa\xe5\xb1\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FullPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFile_CaptureScreen_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFile_eventCaptureScreen_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFile_CaptureScreen_Statics::NewProp_FullPath = { "FullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFile_eventCaptureScreen_Parms, FullPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullPath_MetaData), NewProp_FullPath_MetaData) };
void Z_Construct_UFunction_ULFile_CaptureScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LFile_eventCaptureScreen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFile_CaptureScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFile_eventCaptureScreen_Parms), &Z_Construct_UFunction_ULFile_CaptureScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFile_CaptureScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_CaptureScreen_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_CaptureScreen_Statics::NewProp_FullPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_CaptureScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_CaptureScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFile_CaptureScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULFile, nullptr, "CaptureScreen", Z_Construct_UFunction_ULFile_CaptureScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_CaptureScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFile_CaptureScreen_Statics::LFile_eventCaptureScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_CaptureScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFile_CaptureScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULFile_CaptureScreen_Statics::LFile_eventCaptureScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULFile_CaptureScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFile_CaptureScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULFile::execCaptureScreen)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FStrProperty,Z_Param_FullPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULFile::CaptureScreen(Z_Param_Width,Z_Param_FullPath);
	P_NATIVE_END;
}
// ********** End Class ULFile Function CaptureScreen **********************************************

// ********** Begin Class ULFile Function GetProjPath **********************************************
struct Z_Construct_UFunction_ULFile_GetProjPath_Statics
{
	struct LFile_eventGetProjPath_Parms
	{
		FString RelativePath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LFile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe9\xa1\xb9\xe7\x9b\xae\xe8\xb7\xaf\xe5\xbe\x84\xe4\xb8\x8b\xe7\x9a\x84\xe7\xbb\x9d\xe5\xaf\xb9\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Misc/LFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe9\xa1\xb9\xe7\x9b\xae\xe8\xb7\xaf\xe5\xbe\x84\xe4\xb8\x8b\xe7\x9a\x84\xe7\xbb\x9d\xe5\xaf\xb9\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RelativePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFile_GetProjPath_Statics::NewProp_RelativePath = { "RelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFile_eventGetProjPath_Parms, RelativePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativePath_MetaData), NewProp_RelativePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFile_GetProjPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFile_eventGetProjPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFile_GetProjPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_GetProjPath_Statics::NewProp_RelativePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_GetProjPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_GetProjPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFile_GetProjPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULFile, nullptr, "GetProjPath", Z_Construct_UFunction_ULFile_GetProjPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_GetProjPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFile_GetProjPath_Statics::LFile_eventGetProjPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_GetProjPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFile_GetProjPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULFile_GetProjPath_Statics::LFile_eventGetProjPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULFile_GetProjPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFile_GetProjPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULFile::execGetProjPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RelativePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=ULFile::GetProjPath(Z_Param_RelativePath);
	P_NATIVE_END;
}
// ********** End Class ULFile Function GetProjPath ************************************************

// ********** Begin Class ULFile Function GetSavePath **********************************************
struct Z_Construct_UFunction_ULFile_GetSavePath_Statics
{
	struct LFile_eventGetSavePath_Parms
	{
		FString RelativePath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LFile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\xaf\xe5\xbe\x84\xe7\xbb\x9d\xe5\xaf\xb9\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Misc/LFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\xaf\xe5\xbe\x84\xe7\xbb\x9d\xe5\xaf\xb9\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RelativePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFile_GetSavePath_Statics::NewProp_RelativePath = { "RelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFile_eventGetSavePath_Parms, RelativePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativePath_MetaData), NewProp_RelativePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFile_GetSavePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFile_eventGetSavePath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFile_GetSavePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_GetSavePath_Statics::NewProp_RelativePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_GetSavePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_GetSavePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFile_GetSavePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULFile, nullptr, "GetSavePath", Z_Construct_UFunction_ULFile_GetSavePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_GetSavePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFile_GetSavePath_Statics::LFile_eventGetSavePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_GetSavePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFile_GetSavePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULFile_GetSavePath_Statics::LFile_eventGetSavePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULFile_GetSavePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFile_GetSavePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULFile::execGetSavePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RelativePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=ULFile::GetSavePath(Z_Param_RelativePath);
	P_NATIVE_END;
}
// ********** End Class ULFile Function GetSavePath ************************************************

// ********** Begin Class ULFile Function LoadClassPath ********************************************
struct Z_Construct_UFunction_ULFile_LoadClassPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LFile_eventLoadClassPath_Parms
	{
		FSoftClassPath Path;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LFile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa0\xe8\xbd\xbd""class\xef\xbc\x88\xe5\x90\x8c\xe6\xad\xa5\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Misc/LFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd""class\xef\xbc\x88\xe5\x90\x8c\xe6\xad\xa5\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFile_LoadClassPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFile_eventLoadClassPath_Parms, Path), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULFile_LoadClassPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFile_eventLoadClassPath_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFile_LoadClassPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_LoadClassPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_LoadClassPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_LoadClassPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFile_LoadClassPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULFile, nullptr, "LoadClassPath", Z_Construct_UFunction_ULFile_LoadClassPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_LoadClassPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFile_LoadClassPath_Statics::LFile_eventLoadClassPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_LoadClassPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFile_LoadClassPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULFile_LoadClassPath_Statics::LFile_eventLoadClassPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULFile_LoadClassPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFile_LoadClassPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULFile::execLoadClassPath)
{
	P_GET_STRUCT_REF(FSoftClassPath,Z_Param_Out_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=ULFile::LoadClassPath(Z_Param_Out_Path);
	P_NATIVE_END;
}
// ********** End Class ULFile Function LoadClassPath **********************************************

// ********** Begin Class ULFile Function LoadObjectPath *******************************************
struct Z_Construct_UFunction_ULFile_LoadObjectPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LFile_eventLoadObjectPath_Parms
	{
		FSoftObjectPath Path;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LFile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa0\xe8\xbd\xbdObject\xef\xbc\x88\xe5\x90\x8c\xe6\xad\xa5\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Misc/LFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbdObject\xef\xbc\x88\xe5\x90\x8c\xe6\xad\xa5\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFile_eventLoadObjectPath_Parms, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFile_eventLoadObjectPath_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULFile, nullptr, "LoadObjectPath", Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::LFile_eventLoadObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::LFile_eventLoadObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULFile_LoadObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFile_LoadObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULFile::execLoadObjectPath)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=ULFile::LoadObjectPath(Z_Param_Out_Path);
	P_NATIVE_END;
}
// ********** End Class ULFile Function LoadObjectPath *********************************************

// ********** Begin Class ULFile *******************************************************************
void ULFile::StaticRegisterNativesULFile()
{
	UClass* Class = ULFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CaptureScreen", &ULFile::execCaptureScreen },
		{ "GetProjPath", &ULFile::execGetProjPath },
		{ "GetSavePath", &ULFile::execGetSavePath },
		{ "LoadClassPath", &ULFile::execLoadClassPath },
		{ "LoadObjectPath", &ULFile::execLoadObjectPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULFile;
UClass* ULFile::GetPrivateStaticClass()
{
	using TClass = ULFile;
	if (!Z_Registration_Info_UClass_ULFile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LFile"),
			Z_Registration_Info_UClass_ULFile.InnerSingleton,
			StaticRegisterNativesULFile,
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
	return Z_Registration_Info_UClass_ULFile.InnerSingleton;
}
UClass* Z_Construct_UClass_ULFile_NoRegister()
{
	return ULFile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xa3\xe7\xa0\x81\xe5\x8a\xa0\xe8\xbd\xbd\xe7\x94\xa8LoadObject<T>(nullptr,Path),LoadClass\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe8\xb7\xaf\xe5\xbe\x84\xe5\x8a\xa0 _C\n" },
#endif
		{ "IncludePath", "Misc/LFile.h" },
		{ "ModuleRelativePath", "Misc/LFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xa3\xe7\xa0\x81\xe5\x8a\xa0\xe8\xbd\xbd\xe7\x94\xa8LoadObject<T>(nullptr,Path),LoadClass\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe8\xb7\xaf\xe5\xbe\x84\xe5\x8a\xa0 _C" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFile_CaptureScreen, "CaptureScreen" }, // 931552303
		{ &Z_Construct_UFunction_ULFile_GetProjPath, "GetProjPath" }, // 1550871940
		{ &Z_Construct_UFunction_ULFile_GetSavePath, "GetSavePath" }, // 977031400
		{ &Z_Construct_UFunction_ULFile_LoadClassPath, "LoadClassPath" }, // 2252664010
		{ &Z_Construct_UFunction_ULFile_LoadObjectPath, "LoadObjectPath" }, // 2300315342
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFile_Statics::ClassParams = {
	&ULFile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFile_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULFile()
{
	if (!Z_Registration_Info_UClass_ULFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFile.OuterSingleton, Z_Construct_UClass_ULFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULFile.OuterSingleton;
}
ULFile::ULFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULFile);
ULFile::~ULFile() {}
// ********** End Class ULFile *********************************************************************

// ********** Begin Delegate FLLoadObjectCall ******************************************************
struct Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics
{
	struct LAsyncFile_eventLLoadObjectCall_Parms
	{
		UObject* Out;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Misc/LFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Out;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LAsyncFile_eventLLoadObjectCall_Parms, Out), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::NewProp_Out,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULAsyncFile, nullptr, "LLoadObjectCall__DelegateSignature", Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::LAsyncFile_eventLLoadObjectCall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::LAsyncFile_eventLLoadObjectCall_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void ULAsyncFile::FLLoadObjectCall_DelegateWrapper(const FMulticastScriptDelegate& LLoadObjectCall, UObject* Out)
{
	struct LAsyncFile_eventLLoadObjectCall_Parms
	{
		UObject* Out;
	};
	LAsyncFile_eventLLoadObjectCall_Parms Parms;
	Parms.Out=Out;
	LLoadObjectCall.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FLLoadObjectCall ********************************************************

// ********** Begin Class ULAsyncFile Function AsyncLoadAndUnloadStreamings ************************
struct Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics
{
	struct LAsyncFile_eventAsyncLoadAndUnloadStreamings_Parms
	{
		TArray<FString> Loads;
		TArray<FString> Unloads;
		ULAsyncFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LFile" },
		{ "ModuleRelativePath", "Misc/LFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Loads_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unloads_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Loads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Loads;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Unloads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Unloads;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::NewProp_Loads_Inner = { "Loads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::NewProp_Loads = { "Loads", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LAsyncFile_eventAsyncLoadAndUnloadStreamings_Parms, Loads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Loads_MetaData), NewProp_Loads_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::NewProp_Unloads_Inner = { "Unloads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::NewProp_Unloads = { "Unloads", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LAsyncFile_eventAsyncLoadAndUnloadStreamings_Parms, Unloads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unloads_MetaData), NewProp_Unloads_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LAsyncFile_eventAsyncLoadAndUnloadStreamings_Parms, ReturnValue), Z_Construct_UClass_ULAsyncFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::NewProp_Loads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::NewProp_Loads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::NewProp_Unloads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::NewProp_Unloads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULAsyncFile, nullptr, "AsyncLoadAndUnloadStreamings", Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::LAsyncFile_eventAsyncLoadAndUnloadStreamings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::LAsyncFile_eventAsyncLoadAndUnloadStreamings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULAsyncFile::execAsyncLoadAndUnloadStreamings)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Loads);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Unloads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULAsyncFile**)Z_Param__Result=ULAsyncFile::AsyncLoadAndUnloadStreamings(Z_Param_Out_Loads,Z_Param_Out_Unloads);
	P_NATIVE_END;
}
// ********** End Class ULAsyncFile Function AsyncLoadAndUnloadStreamings **************************

// ********** Begin Class ULAsyncFile Function AsyncLoadClass **************************************
struct Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LAsyncFile_eventAsyncLoadClass_Parms
	{
		FSoftClassPath Path;
		ULAsyncFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LFile" },
		{ "ModuleRelativePath", "Misc/LFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LAsyncFile_eventAsyncLoadClass_Parms, Path), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LAsyncFile_eventAsyncLoadClass_Parms, ReturnValue), Z_Construct_UClass_ULAsyncFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULAsyncFile, nullptr, "AsyncLoadClass", Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::LAsyncFile_eventAsyncLoadClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::LAsyncFile_eventAsyncLoadClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULAsyncFile::execAsyncLoadClass)
{
	P_GET_STRUCT_REF(FSoftClassPath,Z_Param_Out_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULAsyncFile**)Z_Param__Result=ULAsyncFile::AsyncLoadClass(Z_Param_Out_Path);
	P_NATIVE_END;
}
// ********** End Class ULAsyncFile Function AsyncLoadClass ****************************************

// ********** Begin Class ULAsyncFile Function AsyncLoadObject *************************************
struct Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LAsyncFile_eventAsyncLoadObject_Parms
	{
		FSoftObjectPath Path;
		ULAsyncFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LFile" },
		{ "ModuleRelativePath", "Misc/LFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LAsyncFile_eventAsyncLoadObject_Parms, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LAsyncFile_eventAsyncLoadObject_Parms, ReturnValue), Z_Construct_UClass_ULAsyncFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULAsyncFile, nullptr, "AsyncLoadObject", Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::LAsyncFile_eventAsyncLoadObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::LAsyncFile_eventAsyncLoadObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULAsyncFile::execAsyncLoadObject)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULAsyncFile**)Z_Param__Result=ULAsyncFile::AsyncLoadObject(Z_Param_Out_Path);
	P_NATIVE_END;
}
// ********** End Class ULAsyncFile Function AsyncLoadObject ***************************************

// ********** Begin Class ULAsyncFile Function OnLoaded ********************************************
struct Z_Construct_UFunction_ULAsyncFile_OnLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Misc/LFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULAsyncFile_OnLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULAsyncFile, nullptr, "OnLoaded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULAsyncFile_OnLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULAsyncFile_OnLoaded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULAsyncFile_OnLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULAsyncFile_OnLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULAsyncFile::execOnLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoaded();
	P_NATIVE_END;
}
// ********** End Class ULAsyncFile Function OnLoaded **********************************************

// ********** Begin Class ULAsyncFile **************************************************************
void ULAsyncFile::StaticRegisterNativesULAsyncFile()
{
	UClass* Class = ULAsyncFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLoadAndUnloadStreamings", &ULAsyncFile::execAsyncLoadAndUnloadStreamings },
		{ "AsyncLoadClass", &ULAsyncFile::execAsyncLoadClass },
		{ "AsyncLoadObject", &ULAsyncFile::execAsyncLoadObject },
		{ "OnLoaded", &ULAsyncFile::execOnLoaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULAsyncFile;
UClass* ULAsyncFile::GetPrivateStaticClass()
{
	using TClass = ULAsyncFile;
	if (!Z_Registration_Info_UClass_ULAsyncFile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LAsyncFile"),
			Z_Registration_Info_UClass_ULAsyncFile.InnerSingleton,
			StaticRegisterNativesULAsyncFile,
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
	return Z_Registration_Info_UClass_ULAsyncFile.InnerSingleton;
}
UClass* Z_Construct_UClass_ULAsyncFile_NoRegister()
{
	return ULAsyncFile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULAsyncFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/LFile.h" },
		{ "ModuleRelativePath", "Misc/LFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "LFile" },
		{ "ModuleRelativePath", "Misc/LFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[] = {
		{ "Category", "LFile" },
		{ "ModuleRelativePath", "Misc/LFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULAsyncFile_AsyncLoadAndUnloadStreamings, "AsyncLoadAndUnloadStreamings" }, // 3010613950
		{ &Z_Construct_UFunction_ULAsyncFile_AsyncLoadClass, "AsyncLoadClass" }, // 3851762711
		{ &Z_Construct_UFunction_ULAsyncFile_AsyncLoadObject, "AsyncLoadObject" }, // 3621548363
		{ &Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature, "LLoadObjectCall__DelegateSignature" }, // 4135655316
		{ &Z_Construct_UFunction_ULAsyncFile_OnLoaded, "OnLoaded" }, // 2987280948
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULAsyncFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULAsyncFile_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULAsyncFile, Success), Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 4135655316
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULAsyncFile_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULAsyncFile, Failed), Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failed_MetaData), NewProp_Failed_MetaData) }; // 4135655316
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULAsyncFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULAsyncFile_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULAsyncFile_Statics::NewProp_Failed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULAsyncFile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULAsyncFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULAsyncFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULAsyncFile_Statics::ClassParams = {
	&ULAsyncFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULAsyncFile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULAsyncFile_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULAsyncFile_Statics::Class_MetaDataParams), Z_Construct_UClass_ULAsyncFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULAsyncFile()
{
	if (!Z_Registration_Info_UClass_ULAsyncFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULAsyncFile.OuterSingleton, Z_Construct_UClass_ULAsyncFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULAsyncFile.OuterSingleton;
}
ULAsyncFile::ULAsyncFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULAsyncFile);
ULAsyncFile::~ULAsyncFile() {}
// ********** End Class ULAsyncFile ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULFile, ULFile::StaticClass, TEXT("ULFile"), &Z_Registration_Info_UClass_ULFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFile), 2020641334U) },
		{ Z_Construct_UClass_ULAsyncFile, ULAsyncFile::StaticClass, TEXT("ULAsyncFile"), &Z_Registration_Info_UClass_ULAsyncFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULAsyncFile), 2028777536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h__Script_LQuickFrame_1004285081(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LFile_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
