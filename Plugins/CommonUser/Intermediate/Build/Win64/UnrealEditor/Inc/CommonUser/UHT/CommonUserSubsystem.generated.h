// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserSubsystem.h"

#ifdef COMMONUSER_CommonUserSubsystem_generated_h
#error "CommonUserSubsystem.generated.h already included, missing '#pragma once' in CommonUserSubsystem.h"
#endif
#define COMMONUSER_CommonUserSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCommonUserInfo;
enum class ECommonUserAvailability : uint8;
enum class ECommonUserInitializationState : uint8;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;
enum class ECommonUserPrivilegeResult : uint8;
struct FCommonUserInitializeParams;
struct FGameplayTag;
struct FInputDeviceId;
struct FKey;
struct FPlatformUserId;
struct FUniqueNetIdRepl;

// ********** Begin Class UCommonUserInfo **********************************************************
#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetNickname); \
	DECLARE_FUNCTION(execGetNetId); \
	DECLARE_FUNCTION(execGetPrivilegeAvailability); \
	DECLARE_FUNCTION(execGetCachedPrivilegeResult); \
	DECLARE_FUNCTION(execIsDoingLogin); \
	DECLARE_FUNCTION(execIsLoggedIn);


COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();

#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUserInfo(); \
	friend struct Z_Construct_UClass_UCommonUserInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUserInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), Z_Construct_UClass_UCommonUserInfo_NoRegister) \
	DECLARE_SERIALIZER(UCommonUserInfo)


#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUserInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUserInfo(UCommonUserInfo&&) = delete; \
	UCommonUserInfo(const UCommonUserInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUserInfo) \
	NO_API virtual ~UCommonUserInfo();


#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_46_PROLOG
#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_49_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUserInfo;

// ********** End Class UCommonUserInfo ************************************************************

// ********** Begin Delegate FCommonUserOnInitializeCompleteMulticast ******************************
#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_141_DELEGATE \
COMMONUSER_API void FCommonUserOnInitializeCompleteMulticast_DelegateWrapper(const FMulticastScriptDelegate& CommonUserOnInitializeCompleteMulticast, const UCommonUserInfo* UserInfo, bool bSuccess, const FText& Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);


// ********** End Delegate FCommonUserOnInitializeCompleteMulticast ********************************

// ********** Begin Delegate FCommonUserOnInitializeComplete ***************************************
#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_142_DELEGATE \
COMMONUSER_API void FCommonUserOnInitializeComplete_DelegateWrapper(const FScriptDelegate& CommonUserOnInitializeComplete, const UCommonUserInfo* UserInfo, bool bSuccess, const FText& Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);


// ********** End Delegate FCommonUserOnInitializeComplete *****************************************

// ********** Begin Delegate FCommonUserHandleSystemMessageDelegate ********************************
#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_145_DELEGATE \
COMMONUSER_API void FCommonUserHandleSystemMessageDelegate_DelegateWrapper(const FMulticastScriptDelegate& CommonUserHandleSystemMessageDelegate, FGameplayTag MessageType, const FText& TitleText, const FText& BodyText);


// ********** End Delegate FCommonUserHandleSystemMessageDelegate **********************************

// ********** Begin Delegate FCommonUserAvailabilityChangedDelegate ********************************
#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_148_DELEGATE \
COMMONUSER_API void FCommonUserAvailabilityChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CommonUserAvailabilityChangedDelegate, const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);


// ********** End Delegate FCommonUserAvailabilityChangedDelegate **********************************

// ********** Begin ScriptStruct FCommonUserInitializeParams ***************************************
#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCommonUserInitializeParams;
// ********** End ScriptStruct FCommonUserInitializeParams *****************************************

// ********** Begin Class UCommonUserSubsystem *****************************************************
#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldWaitForStartInput); \
	DECLARE_FUNCTION(execHasTraitTag); \
	DECLARE_FUNCTION(execResetUserState); \
	DECLARE_FUNCTION(execTryToLogOutUser); \
	DECLARE_FUNCTION(execCancelUserInitialization); \
	DECLARE_FUNCTION(execListenForLoginKeyInput); \
	DECLARE_FUNCTION(execTryToInitializeUser); \
	DECLARE_FUNCTION(execTryToLoginForOnlinePlay); \
	DECLARE_FUNCTION(execTryToInitializeForLocalPlay); \
	DECLARE_FUNCTION(execGetUserInfoForInputDevice); \
	DECLARE_FUNCTION(execGetUserInfoForControllerId); \
	DECLARE_FUNCTION(execGetUserInfoForUniqueNetId); \
	DECLARE_FUNCTION(execGetUserInfoForPlatformUser); \
	DECLARE_FUNCTION(execGetUserInfoForPlatformUserIndex); \
	DECLARE_FUNCTION(execGetUserInfoForLocalPlayerIndex); \
	DECLARE_FUNCTION(execGetLocalPlayerInitializationState); \
	DECLARE_FUNCTION(execGetNumLocalPlayers); \
	DECLARE_FUNCTION(execGetMaxLocalPlayers); \
	DECLARE_FUNCTION(execSetMaxLocalPlayers); \
	DECLARE_FUNCTION(execSendSystemMessage);


COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserSubsystem_NoRegister();

#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUserSubsystem(); \
	friend struct Z_Construct_UClass_UCommonUserSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUserSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), Z_Construct_UClass_UCommonUserSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCommonUserSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_206_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUserSubsystem(UCommonUserSubsystem&&) = delete; \
	UCommonUserSubsystem(const UCommonUserSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUserSubsystem) \
	NO_API virtual ~UCommonUserSubsystem();


#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_203_PROLOG
#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_206_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUserSubsystem;

// ********** End Class UCommonUserSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
