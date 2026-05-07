// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue556Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue556Test() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue556Actor();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue556Actor_NoRegister();
UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FHexHandle();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FHexHandle ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHexHandle;
class UScriptStruct* FHexHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHexHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHexHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHexHandle, (UObject*)Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("HexHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FHexHandle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHexHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHexHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexHandle, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHexHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHexHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	nullptr,
	&NewStructOps,
	"HexHandle",
	Z_Construct_UScriptStruct_FHexHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexHandle_Statics::PropPointers),
	sizeof(FHexHandle),
	alignof(FHexHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHexHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHexHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FHexHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHexHandle.InnerSingleton, Z_Construct_UScriptStruct_FHexHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHexHandle.InnerSingleton;
}
// ********** End ScriptStruct FHexHandle **********************************************************

// ********** Begin Class AIssue556Actor Function PlayerViewChanged ********************************
struct Issue556Actor_eventPlayerViewChanged_Parms
{
	TArray<FHexHandle> AddHexHandles;
	TArray<FHexHandle> RemoveHexHandles;
};
static FName NAME_AIssue556Actor_PlayerViewChanged = FName(TEXT("PlayerViewChanged"));
void AIssue556Actor::PlayerViewChanged(TArray<FHexHandle> const& AddHexHandles, TArray<FHexHandle> const& RemoveHexHandles)
{
	Issue556Actor_eventPlayerViewChanged_Parms Parms;
	Parms.AddHexHandles=AddHexHandles;
	Parms.RemoveHexHandles=RemoveHexHandles;
	UFunction* Func = FindFunctionChecked(NAME_AIssue556Actor_PlayerViewChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddHexHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveHexHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddHexHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddHexHandles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveHexHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoveHexHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_Inner = { "AddHexHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHexHandle, METADATA_PARAMS(0, nullptr) }; // 2689047295
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles = { "AddHexHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Issue556Actor_eventPlayerViewChanged_Parms, AddHexHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddHexHandles_MetaData), NewProp_AddHexHandles_MetaData) }; // 2689047295
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_Inner = { "RemoveHexHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHexHandle, METADATA_PARAMS(0, nullptr) }; // 2689047295
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles = { "RemoveHexHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Issue556Actor_eventPlayerViewChanged_Parms, RemoveHexHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveHexHandles_MetaData), NewProp_RemoveHexHandles_MetaData) }; // 2689047295
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIssue556Actor, nullptr, "PlayerViewChanged", Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::PropPointers), sizeof(Issue556Actor_eventPlayerViewChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Issue556Actor_eventPlayerViewChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AIssue556Actor Function PlayerViewChanged **********************************

// ********** Begin Class AIssue556Actor ***********************************************************
void AIssue556Actor::StaticRegisterNativesAIssue556Actor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIssue556Actor;
UClass* AIssue556Actor::GetPrivateStaticClass()
{
	using TClass = AIssue556Actor;
	if (!Z_Registration_Info_UClass_AIssue556Actor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Issue556Actor"),
			Z_Registration_Info_UClass_AIssue556Actor.InnerSingleton,
			StaticRegisterNativesAIssue556Actor,
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
	return Z_Registration_Info_UClass_AIssue556Actor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIssue556Actor_NoRegister()
{
	return AIssue556Actor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIssue556Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue556Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged, "PlayerViewChanged" }, // 2614217112
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIssue556Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIssue556Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIssue556Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIssue556Actor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(AIssue556Actor, IUnLuaInterface), false },  // 3862883213
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIssue556Actor_Statics::ClassParams = {
	&AIssue556Actor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIssue556Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIssue556Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIssue556Actor()
{
	if (!Z_Registration_Info_UClass_AIssue556Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIssue556Actor.OuterSingleton, Z_Construct_UClass_AIssue556Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIssue556Actor.OuterSingleton;
}
AIssue556Actor::AIssue556Actor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIssue556Actor);
AIssue556Actor::~AIssue556Actor() {}
// ********** End Class AIssue556Actor *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHexHandle::StaticStruct, Z_Construct_UScriptStruct_FHexHandle_Statics::NewStructOps, TEXT("HexHandle"), &Z_Registration_Info_UScriptStruct_FHexHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHexHandle), 2689047295U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIssue556Actor, AIssue556Actor::StaticClass, TEXT("AIssue556Actor"), &Z_Registration_Info_UClass_AIssue556Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIssue556Actor), 1889494255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h__Script_UnLuaTestSuite_1134987315(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue556Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
