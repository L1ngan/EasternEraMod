// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModInfoEditorData.h"

#ifdef CREATEMODPLUGINEDITOR_ModInfoEditorData_generated_h
#error "ModInfoEditorData.generated.h already included, missing '#pragma once' in ModInfoEditorData.h"
#endif
#define CREATEMODPLUGINEDITOR_ModInfoEditorData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModDependencyData ************************************************
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModDependencyData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FModDependencyData;
// ********** End ScriptStruct FModDependencyData **************************************************

// ********** Begin Class UModInfoData *************************************************************
CREATEMODPLUGINEDITOR_API UClass* Z_Construct_UClass_UModInfoData_NoRegister();

#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModInfoData(); \
	friend struct Z_Construct_UClass_UModInfoData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CREATEMODPLUGINEDITOR_API UClass* Z_Construct_UClass_UModInfoData_NoRegister(); \
public: \
	DECLARE_CLASS2(UModInfoData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CreateModPluginEditor"), Z_Construct_UClass_UModInfoData_NoRegister) \
	DECLARE_SERIALIZER(UModInfoData)


#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModInfoData(UModInfoData&&) = delete; \
	UModInfoData(const UModInfoData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModInfoData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModInfoData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModInfoData) \
	NO_API virtual ~UModInfoData();


#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h_29_PROLOG
#define FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h_32_INCLASS_NO_PURE_DECLS \
	FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModInfoData;

// ********** End Class UModInfoData ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_CreateModPlugin_Source_CreateModPluginEditor_Public_ModInfoEditorData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
