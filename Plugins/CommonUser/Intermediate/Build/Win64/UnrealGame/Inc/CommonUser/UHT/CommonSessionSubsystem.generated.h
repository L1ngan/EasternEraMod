// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonSessionSubsystem.h"

#ifdef COMMONUSER_CommonSessionSubsystem_generated_h
#error "CommonSessionSubsystem.generated.h already included, missing '#pragma once' in CommonSessionSubsystem.h"
#endif
#define COMMONUSER_CommonSessionSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UCommonSession_HostSessionRequest;
class UCommonSession_SearchResult;
class UCommonSession_SearchSessionRequest;
enum class ECommonSessionInformationState : uint8;
struct FOnlineResultInformation;
struct FPlatformUserId;

// ********** Begin Class UCommonSession_HostSessionRequest ****************************************
COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister();

#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonSession_HostSessionRequest(); \
	friend struct Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonSession_HostSessionRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister) \
	DECLARE_SERIALIZER(UCommonSession_HostSessionRequest)


#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSession_HostSessionRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonSession_HostSessionRequest(UCommonSession_HostSessionRequest&&) = delete; \
	UCommonSession_HostSessionRequest(const UCommonSession_HostSessionRequest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSession_HostSessionRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSession_HostSessionRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSession_HostSessionRequest) \
	NO_API virtual ~UCommonSession_HostSessionRequest();


#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_52_PROLOG
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_55_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonSession_HostSessionRequest;

// ********** End Class UCommonSession_HostSessionRequest ******************************************

// ********** Begin Class UCommonSession_SearchResult **********************************************
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPingInMs); \
	DECLARE_FUNCTION(execGetMaxPublicConnections); \
	DECLARE_FUNCTION(execGetNumOpenPublicConnections); \
	DECLARE_FUNCTION(execGetNumOpenPrivateConnections); \
	DECLARE_FUNCTION(execGetIntSetting); \
	DECLARE_FUNCTION(execGetStringSetting); \
	DECLARE_FUNCTION(execGetDescription);


COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchResult_NoRegister();

#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonSession_SearchResult(); \
	friend struct Z_Construct_UClass_UCommonSession_SearchResult_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchResult_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonSession_SearchResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), Z_Construct_UClass_UCommonSession_SearchResult_NoRegister) \
	DECLARE_SERIALIZER(UCommonSession_SearchResult)


#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSession_SearchResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonSession_SearchResult(UCommonSession_SearchResult&&) = delete; \
	UCommonSession_SearchResult(const UCommonSession_SearchResult&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSession_SearchResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSession_SearchResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSession_SearchResult) \
	NO_API virtual ~UCommonSession_SearchResult();


#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_101_PROLOG
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_104_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonSession_SearchResult;

// ********** End Class UCommonSession_SearchResult ************************************************

// ********** Begin Delegate FCommonSession_FindSessionsFinishedDynamic ****************************
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_151_DELEGATE \
COMMONUSER_API void FCommonSession_FindSessionsFinishedDynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSession_FindSessionsFinishedDynamic, bool bSucceeded, const FText& ErrorMessage);


// ********** End Delegate FCommonSession_FindSessionsFinishedDynamic ******************************

// ********** Begin Class UCommonSession_SearchSessionRequest **************************************
COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchSessionRequest_NoRegister();

#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonSession_SearchSessionRequest(); \
	friend struct Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchSessionRequest_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonSession_SearchSessionRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), Z_Construct_UClass_UCommonSession_SearchSessionRequest_NoRegister) \
	DECLARE_SERIALIZER(UCommonSession_SearchSessionRequest)


#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_157_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSession_SearchSessionRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonSession_SearchSessionRequest(UCommonSession_SearchSessionRequest&&) = delete; \
	UCommonSession_SearchSessionRequest(const UCommonSession_SearchSessionRequest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSession_SearchSessionRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSession_SearchSessionRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSession_SearchSessionRequest) \
	NO_API virtual ~UCommonSession_SearchSessionRequest();


#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_154_PROLOG
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_157_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonSession_SearchSessionRequest;

// ********** End Class UCommonSession_SearchSessionRequest ****************************************

