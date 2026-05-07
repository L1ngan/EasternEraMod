// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/IssueOverridesTest.h"

#ifdef UNLUATESTSUITE_IssueOverridesTest_generated_h
#error "IssueOverridesTest.generated.h already included, missing '#pragma once' in IssueOverridesTest.h"
#endif
#define UNLUATESTSUITE_IssueOverridesTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIssueOverridesActor *****************************************************
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssueOverridesActor_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIssueOverridesActor(); \
	friend struct Z_Construct_UClass_AIssueOverridesActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssueOverridesActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AIssueOverridesActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_AIssueOverridesActor_NoRegister) \
	DECLARE_SERIALIZER(AIssueOverridesActor)


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIssueOverridesActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIssueOverridesActor(AIssueOverridesActor&&) = delete; \
	AIssueOverridesActor(const AIssueOverridesActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIssueOverridesActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIssueOverridesActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIssueOverridesActor) \
	NO_API virtual ~AIssueOverridesActor();


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_20_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIssueOverridesActor;

// ********** End Class AIssueOverridesActor *******************************************************

// ********** Begin Class UIssueOverridesObject ****************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 CollectInfo_Implementation() const; \
	DECLARE_FUNCTION(execCollectInfo); \
	DECLARE_FUNCTION(execGetConfig);


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_31_CALLBACK_WRAPPERS
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssueOverridesObject_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIssueOverridesObject(); \
	friend struct Z_Construct_UClass_UIssueOverridesObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssueOverridesObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UIssueOverridesObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_UIssueOverridesObject_NoRegister) \
	DECLARE_SERIALIZER(UIssueOverridesObject) \
	virtual UObject* _getUObject() const override { return const_cast<UIssueOverridesObject*>(this); }


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIssueOverridesObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIssueOverridesObject(UIssueOverridesObject&&) = delete; \
	UIssueOverridesObject(const UIssueOverridesObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIssueOverridesObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIssueOverridesObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIssueOverridesObject) \
	NO_API virtual ~UIssueOverridesObject();


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_26_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_31_CALLBACK_WRAPPERS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_31_INCLASS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIssueOverridesObject;

// ********** End Class UIssueOverridesObject ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_IssueOverridesTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
