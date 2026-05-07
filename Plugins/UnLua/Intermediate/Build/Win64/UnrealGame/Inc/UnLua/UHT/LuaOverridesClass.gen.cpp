// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LuaOverridesClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLuaOverridesClass() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UNLUA_API UClass* Z_Construct_UClass_ULuaOverridesClass();
UNLUA_API UClass* Z_Construct_UClass_ULuaOverridesClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLua();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULuaOverridesClass *******************************************************
void ULuaOverridesClass::StaticRegisterNativesULuaOverridesClass()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULuaOverridesClass;
UClass* ULuaOverridesClass::GetPrivateStaticClass()
{
	using TClass = ULuaOverridesClass;
	if (!Z_Registration_Info_UClass_ULuaOverridesClass.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LuaOverridesClass"),
			Z_Registration_Info_UClass_ULuaOverridesClass.InnerSingleton,
			StaticRegisterNativesULuaOverridesClass,
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
	return Z_Registration_Info_UClass_ULuaOverridesClass.InnerSingleton;
}
UClass* Z_Construct_UClass_ULuaOverridesClass_NoRegister()
{
	return ULuaOverridesClass::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULuaOverridesClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x94\xa8\xe4\xba\x8e\xe6\x89\xbf\xe8\xbd\xbd\xe6\x89\x80\xe6\x9c\x89\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe8\xa6\x86\xe5\x86\x99\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84ULuaFunction */" },
#endif
		{ "IncludePath", "LuaOverridesClass.h" },
		{ "ModuleRelativePath", "Public/LuaOverridesClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\x89\xbf\xe8\xbd\xbd\xe6\x89\x80\xe6\x9c\x89\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe8\xa6\x86\xe5\x86\x99\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84ULuaFunction" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaOverridesClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULuaOverridesClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClass,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaOverridesClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaOverridesClass_Statics::ClassParams = {
	&ULuaOverridesClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaOverridesClass_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaOverridesClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULuaOverridesClass()
{
	if (!Z_Registration_Info_UClass_ULuaOverridesClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaOverridesClass.OuterSingleton, Z_Construct_UClass_ULuaOverridesClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULuaOverridesClass.OuterSingleton;
}
ULuaOverridesClass::ULuaOverridesClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaOverridesClass);
ULuaOverridesClass::~ULuaOverridesClass() {}
// ********** End Class ULuaOverridesClass *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h__Script_UnLua_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULuaOverridesClass, ULuaOverridesClass::StaticClass, TEXT("ULuaOverridesClass"), &Z_Registration_Info_UClass_ULuaOverridesClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaOverridesClass), 4267091671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h__Script_UnLua_3278123425(TEXT("/Script/UnLua"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h__Script_UnLua_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLua_Public_LuaOverridesClass_h__Script_UnLua_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
