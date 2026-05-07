// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LQuickFrame/Base/LBaseValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLBaseValue() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseInterface();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseInterface_NoRegister();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseLibrary();
LQUICKFRAME_API UClass* Z_Construct_UClass_ULBaseLibrary_NoRegister();
LQUICKFRAME_API UEnum* Z_Construct_UEnum_LQuickFrame_EEnterGameMode();
LQUICKFRAME_API UEnum* Z_Construct_UEnum_LQuickFrame_ELUniQuery();
LQUICKFRAME_API UEnum* Z_Construct_UEnum_LQuickFrame_ELUniType();
LQUICKFRAME_API UScriptStruct* Z_Construct_UScriptStruct_FDataBase();
LQUICKFRAME_API UScriptStruct* Z_Construct_UScriptStruct_FLUniValue();
UPackage* Z_Construct_UPackage__Script_LQuickFrame();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELUniType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELUniType;
static UEnum* ELUniType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELUniType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELUniType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LQuickFrame_ELUniType, (UObject*)Z_Construct_UPackage__Script_LQuickFrame(), TEXT("ELUniType"));
	}
	return Z_Registration_Info_UEnum_ELUniType.OuterSingleton;
}
template<> LQUICKFRAME_API UEnum* StaticEnum<ELUniType>()
{
	return ELUniType_StaticEnum();
}
struct Z_Construct_UEnum_LQuickFrame_ELUniType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.DisplayName", "\xe6\x98\xaf\xe5\x90\xa6" },
		{ "Bool.Name", "ELUniType::Bool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x86\x85\xe8\x81\x94\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Float.DisplayName", "\xe5\xb0\x8f\xe6\x95\xb0" },
		{ "Float.Name", "ELUniType::Float" },
		{ "Int.DisplayName", "\xe6\x95\xb4\xe6\x95\xb0" },
		{ "Int.Name", "ELUniType::Int" },
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x85\xe8\x81\x94\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELUniType::Bool", (int64)ELUniType::Bool },
		{ "ELUniType::Int", (int64)ELUniType::Int },
		{ "ELUniType::Float", (int64)ELUniType::Float },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LQuickFrame_ELUniType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LQuickFrame,
	nullptr,
	"ELUniType",
	"ELUniType",
	Z_Construct_UEnum_LQuickFrame_ELUniType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_ELUniType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_ELUniType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LQuickFrame_ELUniType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LQuickFrame_ELUniType()
{
	if (!Z_Registration_Info_UEnum_ELUniType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELUniType.InnerSingleton, Z_Construct_UEnum_LQuickFrame_ELUniType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELUniType.InnerSingleton;
}
// ********** End Enum ELUniType *******************************************************************

// ********** Begin Enum ELUniQuery ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELUniQuery;
static UEnum* ELUniQuery_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELUniQuery.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELUniQuery.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LQuickFrame_ELUniQuery, (UObject*)Z_Construct_UPackage__Script_LQuickFrame(), TEXT("ELUniQuery"));
	}
	return Z_Registration_Info_UEnum_ELUniQuery.OuterSingleton;
}
template<> LQUICKFRAME_API UEnum* StaticEnum<ELUniQuery>()
{
	return ELUniQuery_StaticEnum();
}
struct Z_Construct_UEnum_LQuickFrame_ELUniQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x86\x85\xe8\x81\x94\xe5\x88\xa4\xe6\x96\xad\xe8\xa7\x84\xe5\x88\x99\n" },
#endif
		{ "IsEqualTo.DisplayName", "==" },
		{ "IsEqualTo.Name", "IsEqualTo" },
		{ "IsGreaterThan.DisplayName", ">" },
		{ "IsGreaterThan.Name", "IsGreaterThan" },
		{ "IsGreaterThanOrEqualTo.DisplayName", ">=" },
		{ "IsGreaterThanOrEqualTo.Name", "IsGreaterThanOrEqualTo" },
		{ "IsLessThan.DisplayName", "<" },
		{ "IsLessThan.Name", "IsLessThan" },
		{ "IsLessThanOrEqualTo.DisplayName", "<=" },
		{ "IsLessThanOrEqualTo.Name", "IsLessThanOrEqualTo" },
		{ "IsNotEqualTo.DisplayName", "!==" },
		{ "IsNotEqualTo.Name", "IsNotEqualTo" },
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x85\xe8\x81\x94\xe5\x88\xa4\xe6\x96\xad\xe8\xa7\x84\xe5\x88\x99" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "IsEqualTo", (int64)IsEqualTo },
		{ "IsNotEqualTo", (int64)IsNotEqualTo },
		{ "IsLessThan", (int64)IsLessThan },
		{ "IsLessThanOrEqualTo", (int64)IsLessThanOrEqualTo },
		{ "IsGreaterThan", (int64)IsGreaterThan },
		{ "IsGreaterThanOrEqualTo", (int64)IsGreaterThanOrEqualTo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LQuickFrame_ELUniQuery_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LQuickFrame,
	nullptr,
	"ELUniQuery",
	"ELUniQuery",
	Z_Construct_UEnum_LQuickFrame_ELUniQuery_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_ELUniQuery_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_ELUniQuery_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LQuickFrame_ELUniQuery_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LQuickFrame_ELUniQuery()
{
	if (!Z_Registration_Info_UEnum_ELUniQuery.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELUniQuery.InnerSingleton, Z_Construct_UEnum_LQuickFrame_ELUniQuery_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELUniQuery.InnerSingleton;
}
// ********** End Enum ELUniQuery ******************************************************************

// ********** Begin Enum EEnterGameMode ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnterGameMode;
static UEnum* EEnterGameMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnterGameMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnterGameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LQuickFrame_EEnterGameMode, (UObject*)Z_Construct_UPackage__Script_LQuickFrame(), TEXT("EEnterGameMode"));
	}
	return Z_Registration_Info_UEnum_EEnterGameMode.OuterSingleton;
}
template<> LQUICKFRAME_API UEnum* StaticEnum<EEnterGameMode>()
{
	return EEnterGameMode_StaticEnum();
}
struct Z_Construct_UEnum_LQuickFrame_EEnterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbf\x9b\xe5\x85\xa5\xe6\xb8\xb8\xe6\x88\x8f\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "LoadSaveGame.Comment", "//\xe5\x8a\xa0\xe8\xbd\xbd\xe5\xad\x98\xe6\xa1\xa3\n" },
		{ "LoadSaveGame.Name", "EEnterGameMode::LoadSaveGame" },
		{ "LoadSaveGame.ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe5\xad\x98\xe6\xa1\xa3" },
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
		{ "NewGame.Comment", "//\xe6\x96\xb0\xe6\xb8\xb8\xe6\x88\x8f\n" },
		{ "NewGame.Name", "EEnterGameMode::NewGame" },
		{ "NewGame.ToolTip", "\xe6\x96\xb0\xe6\xb8\xb8\xe6\x88\x8f" },
		{ "None.Name", "EEnterGameMode::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9b\xe5\x85\xa5\xe6\xb8\xb8\xe6\x88\x8f\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnterGameMode::None", (int64)EEnterGameMode::None },
		{ "EEnterGameMode::NewGame", (int64)EEnterGameMode::NewGame },
		{ "EEnterGameMode::LoadSaveGame", (int64)EEnterGameMode::LoadSaveGame },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LQuickFrame_EEnterGameMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LQuickFrame,
	nullptr,
	"EEnterGameMode",
	"EEnterGameMode",
	Z_Construct_UEnum_LQuickFrame_EEnterGameMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_EEnterGameMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LQuickFrame_EEnterGameMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LQuickFrame_EEnterGameMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LQuickFrame_EEnterGameMode()
{
	if (!Z_Registration_Info_UEnum_EEnterGameMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnterGameMode.InnerSingleton, Z_Construct_UEnum_LQuickFrame_EEnterGameMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnterGameMode.InnerSingleton;
}
// ********** End Enum EEnterGameMode **************************************************************

// ********** Begin ScriptStruct FLUniValue ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLUniValue;
class UScriptStruct* FLUniValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLUniValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLUniValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLUniValue, (UObject*)Z_Construct_UPackage__Script_LQuickFrame(), TEXT("LUniValue"));
	}
	return Z_Registration_Info_UScriptStruct_FLUniValue.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLUniValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x86\x85\xe8\x81\x94\xe6\x95\xb0\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\x85\xe8\x81\x94\xe6\x95\xb0\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValType_MetaData[] = {
		{ "Category", "LUniValue" },
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolVal_MetaData[] = {
		{ "Category", "LUniValue" },
		{ "EditCondition", "ValType == ELUniType::Bool" },
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntVal_MetaData[] = {
		{ "Category", "LUniValue" },
		{ "EditCondition", "ValType == ELUniType::Int" },
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatVal_MetaData[] = {
		{ "Category", "LUniValue" },
		{ "EditCondition", "ValType == ELUniType::Float" },
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValType;
	static void NewProp_BoolVal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolVal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntVal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLUniValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_ValType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_ValType = { "ValType", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLUniValue, ValType), Z_Construct_UEnum_LQuickFrame_ELUniType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValType_MetaData), NewProp_ValType_MetaData) }; // 3233846492
void Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_BoolVal_SetBit(void* Obj)
{
	((FLUniValue*)Obj)->BoolVal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_BoolVal = { "BoolVal", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLUniValue), &Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_BoolVal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolVal_MetaData), NewProp_BoolVal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_IntVal = { "IntVal", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLUniValue, IntVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntVal_MetaData), NewProp_IntVal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_FloatVal = { "FloatVal", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLUniValue, FloatVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatVal_MetaData), NewProp_FloatVal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLUniValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_ValType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_ValType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_BoolVal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_IntVal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLUniValue_Statics::NewProp_FloatVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLUniValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLUniValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
	nullptr,
	&NewStructOps,
	"LUniValue",
	Z_Construct_UScriptStruct_FLUniValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLUniValue_Statics::PropPointers),
	sizeof(FLUniValue),
	alignof(FLUniValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLUniValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLUniValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLUniValue()
{
	if (!Z_Registration_Info_UScriptStruct_FLUniValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLUniValue.InnerSingleton, Z_Construct_UScriptStruct_FLUniValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLUniValue.InnerSingleton;
}
// ********** End ScriptStruct FLUniValue **********************************************************

// ********** Begin ScriptStruct FDataBase *********************************************************
static_assert(std::is_polymorphic<FDataBase>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDataBase cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDataBase;
class UScriptStruct* FDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataBase, (UObject*)Z_Construct_UPackage__Script_LQuickFrame(), TEXT("DataBase"));
	}
	return Z_Registration_Info_UScriptStruct_FDataBase.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe5\x9f\xba\xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "DataBase" },
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "Category", "DataBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Comment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataBase_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataBase, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDataBase_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataBase, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataBase_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataBase_Statics::NewProp_Comment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DataBase",
	Z_Construct_UScriptStruct_FDataBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataBase_Statics::PropPointers),
	sizeof(FDataBase),
	alignof(FDataBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataBase()
{
	if (!Z_Registration_Info_UScriptStruct_FDataBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDataBase.InnerSingleton, Z_Construct_UScriptStruct_FDataBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDataBase.InnerSingleton;
}
// ********** End ScriptStruct FDataBase ***********************************************************

// ********** Begin Interface ULBaseInterface ******************************************************
void ULBaseInterface::StaticRegisterNativesULBaseInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULBaseInterface;
UClass* ULBaseInterface::GetPrivateStaticClass()
{
	using TClass = ULBaseInterface;
	if (!Z_Registration_Info_UClass_ULBaseInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LBaseInterface"),
			Z_Registration_Info_UClass_ULBaseInterface.InnerSingleton,
			StaticRegisterNativesULBaseInterface,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ULBaseInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_ULBaseInterface_NoRegister()
{
	return ULBaseInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULBaseInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILBaseInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULBaseInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULBaseInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULBaseInterface_Statics::ClassParams = {
	&ULBaseInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULBaseInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULBaseInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULBaseInterface()
{
	if (!Z_Registration_Info_UClass_ULBaseInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULBaseInterface.OuterSingleton, Z_Construct_UClass_ULBaseInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULBaseInterface.OuterSingleton;
}
ULBaseInterface::ULBaseInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULBaseInterface);
// ********** End Interface ULBaseInterface ********************************************************

// ********** Begin Class ULBaseLibrary Function SetDebugFlag **************************************
struct Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics
{
	struct LBaseLibrary_eventSetDebugFlag_Parms
	{
		FString Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LBaseLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb5\x8b\xe8\xaf\x95\xe6\xa0\x87\xe8\xaf\x86\n//\xe8\xae\xbe\xe7\xbd\xae\xe6\xb5\x8b\xe8\xaf\x95\xe6\xa0\x87\xe8\xaf\x86\n" },
#endif
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb5\x8b\xe8\xaf\x95\xe6\xa0\x87\xe8\xaf\x86\n\xe8\xae\xbe\xe7\xbd\xae\xe6\xb5\x8b\xe8\xaf\x95\xe6\xa0\x87\xe8\xaf\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LBaseLibrary_eventSetDebugFlag_Parms, Flag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flag_MetaData), NewProp_Flag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULBaseLibrary, nullptr, "SetDebugFlag", Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::LBaseLibrary_eventSetDebugFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::LBaseLibrary_eventSetDebugFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULBaseLibrary::execSetDebugFlag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Flag);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULBaseLibrary::SetDebugFlag(Z_Param_Flag);
	P_NATIVE_END;
}
// ********** End Class ULBaseLibrary Function SetDebugFlag ****************************************

// ********** Begin Class ULBaseLibrary Function UniCompare ****************************************
struct Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics
{
	struct LBaseLibrary_eventUniCompare_Parms
	{
		FLUniValue Val1;
		FLUniValue Val2;
		TEnumAsByte<ELUniQuery> Query;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LBaseLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FLUniValue \xe6\xaf\x94\xe8\xbe\x83\n" },
#endif
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FLUniValue \xe6\xaf\x94\xe8\xbe\x83" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Val1_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Val2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Val1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Val2;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Query;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::NewProp_Val1 = { "Val1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LBaseLibrary_eventUniCompare_Parms, Val1), Z_Construct_UScriptStruct_FLUniValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Val1_MetaData), NewProp_Val1_MetaData) }; // 3323368300
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::NewProp_Val2 = { "Val2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LBaseLibrary_eventUniCompare_Parms, Val2), Z_Construct_UScriptStruct_FLUniValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Val2_MetaData), NewProp_Val2_MetaData) }; // 3323368300
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LBaseLibrary_eventUniCompare_Parms, Query), Z_Construct_UEnum_LQuickFrame_ELUniQuery, METADATA_PARAMS(0, nullptr) }; // 15948104
void Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LBaseLibrary_eventUniCompare_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LBaseLibrary_eventUniCompare_Parms), &Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::NewProp_Val1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::NewProp_Val2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULBaseLibrary, nullptr, "UniCompare", Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::LBaseLibrary_eventUniCompare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::LBaseLibrary_eventUniCompare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULBaseLibrary_UniCompare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULBaseLibrary_UniCompare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULBaseLibrary::execUniCompare)
{
	P_GET_STRUCT_REF(FLUniValue,Z_Param_Out_Val1);
	P_GET_STRUCT_REF(FLUniValue,Z_Param_Out_Val2);
	P_GET_PROPERTY(FByteProperty,Z_Param_Query);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULBaseLibrary::UniCompare(Z_Param_Out_Val1,Z_Param_Out_Val2,ELUniQuery(Z_Param_Query));
	P_NATIVE_END;
}
// ********** End Class ULBaseLibrary Function UniCompare ******************************************

