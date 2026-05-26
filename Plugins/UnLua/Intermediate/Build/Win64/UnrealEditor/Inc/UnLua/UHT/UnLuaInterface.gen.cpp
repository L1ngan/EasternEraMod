// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnLuaInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface();
UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnLua();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UUnLuaInterface Function GetModuleName *******************************
struct UnLuaInterface_eventGetModuleName_Parms
{
	FString ReturnValue;
};
FString IUnLuaInterface::GetModuleName() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetModuleName instead.");
	UnLuaInterface_eventGetModuleName_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UUnLuaInterface_GetModuleName = FName(TEXT("GetModuleName"));
FString IUnLuaInterface::Execute_GetModuleName(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UUnLuaInterface::StaticClass()));
	UnLuaInterface_eventGetModuleName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UUnLuaInterface_GetModuleName);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IUnLuaInterface*)(O->GetNativeInterfaceAddress(UUnLuaInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetModuleName_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'\n     */" },
#endif
		{ "ModuleRelativePath", "Public/UnLuaInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnLuaInterface_eventGetModuleName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnLuaInterface, nullptr, "GetModuleName", Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::PropPointers), sizeof(UnLuaInterface_eventGetModuleName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UnLuaInterface_eventGetModuleName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnLuaInterface_GetModuleName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IUnLuaInterface::execGetModuleName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetModuleName_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UUnLuaInterface Function GetModuleName *********************************

// ********** Begin Interface UUnLuaInterface ******************************************************
void UUnLuaInterface::StaticRegisterNativesUUnLuaInterface()
{
	UClass* Class = UUnLuaInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetModuleName", &IUnLuaInterface::execGetModuleName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnLuaInterface;
UClass* UUnLuaInterface::GetPrivateStaticClass()
{
	using TClass = UUnLuaInterface;
	if (!Z_Registration_Info_UClass_UUnLuaInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnLuaInterface"),
			Z_Registration_Info_UClass_UUnLuaInterface.InnerSingleton,
			StaticRegisterNativesUUnLuaInterface,
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
	return Z_Registration_Info_UClass_UUnLuaInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister()
{
	return UUnLuaInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnLuaInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaInterface_GetModuleName, "GetModuleName" }, // 2723710213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUnLuaInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnLuaInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaInterface_Statics::ClassParams = {
	&UUnLuaInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnLuaInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnLuaInterface()
{
	if (!Z_Registration_Info_UClass_UUnLuaInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaInterface.OuterSingleton, Z_Construct_UClass_UUnLuaInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnLuaInterface.OuterSingleton;
}
UUnLuaInterface::UUnLuaInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaInterface);
// ********** End Interface UUnLuaInterface ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h__Script_UnLua_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaInterface, UUnLuaInterface::StaticClass, TEXT("UUnLuaInterface"), &Z_Registration_Info_UClass_UUnLuaInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaInterface), 3862883213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h__Script_UnLua_1977518425(TEXT("/Script/UnLua"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h__Script_UnLua_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h__Script_UnLua_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
