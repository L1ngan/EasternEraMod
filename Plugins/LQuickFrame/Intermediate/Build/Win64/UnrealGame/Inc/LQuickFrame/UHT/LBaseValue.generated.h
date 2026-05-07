// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/LBaseValue.h"

#ifdef LQUICKFRAME_LBaseValue_generated_h
#error "LBaseValue.generated.h already included, missing '#pragma once' in LBaseValue.h"
#endif
#define LQUICKFRAME_LBaseValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FLUniValue;

// ********** Begin ScriptStruct FLUniValue ********************************************************
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLUniValue_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLUniValue;
// ********** End ScriptStruct FLUniValue **********************************************************

// ********** Begin ScriptStruct FDataBase *********************************************************
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FDataBase;
// ********** End ScriptStruct FDataBase ***********************************************************

// ********** Begin Interface ULBaseInterface ******************************************************
LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseInterface_NoRegister();

#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LQUICKFRAME_API ULBaseInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULBaseInterface(ULBaseInterface&&) = delete; \
	ULBaseInterface(const ULBaseInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LQUICKFRAME_API, ULBaseInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULBaseInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULBaseInterface) \
	virtual ~ULBaseInterface() = default;


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_94_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULBaseInterface(); \
	friend struct Z_Construct_UClass_ULBaseInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(ULBaseInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULBaseInterface_NoRegister) \
	DECLARE_SERIALIZER(ULBaseInterface)


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_94_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_94_GENERATED_UINTERFACE_BODY() \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_94_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_94_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILBaseInterface() {} \
public: \
	typedef ULBaseInterface UClassType; \
	typedef ILBaseInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_91_PROLOG
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_94_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULBaseInterface;

// ********** End Interface ULBaseInterface ********************************************************

// ********** Begin Class ULBaseLibrary ************************************************************
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUniCompare); \
	DECLARE_FUNCTION(execSetDebugFlag);


LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseLibrary_NoRegister();

#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULBaseLibrary(); \
	friend struct Z_Construct_UClass_ULBaseLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULBaseLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LQuickFrame"), Z_Construct_UClass_ULBaseLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULBaseLibrary)


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_136_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULBaseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULBaseLibrary(ULBaseLibrary&&) = delete; \
	ULBaseLibrary(const ULBaseLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULBaseLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULBaseLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULBaseLibrary) \
	NO_API virtual ~ULBaseLibrary();


#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_133_PROLOG
#define FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_136_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULBaseLibrary;

// ********** End Class ULBaseLibrary **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h

// ********** Begin Enum ELUniType *****************************************************************
#define FOREACH_ENUM_ELUNITYPE(op) \
	op(ELUniType::Bool) \
	op(ELUniType::Int) \
	op(ELUniType::Float) 

enum class ELUniType : uint8;
template<> struct TIsUEnumClass<ELUniType> { enum { Value = true }; };
template<> LQUICKFRAME_API UEnum* StaticEnum<ELUniType>();
// ********** End Enum ELUniType *******************************************************************

// ********** Begin Enum ELUniQuery ****************************************************************
#define FOREACH_ENUM_ELUNIQUERY(op) \
	op(IsEqualTo) \
	op(IsNotEqualTo) \
	op(IsLessThan) \
	op(IsLessThanOrEqualTo) \
	op(IsGreaterThan) \
	op(IsGreaterThanOrEqualTo) 
// ********** End Enum ELUniQuery ******************************************************************

// ********** Begin Enum EEnterGameMode ************************************************************
#define FOREACH_ENUM_EENTERGAMEMODE(op) \
	op(EEnterGameMode::None) \
	op(EEnterGameMode::NewGame) \
	op(EEnterGameMode::LoadSaveGame) 

enum class EEnterGameMode : uint8;
template<> struct TIsUEnumClass<EEnterGameMode> { enum { Value = true }; };
template<> LQUICKFRAME_API UEnum* StaticEnum<EEnterGameMode>();
// ********** End Enum EEnterGameMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
