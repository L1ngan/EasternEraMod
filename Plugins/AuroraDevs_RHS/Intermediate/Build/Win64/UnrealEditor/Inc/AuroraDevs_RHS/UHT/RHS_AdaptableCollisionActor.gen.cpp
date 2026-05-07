// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RHS_AdaptableCollisionActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRHS_AdaptableCollisionActor() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_ARHS_AdaptableCollisionActor();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_ARHS_AdaptableCollisionActor_NoRegister();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Box_NoRegister();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Capsule_NoRegister();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_NoRegister();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Sphere_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_RHS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARHS_AdaptableCollisionActor Function DrawClassDefaultCollisionShape *****
struct Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics
{
	struct RHS_AdaptableCollisionActor_eventDrawClassDefaultCollisionShape_Parms
	{
		const UObject* WorldContextObject;
		const UClass* RHS_AdaptableCollisionActorClass;
		FVector Location;
		FQuat Rotation;
		FLinearColor Color;
		float Duration;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision Shape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Draw this class' default CollisionComponent in the world.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Draw this class' default CollisionComponent in the world." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RHS_AdaptableCollisionActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RHS_AdaptableCollisionActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventDrawClassDefaultCollisionShape_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_RHS_AdaptableCollisionActorClass = { "RHS_AdaptableCollisionActorClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventDrawClassDefaultCollisionShape_Parms, RHS_AdaptableCollisionActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RHS_AdaptableCollisionActorClass_MetaData), NewProp_RHS_AdaptableCollisionActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventDrawClassDefaultCollisionShape_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventDrawClassDefaultCollisionShape_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventDrawClassDefaultCollisionShape_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventDrawClassDefaultCollisionShape_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventDrawClassDefaultCollisionShape_Parms, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_RHS_AdaptableCollisionActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARHS_AdaptableCollisionActor, nullptr, "DrawClassDefaultCollisionShape", Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::RHS_AdaptableCollisionActor_eventDrawClassDefaultCollisionShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::RHS_AdaptableCollisionActor_eventDrawClassDefaultCollisionShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARHS_AdaptableCollisionActor::execDrawClassDefaultCollisionShape)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_RHS_AdaptableCollisionActorClass);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	ARHS_AdaptableCollisionActor::DrawClassDefaultCollisionShape(Z_Param_WorldContextObject,Z_Param_RHS_AdaptableCollisionActorClass,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Color,Z_Param_Duration,Z_Param_Thickness);
	P_NATIVE_END;
}
// ********** End Class ARHS_AdaptableCollisionActor Function DrawClassDefaultCollisionShape *******

