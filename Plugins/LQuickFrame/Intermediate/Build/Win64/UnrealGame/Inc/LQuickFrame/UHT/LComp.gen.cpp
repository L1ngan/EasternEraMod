// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Base/LComp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLComp() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULActorComp();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULActorComp_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULActorComp **************************************************************
void ULActorComp::StaticRegisterNativesULActorComp()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULActorComp;
UClass* ULActorComp::GetPrivateStaticClass()
{
	using TClass = ULActorComp;
	if (!Z_Registration_Info_UClass_ULActorComp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LActorComp"),
			Z_Registration_Info_UClass_ULActorComp.InnerSingleton,
			StaticRegisterNativesULActorComp,
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
	return Z_Registration_Info_UClass_ULActorComp.InnerSingleton;
}
UClass* Z_Construct_UClass_ULActorComp_NoRegister()
{
	return ULActorComp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULActorComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Base/LComp.h" },
		{ "ModuleRelativePath", "Base/LComp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULActorComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULActorComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULActorComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULActorComp_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULBaseInterface_NoRegister, (int32)VTABLE_OFFSET(ULActorComp, ILBaseInterface), false },  // 2677908082
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULActorComp_Statics::ClassParams = {
	&ULActorComp::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULActorComp_Statics::Class_MetaDataParams), Z_Construct_UClass_ULActorComp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULActorComp()
{
	if (!Z_Registration_Info_UClass_ULActorComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULActorComp.OuterSingleton, Z_Construct_UClass_ULActorComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULActorComp.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULActorComp);
ULActorComp::~ULActorComp() {}
// ********** End Class ULActorComp ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h__Script_LQuickFrame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULActorComp, ULActorComp::StaticClass, TEXT("ULActorComp"), &Z_Registration_Info_UClass_ULActorComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULActorComp), 4051596934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h__Script_LQuickFrame_454430609(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LComp_h__Script_LQuickFrame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
