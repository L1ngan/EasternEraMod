// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Base/LActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALActor();
LQUICKFRAME_API UClass* Z_Construct_UClass_ALActor_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALActor ******************************************************************
void ALActor::StaticRegisterNativesALActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALActor;
UClass* ALActor::GetPrivateStaticClass()
{
	using TClass = ALActor;
	if (!Z_Registration_Info_UClass_ALActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LActor"),
			Z_Registration_Info_UClass_ALActor.InnerSingleton,
			StaticRegisterNativesALActor,
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
	return Z_Registration_Info_UClass_ALActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ALActor_NoRegister()
{
	return ALActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Base/LActor.h" },
		{ "ModuleRelativePath", "Base/LActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULBaseInterface_NoRegister, (int32)VTABLE_OFFSET(ALActor, ILBaseInterface), false },  // 2677908082
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALActor_Statics::ClassParams = {
	&ALActor::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALActor()
{
	if (!Z_Registration_Info_UClass_ALActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALActor.OuterSingleton, Z_Construct_UClass_ALActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALActor);
ALActor::~ALActor() {}
// ********** End Class ALActor ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALActor, ALActor::StaticClass, TEXT("ALActor"), &Z_Registration_Info_UClass_ALActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALActor), 2131552345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h__Script_LQuickFrame_399360507(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Base_LActor_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
