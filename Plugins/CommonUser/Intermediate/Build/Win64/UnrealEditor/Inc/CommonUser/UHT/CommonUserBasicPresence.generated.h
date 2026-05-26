// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserBasicPresence.h"

#ifdef COMMONUSER_CommonUserBasicPresence_generated_h
#error "CommonUserBasicPresence.generated.h already included, missing '#pragma once' in CommonUserBasicPresence.h"
#endif
#define COMMONUSER_CommonUserBasicPresence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonUserBasicPresence *************************************************
COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserBasicPresence_NoRegister();

#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUserBasicPresence(); \
	friend struct Z_Construct_UClass_UCommonUserBasicPresence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserBasicPresence_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUserBasicPresence, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUser"), Z_Construct_UClass_UCommonUserBasicPresence_NoRegister) \
	DECLARE_SERIALIZER(UCommonUserBasicPresence) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUserBasicPresence(UCommonUserBasicPresence&&) = delete; \
	UCommonUserBasicPresence(const UCommonUserBasicPresence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserBasicPresence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserBasicPresence); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUserBasicPresence) \
	NO_API virtual ~UCommonUserBasicPresence();


#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h_18_PROLOG
#define FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h_21_INCLASS_NO_PURE_DECLS \
	FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUserBasicPresence;

// ********** End Class UCommonUserBasicPresence ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_CommonUser_Source_CommonUser_Public_CommonUserBasicPresence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
