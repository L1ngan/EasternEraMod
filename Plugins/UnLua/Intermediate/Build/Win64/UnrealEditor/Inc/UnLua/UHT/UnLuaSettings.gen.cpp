// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnLuaSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
UNLUA_API UClass* Z_Construct_UClass_ULuaEnvLocator_NoRegister();
UNLUA_API UClass* Z_Construct_UClass_ULuaModuleLocator_NoRegister();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaSettings();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLua();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnLuaSettings ***********************************************************
void UUnLuaSettings::StaticRegisterNativesUUnLuaSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaSettings;
UClass* UUnLuaSettings::GetPrivateStaticClass()
{
	using TClass = UUnLuaSettings;
	if (!Z_Registration_Info_UClass_UUnLuaSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaSettings"),
			Z_Registration_Info_UClass_UUnLuaSettings.InnerSingleton,
			StaticRegisterNativesUUnLuaSettings,
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
	return Z_Registration_Info_UClass_UUnLuaSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaSettings_NoRegister()
{
	return UUnLuaSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "UnLua" },
		{ "IncludePath", "UnLuaSettings.h" },
		{ "ModuleRelativePath", "Public/UnLuaSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupModuleName_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entry module name of lua env. Leave it empty to skip execution on startup. */" },
#endif
		{ "ModuleRelativePath", "Public/UnLuaSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry module name of lua env. Leave it empty to skip execution on startup." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadLoopCheck_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prevent from infinite loops in lua. Timeout in seconds. */" },
#endif
		{ "ModuleRelativePath", "Public/UnLuaSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevent from infinite loops in lua. Timeout in seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DanglingCheck_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prevent dangling pointers in lua. */" },
#endif
		{ "ModuleRelativePath", "Public/UnLuaSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevent dangling pointers in lua." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintLuaStackOnSystemError_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to print all Lua env stacks on crash. */" },
#endif
		{ "ModuleRelativePath", "Public/UnLuaSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to print all Lua env stacks on crash." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvLocatorClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class of LuaEnvLocator, which handles lua env locating for each UObject. */" },
#endif
		{ "ModuleRelativePath", "Public/UnLuaSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class of LuaEnvLocator, which handles lua env locating for each UObject." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleLocatorClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Runtime" },
		{ "DisplayName", "LuaModuleLocator" },
		{ "ModuleRelativePath", "Public/UnLuaSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreBindClasses_MetaData[] = {
		{ "AllowAbstract", "True" },
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of classes to bind on startup. */" },
#endif
		{ "DisplayName", "List of classes to bind on startup" },
		{ "MetaClass", "/Script/CoreUObject.Object" },
		{ "ModuleRelativePath", "Public/UnLuaSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of classes to bind on startup." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartupModuleName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeadLoopCheck;
	static void NewProp_DanglingCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DanglingCheck;
	static void NewProp_bPrintLuaStackOnSystemError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintLuaStackOnSystemError;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnvLocatorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModuleLocatorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreBindClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreBindClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_StartupModuleName = { "StartupModuleName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaSettings, StartupModuleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupModuleName_MetaData), NewProp_StartupModuleName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_DeadLoopCheck = { "DeadLoopCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaSettings, DeadLoopCheck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadLoopCheck_MetaData), NewProp_DeadLoopCheck_MetaData) };
void Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_DanglingCheck_SetBit(void* Obj)
{
	((UUnLuaSettings*)Obj)->DanglingCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_DanglingCheck = { "DanglingCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUnLuaSettings), &Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_DanglingCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DanglingCheck_MetaData), NewProp_DanglingCheck_MetaData) };
void Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_bPrintLuaStackOnSystemError_SetBit(void* Obj)
{
	((UUnLuaSettings*)Obj)->bPrintLuaStackOnSystemError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_bPrintLuaStackOnSystemError = { "bPrintLuaStackOnSystemError", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUnLuaSettings), &Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_bPrintLuaStackOnSystemError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintLuaStackOnSystemError_MetaData), NewProp_bPrintLuaStackOnSystemError_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_EnvLocatorClass = { "EnvLocatorClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaSettings, EnvLocatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULuaEnvLocator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvLocatorClass_MetaData), NewProp_EnvLocatorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_ModuleLocatorClass = { "ModuleLocatorClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaSettings, ModuleLocatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULuaModuleLocator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleLocatorClass_MetaData), NewProp_ModuleLocatorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_PreBindClasses_Inner = { "PreBindClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_PreBindClasses = { "PreBindClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnLuaSettings, PreBindClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreBindClasses_MetaData), NewProp_PreBindClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnLuaSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_StartupModuleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_DeadLoopCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_DanglingCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_bPrintLuaStackOnSystemError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_EnvLocatorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_ModuleLocatorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_PreBindClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_PreBindClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnLuaSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaSettings_Statics::ClassParams = {
	&UUnLuaSettings::StaticClass,
	"UnLuaSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUnLuaSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaSettings()
{
	if (!Z_Registration_Info_UClass_UUnLuaSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaSettings.OuterSingleton, Z_Construct_UClass_UUnLuaSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaSettings);
UUnLuaSettings::~UUnLuaSettings() {}
// ********** End Class UUnLuaSettings *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h__Script_UnLua_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaSettings, UUnLuaSettings::StaticClass, TEXT("UUnLuaSettings"), &Z_Registration_Info_UClass_UUnLuaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaSettings), 2649327524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h__Script_UnLua_1242280475(TEXT("/Script/UnLua"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h__Script_UnLua_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaSettings_h__Script_UnLua_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