// ********** Begin Class ARHS_AdaptableCollisionActor Function GetClassDefaultShapeExtent *********
struct Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics
{
	struct RHS_AdaptableCollisionActor_eventGetClassDefaultShapeExtent_Parms
	{
		const UClass* RHS_AdaptableCollisionActorClass;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision Shape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Get this class' default shape extent.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Get this class' default shape extent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RHS_AdaptableCollisionActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RHS_AdaptableCollisionActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::NewProp_RHS_AdaptableCollisionActorClass = { "RHS_AdaptableCollisionActorClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventGetClassDefaultShapeExtent_Parms, RHS_AdaptableCollisionActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RHS_AdaptableCollisionActorClass_MetaData), NewProp_RHS_AdaptableCollisionActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventGetClassDefaultShapeExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::NewProp_RHS_AdaptableCollisionActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARHS_AdaptableCollisionActor, nullptr, "GetClassDefaultShapeExtent", Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::RHS_AdaptableCollisionActor_eventGetClassDefaultShapeExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::RHS_AdaptableCollisionActor_eventGetClassDefaultShapeExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARHS_AdaptableCollisionActor::execGetClassDefaultShapeExtent)
{
	P_GET_OBJECT(UClass,Z_Param_RHS_AdaptableCollisionActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=ARHS_AdaptableCollisionActor::GetClassDefaultShapeExtent(Z_Param_RHS_AdaptableCollisionActorClass);
	P_NATIVE_END;
}
// ********** End Class ARHS_AdaptableCollisionActor Function GetClassDefaultShapeExtent ***********

// ********** Begin Class ARHS_AdaptableCollisionActor Function SetCollisionOffset *****************
struct Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics
{
	struct RHS_AdaptableCollisionActor_eventSetCollisionOffset_Parms
	{
		FVector VectorOffset;
		FRotator CollisionRotatorOffset;
		bool bRotatorToParent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SetCollision Offset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// \n/// @param VectorOffset \xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\n/// @param CollisionRotatorOffset  \xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\n/// @param bRotatorToParent \xe6\x97\x8b\xe8\xbd\xac\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe4\xbd\x9c\xe7\x94\xa8\xe4\xba\x8e\xe7\x88\xb6\xe8\x8a\x82\xe7\x82\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param VectorOffset \xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\n@param CollisionRotatorOffset  \xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\n@param bRotatorToParent \xe6\x97\x8b\xe8\xbd\xac\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe4\xbd\x9c\xe7\x94\xa8\xe4\xba\x8e\xe7\x88\xb6\xe8\x8a\x82\xe7\x82\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRotatorOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionRotatorOffset;
	static void NewProp_bRotatorToParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotatorToParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::NewProp_VectorOffset = { "VectorOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventSetCollisionOffset_Parms, VectorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorOffset_MetaData), NewProp_VectorOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::NewProp_CollisionRotatorOffset = { "CollisionRotatorOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventSetCollisionOffset_Parms, CollisionRotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRotatorOffset_MetaData), NewProp_CollisionRotatorOffset_MetaData) };
void Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::NewProp_bRotatorToParent_SetBit(void* Obj)
{
	((RHS_AdaptableCollisionActor_eventSetCollisionOffset_Parms*)Obj)->bRotatorToParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::NewProp_bRotatorToParent = { "bRotatorToParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_AdaptableCollisionActor_eventSetCollisionOffset_Parms), &Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::NewProp_bRotatorToParent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::NewProp_VectorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::NewProp_CollisionRotatorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::NewProp_bRotatorToParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARHS_AdaptableCollisionActor, nullptr, "SetCollisionOffset", Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::RHS_AdaptableCollisionActor_eventSetCollisionOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::RHS_AdaptableCollisionActor_eventSetCollisionOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARHS_AdaptableCollisionActor::execSetCollisionOffset)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOffset);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_CollisionRotatorOffset);
	P_GET_UBOOL(Z_Param_bRotatorToParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCollisionOffset(Z_Param_Out_VectorOffset,Z_Param_Out_CollisionRotatorOffset,Z_Param_bRotatorToParent);
	P_NATIVE_END;
}
// ********** End Class ARHS_AdaptableCollisionActor Function SetCollisionOffset *******************

// ********** Begin Class ARHS_AdaptableCollisionActor Function SetCollisionShapeInfo **************
struct Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics
{
	struct RHS_AdaptableCollisionActor_eventSetCollisionShapeInfo_Parms
	{
		TSubclassOf<URHS_CollisionShape> CollisionShape;
		FVector InCollisionInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SetCollision Shape" },
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CollisionShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCollisionInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::NewProp_CollisionShape = { "CollisionShape", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventSetCollisionShapeInfo_Parms, CollisionShape), Z_Construct_UClass_UClass, Z_Construct_UClass_URHS_CollisionShape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::NewProp_InCollisionInfo = { "InCollisionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_AdaptableCollisionActor_eventSetCollisionShapeInfo_Parms, InCollisionInfo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::NewProp_CollisionShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::NewProp_InCollisionInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARHS_AdaptableCollisionActor, nullptr, "SetCollisionShapeInfo", Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::RHS_AdaptableCollisionActor_eventSetCollisionShapeInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::RHS_AdaptableCollisionActor_eventSetCollisionShapeInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARHS_AdaptableCollisionActor::execSetCollisionShapeInfo)
{
	P_GET_OBJECT(UClass,Z_Param_CollisionShape);
	P_GET_STRUCT(FVector,Z_Param_InCollisionInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCollisionShapeInfo(Z_Param_CollisionShape,Z_Param_InCollisionInfo);
	P_NATIVE_END;
}
// ********** End Class ARHS_AdaptableCollisionActor Function SetCollisionShapeInfo ****************

// ********** Begin Class ARHS_AdaptableCollisionActor Function UpdateCollisionShapeInfo ***********
struct Z_Construct_UFunction_ARHS_AdaptableCollisionActor_UpdateCollisionShapeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARHS_AdaptableCollisionActor_UpdateCollisionShapeInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARHS_AdaptableCollisionActor, nullptr, "UpdateCollisionShapeInfo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARHS_AdaptableCollisionActor_UpdateCollisionShapeInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARHS_AdaptableCollisionActor_UpdateCollisionShapeInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARHS_AdaptableCollisionActor_UpdateCollisionShapeInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARHS_AdaptableCollisionActor_UpdateCollisionShapeInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARHS_AdaptableCollisionActor::execUpdateCollisionShapeInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCollisionShapeInfo();
	P_NATIVE_END;
}
// ********** End Class ARHS_AdaptableCollisionActor Function UpdateCollisionShapeInfo *************

// ********** Begin Class ARHS_AdaptableCollisionActor *********************************************
void ARHS_AdaptableCollisionActor::StaticRegisterNativesARHS_AdaptableCollisionActor()
{
	UClass* Class = ARHS_AdaptableCollisionActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawClassDefaultCollisionShape", &ARHS_AdaptableCollisionActor::execDrawClassDefaultCollisionShape },
		{ "GetClassDefaultShapeExtent", &ARHS_AdaptableCollisionActor::execGetClassDefaultShapeExtent },
		{ "SetCollisionOffset", &ARHS_AdaptableCollisionActor::execSetCollisionOffset },
		{ "SetCollisionShapeInfo", &ARHS_AdaptableCollisionActor::execSetCollisionShapeInfo },
		{ "UpdateCollisionShapeInfo", &ARHS_AdaptableCollisionActor::execUpdateCollisionShapeInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARHS_AdaptableCollisionActor;
UClass* ARHS_AdaptableCollisionActor::GetPrivateStaticClass()
{
	using TClass = ARHS_AdaptableCollisionActor;
	if (!Z_Registration_Info_UClass_ARHS_AdaptableCollisionActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RHS_AdaptableCollisionActor"),
			Z_Registration_Info_UClass_ARHS_AdaptableCollisionActor.InnerSingleton,
			StaticRegisterNativesARHS_AdaptableCollisionActor,
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
	return Z_Registration_Info_UClass_ARHS_AdaptableCollisionActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ARHS_AdaptableCollisionActor_NoRegister()
{
	return ARHS_AdaptableCollisionActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RHS_AdaptableCollisionActor.h" },
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Collision Shape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * The root component of the actor. The shape can be changed in the ShapeType settings anywhere except for runtime.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The root component of the actor. The shape can be changed in the ShapeType settings anywhere except for runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Collision Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[] = {
		{ "Category", "Collision Shape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instance of collision shape to set up (Sphere, Box or Capsule) and apply as the root of the actor in the construction script.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance of collision shape to set up (Sphere, Box or Capsule) and apply as the root of the actor in the construction script." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[] = {
		{ "Category", "Collision Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleCollision_MetaData[] = {
		{ "Category", "Collision Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Collision Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereShape_MetaData[] = {
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleShape_MetaData[] = {
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxShape_MetaData[] = {
		{ "ModuleRelativePath", "Public/RHS_AdaptableCollisionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShapeType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereShape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleShape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxShape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARHS_AdaptableCollisionActor_DrawClassDefaultCollisionShape, "DrawClassDefaultCollisionShape" }, // 2430215057
		{ &Z_Construct_UFunction_ARHS_AdaptableCollisionActor_GetClassDefaultShapeExtent, "GetClassDefaultShapeExtent" }, // 929740803
		{ &Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionOffset, "SetCollisionOffset" }, // 3709521034
		{ &Z_Construct_UFunction_ARHS_AdaptableCollisionActor_SetCollisionShapeInfo, "SetCollisionShapeInfo" }, // 4271342600
		{ &Z_Construct_UFunction_ARHS_AdaptableCollisionActor_UpdateCollisionShapeInfo, "UpdateCollisionShapeInfo" }, // 918008176
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARHS_AdaptableCollisionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_AdaptableCollisionActor, CollisionComponent), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_AdaptableCollisionActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x002208000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_AdaptableCollisionActor, ShapeType), Z_Construct_UClass_URHS_CollisionShape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeType_MetaData), NewProp_ShapeType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_AdaptableCollisionActor, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollision_MetaData), NewProp_SphereCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_CapsuleCollision = { "CapsuleCollision", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_AdaptableCollisionActor, CapsuleCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleCollision_MetaData), NewProp_CapsuleCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_AdaptableCollisionActor, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_SphereShape = { "SphereShape", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_AdaptableCollisionActor, SphereShape), Z_Construct_UClass_URHS_CollisionShape_Sphere_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereShape_MetaData), NewProp_SphereShape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_CapsuleShape = { "CapsuleShape", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_AdaptableCollisionActor, CapsuleShape), Z_Construct_UClass_URHS_CollisionShape_Capsule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleShape_MetaData), NewProp_CapsuleShape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_BoxShape = { "BoxShape", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARHS_AdaptableCollisionActor, BoxShape), Z_Construct_UClass_URHS_CollisionShape_Box_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxShape_MetaData), NewProp_BoxShape_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_ShapeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_SphereCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_CapsuleCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_SphereShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_CapsuleShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::NewProp_BoxShape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::ClassParams = {
	&ARHS_AdaptableCollisionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARHS_AdaptableCollisionActor()
{
	if (!Z_Registration_Info_UClass_ARHS_AdaptableCollisionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARHS_AdaptableCollisionActor.OuterSingleton, Z_Construct_UClass_ARHS_AdaptableCollisionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARHS_AdaptableCollisionActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARHS_AdaptableCollisionActor);
ARHS_AdaptableCollisionActor::~ARHS_AdaptableCollisionActor() {}
// ********** End Class ARHS_AdaptableCollisionActor ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h__Script_AuroraDevs_RHS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARHS_AdaptableCollisionActor, ARHS_AdaptableCollisionActor::StaticClass, TEXT("ARHS_AdaptableCollisionActor"), &Z_Registration_Info_UClass_ARHS_AdaptableCollisionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARHS_AdaptableCollisionActor), 1548844579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h__Script_AuroraDevs_RHS_530934572(TEXT("/Script/AuroraDevs_RHS"),
	Z_CompiledInDeferFile_FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h__Script_AuroraDevs_RHS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModProject_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_AdaptableCollisionActor_h__Script_AuroraDevs_RHS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
