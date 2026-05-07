// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUserBasicPresence.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCommonUserBasicPresence() {}

// ********** Begin Cross Module References ********************************************************
COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserBasicPresence();
COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserBasicPresence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_CommonUser();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCommonUserBasicPresence *************************************************
void UCommonUserBasicPresence::StaticRegisterNativesUCommonUserBasicPresence()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCommonUserBasicPresence;
UClass* UCommonUserBasicPresence::GetPrivateStaticClass()
{
	using TClass = UCommonUserBasicPresence;
	if (!Z_Registration_Info_UClass_UCommonUserBasicPresence.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CommonUserBasicPresence"),
			Z_Registration_Info_UClass_UCommonUserBasicPresence.InnerSingleton,
			StaticRegisterNativesUCommonUserBasicPresence,
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
	return Z_Registration_Info_UClass_UCommonUserBasicPresence.InnerSingleton;
}
UClass* Z_Construct_UClass_UCommonUserBasicPresence_NoRegister()
{
	return UCommonUserBasicPresence::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCommonUserBasicPresence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This subsystem plugs into the session subsystem and pushes its information to the presence interface.\n * It is not intended to be a full featured rich presence implementation, but can be used as a proof-of-concept\n * for pushing information from the session subsystem to the presence system\n */" },
#endif
		{ "IncludePath", "CommonUserBasicPresence.h" },
		{ "ModuleRelativePath", "Public/CommonUserBasicPresence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This subsystem plugs into the session subsystem and pushes its information to the presence interface.\nIt is not intended to be a full featured rich presence implementation, but can be used as a proof-of-concept\nfor pushing information from the session subsystem to the presence system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSessionsBasedPresence_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** False is a general purpose killswitch to stop this class from pushing presence*/" },
#endif
		{ "ModuleRelativePath", "Public/CommonUserBasicPresence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "False is a general purpose killswitch to stop this class from pushing presence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceStatusInGame_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maps the presence status \"In-game\" to a backend key*/" },
#endif
		{ "ModuleRelativePath", "Public/CommonUserBasicPresence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps the presence status \"In-game\" to a backend key" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceStatusMainMenu_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maps the presence status \"Main Menu\" to a backend key*/" },
#endif
		{ "ModuleRelativePath", "Public/CommonUserBasicPresence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps the presence status \"Main Menu\" to a backend key" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceStatusMatchmaking_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maps the presence status \"Matchmaking\" to a backend key*/" },
#endif
		{ "ModuleRelativePath", "Public/CommonUserBasicPresence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps the presence status \"Matchmaking\" to a backend key" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceKeyGameMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maps the \"Game Mode\" rich presence entry to a backend key*/" },
#endif
		{ "ModuleRelativePath", "Public/CommonUserBasicPresence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps the \"Game Mode\" rich presence entry to a backend key" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceKeyMapName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maps the \"Map Name\" rich presence entry to a backend key*/" },
#endif
		{ "ModuleRelativePath", "Public/CommonUserBasicPresence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps the \"Map Name\" rich presence entry to a backend key" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSessionsBasedPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSessionsBasedPresence;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresenceStatusInGame;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresenceStatusMainMenu;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresenceStatusMatchmaking;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresenceKeyGameMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresenceKeyMapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUserBasicPresence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_bEnableSessionsBasedPresence_SetBit(void* Obj)
{
	((UCommonUserBasicPresence*)Obj)->bEnableSessionsBasedPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_bEnableSessionsBasedPresence = { "bEnableSessionsBasedPresence", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCommonUserBasicPresence), &Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_bEnableSessionsBasedPresence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSessionsBasedPresence_MetaData), NewProp_bEnableSessionsBasedPresence_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_PresenceStatusInGame = { "PresenceStatusInGame", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserBasicPresence, PresenceStatusInGame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceStatusInGame_MetaData), NewProp_PresenceStatusInGame_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_PresenceStatusMainMenu = { "PresenceStatusMainMenu", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserBasicPresence, PresenceStatusMainMenu), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceStatusMainMenu_MetaData), NewProp_PresenceStatusMainMenu_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_PresenceStatusMatchmaking = { "PresenceStatusMatchmaking", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserBasicPresence, PresenceStatusMatchmaking), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceStatusMatchmaking_MetaData), NewProp_PresenceStatusMatchmaking_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_PresenceKeyGameMode = { "PresenceKeyGameMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserBasicPresence, PresenceKeyGameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceKeyGameMode_MetaData), NewProp_PresenceKeyGameMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_PresenceKeyMapName = { "PresenceKeyMapName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserBasicPresence, PresenceKeyMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceKeyMapName_MetaData), NewProp_PresenceKeyMapName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUserBasicPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_bEnableSessionsBasedPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_PresenceStatusInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_PresenceStatusMainMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_PresenceStatusMatchmaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_PresenceKeyGameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserBasicPresence_Statics::NewProp_PresenceKeyMapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserBasicPresence_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCommonUserBasicPresence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserBasicPresence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUserBasicPresence_Statics::ClassParams = {
	&UCommonUserBasicPresence::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCommonUserBasicPresence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserBasicPresence_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserBasicPresence_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonUserBasicPresence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommonUserBasicPresence()
{
	if (!Z_Registration_Info_UClass_UCommonUserBasicPresence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUserBasicPresence.OuterSingleton, Z_Construct_UClass_UCommonUserBasicPresence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommonUserBasicPresence.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUserBasicPresence);
UCommonUserBasicPresence::~UCommonUserBasicPresence() {}
// ********** End Class UCommonUserBasicPresence ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h__Script_CommonUser_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUserBasicPresence, UCommonUserBasicPresence::StaticClass, TEXT("UCommonUserBasicPresence"), &Z_Registration_Info_UClass_UCommonUserBasicPresence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUserBasicPresence), 2521292124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h__Script_CommonUser_496434312(TEXT("/Script/CommonUser"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h__Script_CommonUser_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h__Script_CommonUser_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