// ********** Begin Delegate FCommonSessionOnUserRequestedSession_Dynamic **************************
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_196_DELEGATE \
COMMONUSER_API void FCommonSessionOnUserRequestedSession_Dynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSessionOnUserRequestedSession_Dynamic, FPlatformUserId const& LocalPlatformUserId, UCommonSession_SearchResult* RequestedSession, FOnlineResultInformation const& RequestedSessionResult);


// ********** End Delegate FCommonSessionOnUserRequestedSession_Dynamic ****************************

// ********** Begin Delegate FCommonSessionOnJoinSessionComplete_Dynamic ***************************
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_204_DELEGATE \
COMMONUSER_API void FCommonSessionOnJoinSessionComplete_Dynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSessionOnJoinSessionComplete_Dynamic, FOnlineResultInformation const& Result);


// ********** End Delegate FCommonSessionOnJoinSessionComplete_Dynamic *****************************

// ********** Begin Delegate FCommonSessionOnCreateSessionComplete_Dynamic *************************
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_212_DELEGATE \
COMMONUSER_API void FCommonSessionOnCreateSessionComplete_Dynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSessionOnCreateSessionComplete_Dynamic, FOnlineResultInformation const& Result);


// ********** End Delegate FCommonSessionOnCreateSessionComplete_Dynamic ***************************

// ********** Begin Delegate FCommonSessionOnSessionInformationChanged_Dynamic *********************
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_232_DELEGATE \
COMMONUSER_API void FCommonSessionOnSessionInformationChanged_Dynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSessionOnSessionInformationChanged_Dynamic, ECommonSessionInformationState SessionStatus, const FString& GameMode, const FString& MapName);


// ********** End Delegate FCommonSessionOnSessionInformationChanged_Dynamic ***********************

// ********** Begin Class UCommonSessionSubsystem **************************************************
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_245_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCleanUpSessions); \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execQuickPlaySession); \
	DECLARE_FUNCTION(execHostSession); \
	DECLARE_FUNCTION(execCreateOnlineSearchSessionRequest); \
	DECLARE_FUNCTION(execCreateOnlineHostSessionRequest);


COMMONUSER_API UClass* Z_Construct_UClass_UCommonSessionSubsystem_NoRegister();

#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_245_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonSessionSubsystem(); \
	friend struct Z_Construct_UClass_UCommonSessionSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUSER_API UClass* Z_Construct_UClass_UCommonSessionSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUser"), Z_Construct_UClass_UCommonSessionSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCommonSessionSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_245_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonSessionSubsystem(UCommonSessionSubsystem&&) = delete; \
	UCommonSessionSubsystem(const UCommonSessionSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonSessionSubsystem) \
	NO_API virtual ~UCommonSessionSubsystem();


#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_242_PROLOG
#define FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_245_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_245_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_245_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_245_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonSessionSubsystem;

// ********** End Class UCommonSessionSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h

// ********** Begin Enum ECommonSessionOnlineMode **************************************************
#define FOREACH_ENUM_ECOMMONSESSIONONLINEMODE(op) \
	op(ECommonSessionOnlineMode::Offline) \
	op(ECommonSessionOnlineMode::LAN) \
	op(ECommonSessionOnlineMode::Online) 

enum class ECommonSessionOnlineMode : uint8;
template<> struct TIsUEnumClass<ECommonSessionOnlineMode> { enum { Value = true }; };
template<> COMMONUSER_API UEnum* StaticEnum<ECommonSessionOnlineMode>();
// ********** End Enum ECommonSessionOnlineMode ****************************************************

// ********** Begin Enum ECommonSessionInformationState ********************************************
#define FOREACH_ENUM_ECOMMONSESSIONINFORMATIONSTATE(op) \
	op(ECommonSessionInformationState::OutOfGame) \
	op(ECommonSessionInformationState::Matchmaking) \
	op(ECommonSessionInformationState::InGame) 

enum class ECommonSessionInformationState : uint8;
template<> struct TIsUEnumClass<ECommonSessionInformationState> { enum { Value = true }; };
template<> COMMONUSER_API UEnum* StaticEnum<ECommonSessionInformationState>();
// ********** End Enum ECommonSessionInformationState **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