// ********** Begin Class ULBaseLibrary ************************************************************
void ULBaseLibrary::StaticRegisterNativesULBaseLibrary()
{
	UClass* Class = ULBaseLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDebugFlag", &ULBaseLibrary::execSetDebugFlag },
		{ "UniCompare", &ULBaseLibrary::execUniCompare },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULBaseLibrary;
UClass* ULBaseLibrary::GetPrivateStaticClass()
{
	using TClass = ULBaseLibrary;
	if (!Z_Registration_Info_UClass_ULBaseLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LBaseLibrary"),
			Z_Registration_Info_UClass_ULBaseLibrary.InnerSingleton,
			StaticRegisterNativesULBaseLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ULBaseLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_ULBaseLibrary_NoRegister()
{
	return ULBaseLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULBaseLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9f\xba\xe7\xa1\x80\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93\n" },
#endif
		{ "IncludePath", "Base/LBaseValue.h" },
		{ "ModuleRelativePath", "Base/LBaseValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULBaseLibrary_SetDebugFlag, "SetDebugFlag" }, // 546751846
		{ &Z_Construct_UFunction_ULBaseLibrary_UniCompare, "UniCompare" }, // 2130953291
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULBaseLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULBaseLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LQuickFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULBaseLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULBaseLibrary_Statics::ClassParams = {
	&ULBaseLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULBaseLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULBaseLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULBaseLibrary()
{
	if (!Z_Registration_Info_UClass_ULBaseLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULBaseLibrary.OuterSingleton, Z_Construct_UClass_ULBaseLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULBaseLibrary.OuterSingleton;
}
ULBaseLibrary::ULBaseLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULBaseLibrary);
ULBaseLibrary::~ULBaseLibrary() {}
// ********** End Class ULBaseLibrary **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h__Script_LQuickFrame_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELUniType_StaticEnum, TEXT("ELUniType"), &Z_Registration_Info_UEnum_ELUniType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3233846492U) },
		{ ELUniQuery_StaticEnum, TEXT("ELUniQuery"), &Z_Registration_Info_UEnum_ELUniQuery, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 15948104U) },
		{ EEnterGameMode_StaticEnum, TEXT("EEnterGameMode"), &Z_Registration_Info_UEnum_EEnterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3800196191U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLUniValue::StaticStruct, Z_Construct_UScriptStruct_FLUniValue_Statics::NewStructOps, TEXT("LUniValue"), &Z_Registration_Info_UScriptStruct_FLUniValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLUniValue), 3323368300U) },
		{ FDataBase::StaticStruct, Z_Construct_UScriptStruct_FDataBase_Statics::NewStructOps, TEXT("DataBase"), &Z_Registration_Info_UScriptStruct_FDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataBase), 203880370U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULBaseInterface, ULBaseInterface::StaticClass, TEXT("ULBaseInterface"), &Z_Registration_Info_UClass_ULBaseInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULBaseInterface), 2677908082U) },
		{ Z_Construct_UClass_ULBaseLibrary, ULBaseLibrary::StaticClass, TEXT("ULBaseLibrary"), &Z_Registration_Info_UClass_ULBaseLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULBaseLibrary), 810357290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h__Script_LQuickFrame_2710077073(TEXT("/Script/LQuickFrame"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h__Script_LQuickFrame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h__Script_LQuickFrame_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h__Script_LQuickFrame_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h__Script_LQuickFrame_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h__Script_LQuickFrame_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_LQuickFrame_Source_LQuickFrame_Base_LBaseValue_h__Script_LQuickFrame_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
