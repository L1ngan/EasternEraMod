// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Mode/LGameRoleMng.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLGameRoleMng() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULActorComp();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameRoleMng();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULGameRoleMng_NoRegister();
LQUICKFRAME_API UFunction* Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRegistedRoleChange *************************************************
struct Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics
{
	struct _Script_LQuickFrame_eventOnRegistedRoleChange_Parms
	{
		FGuid Id;
		bool bRegist;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/LGameRoleMng.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static void NewProp_bRegist_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegist;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LQuickFrame_eventOnRegistedRoleChange_Parms, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::NewProp_bRegist_SetBit(void* Obj)
{
	((_Script_LQuickFrame_eventOnRegistedRoleChange_Parms*)Obj)->bRegist = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::NewProp_bRegist = { "bRegist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LQuickFrame_eventOnRegistedRoleChange_Parms), &Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::NewProp_bRegist_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::NewProp_bRegist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LQuickFrame, nullptr, "OnRegistedRoleChange__DelegateSignature", Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::_Script_LQuickFrame_eventOnRegistedRoleChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::_Script_LQuickFrame_eventOnRegistedRoleChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRegistedRoleChange_DelegateWrapper(const FMulticastScriptDelegate& OnRegistedRoleChange, FGuid Id, bool bRegist)
{
	struct _Script_LQuickFrame_eventOnRegistedRoleChange_Parms
	{
		FGuid Id;
		bool bRegist;
	};
	_Script_LQuickFrame_eventOnRegistedRoleChange_Parms Parms;
	Parms.Id=Id;
	Parms.bRegist=bRegist ? true : false;
	OnRegistedRoleChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRegistedRoleChange ***************************************************

// ********** Begin Class ULGameRoleMng Function FindRole ******************************************
struct Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics
{
	struct LGameRoleMng_eventFindRole_Parms
	{
		FGuid ID;
		TSubclassOf<AController> Class;
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameRoleMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09//\xe6\xb3\xa8\xe5\x86\x8cPawn\n\x09UFUNCTION(BlueprintCallable, Category = \"GameRoleMng\")\n\x09void RegistRole(AController* AI, FGuid ID);\n\x09//\xe5\x8f\x96\xe6\xb6\x88\xe7\xb1\xbb\xe5\x9e\x8bPawn\n\x09UFUNCTION(BlueprintCallable, Category = \"GameRoleMng\")\n\x09void UnRegistRole(FGuid ID);\n\x09*///\xe6\x9f\xa5\xe6\x89\xbe""AI\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameRoleMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//\xe6\xb3\xa8\xe5\x86\x8cPawn\nUFUNCTION(BlueprintCallable, Category = \"GameRoleMng\")\nvoid RegistRole(AController* AI, FGuid ID);\n//\xe5\x8f\x96\xe6\xb6\x88\xe7\xb1\xbb\xe5\x9e\x8bPawn\nUFUNCTION(BlueprintCallable, Category = \"GameRoleMng\")\nvoid UnRegistRole(FGuid ID);\n//\xe6\x9f\xa5\xe6\x89\xbe""AI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameRoleMng_eventFindRole_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameRoleMng_eventFindRole_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameRoleMng_eventFindRole_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameRoleMng, nullptr, "FindRole", Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::LGameRoleMng_eventFindRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::LGameRoleMng_eventFindRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameRoleMng_FindRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameRoleMng_FindRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameRoleMng::execFindRole)
{
	P_GET_STRUCT(FGuid,Z_Param_ID);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->FindRole(Z_Param_ID,Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULGameRoleMng Function FindRole ********************************************

// ********** Begin Class ULGameRoleMng Function GetAllRoles ***************************************
struct Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics
{
	struct LGameRoleMng_eventGetAllRoles_Parms
	{
		TSubclassOf<AController> Class;
		TArray<AController*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameRoleMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9f\xa5\xe6\x89\xbe\xe6\x89\x80\xe6\x9c\x89""AI\n" },
#endif
		{ "CPP_Default_Class", "None" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Mode/LGameRoleMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9f\xa5\xe6\x89\xbe\xe6\x89\x80\xe6\x9c\x89""AI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameRoleMng_eventGetAllRoles_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameRoleMng_eventGetAllRoles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameRoleMng, nullptr, "GetAllRoles", Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::LGameRoleMng_eventGetAllRoles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::LGameRoleMng_eventGetAllRoles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameRoleMng_GetAllRoles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameRoleMng_GetAllRoles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameRoleMng::execGetAllRoles)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AController*>*)Z_Param__Result=P_THIS->GetAllRoles(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class ULGameRoleMng Function GetAllRoles *****************************************

// ********** Begin Class ULGameRoleMng Function RegistRole ****************************************
struct Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics
{
	struct LGameRoleMng_eventRegistRole_Parms
	{
		AController* AI;
		FGuid ID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameRoleMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb3\xa8\xe5\x86\x8c""AI\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameRoleMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\xa8\xe5\x86\x8c""AI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::NewProp_AI = { "AI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameRoleMng_eventRegistRole_Parms, AI), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameRoleMng_eventRegistRole_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::NewProp_AI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameRoleMng, nullptr, "RegistRole", Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::LGameRoleMng_eventRegistRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::LGameRoleMng_eventRegistRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameRoleMng_RegistRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameRoleMng_RegistRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameRoleMng::execRegistRole)
{
	P_GET_OBJECT(AController,Z_Param_AI);
	P_GET_STRUCT(FGuid,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegistRole(Z_Param_AI,Z_Param_ID);
	P_NATIVE_END;
}
// ********** End Class ULGameRoleMng Function RegistRole ******************************************

// ********** Begin Class ULGameRoleMng Function UnRegistRole **************************************
struct Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics
{
	struct LGameRoleMng_eventUnRegistRole_Parms
	{
		FGuid ID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameRoleMng" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x96\xe6\xb6\x88\xe7\xb1\xbb\xe5\x9e\x8b""AI\n" },
#endif
		{ "ModuleRelativePath", "Mode/LGameRoleMng.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x96\xe6\xb6\x88\xe7\xb1\xbb\xe5\x9e\x8b""AI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGameRoleMng_eventUnRegistRole_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULGameRoleMng, nullptr, "UnRegistRole", Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::LGameRoleMng_eventUnRegistRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::LGameRoleMng_eventUnRegistRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGameRoleMng_UnRegistRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGameRoleMng_UnRegistRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGameRoleMng::execUnRegistRole)
{
	P_GET_STRUCT(FGuid,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnRegistRole(Z_Param_ID);
	P_NATIVE_END;
}
// ********** End Class ULGameRoleMng Function UnRegistRole ****************************************

// ********** Begin Class ULGameRoleMng ************************************************************
void ULGameRoleMng::StaticRegisterNativesULGameRoleMng()
{
	UClass* Class = ULGameRoleMng::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindRole", &ULGameRoleMng::execFindRole },
		{ "GetAllRoles", &ULGameRoleMng::execGetAllRoles },
		{ "RegistRole", &ULGameRoleMng::execRegistRole },
		{ "UnRegistRole", &ULGameRoleMng::execUnRegistRole },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULGameRoleMng;
UClass* ULGameRoleMng::GetPrivateStaticClass()
{
	using TClass = ULGameRoleMng;
	if (!Z_Registration_Info_UClass_ULGameRoleMng.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LGameRoleMng"),
			Z_Registration_Info_UClass_ULGameRoleMng.InnerSingleton,
			StaticRegisterNativesULGameRoleMng,
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
	return Z_Registration_Info_UClass_ULGameRoleMng.InnerSingleton;
}
UClass* Z_Construct_UClass_ULGameRoleMng_NoRegister()
{
	return ULGameRoleMng::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULGameRoleMng_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Mode/LGameRoleMng.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Mode/LGameRoleMng.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoleMap_MetaData[] = {
		{ "ModuleRelativePath", "Mode/LGameRoleMng.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnMap_MetaData[] = {
		{ "ModuleRelativePath", "Mode/LGameRoleMng.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRegistedRoleChange_MetaData[] = {
		{ "ModuleRelativePath", "Mode/LGameRoleMng.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoleMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoleMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RoleMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PawnMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PawnMap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRegistedRoleChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULGameRoleMng_FindRole, "FindRole" }, // 2173784850
		{ &Z_Construct_UFunction_ULGameRoleMng_GetAllRoles, "GetAllRoles" }, // 3419632763
		{ &Z_Construct_UFunction_ULGameRoleMng_RegistRole, "RegistRole" }, // 2899821891
		{ &Z_Construct_UFunction_ULGameRoleMng_UnRegistRole, "UnRegistRole" }, // 827788084
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGameRoleMng>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_RoleMap_ValueProp = { "RoleMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_RoleMap_Key_KeyProp = { "RoleMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_RoleMap = { "RoleMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULGameRoleMng, RoleMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoleMap_MetaData), NewProp_RoleMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_PawnMap_ValueProp = { "PawnMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_PawnMap_Key_KeyProp = { "PawnMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_PawnMap = { "PawnMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULGameRoleMng, PawnMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnMap_MetaData), NewProp_PawnMap_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_OnRegistedRoleChange = { "OnRegistedRoleChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULGameRoleMng, OnRegistedRoleChange), Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRegistedRoleChange_MetaData), NewProp_OnRegistedRoleChange_MetaData) }; // 3362053624
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGameRoleMng_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_RoleMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_RoleMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_RoleMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_PawnMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_PawnMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_PawnMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGameRoleMng_Statics::NewProp_OnRegistedRoleChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULGameRoleMng_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULGameRoleMng_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULActorComp,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULGameRoleMng_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULGameRoleMng_Statics::ClassParams = {
	&ULGameRoleMng::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULGameRoleMng_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULGameRoleMng_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULGameRoleMng_Statics::Class_MetaDataParams), Z_Construct_UClass_ULGameRoleMng_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULGameRoleMng()
{
	if (!Z_Registration_Info_UClass_ULGameRoleMng.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULGameRoleMng.OuterSingleton, Z_Construct_UClass_ULGameRoleMng_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULGameRoleMng.OuterSingleton;
}
ULGameRoleMng::ULGameRoleMng(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULGameRoleMng);
ULGameRoleMng::~ULGameRoleMng() {}
// ********** End Class ULGameRoleMng **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULGameRoleMng, ULGameRoleMng::StaticClass, TEXT("ULGameRoleMng"), &Z_Registration_Info_UClass_ULGameRoleMng, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULGameRoleMng), 2227430178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h__Script_LQuickFrame_3897251995(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Mode_LGameRoleMng_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
