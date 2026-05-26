// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LuaFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLuaFunction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
UNLUA_API UClass* Z_Construct_UClass_ULuaFunction();
UNLUA_API UClass* Z_Construct_UClass_ULuaFunction_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLua();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULuaFunction *************************************************************
void ULuaFunction::StaticRegisterNativesULuaFunction()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULuaFunction;
UClass* ULuaFunction::GetPrivateStaticClass()
{
	using TClass = ULuaFunction;
	if (!Z_Registration_Info_UClass_ULuaFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LuaFunction"),
			Z_Registration_Info_UClass_ULuaFunction.InnerSingleton,
			StaticRegisterNativesULuaFunction,
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
	return Z_Registration_Info_UClass_ULuaFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_ULuaFunction_NoRegister()
{
	return ULuaFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULuaFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LuaFunction.h" },
		{ "ModuleRelativePath", "Public/LuaFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overridden_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// #if UE_VERSION_OLDER_THAN(5, 1, 0)\n//     UPROPERTY()\n//     UFunction* Overridden;\n// #else\n" },
#endif
		{ "ModuleRelativePath", "Public/LuaFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#if UE_VERSION_OLDER_THAN(5, 1, 0)\n    UPROPERTY()\n    UFunction* Overridden;\n#else" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Overridden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULuaFunction_Statics::NewProp_Overridden = { "Overridden", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULuaFunction, Overridden), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overridden_MetaData), NewProp_Overridden_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuaFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaFunction_Statics::NewProp_Overridden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULuaFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFunction,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaFunction_Statics::ClassParams = {
	&ULuaFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULuaFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULuaFunction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULuaFunction()
{
	if (!Z_Registration_Info_UClass_ULuaFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaFunction.OuterSingleton, Z_Construct_UClass_ULuaFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULuaFunction.OuterSingleton;
}
ULuaFunction::ULuaFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaFunction);
ULuaFunction::~ULuaFunction() {}
// ********** End Class ULuaFunction ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h__Script_UnLua_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULuaFunction, ULuaFunction::StaticClass, TEXT("ULuaFunction"), &Z_Registration_Info_UClass_ULuaFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaFunction), 829296952U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h__Script_UnLua_382634178(TEXT("/Script/UnLua"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h__Script_UnLua_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_LuaFunction_h__Script_UnLua_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
