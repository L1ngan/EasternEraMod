// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnLuaTestHelpers.h"

#ifdef UNLUATESTSUITE_UnLuaTestHelpers_generated_h
#error "UnLuaTestHelpers.generated.h already included, missing '#pragma once' in UnLuaTestHelpers.h"
#endif
#define UNLUATESTSUITE_UnLuaTestHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UUserWidget;
struct FColor;
struct FLinearColor;
struct FUnLuaTestTableRow;

// ********** Begin Delegate FUnLuaTestSimpleEvent *************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_26_DELEGATE \
UNLUATESTSUITE_API void FUnLuaTestSimpleEvent_DelegateWrapper(const FMulticastScriptDelegate& UnLuaTestSimpleEvent);


// ********** End Delegate FUnLuaTestSimpleEvent ***************************************************

// ********** Begin Delegate FUnLuaTestSimpleHandler ***********************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_28_DELEGATE \
UNLUATESTSUITE_API void FUnLuaTestSimpleHandler_DelegateWrapper(const FScriptDelegate& UnLuaTestSimpleHandler);


// ********** End Delegate FUnLuaTestSimpleHandler *************************************************

// ********** Begin Delegate FUnLuaTestComplexHandler **********************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_30_DELEGATE \
UNLUATESTSUITE_API int32 FUnLuaTestComplexHandler_DelegateWrapper(const FScriptDelegate& UnLuaTestComplexHandler, FString& Name);


// ********** End Delegate FUnLuaTestComplexHandler ************************************************

// ********** Begin Delegate FIssue304Event ********************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_32_DELEGATE \
UNLUATESTSUITE_API void FIssue304Event_DelegateWrapper(const FMulticastScriptDelegate& Issue304Event, const TArray<FString>& Array);


// ********** End Delegate FIssue304Event **********************************************************

// ********** Begin Delegate FIssue362Delegate *****************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_34_DELEGATE \
UNLUATESTSUITE_API void FIssue362Delegate_DelegateWrapper(const FScriptDelegate& Issue362Delegate, TArray<int32>& Array);


// ********** End Delegate FIssue362Delegate *******************************************************

// ********** Begin Class UUnLuaTestStub ***********************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestForIssue407); \
	DECLARE_FUNCTION(execAddCount);


UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestStub_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaTestStub(); \
	friend struct Z_Construct_UClass_UUnLuaTestStub_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestStub_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnLuaTestStub, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_UUnLuaTestStub_NoRegister) \
	DECLARE_SERIALIZER(UUnLuaTestStub)


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnLuaTestStub(UUnLuaTestStub&&) = delete; \
	UUnLuaTestStub(const UUnLuaTestStub&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaTestStub); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaTestStub); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnLuaTestStub) \
	NO_API virtual ~UUnLuaTestStub();


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_73_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_76_INCLASS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnLuaTestStub;

// ********** End Class UUnLuaTestStub *************************************************************

// ********** Begin Class UUnLuaTestStubForIssue446 ************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_123_CALLBACK_WRAPPERS
UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestStubForIssue446_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaTestStubForIssue446(); \
	friend struct Z_Construct_UClass_UUnLuaTestStubForIssue446_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestStubForIssue446_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnLuaTestStubForIssue446, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_UUnLuaTestStubForIssue446_NoRegister) \
	DECLARE_SERIALIZER(UUnLuaTestStubForIssue446) \
	virtual UObject* _getUObject() const override { return const_cast<UUnLuaTestStubForIssue446*>(this); }


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaTestStubForIssue446(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnLuaTestStubForIssue446(UUnLuaTestStubForIssue446&&) = delete; \
	UUnLuaTestStubForIssue446(const UUnLuaTestStubForIssue446&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaTestStubForIssue446); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaTestStubForIssue446); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaTestStubForIssue446) \
	NO_API virtual ~UUnLuaTestStubForIssue446();


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_120_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_123_CALLBACK_WRAPPERS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_123_INCLASS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnLuaTestStubForIssue446;

