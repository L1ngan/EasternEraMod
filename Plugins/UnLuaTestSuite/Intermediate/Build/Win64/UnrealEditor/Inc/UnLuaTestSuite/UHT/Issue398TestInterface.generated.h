// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Issue398TestInterface.h"

#ifdef UNLUATESTSUITE_Issue398TestInterface_generated_h
#error "Issue398TestInterface.generated.h already included, missing '#pragma once' in Issue398TestInterface.h"
#endif
#define UNLUATESTSUITE_Issue398TestInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterfaceForIssue398 ************************************************
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterfaceForIssue398(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterfaceForIssue398(UInterfaceForIssue398&&) = delete; \
	UInterfaceForIssue398(const UInterfaceForIssue398&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterfaceForIssue398); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfaceForIssue398); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfaceForIssue398) \
	virtual ~UInterfaceForIssue398() = default;


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterfaceForIssue398(); \
	friend struct Z_Construct_UClass_UInterfaceForIssue398_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_UInterfaceForIssue398_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterfaceForIssue398, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_UInterfaceForIssue398_NoRegister) \
	DECLARE_SERIALIZER(UInterfaceForIssue398)


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterfaceForIssue398() {} \
public: \
	typedef UInterfaceForIssue398 UClassType; \
	typedef IInterfaceForIssue398 ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_19_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterfaceForIssue398;

// ********** End Interface UInterfaceForIssue398 **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue398TestInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
