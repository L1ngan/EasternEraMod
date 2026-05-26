// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonGameInstance.h"

#ifdef COMMONGAME_CommonGameInstance_generated_h
#error "CommonGameInstance.generated.h already included, missing '#pragma once' in CommonGameInstance.h"
#endif
#define COMMONGAME_CommonGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCommonUserInfo;
enum class ECommonUserAvailability : uint8;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;
struct FGameplayTag;

// ********** Begin Class UCommonGameInstance ******************************************************
#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonGameInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlerUserInitialized); \
	DECLARE_FUNCTION(execHandlePrivilegeChanged); \
	DECLARE_FUNCTION(execHandleSystemMessage);


COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance_NoRegister();

#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonGameInstance_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonGameInstance(); \
	friend struct Z_Construct_UClass_UCommonGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonGameInstance, UGameInstance, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UCommonGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UCommonGameInstance)


#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonGameInstance_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonGameInstance(UCommonGameInstance&&) = delete; \
	UCommonGameInstance(const UCommonGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonGameInstance); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonGameInstance) \
	NO_API virtual ~UCommonGameInstance();


#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonGameInstance_h_22_PROLOG
#define FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonGameInstance_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonGameInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonGameInstance_h_25_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonGameInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonGameInstance;

// ********** End Class UCommonGameInstance ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CommonGame_Source_Public_CommonGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
