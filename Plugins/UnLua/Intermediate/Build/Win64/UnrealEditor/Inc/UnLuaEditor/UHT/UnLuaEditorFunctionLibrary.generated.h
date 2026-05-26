// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnLuaEditorFunctionLibrary.h"

#ifdef UNLUAEDITOR_UnLuaEditorFunctionLibrary_generated_h
#error "UnLuaEditorFunctionLibrary.generated.h already included, missing '#pragma once' in UnLuaEditorFunctionLibrary.h"
#endif
#define UNLUAEDITOR_UnLuaEditorFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnLuaEditorFunctionLibrary **********************************************
UNLUAEDITOR_API UClass* Z_Construct_UClass_UUnLuaEditorFunctionLibrary_NoRegister();

#define FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaEditorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUnLuaEditorFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUAEDITOR_API UClass* Z_Construct_UClass_UUnLuaEditorFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnLuaEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaEditor"), Z_Construct_UClass_UUnLuaEditorFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUnLuaEditorFunctionLibrary)


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnLuaEditorFunctionLibrary(UUnLuaEditorFunctionLibrary&&) = delete; \
	UUnLuaEditorFunctionLibrary(const UUnLuaEditorFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaEditorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaEditorFunctionLibrary) \
	NO_API virtual ~UUnLuaEditorFunctionLibrary();


#define FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h_22_PROLOG
#define FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnLuaEditorFunctionLibrary;

// ********** End Class UUnLuaEditorFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_UnLua_Source_UnLuaEditor_Private_UnLuaEditorFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
