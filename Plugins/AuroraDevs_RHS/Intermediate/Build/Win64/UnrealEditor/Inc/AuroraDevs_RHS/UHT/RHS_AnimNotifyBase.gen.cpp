// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RHS_AnimNotifyBase.h"
#include "RHS_Data.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRHS_AnimNotifyBase() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_AnimNotifyBase();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_AnimNotifyBase_NoRegister();
AURORADEVS_RHS_API UScriptStruct* Z_Construct_UScriptStruct_FRHSDebugSettings();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_RHS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URHS_AnimNotifyBase ******************************************************
void URHS_AnimNotifyBase::StaticRegisterNativesURHS_AnimNotifyBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URHS_AnimNotifyBase;
UClass* URHS_AnimNotifyBase::GetPrivateStaticClass()
{
	using TClass = URHS_AnimNotifyBase;
	if (!Z_Registration_Info_UClass_URHS_AnimNotifyBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RHS_AnimNotifyBase"),
			Z_Registration_Info_UClass_URHS_AnimNotifyBase.InnerSingleton,
			StaticRegisterNativesURHS_AnimNotifyBase,
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
	return Z_Registration_Info_UClass_URHS_AnimNotifyBase.InnerSingleton;
}
UClass* Z_Construct_UClass_URHS_AnimNotifyBase_NoRegister()
{
	return URHS_AnimNotifyBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URHS_AnimNotifyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "RHS_AnimNotifyBase.h" },
		{ "ModuleRelativePath", "Public/RHS_AnimNotifyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentSocket_MetaData[] = {
		{ "AnimNotifyBoneName", "true" },
		{ "Category", "Attachment Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parent attachment socket/bone\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_AnimNotifyBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent attachment socket/bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/RHS_AnimNotifyBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentSocket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URHS_AnimNotifyBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URHS_AnimNotifyBase_Statics::NewProp_ParentSocket = { "ParentSocket", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_AnimNotifyBase, ParentSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentSocket_MetaData), NewProp_ParentSocket_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URHS_AnimNotifyBase_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_AnimNotifyBase, DebugSettings), Z_Construct_UScriptStruct_FRHSDebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 4181635107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URHS_AnimNotifyBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_AnimNotifyBase_Statics::NewProp_ParentSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_AnimNotifyBase_Statics::NewProp_DebugSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_AnimNotifyBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URHS_AnimNotifyBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_AnimNotifyBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URHS_AnimNotifyBase_Statics::ClassParams = {
	&URHS_AnimNotifyBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URHS_AnimNotifyBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URHS_AnimNotifyBase_Statics::PropPointers),
	0,
	0x001120A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_AnimNotifyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_URHS_AnimNotifyBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URHS_AnimNotifyBase()
{
	if (!Z_Registration_Info_UClass_URHS_AnimNotifyBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URHS_AnimNotifyBase.OuterSingleton, Z_Construct_UClass_URHS_AnimNotifyBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URHS_AnimNotifyBase.OuterSingleton;
}
URHS_AnimNotifyBase::URHS_AnimNotifyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URHS_AnimNotifyBase);
URHS_AnimNotifyBase::~URHS_AnimNotifyBase() {}
// ********** End Class URHS_AnimNotifyBase ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h__Script_AuroraDevs_RHS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URHS_AnimNotifyBase, URHS_AnimNotifyBase::StaticClass, TEXT("URHS_AnimNotifyBase"), &Z_Registration_Info_UClass_URHS_AnimNotifyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URHS_AnimNotifyBase), 3554631225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h__Script_AuroraDevs_RHS_1878069330(TEXT("/Script/AuroraDevs_RHS"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h__Script_AuroraDevs_RHS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AnimNotifyBase_h__Script_AuroraDevs_RHS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
