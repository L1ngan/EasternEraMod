// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaEditorFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnLuaEditorFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UNLUAEDITOR_API UClass* Z_Construct_UClass_UUnLuaEditorFunctionLibrary();
UNLUAEDITOR_API UClass* Z_Construct_UClass_UUnLuaEditorFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLuaEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnLuaEditorFunctionLibrary **********************************************
void UUnLuaEditorFunctionLibrary::StaticRegisterNativesUUnLuaEditorFunctionLibrary()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaEditorFunctionLibrary;
UClass* UUnLuaEditorFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UUnLuaEditorFunctionLibrary;
	if (!Z_Registration_Info_UClass_UUnLuaEditorFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaEditorFunctionLibrary"),
			Z_Registration_Info_UClass_UUnLuaEditorFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUUnLuaEditorFunctionLibrary,
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
	return Z_Registration_Info_UClass_UUnLuaEditorFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaEditorFunctionLibrary_NoRegister()
{
	return UUnLuaEditorFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaEditorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnLuaEditorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Private/UnLuaEditorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaEditorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnLuaEditorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLuaEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaEditorFunctionLibrary_Statics::ClassParams = {
	&UUnLuaEditorFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaEditorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaEditorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UUnLuaEditorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUnLuaEditorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaEditorFunctionLibrary.OuterSingleton;
}
UUnLuaEditorFunctionLibrary::UUnLuaEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaEditorFunctionLibrary);
UUnLuaEditorFunctionLibrary::~UUnLuaEditorFunctionLibrary() {}
// ********** End Class UUnLuaEditorFunctionLibrary ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h__Script_UnLuaEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaEditorFunctionLibrary, UUnLuaEditorFunctionLibrary::StaticClass, TEXT("UUnLuaEditorFunctionLibrary"), &Z_Registration_Info_UClass_UUnLuaEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaEditorFunctionLibrary), 1839531007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h__Script_UnLuaEditor_222330765(TEXT("/Script/UnLuaEditor"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h__Script_UnLuaEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h__Script_UnLuaEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
