// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Role/LPlayerCtrl.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLPlayerCtrl() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALPlayerCtrl();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALPlayerCtrl_NoRegister();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALPlayerCtrl *************************************************************
void ALPlayerCtrl::StaticRegisterNativesALPlayerCtrl()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALPlayerCtrl;
UClass* ALPlayerCtrl::GetPrivateStaticClass()
{
	using TClass = ALPlayerCtrl;
	if (!Z_Registration_Info_UClass_ALPlayerCtrl.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LPlayerCtrl"),
			Z_Registration_Info_UClass_ALPlayerCtrl.InnerSingleton,
			StaticRegisterNativesALPlayerCtrl,
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
	return Z_Registration_Info_UClass_ALPlayerCtrl.InnerSingleton;
}
UClass* Z_Construct_UClass_ALPlayerCtrl_NoRegister()
{
	return ALPlayerCtrl::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALPlayerCtrl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Role/LPlayerCtrl.h" },
		{ "ModuleRelativePath", "Role/LPlayerCtrl.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALPlayerCtrl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALPlayerCtrl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALPlayerCtrl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALPlayerCtrl_Statics::ClassParams = {
	&ALPlayerCtrl::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALPlayerCtrl_Statics::Class_MetaDataParams), Z_Construct_UClass_ALPlayerCtrl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALPlayerCtrl()
{
	if (!Z_Registration_Info_UClass_ALPlayerCtrl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALPlayerCtrl.OuterSingleton, Z_Construct_UClass_ALPlayerCtrl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALPlayerCtrl.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALPlayerCtrl);
ALPlayerCtrl::~ALPlayerCtrl() {}
// ********** End Class ALPlayerCtrl ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALPlayerCtrl, ALPlayerCtrl::StaticClass, TEXT("ALPlayerCtrl"), &Z_Registration_Info_UClass_ALPlayerCtrl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALPlayerCtrl), 1209576718U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h__Script_LQuickFrame_2921393714(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Role_LPlayerCtrl_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
