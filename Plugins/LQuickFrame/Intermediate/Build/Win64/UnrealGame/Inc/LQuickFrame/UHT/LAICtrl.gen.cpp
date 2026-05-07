// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Role/LAICtrl.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLAICtrl() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALAICtrl();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALAICtrl_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALAICtrl *****************************************************************
void ALAICtrl::StaticRegisterNativesALAICtrl()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALAICtrl;
UClass* ALAICtrl::GetPrivateStaticClass()
{
	using TClass = ALAICtrl;
	if (!Z_Registration_Info_UClass_ALAICtrl.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LAICtrl"),
			Z_Registration_Info_UClass_ALAICtrl.InnerSingleton,
			StaticRegisterNativesALAICtrl,
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
	return Z_Registration_Info_UClass_ALAICtrl.InnerSingleton;
}
UClass* Z_Construct_UClass_ALAICtrl_NoRegister()
{
	return ALAICtrl::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALAICtrl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Role/LAICtrl.h" },
		{ "ModuleRelativePath", "Role/LAICtrl.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALAICtrl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALAICtrl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALAICtrl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALAICtrl_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULBaseInterface_NoRegister, (int32)VTABLE_OFFSET(ALAICtrl, ILBaseInterface), false },  // 2677908082
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALAICtrl_Statics::ClassParams = {
	&ALAICtrl::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALAICtrl_Statics::Class_MetaDataParams), Z_Construct_UClass_ALAICtrl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALAICtrl()
{
	if (!Z_Registration_Info_UClass_ALAICtrl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALAICtrl.OuterSingleton, Z_Construct_UClass_ALAICtrl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALAICtrl.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALAICtrl);
ALAICtrl::~ALAICtrl() {}
// ********** End Class ALAICtrl *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALAICtrl, ALAICtrl::StaticClass, TEXT("ALAICtrl"), &Z_Registration_Info_UClass_ALAICtrl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALAICtrl), 1579938137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h__Script_LQuickFrame_3549428784(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Role_LAICtrl_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