// ********** End Class UUnLuaTestStubForIssue446 **************************************************

// ********** Begin Class AUnLuaTestActor **********************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_148_CALLBACK_WRAPPERS
UNLUATESTSUITE_API UClass* Z_Construct_UClass_AUnLuaTestActor_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnLuaTestActor(); \
	friend struct Z_Construct_UClass_AUnLuaTestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_AUnLuaTestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AUnLuaTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_AUnLuaTestActor_NoRegister) \
	DECLARE_SERIALIZER(AUnLuaTestActor)


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnLuaTestActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUnLuaTestActor(AUnLuaTestActor&&) = delete; \
	AUnLuaTestActor(const AUnLuaTestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnLuaTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnLuaTestActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnLuaTestActor) \
	NO_API virtual ~AUnLuaTestActor();


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_145_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_148_CALLBACK_WRAPPERS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_148_INCLASS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUnLuaTestActor;

// ********** End Class AUnLuaTestActor ************************************************************

// ********** Begin ScriptStruct FUnLuaTestTableRow ************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUnLuaTestTableRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FUnLuaTestTableRow;
// ********** End ScriptStruct FUnLuaTestTableRow **************************************************

// ********** Begin Delegate FIssule294Event *******************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_193_DELEGATE \
UNLUATESTSUITE_API void FIssule294Event_DelegateWrapper(const FScriptDelegate& Issule294Event, int32 Value1, UObject* Value2);


// ********** End Delegate FIssule294Event *********************************************************

// ********** Begin Class UUnLuaTestFunctionLibrary ************************************************
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestForIssue376); \
	DECLARE_FUNCTION(execTestForIssue331); \
	DECLARE_FUNCTION(execTestForIssue323); \
	DECLARE_FUNCTION(execTestForIssue294); \
	DECLARE_FUNCTION(execTestForIssue293); \
	DECLARE_FUNCTION(execTestForBaseSpec2); \
	DECLARE_FUNCTION(execTestForBaseSpec1);


UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestFunctionLibrary_NoRegister();

#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaTestFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUnLuaTestFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNLUATESTSUITE_API UClass* Z_Construct_UClass_UUnLuaTestFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnLuaTestFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), Z_Construct_UClass_UUnLuaTestFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUnLuaTestFunctionLibrary)


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_198_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaTestFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnLuaTestFunctionLibrary(UUnLuaTestFunctionLibrary&&) = delete; \
	UUnLuaTestFunctionLibrary(const UUnLuaTestFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaTestFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaTestFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaTestFunctionLibrary) \
	NO_API virtual ~UUnLuaTestFunctionLibrary();


#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_195_PROLOG
#define FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_198_INCLASS_NO_PURE_DECLS \
	FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnLuaTestFunctionLibrary;

// ********** End Class UUnLuaTestFunctionLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnLua_feature_ue5_6_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Public_UnLuaTestHelpers_h

// ********** Begin Enum EEnumForIssue331 **********************************************************
#define FOREACH_ENUM_EENUMFORISSUE331(op) \
	op(RECORD_NONE) \
	op(RECORD_TO_FILE) \
	op(RECORD_TO_LOG) 
// ********** End Enum EEnumForIssue331 ************************************************************

// ********** Begin Enum EUnLuaTestEnum ************************************************************
#define FOREACH_ENUM_EUNLUATESTENUM(op) \
	op(EUnLuaTestEnum::None) \
	op(EUnLuaTestEnum::Value1) \
	op(EUnLuaTestEnum::Value2) 

enum class EUnLuaTestEnum : uint8;
template<> struct TIsUEnumClass<EUnLuaTestEnum> { enum { Value = true }; };
template<> UNLUATESTSUITE_API UEnum* StaticEnum<EUnLuaTestEnum>();
// ********** End Enum EUnLuaTestEnum **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
