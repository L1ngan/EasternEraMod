// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUIExtensions.h"

#ifdef COMMONGAME_CommonUIExtensions_generated_h
#error "CommonUIExtensions.generated.h already included, missing '#pragma once' in CommonUIExtensions.h"
#endif
#define COMMONGAME_CommonUIExtensions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UCommonActivatableWidget;
class ULocalPlayer;
class UUserWidget;
enum class ECommonInputType : uint8;
struct FGameplayTag;

// ********** Begin Class UCommonUIExtensions ******************************************************
#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResumeInputForPlayer); \
	DECLARE_FUNCTION(execSuspendInputForPlayer); \
	DECLARE_FUNCTION(execGetLocalPlayerFromController); \
	DECLARE_FUNCTION(execPopContentFromLayer); \
	DECLARE_FUNCTION(execPushStreamedContentToLayer_ForPlayer); \
	DECLARE_FUNCTION(execPushContentToLayer_ForPlayer); \
	DECLARE_FUNCTION(execIsOwningPlayerUsingGamepad); \
	DECLARE_FUNCTION(execIsOwningPlayerUsingTouch); \
	DECLARE_FUNCTION(execGetOwningPlayerInputType);


COMMONGAME_API UClass* Z_Construct_UClass_UCommonUIExtensions_NoRegister();

#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUIExtensions(); \
	friend struct Z_Construct_UClass_UCommonUIExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UCommonUIExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUIExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UCommonUIExtensions_NoRegister) \
	DECLARE_SERIALIZER(UCommonUIExtensions)


#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUIExtensions(UCommonUIExtensions&&) = delete; \
	UCommonUIExtensions(const UCommonUIExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUIExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIExtensions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUIExtensions) \
	NO_API virtual ~UCommonUIExtensions();


#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_21_PROLOG
#define FID_ModProject_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_24_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUIExtensions;

// ********** End Class UCommonUIExtensions ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_CommonGame_Source_Public_CommonUIExtensions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
