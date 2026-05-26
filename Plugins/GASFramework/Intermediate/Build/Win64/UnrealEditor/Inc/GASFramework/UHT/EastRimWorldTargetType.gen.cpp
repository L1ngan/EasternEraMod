// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EastRimWorldTargetType.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEastRimWorldTargetType() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GASFRAMEWORK_API UClass* Z_Construct_UClass_UEastRimWorldTargetType();
GASFRAMEWORK_API UClass* Z_Construct_UClass_UEastRimWorldTargetType_NoRegister();
GASFRAMEWORK_API UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseEventData();
GASFRAMEWORK_API UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseEventData_NoRegister();
GASFRAMEWORK_API UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseOwner();
GASFRAMEWORK_API UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseOwner_NoRegister();
GASFRAMEWORK_API UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile();
GASFRAMEWORK_API UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile_NoRegister();
GASFRAMEWORK_API UEnum* Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType();
UPackage* Z_Construct_UPackage__Script_GASFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEastRimWorldTargetType Function GetTargets ******************************
struct EastRimWorldTargetType_eventGetTargets_Parms
{
	AActor* TargetingCharacter;
	AActor* TargetingActor;
	FGameplayEventData EventData;
	TArray<FHitResult> OutHitResults;
	TArray<AActor*> OutActors;
};
static FName NAME_UEastRimWorldTargetType_GetTargets = FName(TEXT("GetTargets"));
void UEastRimWorldTargetType::GetTargets(AActor* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const
{
	UFunction* Func = FindFunctionChecked(NAME_UEastRimWorldTargetType_GetTargets);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EastRimWorldTargetType_eventGetTargets_Parms Parms;
		Parms.TargetingCharacter=TargetingCharacter;
		Parms.TargetingActor=TargetingActor;
		Parms.EventData=EventData;
		Parms.OutHitResults=OutHitResults;
		Parms.OutActors=OutActors;
		const_cast<UEastRimWorldTargetType*>(this)->ProcessEvent(Func,&Parms);
		OutHitResults=Parms.OutHitResults;
		OutActors=Parms.OutActors;
	}
	else
	{
		const_cast<UEastRimWorldTargetType*>(this)->GetTargets_Implementation(TargetingCharacter, TargetingActor, EventData, OutHitResults, OutActors);
	}
}
struct Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called to determine targets to apply gameplay effects to */" },
#endif
		{ "ModuleRelativePath", "Public/EastRimWorldTargetType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to determine targets to apply gameplay effects to" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHitResults;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_TargetingCharacter = { "TargetingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EastRimWorldTargetType_eventGetTargets_Parms, TargetingCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_TargetingActor = { "TargetingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EastRimWorldTargetType_eventGetTargets_Parms, TargetingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EastRimWorldTargetType_eventGetTargets_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 924940328
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner = { "OutHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_OutHitResults = { "OutHitResults", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EastRimWorldTargetType_eventGetTargets_Parms, OutHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EastRimWorldTargetType_eventGetTargets_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_TargetingCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_TargetingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_EventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_OutHitResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEastRimWorldTargetType, nullptr, "GetTargets", Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::PropPointers), sizeof(EastRimWorldTargetType_eventGetTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(EastRimWorldTargetType_eventGetTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEastRimWorldTargetType::execGetTargets)
{
	P_GET_OBJECT(AActor,Z_Param_TargetingCharacter);
	P_GET_OBJECT(AActor,Z_Param_TargetingActor);
	P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHitResults);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTargets_Implementation(Z_Param_TargetingCharacter,Z_Param_TargetingActor,Z_Param_EventData,Z_Param_Out_OutHitResults,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// ********** End Class UEastRimWorldTargetType Function GetTargets ********************************

// ********** Begin Class UEastRimWorldTargetType **************************************************
void UEastRimWorldTargetType::StaticRegisterNativesUEastRimWorldTargetType()
{
	UClass* Class = UEastRimWorldTargetType::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTargets", &UEastRimWorldTargetType::execGetTargets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEastRimWorldTargetType;
UClass* UEastRimWorldTargetType::GetPrivateStaticClass()
{
	using TClass = UEastRimWorldTargetType;
	if (!Z_Registration_Info_UClass_UEastRimWorldTargetType.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EastRimWorldTargetType"),
			Z_Registration_Info_UClass_UEastRimWorldTargetType.InnerSingleton,
			StaticRegisterNativesUEastRimWorldTargetType,
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
	return Z_Registration_Info_UClass_UEastRimWorldTargetType.InnerSingleton;
}
UClass* Z_Construct_UClass_UEastRimWorldTargetType_NoRegister()
{
	return UEastRimWorldTargetType::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEastRimWorldTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EastRimWorldTargetType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EastRimWorldTargetType.h" },
		{ "ShowWorldContextPin", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "EastRimWorldTargetType" },
		{ "ModuleRelativePath", "Public/EastRimWorldTargetType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEastRimWorldTargetType_GetTargets, "GetTargets" }, // 3690215573
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEastRimWorldTargetType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEastRimWorldTargetType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEastRimWorldTargetType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEastRimWorldTargetType, Type), Z_Construct_UEnum_GASFramework_EEastRimWorldTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1331221814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEastRimWorldTargetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEastRimWorldTargetType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEastRimWorldTargetType_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEastRimWorldTargetType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEastRimWorldTargetType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEastRimWorldTargetType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEastRimWorldTargetType_Statics::ClassParams = {
	&UEastRimWorldTargetType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEastRimWorldTargetType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEastRimWorldTargetType_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEastRimWorldTargetType_Statics::Class_MetaDataParams), Z_Construct_UClass_UEastRimWorldTargetType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEastRimWorldTargetType()
{
	if (!Z_Registration_Info_UClass_UEastRimWorldTargetType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEastRimWorldTargetType.OuterSingleton, Z_Construct_UClass_UEastRimWorldTargetType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEastRimWorldTargetType.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEastRimWorldTargetType);
UEastRimWorldTargetType::~UEastRimWorldTargetType() {}
// ********** End Class UEastRimWorldTargetType ****************************************************

// ********** Begin Class UEastRimWorldTargetType_UseOwner *****************************************
void UEastRimWorldTargetType_UseOwner::StaticRegisterNativesUEastRimWorldTargetType_UseOwner()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEastRimWorldTargetType_UseOwner;
UClass* UEastRimWorldTargetType_UseOwner::GetPrivateStaticClass()
{
	using TClass = UEastRimWorldTargetType_UseOwner;
	if (!Z_Registration_Info_UClass_UEastRimWorldTargetType_UseOwner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EastRimWorldTargetType_UseOwner"),
			Z_Registration_Info_UClass_UEastRimWorldTargetType_UseOwner.InnerSingleton,
			StaticRegisterNativesUEastRimWorldTargetType_UseOwner,
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
	return Z_Registration_Info_UClass_UEastRimWorldTargetType_UseOwner.InnerSingleton;
}
UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseOwner_NoRegister()
{
	return UEastRimWorldTargetType_UseOwner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEastRimWorldTargetType_UseOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trivial target type that uses the owner */" },
#endif
		{ "IncludePath", "EastRimWorldTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/EastRimWorldTargetType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trivial target type that uses the owner" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEastRimWorldTargetType_UseOwner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEastRimWorldTargetType_UseOwner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEastRimWorldTargetType,
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEastRimWorldTargetType_UseOwner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEastRimWorldTargetType_UseOwner_Statics::ClassParams = {
	&UEastRimWorldTargetType_UseOwner::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEastRimWorldTargetType_UseOwner_Statics::Class_MetaDataParams), Z_Construct_UClass_UEastRimWorldTargetType_UseOwner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseOwner()
{
	if (!Z_Registration_Info_UClass_UEastRimWorldTargetType_UseOwner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEastRimWorldTargetType_UseOwner.OuterSingleton, Z_Construct_UClass_UEastRimWorldTargetType_UseOwner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEastRimWorldTargetType_UseOwner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEastRimWorldTargetType_UseOwner);
UEastRimWorldTargetType_UseOwner::~UEastRimWorldTargetType_UseOwner() {}
// ********** End Class UEastRimWorldTargetType_UseOwner *******************************************

// ********** Begin Class UEastRimWorldTargetType_UseEventData *************************************
void UEastRimWorldTargetType_UseEventData::StaticRegisterNativesUEastRimWorldTargetType_UseEventData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEastRimWorldTargetType_UseEventData;
UClass* UEastRimWorldTargetType_UseEventData::GetPrivateStaticClass()
{
	using TClass = UEastRimWorldTargetType_UseEventData;
	if (!Z_Registration_Info_UClass_UEastRimWorldTargetType_UseEventData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EastRimWorldTargetType_UseEventData"),
			Z_Registration_Info_UClass_UEastRimWorldTargetType_UseEventData.InnerSingleton,
			StaticRegisterNativesUEastRimWorldTargetType_UseEventData,
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
	return Z_Registration_Info_UClass_UEastRimWorldTargetType_UseEventData.InnerSingleton;
}
UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseEventData_NoRegister()
{
	return UEastRimWorldTargetType_UseEventData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEastRimWorldTargetType_UseEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trivial target type that pulls the target out of the event data */" },
#endif
		{ "IncludePath", "EastRimWorldTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/EastRimWorldTargetType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trivial target type that pulls the target out of the event data" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEastRimWorldTargetType_UseEventData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEastRimWorldTargetType_UseEventData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEastRimWorldTargetType,
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEastRimWorldTargetType_UseEventData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEastRimWorldTargetType_UseEventData_Statics::ClassParams = {
	&UEastRimWorldTargetType_UseEventData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEastRimWorldTargetType_UseEventData_Statics::Class_MetaDataParams), Z_Construct_UClass_UEastRimWorldTargetType_UseEventData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseEventData()
{
	if (!Z_Registration_Info_UClass_UEastRimWorldTargetType_UseEventData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEastRimWorldTargetType_UseEventData.OuterSingleton, Z_Construct_UClass_UEastRimWorldTargetType_UseEventData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEastRimWorldTargetType_UseEventData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEastRimWorldTargetType_UseEventData);
UEastRimWorldTargetType_UseEventData::~UEastRimWorldTargetType_UseEventData() {}
// ********** End Class UEastRimWorldTargetType_UseEventData ***************************************

// ********** Begin Class UEastRimWorldTargetType_UseProjectile ************************************
void UEastRimWorldTargetType_UseProjectile::StaticRegisterNativesUEastRimWorldTargetType_UseProjectile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEastRimWorldTargetType_UseProjectile;
UClass* UEastRimWorldTargetType_UseProjectile::GetPrivateStaticClass()
{
	using TClass = UEastRimWorldTargetType_UseProjectile;
	if (!Z_Registration_Info_UClass_UEastRimWorldTargetType_UseProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EastRimWorldTargetType_UseProjectile"),
			Z_Registration_Info_UClass_UEastRimWorldTargetType_UseProjectile.InnerSingleton,
			StaticRegisterNativesUEastRimWorldTargetType_UseProjectile,
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
	return Z_Registration_Info_UClass_UEastRimWorldTargetType_UseProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile_NoRegister()
{
	return UEastRimWorldTargetType_UseProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\x87\xe8\xae\xb0\xe7\x9a\x84\xe8\xaf\x9d  \xe6\x8c\x87\xe4\xbb\xa3\xe8\xaf\xa5GE\xe7\x9b\xb4\xe6\x8e\xa5\xe4\xbc\xa0\xe5\xaf\xbc\xe7\xbb\x99\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\n" },
#endif
		{ "IncludePath", "EastRimWorldTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/EastRimWorldTargetType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\x87\xe8\xae\xb0\xe7\x9a\x84\xe8\xaf\x9d  \xe6\x8c\x87\xe4\xbb\xa3\xe8\xaf\xa5GE\xe7\x9b\xb4\xe6\x8e\xa5\xe4\xbc\xa0\xe5\xaf\xbc\xe7\xbb\x99\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEastRimWorldTargetType_UseProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEastRimWorldTargetType,
	(UObject* (*)())Z_Construct_UPackage__Script_GASFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile_Statics::ClassParams = {
	&UEastRimWorldTargetType_UseProjectile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile()
{
	if (!Z_Registration_Info_UClass_UEastRimWorldTargetType_UseProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEastRimWorldTargetType_UseProjectile.OuterSingleton, Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEastRimWorldTargetType_UseProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEastRimWorldTargetType_UseProjectile);
UEastRimWorldTargetType_UseProjectile::~UEastRimWorldTargetType_UseProjectile() {}
// ********** End Class UEastRimWorldTargetType_UseProjectile **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldTargetType_h__Script_GASFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEastRimWorldTargetType, UEastRimWorldTargetType::StaticClass, TEXT("UEastRimWorldTargetType"), &Z_Registration_Info_UClass_UEastRimWorldTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEastRimWorldTargetType), 47564993U) },
		{ Z_Construct_UClass_UEastRimWorldTargetType_UseOwner, UEastRimWorldTargetType_UseOwner::StaticClass, TEXT("UEastRimWorldTargetType_UseOwner"), &Z_Registration_Info_UClass_UEastRimWorldTargetType_UseOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEastRimWorldTargetType_UseOwner), 3098193617U) },
		{ Z_Construct_UClass_UEastRimWorldTargetType_UseEventData, UEastRimWorldTargetType_UseEventData::StaticClass, TEXT("UEastRimWorldTargetType_UseEventData"), &Z_Registration_Info_UClass_UEastRimWorldTargetType_UseEventData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEastRimWorldTargetType_UseEventData), 3196196697U) },
		{ Z_Construct_UClass_UEastRimWorldTargetType_UseProjectile, UEastRimWorldTargetType_UseProjectile::StaticClass, TEXT("UEastRimWorldTargetType_UseProjectile"), &Z_Registration_Info_UClass_UEastRimWorldTargetType_UseProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEastRimWorldTargetType_UseProjectile), 1990348290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldTargetType_h__Script_GASFramework_3285854567(TEXT("/Script/GASFramework"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldTargetType_h__Script_GASFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_GASFramework_Source_GASFramework_Public_EastRimWorldTargetType_h__Script_GASFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
