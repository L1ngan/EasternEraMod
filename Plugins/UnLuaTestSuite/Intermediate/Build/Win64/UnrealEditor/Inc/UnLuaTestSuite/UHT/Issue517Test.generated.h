// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Issue517Test.h"

#ifdef UNLUATESTSUITE_Issue517Test_generated_h
#error "Issue517Test.generated.h already included, missing '#pragma once' in Issue517Test.h"
#endif
#define UNLUATESTSUITE_Issue517Test_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIssue517Struct ***************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIssue517Struct_Statics; \
	UNLUATESTSUITE_API static class UScriptStruct* StaticStruct();


struct FIssue517Struct;
// ********** End ScriptStruct FIssue517Struct *****************************************************

// ********** Begin Class AIssue517Actor ***********************************************************
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue517Actor_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIssue517Actor(); \
	friend struct Z_Construct_UClass_AIssue517Actor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue517Actor_NoRegister(); \
public: \
	DECLARE_CLASS2(AIssue517Actor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_AIssue517Actor_NoRegister) \
	DECLARE_SERIALIZER(AIssue517Actor)


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIssue517Actor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIssue517Actor(AIssue517Actor&&) = delete; \
	AIssue517Actor(const AIssue517Actor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIssue517Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIssue517Actor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIssue517Actor) \
	NO_API virtual ~AIssue517Actor();


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_40_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_43_INCLASS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIssue517Actor;

// ********** End Class AIssue517Actor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue517Test_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
