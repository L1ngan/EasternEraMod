// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RHS_CollisionShape.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRHS_CollisionShape() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Box();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Box_NoRegister();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Capsule();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Capsule_NoRegister();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_NoRegister();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Sphere();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_Sphere_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_RHS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URHS_CollisionShape Function DrawDebugShape ******************************
struct Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics
{
	struct RHS_CollisionShape_eventDrawDebugShape_Parms
	{
		const UObject* WorldContextObject;
		FVector Location;
		FQuat Rotation;
		FColor Color;
		float Duration;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Collision Shape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Draw this specific shape for debug purposes in the world\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw this specific shape for debug purposes in the world" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventDrawDebugShape_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventDrawDebugShape_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventDrawDebugShape_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventDrawDebugShape_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventDrawDebugShape_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventDrawDebugShape_Parms, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_CollisionShape, nullptr, "DrawDebugShape", Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::RHS_CollisionShape_eventDrawDebugShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::RHS_CollisionShape_eventDrawDebugShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_CollisionShape::execDrawDebugShape)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation);
	P_GET_STRUCT(FColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugShape(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Color,Z_Param_Duration,Z_Param_Thickness);
	P_NATIVE_END;
}
// ********** End Class URHS_CollisionShape Function DrawDebugShape ********************************

// ********** Begin Class URHS_CollisionShape Function GetShapeExtentVector ************************
struct Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics
{
	struct RHS_CollisionShape_eventGetShapeExtentVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Collision Shape" },
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventGetShapeExtentVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_CollisionShape, nullptr, "GetShapeExtentVector", Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::RHS_CollisionShape_eventGetShapeExtentVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::RHS_CollisionShape_eventGetShapeExtentVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_CollisionShape::execGetShapeExtentVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetShapeExtentVector();
	P_NATIVE_END;
}
// ********** End Class URHS_CollisionShape Function GetShapeExtentVector **************************

// ********** Begin Class URHS_CollisionShape Function SweepMultiByChannel *************************
struct Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics
{
	struct RHS_CollisionShape_eventSweepMultiByChannel_Parms
	{
		const UObject* WorldContextObject;
		TArray<FHitResult> OutHits;
		FVector Pos;
		FQuat Rot;
		TEnumAsByte<ETraceTypeQuery> TraceChannel;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		bool bIgnoreSelf;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Collision Shape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Sweep a shape against the world and return all blocking hits against a specific channel\n\x09 *  @param  WorldContextObject\x09The world context object in which this call is taking place\n\x09 *  @param  OutHits\x09\x09\x09\x09""Array of hits found between ray and the world\n\x09 *  @param  Pos\x09\x09\x09\x09\x09Location of the shape\n\x09 *  @param  Rot\x09\x09\x09\x09\x09Rotation of the shape\n\x09 *  @param  TraceChannel\x09\x09The 'channel' that this ray is in, used to determine which components to hit\n\x09 *  @param\x09""bTraceComplex\x09\x09Whether we should trace against complex collision\n\x09 *  @param  ActorsToIgnore\x09\x09""Actors to be ignored by ray\n\x09 * \x09@param \x09""bIgnoreSelf\x09\x09\x09Whether ray should ignore self/owner\n\x09 *  @return TRUE if OutHits contains any blocking hit entries\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sweep a shape against the world and return all blocking hits against a specific channel\n@param  WorldContextObject  The world context object in which this call is taking place\n@param  OutHits                             Array of hits found between ray and the world\n@param  Pos                                 Location of the shape\n@param  Rot                                 Rotation of the shape\n@param  TraceChannel                The 'channel' that this ray is in, used to determine which components to hit\n@param      bTraceComplex           Whether we should trace against complex collision\n@param  ActorsToIgnore              Actors to be ignored by ray\n    @param  bIgnoreSelf                     Whether ray should ignore self/owner\n@return TRUE if OutHits contains any blocking hit entries" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rot_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventSweepMultiByChannel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventSweepMultiByChannel_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventSweepMultiByChannel_Parms, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos_MetaData), NewProp_Pos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventSweepMultiByChannel_Parms, Rot), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rot_MetaData), NewProp_Rot_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventSweepMultiByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 1673313466
void Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((RHS_CollisionShape_eventSweepMultiByChannel_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_CollisionShape_eventSweepMultiByChannel_Parms), &Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceComplex_MetaData), NewProp_bTraceComplex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_CollisionShape_eventSweepMultiByChannel_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
void Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((RHS_CollisionShape_eventSweepMultiByChannel_Parms*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_CollisionShape_eventSweepMultiByChannel_Parms), &Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
void Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RHS_CollisionShape_eventSweepMultiByChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_CollisionShape_eventSweepMultiByChannel_Parms), &Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_OutHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_OutHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_Rot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_CollisionShape, nullptr, "SweepMultiByChannel", Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::RHS_CollisionShape_eventSweepMultiByChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::RHS_CollisionShape_eventSweepMultiByChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_CollisionShape::execSweepMultiByChannel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Pos);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rot);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_UBOOL(Z_Param_bIgnoreSelf);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SweepMultiByChannel(Z_Param_WorldContextObject,Z_Param_Out_OutHits,Z_Param_Out_Pos,Z_Param_Out_Rot,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_bIgnoreSelf);
	P_NATIVE_END;
}
// ********** End Class URHS_CollisionShape Function SweepMultiByChannel ***************************

// ********** Begin Class URHS_CollisionShape ******************************************************
void URHS_CollisionShape::StaticRegisterNativesURHS_CollisionShape()
{
	UClass* Class = URHS_CollisionShape::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawDebugShape", &URHS_CollisionShape::execDrawDebugShape },
		{ "GetShapeExtentVector", &URHS_CollisionShape::execGetShapeExtentVector },
		{ "SweepMultiByChannel", &URHS_CollisionShape::execSweepMultiByChannel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URHS_CollisionShape;
UClass* URHS_CollisionShape::GetPrivateStaticClass()
{
	using TClass = URHS_CollisionShape;
	if (!Z_Registration_Info_UClass_URHS_CollisionShape.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RHS_CollisionShape"),
			Z_Registration_Info_UClass_URHS_CollisionShape.InnerSingleton,
			StaticRegisterNativesURHS_CollisionShape,
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
	return Z_Registration_Info_UClass_URHS_CollisionShape.InnerSingleton;
}
UClass* Z_Construct_UClass_URHS_CollisionShape_NoRegister()
{
	return URHS_CollisionShape::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URHS_CollisionShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Aurora Devs - Replicated Hitbox System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "RHS_CollisionShape.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentSocket_MetaData[] = {
		{ "AnimNotifyBoneName", "true" },
		{ "Category", "Shape Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parent attachment socket/bone\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent attachment socket/bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Shape Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Location offset to apply.\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location offset to apply." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Shape Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation offset to apply. If bRotatesWithParent is set to true, then this applied in the Bone space, not world space\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation offset to apply. If bRotatesWithParent is set to true, then this applied in the Bone space, not world space" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentSocket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URHS_CollisionShape_DrawDebugShape, "DrawDebugShape" }, // 657816009
		{ &Z_Construct_UFunction_URHS_CollisionShape_GetShapeExtentVector, "GetShapeExtentVector" }, // 3156092710
		{ &Z_Construct_UFunction_URHS_CollisionShape_SweepMultiByChannel, "SweepMultiByChannel" }, // 3196392391
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URHS_CollisionShape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URHS_CollisionShape_Statics::NewProp_ParentSocket = { "ParentSocket", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_CollisionShape, ParentSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentSocket_MetaData), NewProp_ParentSocket_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URHS_CollisionShape_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_CollisionShape, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URHS_CollisionShape_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_CollisionShape, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URHS_CollisionShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_CollisionShape_Statics::NewProp_ParentSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_CollisionShape_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_CollisionShape_Statics::NewProp_RotationOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URHS_CollisionShape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URHS_CollisionShape_Statics::ClassParams = {
	&URHS_CollisionShape::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URHS_CollisionShape_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Statics::Class_MetaDataParams), Z_Construct_UClass_URHS_CollisionShape_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URHS_CollisionShape()
{
	if (!Z_Registration_Info_UClass_URHS_CollisionShape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URHS_CollisionShape.OuterSingleton, Z_Construct_UClass_URHS_CollisionShape_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URHS_CollisionShape.OuterSingleton;
}
URHS_CollisionShape::URHS_CollisionShape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URHS_CollisionShape);
URHS_CollisionShape::~URHS_CollisionShape() {}
// ********** End Class URHS_CollisionShape ********************************************************

// ********** Begin Class URHS_CollisionShape_Sphere ***********************************************
void URHS_CollisionShape_Sphere::StaticRegisterNativesURHS_CollisionShape_Sphere()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URHS_CollisionShape_Sphere;
UClass* URHS_CollisionShape_Sphere::GetPrivateStaticClass()
{
	using TClass = URHS_CollisionShape_Sphere;
	if (!Z_Registration_Info_UClass_URHS_CollisionShape_Sphere.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RHS_CollisionShape_Sphere"),
			Z_Registration_Info_UClass_URHS_CollisionShape_Sphere.InnerSingleton,
			StaticRegisterNativesURHS_CollisionShape_Sphere,
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
	return Z_Registration_Info_UClass_URHS_CollisionShape_Sphere.InnerSingleton;
}
UClass* Z_Construct_UClass_URHS_CollisionShape_Sphere_NoRegister()
{
	return URHS_CollisionShape_Sphere::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RHS_CollisionShape.h" },
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Shape Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URHS_CollisionShape_Sphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_CollisionShape_Sphere, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URHS_CollisionShape,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::ClassParams = {
	&URHS_CollisionShape_Sphere::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::Class_MetaDataParams), Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URHS_CollisionShape_Sphere()
{
	if (!Z_Registration_Info_UClass_URHS_CollisionShape_Sphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URHS_CollisionShape_Sphere.OuterSingleton, Z_Construct_UClass_URHS_CollisionShape_Sphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URHS_CollisionShape_Sphere.OuterSingleton;
}
URHS_CollisionShape_Sphere::URHS_CollisionShape_Sphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URHS_CollisionShape_Sphere);
URHS_CollisionShape_Sphere::~URHS_CollisionShape_Sphere() {}
// ********** End Class URHS_CollisionShape_Sphere *************************************************

// ********** Begin Class URHS_CollisionShape_Box **************************************************
void URHS_CollisionShape_Box::StaticRegisterNativesURHS_CollisionShape_Box()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URHS_CollisionShape_Box;
UClass* URHS_CollisionShape_Box::GetPrivateStaticClass()
{
	using TClass = URHS_CollisionShape_Box;
	if (!Z_Registration_Info_UClass_URHS_CollisionShape_Box.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RHS_CollisionShape_Box"),
			Z_Registration_Info_UClass_URHS_CollisionShape_Box.InnerSingleton,
			StaticRegisterNativesURHS_CollisionShape_Box,
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
	return Z_Registration_Info_UClass_URHS_CollisionShape_Box.InnerSingleton;
}
UClass* Z_Construct_UClass_URHS_CollisionShape_Box_NoRegister()
{
	return URHS_CollisionShape_Box::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URHS_CollisionShape_Box_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RHS_CollisionShape.h" },
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "Category", "Shape Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URHS_CollisionShape_Box>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URHS_CollisionShape_Box_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_CollisionShape_Box, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URHS_CollisionShape_Box_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_CollisionShape_Box_Statics::NewProp_Extent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Box_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URHS_CollisionShape_Box_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URHS_CollisionShape,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Box_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URHS_CollisionShape_Box_Statics::ClassParams = {
	&URHS_CollisionShape_Box::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URHS_CollisionShape_Box_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Box_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Box_Statics::Class_MetaDataParams), Z_Construct_UClass_URHS_CollisionShape_Box_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URHS_CollisionShape_Box()
{
	if (!Z_Registration_Info_UClass_URHS_CollisionShape_Box.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URHS_CollisionShape_Box.OuterSingleton, Z_Construct_UClass_URHS_CollisionShape_Box_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URHS_CollisionShape_Box.OuterSingleton;
}
URHS_CollisionShape_Box::URHS_CollisionShape_Box(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URHS_CollisionShape_Box);
URHS_CollisionShape_Box::~URHS_CollisionShape_Box() {}
// ********** End Class URHS_CollisionShape_Box ****************************************************

// ********** Begin Class URHS_CollisionShape_Capsule **********************************************
void URHS_CollisionShape_Capsule::StaticRegisterNativesURHS_CollisionShape_Capsule()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URHS_CollisionShape_Capsule;
UClass* URHS_CollisionShape_Capsule::GetPrivateStaticClass()
{
	using TClass = URHS_CollisionShape_Capsule;
	if (!Z_Registration_Info_UClass_URHS_CollisionShape_Capsule.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RHS_CollisionShape_Capsule"),
			Z_Registration_Info_UClass_URHS_CollisionShape_Capsule.InnerSingleton,
			StaticRegisterNativesURHS_CollisionShape_Capsule,
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
	return Z_Registration_Info_UClass_URHS_CollisionShape_Capsule.InnerSingleton;
}
UClass* Z_Construct_UClass_URHS_CollisionShape_Capsule_NoRegister()
{
	return URHS_CollisionShape_Capsule::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RHS_CollisionShape.h" },
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Shape Parameters" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Radius of cap hemispheres and center cylinder.\n\x09*\x09This cannot be more than CapsuleHalfHeight.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of cap hemispheres and center cylinder.\nThis cannot be more than CapsuleHalfHeight." },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[] = {
		{ "Category", "Shape Parameters" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Half-height, from center of capsule to the end of top or bottom hemisphere.\n\x09*\x09This cannot be less than CapsuleRadius.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/RHS_CollisionShape.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Half-height, from center of capsule to the end of top or bottom hemisphere.\nThis cannot be less than CapsuleRadius." },
#endif
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URHS_CollisionShape_Capsule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_CollisionShape_Capsule, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_CollisionShape_Capsule, HalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfHeight_MetaData), NewProp_HalfHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::NewProp_HalfHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URHS_CollisionShape,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::ClassParams = {
	&URHS_CollisionShape_Capsule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::Class_MetaDataParams), Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URHS_CollisionShape_Capsule()
{
	if (!Z_Registration_Info_UClass_URHS_CollisionShape_Capsule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URHS_CollisionShape_Capsule.OuterSingleton, Z_Construct_UClass_URHS_CollisionShape_Capsule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URHS_CollisionShape_Capsule.OuterSingleton;
}
URHS_CollisionShape_Capsule::URHS_CollisionShape_Capsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URHS_CollisionShape_Capsule);
URHS_CollisionShape_Capsule::~URHS_CollisionShape_Capsule() {}
// ********** End Class URHS_CollisionShape_Capsule ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h__Script_AuroraDevs_RHS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URHS_CollisionShape, URHS_CollisionShape::StaticClass, TEXT("URHS_CollisionShape"), &Z_Registration_Info_UClass_URHS_CollisionShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URHS_CollisionShape), 1803543895U) },
		{ Z_Construct_UClass_URHS_CollisionShape_Sphere, URHS_CollisionShape_Sphere::StaticClass, TEXT("URHS_CollisionShape_Sphere"), &Z_Registration_Info_UClass_URHS_CollisionShape_Sphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URHS_CollisionShape_Sphere), 3310020314U) },
		{ Z_Construct_UClass_URHS_CollisionShape_Box, URHS_CollisionShape_Box::StaticClass, TEXT("URHS_CollisionShape_Box"), &Z_Registration_Info_UClass_URHS_CollisionShape_Box, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URHS_CollisionShape_Box), 1616140029U) },
		{ Z_Construct_UClass_URHS_CollisionShape_Capsule, URHS_CollisionShape_Capsule::StaticClass, TEXT("URHS_CollisionShape_Capsule"), &Z_Registration_Info_UClass_URHS_CollisionShape_Capsule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URHS_CollisionShape_Capsule), 1104264052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h__Script_AuroraDevs_RHS_3411243076(TEXT("/Script/AuroraDevs_RHS"),
	Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h__Script_AuroraDevs_RHS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_CollisionShape_h__Script_AuroraDevs_RHS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
