// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Mode/LGameInst.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLGameInst() {}

// ********** Begin Cross Module References ********************************************************
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameInst();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameInst_NoRegister();
LQUICKFRAME_API UEnum* Z_Construct_UEnum_LQuickFrame_EEnterGameMode();
LQUICKFRAME_API UFunction* Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnUpdateGamePlaySpeed ************************************************
struct Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics
{
	struct _Script_LQuickFrame_eventOnUpdateGamePlaySpeed_Parms
	{
		float NewSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LQuickFrame_eventOnUpdateGamePlaySpeed_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LQuickFrame, nullptr, "OnUpdateGamePlaySpeed__DelegateSignature", Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::_Script_LQuickFrame_eventOnUpdateGamePlaySpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::_Script_LQuickFrame_eventOnUpdateGamePlaySpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUpdateGamePlaySpeed_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateGamePlaySpeed, float NewSpeed)
{
	struct _Script_LQuickFrame_eventOnUpdateGamePlaySpeed_Parms
	{
		float NewSpeed;
	};
	_Script_LQuickFrame_eventOnUpdateGamePlaySpeed_Parms Parms;
	Parms.NewSpeed=NewSpeed;
	OnUpdateGamePlaySpeed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUpdateGamePlaySpeed **************************************************

// ********** Begin Class ULGameInst Function AfterSaveLevelAndBeforeSaveLevel *********************
struct Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics
{
	struct LGameInst_eventAfterSaveLevelAndBeforeSaveLevel_Parms
	{
		FName LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbf\x9d\xe5\xad\x98\xe5\xad\x98\xe6\xa1\xa3\xe5\x90\x8e\xe5\x88\x87\xe6\x8d\xa2\xe5\x85\xb3\xe5\x8d\xa1\xe5\x89\x8d\n" },
#endif
		{ "DisplayName", "AfterSaveLevelAndBeforeSaveLevel" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe5\xad\x98\xe6\xa1\xa3\xe5\x90\x8e\xe5\x88\x87\xe6\x8d\xa2\xe5\x85\xb3\xe5\x8d\xa1\xe5\x89\x8d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventAfterSaveLevelAndBeforeSaveLevel_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "AfterSaveLevelAndBeforeSaveLevel", Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::LGameInst_eventAfterSaveLevelAndBeforeSaveLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::LGameInst_eventAfterSaveLevelAndBeforeSaveLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execAfterSaveLevelAndBeforeSaveLevel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AfterSaveLevelAndBeforeSaveLevel(Z_Param_LevelName);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function AfterSaveLevelAndBeforeSaveLevel ***********************

// ********** Begin Class ULGameInst Function ChangeSubLevel ***************************************
struct Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics
{
	struct LGameInst_eventChangeSubLevel_Parms
	{
		TSoftObjectPtr<UWorld> ChangeToLevel;
		TSoftObjectPtr<UWorld> CurLevel;
		bool bCloseCurSubLevel;
		bool bSaveCurSubLevel;
		bool bReadSlotFile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x87\xe6\x8d\xa2\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x87\xe6\x8d\xa2\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeToLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ChangeToLevel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CurLevel;
	static void NewProp_bCloseCurSubLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseCurSubLevel;
	static void NewProp_bSaveCurSubLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveCurSubLevel;
	static void NewProp_bReadSlotFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadSlotFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_ChangeToLevel = { "ChangeToLevel", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventChangeSubLevel_Parms, ChangeToLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeToLevel_MetaData), NewProp_ChangeToLevel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_CurLevel = { "CurLevel", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventChangeSubLevel_Parms, CurLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurLevel_MetaData), NewProp_CurLevel_MetaData) };
void Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bCloseCurSubLevel_SetBit(void* Obj)
{
	((LGameInst_eventChangeSubLevel_Parms*)Obj)->bCloseCurSubLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bCloseCurSubLevel = { "bCloseCurSubLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventChangeSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bCloseCurSubLevel_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bSaveCurSubLevel_SetBit(void* Obj)
{
	((LGameInst_eventChangeSubLevel_Parms*)Obj)->bSaveCurSubLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bSaveCurSubLevel = { "bSaveCurSubLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventChangeSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bSaveCurSubLevel_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bReadSlotFile_SetBit(void* Obj)
{
	((LGameInst_eventChangeSubLevel_Parms*)Obj)->bReadSlotFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bReadSlotFile = { "bReadSlotFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventChangeSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bReadSlotFile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_ChangeToLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_CurLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bCloseCurSubLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bSaveCurSubLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::NewProp_bReadSlotFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "ChangeSubLevel", Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::LGameInst_eventChangeSubLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::LGameInst_eventChangeSubLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_ChangeSubLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_ChangeSubLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execChangeSubLevel)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UWorld>,Z_Param_Out_ChangeToLevel);
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UWorld>,Z_Param_Out_CurLevel);
	P_GET_UBOOL(Z_Param_bCloseCurSubLevel);
	P_GET_UBOOL(Z_Param_bSaveCurSubLevel);
	P_GET_UBOOL(Z_Param_bReadSlotFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeSubLevel(Z_Param_Out_ChangeToLevel,Z_Param_Out_CurLevel,Z_Param_bCloseCurSubLevel,Z_Param_bSaveCurSubLevel,Z_Param_bReadSlotFile);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function ChangeSubLevel *****************************************

// ********** Begin Class ULGameInst Function CheckLowerThanVersion ********************************
struct Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics
{
	struct LGameInst_eventCheckLowerThanVersion_Parms
	{
		FString InVersion;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa3\x80\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\x8e\xe4\xba\x8e\xe6\xb8\xb8\xe6\x88\x8f\xe7\x89\x88\xe6\x9c\xac\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\x8e\xe4\xba\x8e\xe6\xb8\xb8\xe6\x88\x8f\xe7\x89\x88\xe6\x9c\xac" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVersion;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::NewProp_InVersion = { "InVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventCheckLowerThanVersion_Parms, InVersion), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LGameInst_eventCheckLowerThanVersion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventCheckLowerThanVersion_Parms), &Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::NewProp_InVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "CheckLowerThanVersion", Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::LGameInst_eventCheckLowerThanVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::LGameInst_eventCheckLowerThanVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execCheckLowerThanVersion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVersion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckLowerThanVersion(Z_Param_InVersion);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function CheckLowerThanVersion **********************************

// ********** Begin Class ULGameInst Function CloseLoadingScreen ***********************************
struct Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics
{
	struct LGameInst_eventCloseLoadingScreen_Parms
	{
		float DelayTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x85\xb3\xe9\x97\xadLoading\xe7\x95\x8c\xe9\x9d\xa2\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe9\x97\xadLoading\xe7\x95\x8c\xe9\x9d\xa2" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventCloseLoadingScreen_Parms, DelayTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::NewProp_DelayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "CloseLoadingScreen", Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::LGameInst_eventCloseLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::LGameInst_eventCloseLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_CloseLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_CloseLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execCloseLoadingScreen)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseLoadingScreen(Z_Param_DelayTime);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function CloseLoadingScreen *************************************

// ********** Begin Class ULGameInst Function CloseSubLevel ****************************************
struct Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics
{
	struct LGameInst_eventCloseSubLevel_Parms
	{
		TSoftObjectPtr<UWorld> Level;
		bool bSaveSlotFile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x85\xb3\xe9\x97\xad\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe9\x97\xad\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static void NewProp_bSaveSlotFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveSlotFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventCloseSubLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::NewProp_bSaveSlotFile_SetBit(void* Obj)
{
	((LGameInst_eventCloseSubLevel_Parms*)Obj)->bSaveSlotFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::NewProp_bSaveSlotFile = { "bSaveSlotFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventCloseSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::NewProp_bSaveSlotFile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::NewProp_bSaveSlotFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "CloseSubLevel", Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::LGameInst_eventCloseSubLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::LGameInst_eventCloseSubLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_CloseSubLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_CloseSubLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execCloseSubLevel)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UWorld>,Z_Param_Out_Level);
	P_GET_UBOOL(Z_Param_bSaveSlotFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseSubLevel(Z_Param_Out_Level,Z_Param_bSaveSlotFile);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function CloseSubLevel ******************************************

// ********** Begin Class ULGameInst Function GetActor *********************************************
struct Z_Construct_UFunction_ULGameInst_GetActor_Statics
{
	struct LGameInst_eventGetActor_Parms
	{
		TSubclassOf<AActor> Class;
		FTransform Trans;
		ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride;
		ULevel* Level;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Transform,Level" },
		{ "Category", "LGameInst" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\xbe\x97""Actor\xef\xbc\x88\xe5\x86\x85\xe5\xad\x98\xe6\xb1\xa0\xef\xbc\x89\xe9\xbb\x98\xe8\xae\xa4\xe4\xbc\x9a\xe5\x88\x9b\xe5\xbb\xba\xe5\x88\xb0\xe5\xbd\x93\xe5\x89\x8d\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1\xe4\xb8\xad \xe5\xa6\x82\xe9\x9c\x80\xe8\xb7\xa8\xe5\x85\xb3\xe5\x8d\xa1\xe9\x9c\x80\xe4\xbc\xa0\xe5\x85\xa5\xe6\xb0\xb8\xe4\xb9\x85\xe5\x85\xb3\xe5\x8d\xa1\n" },
#endif
		{ "CPP_Default_InSpawnCollisionHandlingOverride", "AlwaysSpawn" },
		{ "CPP_Default_Level", "None" },
		{ "CPP_Default_Trans", "()" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\xbe\x97""Actor\xef\xbc\x88\xe5\x86\x85\xe5\xad\x98\xe6\xb1\xa0\xef\xbc\x89\xe9\xbb\x98\xe8\xae\xa4\xe4\xbc\x9a\xe5\x88\x9b\xe5\xbb\xba\xe5\x88\xb0\xe5\xbd\x93\xe5\x89\x8d\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1\xe4\xb8\xad \xe5\xa6\x82\xe9\x9c\x80\xe8\xb7\xa8\xe5\x85\xb3\xe5\x8d\xa1\xe9\x9c\x80\xe4\xbc\xa0\xe5\x85\xa5\xe6\xb0\xb8\xe4\xb9\x85\xe5\x85\xb3\xe5\x8d\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trans;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSpawnCollisionHandlingOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSpawnCollisionHandlingOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_Trans = { "Trans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetActor_Parms, Trans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trans_MetaData), NewProp_Trans_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_InSpawnCollisionHandlingOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_InSpawnCollisionHandlingOverride = { "InSpawnCollisionHandlingOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetActor_Parms, InSpawnCollisionHandlingOverride), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(0, nullptr) }; // 2749820453
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetActor_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_GetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_Trans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_InSpawnCollisionHandlingOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_InSpawnCollisionHandlingOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_GetActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "GetActor", Z_Construct_UFunction_ULGameInst_GetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_GetActor_Statics::LGameInst_eventGetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_GetActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_GetActor_Statics::LGameInst_eventGetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_GetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_GetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execGetActor)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Trans);
	P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_InSpawnCollisionHandlingOverride);
	P_GET_OBJECT(ULevel,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetActor(Z_Param_Class,Z_Param_Out_Trans,ESpawnActorCollisionHandlingMethod(Z_Param_InSpawnCollisionHandlingOverride),Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function GetActor ***********************************************

// ********** Begin Class ULGameInst Function GetCurLevel ******************************************
struct Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics
{
	struct LGameInst_eventGetCurLevel_Parms
	{
		ULevel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetCurLevel_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "GetCurLevel", Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::LGameInst_eventGetCurLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::LGameInst_eventGetCurLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_GetCurLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_GetCurLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execGetCurLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevel**)Z_Param__Result=P_THIS->GetCurLevel();
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function GetCurLevel ********************************************

// ********** Begin Class ULGameInst Function GetGamePlaySpeed *************************************
struct Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics
{
	struct LGameInst_eventGetGamePlaySpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetGamePlaySpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "GetGamePlaySpeed", Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::LGameInst_eventGetGamePlaySpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::LGameInst_eventGetGamePlaySpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execGetGamePlaySpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGamePlaySpeed();
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function GetGamePlaySpeed ***************************************

// ********** Begin Class ULGameInst Function GetGamePlaySpeedIndex ********************************
struct Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics
{
	struct LGameInst_eventGetGamePlaySpeedIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\xb8\xb8\xe6\x88\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xb8\xb8\xe6\x88\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xe6\xa0\x87" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetGamePlaySpeedIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "GetGamePlaySpeedIndex", Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::LGameInst_eventGetGamePlaySpeedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::LGameInst_eventGetGamePlaySpeedIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execGetGamePlaySpeedIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGamePlaySpeedIndex();
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function GetGamePlaySpeedIndex **********************************

// ********** Begin Class ULGameInst Function GetPawn **********************************************
struct Z_Construct_UFunction_ULGameInst_GetPawn_Statics
{
	struct LGameInst_eventGetPawn_Parms
	{
		TSubclassOf<APawn> Class;
		FTransform Trans;
		ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride;
		ULevel* Level;
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Transform,Level" },
		{ "Category", "LGameInst" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96pawn\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8 \xe5\xb9\xb6\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\n" },
#endif
		{ "CPP_Default_InSpawnCollisionHandlingOverride", "AlwaysSpawn" },
		{ "CPP_Default_Level", "None" },
		{ "CPP_Default_Trans", "()" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96pawn\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8 \xe5\xb9\xb6\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trans;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSpawnCollisionHandlingOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSpawnCollisionHandlingOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetPawn_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_Trans = { "Trans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetPawn_Parms, Trans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trans_MetaData), NewProp_Trans_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_InSpawnCollisionHandlingOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_InSpawnCollisionHandlingOverride = { "InSpawnCollisionHandlingOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetPawn_Parms, InSpawnCollisionHandlingOverride), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(0, nullptr) }; // 2749820453
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetPawn_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventGetPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_GetPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_Trans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_InSpawnCollisionHandlingOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_InSpawnCollisionHandlingOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_GetPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_GetPawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "GetPawn", Z_Construct_UFunction_ULGameInst_GetPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_GetPawn_Statics::LGameInst_eventGetPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_GetPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_GetPawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_GetPawn_Statics::LGameInst_eventGetPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_GetPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_GetPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execGetPawn)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Trans);
	P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_InSpawnCollisionHandlingOverride);
	P_GET_OBJECT(ULevel,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetPawn(Z_Param_Class,Z_Param_Out_Trans,ESpawnActorCollisionHandlingMethod(Z_Param_InSpawnCollisionHandlingOverride),Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function GetPawn ************************************************

// ********** Begin Class ULGameInst Function K2_ChangeSubLevel ************************************
struct LGameInst_eventK2_ChangeSubLevel_Parms
{
	TSoftObjectPtr<UWorld> Level;
	TSoftObjectPtr<UWorld> CurLevel;
	bool bCloseCurSubLevel;
	bool bSaveCurSubLevel;
	bool bReadSlotFile;
};
static FName NAME_ULGameInst_K2_ChangeSubLevel = FName(TEXT("K2_ChangeSubLevel"));
void ULGameInst::K2_ChangeSubLevel(TSoftObjectPtr<UWorld> const& Level, TSoftObjectPtr<UWorld> const& CurLevel, bool bCloseCurSubLevel, bool bSaveCurSubLevel, bool bReadSlotFile)
{
	LGameInst_eventK2_ChangeSubLevel_Parms Parms;
	Parms.Level=Level;
	Parms.CurLevel=CurLevel;
	Parms.bCloseCurSubLevel=bCloseCurSubLevel ? true : false;
	Parms.bSaveCurSubLevel=bSaveCurSubLevel ? true : false;
	Parms.bReadSlotFile=bReadSlotFile ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ULGameInst_K2_ChangeSubLevel);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "ChangeSubLevel" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CurLevel;
	static void NewProp_bCloseCurSubLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseCurSubLevel;
	static void NewProp_bSaveCurSubLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveCurSubLevel;
	static void NewProp_bReadSlotFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadSlotFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventK2_ChangeSubLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_CurLevel = { "CurLevel", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventK2_ChangeSubLevel_Parms, CurLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurLevel_MetaData), NewProp_CurLevel_MetaData) };
void Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bCloseCurSubLevel_SetBit(void* Obj)
{
	((LGameInst_eventK2_ChangeSubLevel_Parms*)Obj)->bCloseCurSubLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bCloseCurSubLevel = { "bCloseCurSubLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventK2_ChangeSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bCloseCurSubLevel_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bSaveCurSubLevel_SetBit(void* Obj)
{
	((LGameInst_eventK2_ChangeSubLevel_Parms*)Obj)->bSaveCurSubLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bSaveCurSubLevel = { "bSaveCurSubLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventK2_ChangeSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bSaveCurSubLevel_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bReadSlotFile_SetBit(void* Obj)
{
	((LGameInst_eventK2_ChangeSubLevel_Parms*)Obj)->bReadSlotFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bReadSlotFile = { "bReadSlotFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventK2_ChangeSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bReadSlotFile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_CurLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bCloseCurSubLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bSaveCurSubLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::NewProp_bReadSlotFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "K2_ChangeSubLevel", Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::PropPointers), sizeof(LGameInst_eventK2_ChangeSubLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LGameInst_eventK2_ChangeSubLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ULGameInst Function K2_ChangeSubLevel **************************************

// ********** Begin Class ULGameInst Function K2_CloseLoadingScreen ********************************
struct LGameInst_eventK2_CloseLoadingScreen_Parms
{
	float DelayTime;
};
static FName NAME_ULGameInst_K2_CloseLoadingScreen = FName(TEXT("K2_CloseLoadingScreen"));
void ULGameInst::K2_CloseLoadingScreen(float DelayTime)
{
	LGameInst_eventK2_CloseLoadingScreen_Parms Parms;
	Parms.DelayTime=DelayTime;
	UFunction* Func = FindFunctionChecked(NAME_ULGameInst_K2_CloseLoadingScreen);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "CloseLoadingScreen" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventK2_CloseLoadingScreen_Parms, DelayTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics::NewProp_DelayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "K2_CloseLoadingScreen", Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics::PropPointers), sizeof(LGameInst_eventK2_CloseLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LGameInst_eventK2_CloseLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ULGameInst Function K2_CloseLoadingScreen **********************************

// ********** Begin Class ULGameInst Function K2_CloseSubLevel *************************************
struct LGameInst_eventK2_CloseSubLevel_Parms
{
	TSoftObjectPtr<UWorld> Level;
	bool bSaveSlotFile;
};
static FName NAME_ULGameInst_K2_CloseSubLevel = FName(TEXT("K2_CloseSubLevel"));
void ULGameInst::K2_CloseSubLevel(TSoftObjectPtr<UWorld> const& Level, bool bSaveSlotFile)
{
	LGameInst_eventK2_CloseSubLevel_Parms Parms;
	Parms.Level=Level;
	Parms.bSaveSlotFile=bSaveSlotFile ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ULGameInst_K2_CloseSubLevel);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "CloseSubLevel" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static void NewProp_bSaveSlotFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveSlotFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventK2_CloseSubLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::NewProp_bSaveSlotFile_SetBit(void* Obj)
{
	((LGameInst_eventK2_CloseSubLevel_Parms*)Obj)->bSaveSlotFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::NewProp_bSaveSlotFile = { "bSaveSlotFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventK2_CloseSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::NewProp_bSaveSlotFile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::NewProp_bSaveSlotFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "K2_CloseSubLevel", Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::PropPointers), sizeof(LGameInst_eventK2_CloseSubLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LGameInst_eventK2_CloseSubLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ULGameInst Function K2_CloseSubLevel ***************************************

// ********** Begin Class ULGameInst Function K2_LoadSubLevel **************************************
struct LGameInst_eventK2_LoadSubLevel_Parms
{
	TSoftObjectPtr<UWorld> Level;
	bool bReadSlotFile;
};
static FName NAME_ULGameInst_K2_LoadSubLevel = FName(TEXT("K2_LoadSubLevel"));
void ULGameInst::K2_LoadSubLevel(TSoftObjectPtr<UWorld> const& Level, bool bReadSlotFile)
{
	LGameInst_eventK2_LoadSubLevel_Parms Parms;
	Parms.Level=Level;
	Parms.bReadSlotFile=bReadSlotFile ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ULGameInst_K2_LoadSubLevel);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "LoadSubLevel" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static void NewProp_bReadSlotFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadSlotFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventK2_LoadSubLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::NewProp_bReadSlotFile_SetBit(void* Obj)
{
	((LGameInst_eventK2_LoadSubLevel_Parms*)Obj)->bReadSlotFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::NewProp_bReadSlotFile = { "bReadSlotFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventK2_LoadSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::NewProp_bReadSlotFile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::NewProp_bReadSlotFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "K2_LoadSubLevel", Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::PropPointers), sizeof(LGameInst_eventK2_LoadSubLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LGameInst_eventK2_LoadSubLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ULGameInst Function K2_LoadSubLevel ****************************************

// ********** Begin Class ULGameInst Function K2_SaveSubLevel **************************************
struct LGameInst_eventK2_SaveSubLevel_Parms
{
	TSoftObjectPtr<UWorld> Level;
	bool bCloseLevel;
	bool bSaveSlotFile;
};
static FName NAME_ULGameInst_K2_SaveSubLevel = FName(TEXT("K2_SaveSubLevel"));
void ULGameInst::K2_SaveSubLevel(TSoftObjectPtr<UWorld> const& Level, bool bCloseLevel, bool bSaveSlotFile)
{
	LGameInst_eventK2_SaveSubLevel_Parms Parms;
	Parms.Level=Level;
	Parms.bCloseLevel=bCloseLevel ? true : false;
	Parms.bSaveSlotFile=bSaveSlotFile ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ULGameInst_K2_SaveSubLevel);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "SaveSubLevel" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static void NewProp_bCloseLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseLevel;
	static void NewProp_bSaveSlotFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveSlotFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventK2_SaveSubLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::NewProp_bCloseLevel_SetBit(void* Obj)
{
	((LGameInst_eventK2_SaveSubLevel_Parms*)Obj)->bCloseLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::NewProp_bCloseLevel = { "bCloseLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventK2_SaveSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::NewProp_bCloseLevel_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::NewProp_bSaveSlotFile_SetBit(void* Obj)
{
	((LGameInst_eventK2_SaveSubLevel_Parms*)Obj)->bSaveSlotFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::NewProp_bSaveSlotFile = { "bSaveSlotFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventK2_SaveSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::NewProp_bSaveSlotFile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::NewProp_bCloseLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::NewProp_bSaveSlotFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "K2_SaveSubLevel", Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::PropPointers), sizeof(LGameInst_eventK2_SaveSubLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LGameInst_eventK2_SaveSubLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ULGameInst Function K2_SaveSubLevel ****************************************

// ********** Begin Class ULGameInst Function K2_ShowLoadingScreen *********************************
struct LGameInst_eventK2_ShowLoadingScreen_Parms
{
	FName LevelName;
};
static FName NAME_ULGameInst_K2_ShowLoadingScreen = FName(TEXT("K2_ShowLoadingScreen"));
void ULGameInst::K2_ShowLoadingScreen(FName LevelName)
{
	LGameInst_eventK2_ShowLoadingScreen_Parms Parms;
	Parms.LevelName=LevelName;
	UFunction* Func = FindFunctionChecked(NAME_ULGameInst_K2_ShowLoadingScreen);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "ShowLoadingScreen" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventK2_ShowLoadingScreen_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "K2_ShowLoadingScreen", Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics::PropPointers), sizeof(LGameInst_eventK2_ShowLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LGameInst_eventK2_ShowLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ULGameInst Function K2_ShowLoadingScreen ***********************************

// ********** Begin Class ULGameInst Function LoadSubLevel *****************************************
struct Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics
{
	struct LGameInst_eventLoadSubLevel_Parms
	{
		TSoftObjectPtr<UWorld> Level;
		bool bReadSlotFile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa0\xe8\xbd\xbd\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static void NewProp_bReadSlotFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadSlotFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventLoadSubLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::NewProp_bReadSlotFile_SetBit(void* Obj)
{
	((LGameInst_eventLoadSubLevel_Parms*)Obj)->bReadSlotFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::NewProp_bReadSlotFile = { "bReadSlotFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventLoadSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::NewProp_bReadSlotFile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::NewProp_bReadSlotFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "LoadSubLevel", Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::LGameInst_eventLoadSubLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::LGameInst_eventLoadSubLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_LoadSubLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_LoadSubLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execLoadSubLevel)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UWorld>,Z_Param_Out_Level);
	P_GET_UBOOL(Z_Param_bReadSlotFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSubLevel(Z_Param_Out_Level,Z_Param_bReadSlotFile);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function LoadSubLevel *******************************************

// ********** Begin Class ULGameInst Function OnClear **********************************************
struct Z_Construct_UFunction_ULGameInst_OnClear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb8\x85\xe7\x90\x86\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\x85\xe7\x90\x86" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_OnClear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "OnClear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_OnClear_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_OnClear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULGameInst_OnClear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_OnClear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execOnClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClear();
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function OnClear ************************************************

// ********** Begin Class ULGameInst Function OpenGameMainLevel ************************************
struct Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics
{
	struct LGameInst_eventOpenGameMainLevel_Parms
	{
		TSoftObjectPtr<UWorld> Level;
		FString Options;
		EEnterGameMode NewEnterGameMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x89\x93\xe5\xbc\x80\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xbb\xe5\x85\xb3\xe5\x8d\xa1\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x93\xe5\xbc\x80\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xbb\xe5\x85\xb3\xe5\x8d\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewEnterGameMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewEnterGameMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventOpenGameMainLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventOpenGameMainLevel_Parms, Options), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::NewProp_NewEnterGameMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::NewProp_NewEnterGameMode = { "NewEnterGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventOpenGameMainLevel_Parms, NewEnterGameMode), Z_Construct_UEnum_LQuickFrame_EEnterGameMode, METADATA_PARAMS(0, nullptr) }; // 3800196191
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::NewProp_NewEnterGameMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::NewProp_NewEnterGameMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "OpenGameMainLevel", Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::LGameInst_eventOpenGameMainLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::LGameInst_eventOpenGameMainLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_OpenGameMainLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_OpenGameMainLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execOpenGameMainLevel)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_Level);
	P_GET_PROPERTY(FStrProperty,Z_Param_Options);
	P_GET_ENUM(EEnterGameMode,Z_Param_NewEnterGameMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenGameMainLevel(Z_Param_Level,Z_Param_Options,EEnterGameMode(Z_Param_NewEnterGameMode));
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function OpenGameMainLevel **************************************

// ********** Begin Class ULGameInst Function PauseGamePlay ****************************************
struct Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics
{
	struct LGameInst_eventPauseGamePlay_Parms
	{
		bool bPauseGame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe6\x9a\x82\xe5\x81\x9c\xe6\x88\x96\xe6\x81\xa2\xe5\xa4\x8d\n" },
#endif
		{ "CPP_Default_bPauseGame", "true" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe6\x9a\x82\xe5\x81\x9c\xe6\x88\x96\xe6\x81\xa2\xe5\xa4\x8d" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPauseGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::NewProp_bPauseGame_SetBit(void* Obj)
{
	((LGameInst_eventPauseGamePlay_Parms*)Obj)->bPauseGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::NewProp_bPauseGame = { "bPauseGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventPauseGamePlay_Parms), &Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::NewProp_bPauseGame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::NewProp_bPauseGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "PauseGamePlay", Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::LGameInst_eventPauseGamePlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::LGameInst_eventPauseGamePlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_PauseGamePlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_PauseGamePlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execPauseGamePlay)
{
	P_GET_UBOOL(Z_Param_bPauseGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseGamePlay(Z_Param_bPauseGame);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function PauseGamePlay ******************************************

// ********** Begin Class ULGameInst Function PutToPool ********************************************
struct Z_Construct_UFunction_ULGameInst_PutToPool_Statics
{
	struct LGameInst_eventPutToPool_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LGameInst" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa0\xe5\x85\xa5""Actor \xe5\x88\xb0\xe5\x86\x85\xe5\xad\x98\xe6\xb1\xa0(AI\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe6\x8a\x8aPawn\xe5\x8a\xa0\xe5\x85\xa5\xe5\x88\xb0\xe5\x86\x85\xe5\xad\x98\xe6\xb1\xa0)\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe5\x85\xa5""Actor \xe5\x88\xb0\xe5\x86\x85\xe5\xad\x98\xe6\xb1\xa0(AI\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe6\x8a\x8aPawn\xe5\x8a\xa0\xe5\x85\xa5\xe5\x88\xb0\xe5\x86\x85\xe5\xad\x98\xe6\xb1\xa0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameInst_PutToPool_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventPutToPool_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_PutToPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_PutToPool_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_PutToPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_PutToPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "PutToPool", Z_Construct_UFunction_ULGameInst_PutToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_PutToPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_PutToPool_Statics::LGameInst_eventPutToPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_PutToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_PutToPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_PutToPool_Statics::LGameInst_eventPutToPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_PutToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_PutToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execPutToPool)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PutToPool(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function PutToPool **********************************************

// ********** Begin Class ULGameInst Function RemoveAllPoolByLevel *********************************
struct Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics
{
	struct LGameInst_eventRemoveAllPoolByLevel_Parms
	{
		FName LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\xbb\xe9\x99\xa4\xe6\x89\x80\xe6\x9c\x89\xe5\xaf\xb9\xe5\xba\x94\xe5\x85\xb3\xe5\x8d\xa1\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe6\x89\x80\xe6\x9c\x89\xe5\xaf\xb9\xe5\xba\x94\xe5\x85\xb3\xe5\x8d\xa1\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventRemoveAllPoolByLevel_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "RemoveAllPoolByLevel", Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::LGameInst_eventRemoveAllPoolByLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::LGameInst_eventRemoveAllPoolByLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execRemoveAllPoolByLevel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllPoolByLevel(Z_Param_LevelName);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function RemoveAllPoolByLevel ***********************************

// ********** Begin Class ULGameInst Function SaveSubLevel *****************************************
struct Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics
{
	struct LGameInst_eventSaveSubLevel_Parms
	{
		TSoftObjectPtr<UWorld> Level;
		bool bCloseLevel;
		bool bSaveSlotFile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbf\x9d\xe5\xad\x98\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static void NewProp_bCloseLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseLevel;
	static void NewProp_bSaveSlotFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveSlotFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventSaveSubLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::NewProp_bCloseLevel_SetBit(void* Obj)
{
	((LGameInst_eventSaveSubLevel_Parms*)Obj)->bCloseLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::NewProp_bCloseLevel = { "bCloseLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventSaveSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::NewProp_bCloseLevel_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::NewProp_bSaveSlotFile_SetBit(void* Obj)
{
	((LGameInst_eventSaveSubLevel_Parms*)Obj)->bSaveSlotFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::NewProp_bSaveSlotFile = { "bSaveSlotFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventSaveSubLevel_Parms), &Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::NewProp_bSaveSlotFile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::NewProp_bCloseLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::NewProp_bSaveSlotFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "SaveSubLevel", Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::LGameInst_eventSaveSubLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::LGameInst_eventSaveSubLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_SaveSubLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_SaveSubLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execSaveSubLevel)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UWorld>,Z_Param_Out_Level);
	P_GET_UBOOL(Z_Param_bCloseLevel);
	P_GET_UBOOL(Z_Param_bSaveSlotFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveSubLevel(Z_Param_Out_Level,Z_Param_bCloseLevel,Z_Param_bSaveSlotFile);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function SaveSubLevel *******************************************

// ********** Begin Class ULGameInst Function SetGamePlaySpeed *************************************
struct Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics
{
	struct LGameInst_eventSetGamePlaySpeed_Parms
	{
		int32 InSpeedIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSpeedIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::NewProp_InSpeedIndex = { "InSpeedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventSetGamePlaySpeed_Parms, InSpeedIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LGameInst_eventSetGamePlaySpeed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventSetGamePlaySpeed_Parms), &Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::NewProp_InSpeedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "SetGamePlaySpeed", Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::LGameInst_eventSetGamePlaySpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::LGameInst_eventSetGamePlaySpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execSetGamePlaySpeed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InSpeedIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetGamePlaySpeed(Z_Param_InSpeedIndex);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function SetGamePlaySpeed ***************************************

// ********** Begin Class ULGameInst Function SetOpenLoadingState **********************************
struct Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics
{
	struct LGameInst_eventSetOpenLoadingState_Parms
	{
		bool bNewLoadingState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewLoadingState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLoadingState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::NewProp_bNewLoadingState_SetBit(void* Obj)
{
	((LGameInst_eventSetOpenLoadingState_Parms*)Obj)->bNewLoadingState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::NewProp_bNewLoadingState = { "bNewLoadingState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LGameInst_eventSetOpenLoadingState_Parms), &Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::NewProp_bNewLoadingState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::NewProp_bNewLoadingState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "SetOpenLoadingState", Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::LGameInst_eventSetOpenLoadingState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::LGameInst_eventSetOpenLoadingState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_SetOpenLoadingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_SetOpenLoadingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execSetOpenLoadingState)
{
	P_GET_UBOOL(Z_Param_bNewLoadingState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOpenLoadingState(Z_Param_bNewLoadingState);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function SetOpenLoadingState ************************************

// ********** Begin Class ULGameInst Function ShowLoadingScreen ************************************
struct Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics
{
	struct LGameInst_eventShowLoadingScreen_Parms
	{
		FName LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xbe\xe7\xa4\xbaloading \xe7\x95\x8c\xe9\x9d\xa2\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xbaloading \xe7\x95\x8c\xe9\x9d\xa2" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameInst_eventShowLoadingScreen_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameInst, nullptr, "ShowLoadingScreen", Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::LGameInst_eventShowLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::LGameInst_eventShowLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameInst_ShowLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameInst_ShowLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameInst::execShowLoadingScreen)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowLoadingScreen(Z_Param_LevelName);
	P_NATIVE_END;
}
// ********** End Class ULGameInst Function ShowLoadingScreen **************************************

// ********** Begin Class ULGameInst ***************************************************************
void ULGameInst::StaticRegisterNativesULGameInst()
{
	UClass* Class = ULGameInst::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AfterSaveLevelAndBeforeSaveLevel", &ULGameInst::execAfterSaveLevelAndBeforeSaveLevel },
		{ "ChangeSubLevel", &ULGameInst::execChangeSubLevel },
		{ "CheckLowerThanVersion", &ULGameInst::execCheckLowerThanVersion },
		{ "CloseLoadingScreen", &ULGameInst::execCloseLoadingScreen },
		{ "CloseSubLevel", &ULGameInst::execCloseSubLevel },
		{ "GetActor", &ULGameInst::execGetActor },
		{ "GetCurLevel", &ULGameInst::execGetCurLevel },
		{ "GetGamePlaySpeed", &ULGameInst::execGetGamePlaySpeed },
		{ "GetGamePlaySpeedIndex", &ULGameInst::execGetGamePlaySpeedIndex },
		{ "GetPawn", &ULGameInst::execGetPawn },
		{ "LoadSubLevel", &ULGameInst::execLoadSubLevel },
		{ "OnClear", &ULGameInst::execOnClear },
		{ "OpenGameMainLevel", &ULGameInst::execOpenGameMainLevel },
		{ "PauseGamePlay", &ULGameInst::execPauseGamePlay },
		{ "PutToPool", &ULGameInst::execPutToPool },
		{ "RemoveAllPoolByLevel", &ULGameInst::execRemoveAllPoolByLevel },
		{ "SaveSubLevel", &ULGameInst::execSaveSubLevel },
		{ "SetGamePlaySpeed", &ULGameInst::execSetGamePlaySpeed },
		{ "SetOpenLoadingState", &ULGameInst::execSetOpenLoadingState },
		{ "ShowLoadingScreen", &ULGameInst::execShowLoadingScreen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULGameInst;
UClass* ULGameInst::GetPrivateStaticClass()
{
	using TClass = ULGameInst;
	if (!Z_Registration_Info_UClass_ULGameInst.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LGameInst"),
			Z_Registration_Info_UClass_ULGameInst.InnerSingleton,
			StaticRegisterNativesULGameInst,
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
	return Z_Registration_Info_UClass_ULGameInst.InnerSingleton;
}
UClass* Z_Construct_UClass_ULGameInst_NoRegister()
{
	return ULGameInst::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULGameInst_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mode/LGameInst.h" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamePlaySpeed_MetaData[] = {
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurGamePlaySpeedIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe6\xb8\xb8\xe6\x88\x8f\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\xb8\xb8\xe6\x88\x8f\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackGamePlaySpeedIndex_MetaData[] = {
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpenLoading_MetaData[] = {
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurSubLevel_MetaData[] = {
		{ "Category", "LGameInst" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe7\x9a\x84\xe6\x89\x80\xe5\x9c\xa8\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe7\x9a\x84\xe6\x89\x80\xe5\x9c\xa8\xe5\xad\x90\xe5\x85\xb3\xe5\x8d\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterGameMode_MetaData[] = {
		{ "Category", "LGameInst" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbf\x9b\xe5\x85\xa5\xe6\xb8\xb8\xe6\x88\x8f\xe7\x9a\x84\xe6\xa8\xa1\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9b\xe5\x85\xa5\xe6\xb8\xb8\xe6\x88\x8f\xe7\x9a\x84\xe6\xa8\xa1\xe5\xbc\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateGamePlaySpeed_MetaData[] = {
		{ "Category", "LGameInst" },
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[] = {
		{ "Category", "LGameInst" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameInst.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamePlaySpeed_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GamePlaySpeed_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GamePlaySpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurGamePlaySpeedIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BackGamePlaySpeedIndex;
	static void NewProp_bOpenLoading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenLoading;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CurSubLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnterGameMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnterGameMode;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateGamePlaySpeed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULGameInst_AfterSaveLevelAndBeforeSaveLevel, "AfterSaveLevelAndBeforeSaveLevel" }, // 2658407028
		{ &Z_Construct_UFunction_ULGameInst_ChangeSubLevel, "ChangeSubLevel" }, // 1750926979
		{ &Z_Construct_UFunction_ULGameInst_CheckLowerThanVersion, "CheckLowerThanVersion" }, // 3028694000
		{ &Z_Construct_UFunction_ULGameInst_CloseLoadingScreen, "CloseLoadingScreen" }, // 706997871
		{ &Z_Construct_UFunction_ULGameInst_CloseSubLevel, "CloseSubLevel" }, // 413945619
		{ &Z_Construct_UFunction_ULGameInst_GetActor, "GetActor" }, // 630827833
		{ &Z_Construct_UFunction_ULGameInst_GetCurLevel, "GetCurLevel" }, // 2493913133
		{ &Z_Construct_UFunction_ULGameInst_GetGamePlaySpeed, "GetGamePlaySpeed" }, // 2778709592
		{ &Z_Construct_UFunction_ULGameInst_GetGamePlaySpeedIndex, "GetGamePlaySpeedIndex" }, // 1675028580
		{ &Z_Construct_UFunction_ULGameInst_GetPawn, "GetPawn" }, // 2490585483
		{ &Z_Construct_UFunction_ULGameInst_K2_ChangeSubLevel, "K2_ChangeSubLevel" }, // 1214686125
		{ &Z_Construct_UFunction_ULGameInst_K2_CloseLoadingScreen, "K2_CloseLoadingScreen" }, // 2374367104
		{ &Z_Construct_UFunction_ULGameInst_K2_CloseSubLevel, "K2_CloseSubLevel" }, // 3474434145
		{ &Z_Construct_UFunction_ULGameInst_K2_LoadSubLevel, "K2_LoadSubLevel" }, // 4254394834
		{ &Z_Construct_UFunction_ULGameInst_K2_SaveSubLevel, "K2_SaveSubLevel" }, // 1127885077
		{ &Z_Construct_UFunction_ULGameInst_K2_ShowLoadingScreen, "K2_ShowLoadingScreen" }, // 248507129
		{ &Z_Construct_UFunction_ULGameInst_LoadSubLevel, "LoadSubLevel" }, // 808951923
		{ &Z_Construct_UFunction_ULGameInst_OnClear, "OnClear" }, // 1376409713
		{ &Z_Construct_UFunction_ULGameInst_OpenGameMainLevel, "OpenGameMainLevel" }, // 573953107
		{ &Z_Construct_UFunction_ULGameInst_PauseGamePlay, "PauseGamePlay" }, // 1082547335
		{ &Z_Construct_UFunction_ULGameInst_PutToPool, "PutToPool" }, // 1683200495
		{ &Z_Construct_UFunction_ULGameInst_RemoveAllPoolByLevel, "RemoveAllPoolByLevel" }, // 1357930494
		{ &Z_Construct_UFunction_ULGameInst_SaveSubLevel, "SaveSubLevel" }, // 1996845965
		{ &Z_Construct_UFunction_ULGameInst_SetGamePlaySpeed, "SetGamePlaySpeed" }, // 1207401075
		{ &Z_Construct_UFunction_ULGameInst_SetOpenLoadingState, "SetOpenLoadingState" }, // 2594396294
		{ &Z_Construct_UFunction_ULGameInst_ShowLoadingScreen, "ShowLoadingScreen" }, // 2846415652
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGameInst>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_GamePlaySpeed_ValueProp = { "GamePlaySpeed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_GamePlaySpeed_Key_KeyProp = { "GamePlaySpeed_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_GamePlaySpeed = { "GamePlaySpeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULGameInst, GamePlaySpeed), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamePlaySpeed_MetaData), NewProp_GamePlaySpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_CurGamePlaySpeedIndex = { "CurGamePlaySpeedIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULGameInst, CurGamePlaySpeedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurGamePlaySpeedIndex_MetaData), NewProp_CurGamePlaySpeedIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_BackGamePlaySpeedIndex = { "BackGamePlaySpeedIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULGameInst, BackGamePlaySpeedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackGamePlaySpeedIndex_MetaData), NewProp_BackGamePlaySpeedIndex_MetaData) };
void Z_Construct_UClass_ULGameInst_Statics::NewProp_bOpenLoading_SetBit(void* Obj)
{
	((ULGameInst*)Obj)->bOpenLoading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_bOpenLoading = { "bOpenLoading", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULGameInst), &Z_Construct_UClass_ULGameInst_Statics::NewProp_bOpenLoading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpenLoading_MetaData), NewProp_bOpenLoading_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_CurSubLevel = { "CurSubLevel", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULGameInst, CurSubLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurSubLevel_MetaData), NewProp_CurSubLevel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_EnterGameMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_EnterGameMode = { "EnterGameMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULGameInst, EnterGameMode), Z_Construct_UEnum_LQuickFrame_EEnterGameMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterGameMode_MetaData), NewProp_EnterGameMode_MetaData) }; // 3800196191
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_OnUpdateGamePlaySpeed = { "OnUpdateGamePlaySpeed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULGameInst, OnUpdateGamePlaySpeed), Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpdateGamePlaySpeed_MetaData), NewProp_OnUpdateGamePlaySpeed_MetaData) }; // 2417885335
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULGameInst_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULGameInst, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGameInst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_GamePlaySpeed_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_GamePlaySpeed_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_GamePlaySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_CurGamePlaySpeedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_BackGamePlaySpeedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_bOpenLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_CurSubLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_EnterGameMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_EnterGameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_OnUpdateGamePlaySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameInst_Statics::NewProp_GameVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULGameInst_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULGameInst_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULGameInst_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULGameInst_Statics::ClassParams = {
	&ULGameInst::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULGameInst_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULGameInst_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULGameInst_Statics::Class_MetaDataParams), Z_Construct_UClass_ULGameInst_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULGameInst()
{
	if (!Z_Registration_Info_UClass_ULGameInst.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULGameInst.OuterSingleton, Z_Construct_UClass_ULGameInst_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULGameInst.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULGameInst);
ULGameInst::~ULGameInst() {}
// ********** End Class ULGameInst *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULGameInst, ULGameInst::StaticClass, TEXT("ULGameInst"), &Z_Registration_Info_UClass_ULGameInst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULGameInst), 918974520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h__Script_LQuickFrame_3911440822(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameInst_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
