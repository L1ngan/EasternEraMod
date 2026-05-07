// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RHS_CollisionShape.h"

#ifdef AURORADEVS_RHS_RHS_CollisionShape_generated_h
#error "RHS_CollisionShape.generated.h already included, missing '#pragma once' in RHS_CollisionShape.h"
#endif
#define AURORADEVS_RHS_RHS_CollisionShape_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UObject;
struct FColor;
struct FHitResult;

// ********** Begin Class URHS_CollisionShape ******************************************************
#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSweepMultiByChannel); \
	DECLARE_FUNCTION(execDrawDebugShape); \
	DECLARE_FUNCTION(execGetShapeExtentVector);


AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_NoRegister();

#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURHS_CollisionShape(); \
	friend struct Z_Construct_UClass_URHS_CollisionShape_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_NoRegister(); \
public: \
	DECLARE_CLASS2(URHS_CollisionShape, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AuroraDevs_RHS"), Z_Construct_UClass_URHS_CollisionShape_NoRegister) \
	DECLARE_SERIALIZER(URHS_CollisionShape)


#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URHS_CollisionShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URHS_CollisionShape(URHS_CollisionShape&&) = delete; \
	URHS_CollisionShape(const URHS_CollisionShape&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URHS_CollisionShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URHS_CollisionShape); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URHS_CollisionShape) \
	NO_API virtual ~URHS_CollisionShape();


#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_13_PROLOG
#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_16_INCLASS_NO_PURE_DECLS \
	FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URHS_CollisionShape;

// ********** End Class URHS_CollisionShape ********************************************************

// ********** Begin Class URHS_CollisionShape_Sphere ***********************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Sphere_NoRegister();

#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURHS_CollisionShape_Sphere(); \
	friend struct Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Sphere_NoRegister(); \
public: \
	DECLARE_CLASS2(URHS_CollisionShape_Sphere, URHS_CollisionShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AuroraDevs_RHS"), Z_Construct_UClass_URHS_CollisionShape_Sphere_NoRegister) \
	DECLARE_SERIALIZER(URHS_CollisionShape_Sphere)


#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URHS_CollisionShape_Sphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URHS_CollisionShape_Sphere(URHS_CollisionShape_Sphere&&) = delete; \
	URHS_CollisionShape_Sphere(const URHS_CollisionShape_Sphere&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URHS_CollisionShape_Sphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URHS_CollisionShape_Sphere); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URHS_CollisionShape_Sphere) \
	NO_API virtual ~URHS_CollisionShape_Sphere();


#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_58_PROLOG
#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_61_INCLASS_NO_PURE_DECLS \
	FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URHS_CollisionShape_Sphere;

// ********** End Class URHS_CollisionShape_Sphere *************************************************

// ********** Begin Class URHS_CollisionShape_Box **************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Box_NoRegister();

#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURHS_CollisionShape_Box(); \
	friend struct Z_Construct_UClass_URHS_CollisionShape_Box_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Box_NoRegister(); \
public: \
	DECLARE_CLASS2(URHS_CollisionShape_Box, URHS_CollisionShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AuroraDevs_RHS"), Z_Construct_UClass_URHS_CollisionShape_Box_NoRegister) \
	DECLARE_SERIALIZER(URHS_CollisionShape_Box)


#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URHS_CollisionShape_Box(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URHS_CollisionShape_Box(URHS_CollisionShape_Box&&) = delete; \
	URHS_CollisionShape_Box(const URHS_CollisionShape_Box&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URHS_CollisionShape_Box); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URHS_CollisionShape_Box); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URHS_CollisionShape_Box) \
	NO_API virtual ~URHS_CollisionShape_Box();


#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_79_PROLOG
#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_82_INCLASS_NO_PURE_DECLS \
	FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URHS_CollisionShape_Box;

// ********** End Class URHS_CollisionShape_Box ****************************************************

// ********** Begin Class URHS_CollisionShape_Capsule **********************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Capsule_NoRegister();

#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURHS_CollisionShape_Capsule(); \
	friend struct Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Capsule_NoRegister(); \
public: \
	DECLARE_CLASS2(URHS_CollisionShape_Capsule, URHS_CollisionShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AuroraDevs_RHS"), Z_Construct_UClass_URHS_CollisionShape_Capsule_NoRegister) \
	DECLARE_SERIALIZER(URHS_CollisionShape_Capsule)


#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URHS_CollisionShape_Capsule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URHS_CollisionShape_Capsule(URHS_CollisionShape_Capsule&&) = delete; \
	URHS_CollisionShape_Capsule(const URHS_CollisionShape_Capsule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URHS_CollisionShape_Capsule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URHS_CollisionShape_Capsule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URHS_CollisionShape_Capsule) \
	NO_API virtual ~URHS_CollisionShape_Capsule();


#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_100_PROLOG
#define FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_103_INCLASS_NO_PURE_DECLS \
	FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URHS_CollisionShape_Capsule;

// ********** End Class URHS_CollisionShape_Capsule ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
