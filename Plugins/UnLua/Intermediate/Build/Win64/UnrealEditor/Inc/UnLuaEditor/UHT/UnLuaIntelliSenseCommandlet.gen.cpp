// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Commandlets/UnLuaIntelliSenseCommandlet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnLuaIntelliSenseCommandlet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UNLUAEDITOR_API UClass* Z_Construct_UClass_UUnLuaIntelliSenseCommandlet();
UNLUAEDITOR_API UClass* Z_Construct_UClass_UUnLuaIntelliSenseCommandlet_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnLuaIntelliSenseCommandlet *********************************************
void UUnLuaIntelliSenseCommandlet::StaticRegisterNativesUUnLuaIntelliSenseCommandlet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaIntelliSenseCommandlet;
UClass* UUnLuaIntelliSenseCommandlet::GetPrivateStaticClass()
{
	using TClass = UUnLuaIntelliSenseCommandlet;
	if (!Z_Registration_Info_UClass_UUnLuaIntelliSenseCommandlet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaIntelliSenseCommandlet"),
			Z_Registration_Info_UClass_UUnLuaIntelliSenseCommandlet.InnerSingleton,
			StaticRegisterNativesUUnLuaIntelliSenseCommandlet,
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
	return Z_Registration_Info_UClass_UUnLuaIntelliSenseCommandlet.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaIntelliSenseCommandlet_NoRegister()
{
	return UUnLuaIntelliSenseCommandlet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaIntelliSenseCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/UnLuaIntelliSenseCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/UnLuaIntelliSenseCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaIntelliSenseCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnLuaIntelliSenseCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaIntelliSenseCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaIntelliSenseCommandlet_Statics::ClassParams = {
	&UUnLuaIntelliSenseCommandlet::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaIntelliSenseCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaIntelliSenseCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaIntelliSenseCommandlet()
{
	if (!Z_Registration_Info_UClass_UUnLuaIntelliSenseCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaIntelliSenseCommandlet.OuterSingleton, Z_Construct_UClass_UUnLuaIntelliSenseCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaIntelliSenseCommandlet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaIntelliSenseCommandlet);
UUnLuaIntelliSenseCommandlet::~UUnLuaIntelliSenseCommandlet() {}
// ********** End Class UUnLuaIntelliSenseCommandlet ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Public_Commandlets_UnLuaIntelliSenseCommandlet_h__Script_UnLuaEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaIntelliSenseCommandlet, UUnLuaIntelliSenseCommandlet::StaticClass, TEXT("UUnLuaIntelliSenseCommandlet"), &Z_Registration_Info_UClass_UUnLuaIntelliSenseCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaIntelliSenseCommandlet), 3114661170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Public_Commandlets_UnLuaIntelliSenseCommandlet_h__Script_UnLuaEditor_2434146231(TEXT("/Script/UnLuaEditor"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Public_Commandlets_UnLuaIntelliSenseCommandlet_h__Script_UnLuaEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Public_Commandlets_UnLuaIntelliSenseCommandlet_h__Script_UnLuaEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
