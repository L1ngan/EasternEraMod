// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Issue554Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIssue554Test() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue554Class();
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue554Class_NoRegister();
UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue554Struct();
UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIssue554Struct ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIssue554Struct;
class UScriptStruct* FIssue554Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue554Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIssue554Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue554Struct, (UObject*)Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue554Struct"));
	}
	return Z_Registration_Info_UScriptStruct_FIssue554Struct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIssue554Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue554Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue554Struct, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIssue554Struct, Yaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Yaw_MetaData), NewProp_Yaw_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue554Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue554Struct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	nullptr,
	&NewStructOps,
	"Issue554Struct",
	Z_Construct_UScriptStruct_FIssue554Struct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::PropPointers),
	sizeof(FIssue554Struct),
	alignof(FIssue554Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIssue554Struct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIssue554Struct()
{
	if (!Z_Registration_Info_UScriptStruct_FIssue554Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIssue554Struct.InnerSingleton, Z_Construct_UScriptStruct_FIssue554Struct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIssue554Struct.InnerSingleton;
}
// ********** End ScriptStruct FIssue554Struct *****************************************************

// ********** Begin Class UIssue554Class ***********************************************************
void UIssue554Class::StaticRegisterNativesUIssue554Class()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIssue554Class;
UClass* UIssue554Class::GetPrivateStaticClass()
{
	using TClass = UIssue554Class;
	if (!Z_Registration_Info_UClass_UIssue554Class.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Issue554Class"),
			Z_Registration_Info_UClass_UIssue554Class.InnerSingleton,
			StaticRegisterNativesUIssue554Class,
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
	return Z_Registration_Info_UClass_UIssue554Class.InnerSingleton;
}
UClass* Z_Construct_UClass_UIssue554Class_NoRegister()
{
	return UIssue554Class::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIssue554Class_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue554Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssue554Class>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Struct, UIssue554Class), STRUCT_OFFSET(UIssue554Class, Struct), Z_Construct_UScriptStruct_FIssue554Struct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) }; // 2169335431
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIssue554Class_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue554Class_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIssue554Class_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue554Class_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIssue554Class_Statics::ClassParams = {
	&UIssue554Class::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIssue554Class_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIssue554Class_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIssue554Class_Statics::Class_MetaDataParams), Z_Construct_UClass_UIssue554Class_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIssue554Class()
{
	if (!Z_Registration_Info_UClass_UIssue554Class.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIssue554Class.OuterSingleton, Z_Construct_UClass_UIssue554Class_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIssue554Class.OuterSingleton;
}
UIssue554Class::UIssue554Class(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue554Class);
UIssue554Class::~UIssue554Class() {}
// ********** End Class UIssue554Class *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h__Script_UnLuaTestSuite_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIssue554Struct::StaticStruct, Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewStructOps, TEXT("Issue554Struct"), &Z_Registration_Info_UScriptStruct_FIssue554Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIssue554Struct), 2169335431U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIssue554Class, UIssue554Class::StaticClass, TEXT("UIssue554Class"), &Z_Registration_Info_UClass_UIssue554Class, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIssue554Class), 2262425131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h__Script_UnLuaTestSuite_255208738(TEXT("/Script/UnLuaTestSuite"),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h__Script_UnLuaTestSuite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h__Script_UnLuaTestSuite_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue554Test_h__Script_UnLuaTestSuite_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
