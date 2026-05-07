// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Issue595TestInterface.h"

#ifdef UNLUATESTSUITE_Issue595TestInterface_generated_h
#error "Issue595TestInterface.generated.h already included, missing '#pragma once' in Issue595TestInterface.h"
#endif
#define UNLUATESTSUITE_Issue595TestInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UIssue595Interface ***************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 Test_Implementation() const { return 0; }; \
	DECLARE_FUNCTION(execTest);


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_CALLBACK_WRAPPERS
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Interface_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIssue595Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIssue595Interface(UIssue595Interface&&) = delete; \
	UIssue595Interface(const UIssue595Interface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIssue595Interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIssue595Interface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIssue595Interface) \
	virtual ~UIssue595Interface() = default;


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIssue595Interface(); \
	friend struct Z_Construct_UClass_UIssue595Interface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Interface_NoRegister(); \
public: \
	DECLARE_CLASS2(UIssue595Interface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_UIssue595Interface_NoRegister) \
	DECLARE_SERIALIZER(UIssue595Interface)


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIssue595Interface() {} \
public: \
	typedef UIssue595Interface UClassType; \
	typedef IIssue595Interface ThisClass; \
	static int32 Execute_Test(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_19_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_CALLBACK_WRAPPERS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIssue595Interface;

// ********** End Interface UIssue595Interface *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
