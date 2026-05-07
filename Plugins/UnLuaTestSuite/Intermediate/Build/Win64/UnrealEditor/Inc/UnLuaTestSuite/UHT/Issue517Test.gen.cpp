// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue517Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue517Test() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue517Actor();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue517Actor_NoRegister();
UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue517Struct();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIssue517Struct ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIssue517Struct;
class UScriptStruct* FIssue517Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue517Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIssue517Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue517Struct, (UObject*)Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue517Struct"));
	}
	return Z_Registration_Info_UScriptStruct_FIssue517Struct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIssue517Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayFromStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayFromStruct_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayFromStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue517Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue517Struct, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue517Struct, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue517Struct, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue517Struct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_Inner = { "ArrayFromStruct", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct = { "ArrayFromStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue517Struct, ArrayFromStruct), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayFromStruct_MetaData), NewProp_ArrayFromStruct_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue517Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	nullptr,
	&NewStructOps,
	"Issue517Struct",
	Z_Construct_UScriptStruct_FIssue517Struct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::PropPointers),
	sizeof(FIssue517Struct),
	alignof(FIssue517Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIssue517Struct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIssue517Struct()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue517Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIssue517Struct.InnerSingleton, Z_Construct_UScriptStruct_FIssue517Struct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIssue517Struct.InnerSingleton;
}
// ********** End ScriptStruct FIssue517Struct *****************************************************

// ********** Begin Class AIssue517Actor ***********************************************************
void AIssue517Actor::StaticRegisterNativesAIssue517Actor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIssue517Actor;
UClass* AIssue517Actor::GetPrivateStaticClass()
{
	using TClass = AIssue517Actor;
	if (!Z_Registration_Info_UClass_AIssue517Actor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Issue517Actor"),
			Z_Registration_Info_UClass_AIssue517Actor.InnerSingleton,
			StaticRegisterNativesAIssue517Actor,
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
	return Z_Registration_Info_UClass_AIssue517Actor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIssue517Actor_NoRegister()
{
	return AIssue517Actor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIssue517Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue517Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayFromActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayFromActor_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayFromActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIssue517Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIssue517Actor, Struct), Z_Construct_UScriptStruct_FIssue517Struct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) }; // 3268364806
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_Inner = { "ArrayFromActor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor = { "ArrayFromActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIssue517Actor, ArrayFromActor), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayFromActor_MetaData), NewProp_ArrayFromActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIssue517Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIssue517Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIssue517Actor_Statics::ClassParams = {
	&AIssue517Actor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIssue517Actor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIssue517Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIssue517Actor()
{
	if (!Z_Registration_Info_UClass_AIssue517Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIssue517Actor.OuterSingleton, Z_Construct_UClass_AIssue517Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIssue517Actor.OuterSingleton;
}
AIssue517Actor::AIssue517Actor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIssue517Actor);
AIssue517Actor::~AIssue517Actor() {}
// ********** End Class AIssue517Actor *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIssue517Struct::StaticStruct, Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewStructOps, TEXT("Issue517Struct"), &Z_Registration_Info_UScriptStruct_FIssue517Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIssue517Struct), 3268364806U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIssue517Actor, AIssue517Actor::StaticClass, TEXT("AIssue517Actor"), &Z_Registration_Info_UClass_AIssue517Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIssue517Actor), 1443773272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h__Script_UnLuaTestSuite_2749409343(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
