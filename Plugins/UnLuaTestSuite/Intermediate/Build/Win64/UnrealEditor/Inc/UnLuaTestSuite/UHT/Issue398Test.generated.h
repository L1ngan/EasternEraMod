// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Issue398Test.h"

#ifdef UNLUATESTSUITE_Issue398Test_generated_h
#error "Issue398Test.generated.h already included, missing '#pragma once' in Issue398Test.h"
#endif
#define UNLUATESTSUITE_Issue398Test_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACharacterForIssue398 ****************************************************
UNLUATESTSUITE_API UClass* Z_Construct_UClass_ACharacterForIssue398_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterForIssue398(); \
	friend struct Z_Construct_UClass_ACharacterForIssue398_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_ACharacterForIssue398_NoRegister(); \
public: \
	DECLARE_CLASS2(ACharacterForIssue398, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_ACharacterForIssue398_NoRegister) \
	DECLARE_SERIALIZER(ACharacterForIssue398) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterForIssue398*>(this); }


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterForIssue398(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACharacterForIssue398(ACharacterForIssue398&&) = delete; \
	ACharacterForIssue398(const ACharacterForIssue398&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterForIssue398); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterForIssue398); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterForIssue398) \
	NO_API virtual ~ACharacterForIssue398();


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_20_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACharacterForIssue398;

// ********** End Class ACharacterForIssue398 ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398Test_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
