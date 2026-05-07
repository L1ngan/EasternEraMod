// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCommonPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COMMONGAME_API UClass* Z_Construct_UClass_ACommonPlayerController();
COMMONGAME_API UClass* Z_Construct_UClass_ACommonPlayerController_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerController();
UPackage* Z_Construct_UPackage__Script_CommonGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACommonPlayerController **************************************************
void ACommonPlayerController::StaticRegisterNativesACommonPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACommonPlayerController;
UClass* ACommonPlayerController::GetPrivateStaticClass()
{
	using TClass = ACommonPlayerController;
	if (!Z_Registration_Info_UClass_ACommonPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CommonPlayerController"),
			Z_Registration_Info_UClass_ACommonPlayerController.InnerSingleton,
			StaticRegisterNativesACommonPlayerController,
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
	return Z_Registration_Info_UClass_ACommonPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACommonPlayerController_NoRegister()
{
	return ACommonPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACommonPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CommonPlayerController.h" },
		{ "ModuleRelativePath", "Public/CommonPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACommonPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACommonPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularPlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACommonPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACommonPlayerController_Statics::ClassParams = {
	&ACommonPlayerController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACommonPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACommonPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACommonPlayerController()
{
	if (!Z_Registration_Info_UClass_ACommonPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACommonPlayerController.OuterSingleton, Z_Construct_UClass_ACommonPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACommonPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACommonPlayerController);
ACommonPlayerController::~ACommonPlayerController() {}
// ********** End Class ACommonPlayerController ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerController_h__Script_CommonGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACommonPlayerController, ACommonPlayerController::StaticClass, TEXT("ACommonPlayerController"), &Z_Registration_Info_UClass_ACommonPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACommonPlayerController), 1716392428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerController_h__Script_CommonGame_2007751258(TEXT("/Script/CommonGame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerController_h__Script_CommonGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CommonGame_Source_Public_CommonPlayerController_h__Script_CommonGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
