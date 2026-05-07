// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perfs/UnLuaBenchmarkProxy.h"

#ifdef UNLUATESTSUITE_UnLuaBenchmarkProxy_generated_h
#error "UnLuaBenchmarkProxy.generated.h already included, missing '#pragma once' in UnLuaBenchmarkProxy.h"
#endif
#define UNLUATESTSUITE_UnLuaBenchmarkProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AUnLuaBenchmarkProxy *****************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMeshInfo); \
	DECLARE_FUNCTION(execGetPredictedPositions); \
	DECLARE_FUNCTION(execUpdatePositions); \
	DECLARE_FUNCTION(execGetPositions); \
	DECLARE_FUNCTION(execUpdateIndices); \
	DECLARE_FUNCTION(execGetIndices); \
	DECLARE_FUNCTION(execRaycast); \
	DECLARE_FUNCTION(execUpdateMeshName); \
	DECLARE_FUNCTION(execUpdateMeshID); \
	DECLARE_FUNCTION(execGetCOM); \
	DECLARE_FUNCTION(execGetMeshName); \
	DECLARE_FUNCTION(execGetMeshID); \
	DECLARE_FUNCTION(execSimulate); \
	DECLARE_FUNCTION(execNOP);


UNLUATESTSUITE_API UClass* Z_Construct_UClass_AUnLuaBenchmarkProxy_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnLuaBenchmarkProxy(); \
	friend struct Z_Construct_UClass_AUnLuaBenchmarkProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_AUnLuaBenchmarkProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(AUnLuaBenchmarkProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_AUnLuaBenchmarkProxy_NoRegister) \
	DECLARE_SERIALIZER(AUnLuaBenchmarkProxy)


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnLuaBenchmarkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUnLuaBenchmarkProxy(AUnLuaBenchmarkProxy&&) = delete; \
	AUnLuaBenchmarkProxy(const AUnLuaBenchmarkProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnLuaBenchmarkProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnLuaBenchmarkProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnLuaBenchmarkProxy) \
	NO_API virtual ~AUnLuaBenchmarkProxy();


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_20_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUnLuaBenchmarkProxy;

// ********** End Class AUnLuaBenchmarkProxy *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_Perfs_UnLuaBenchmarkProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
