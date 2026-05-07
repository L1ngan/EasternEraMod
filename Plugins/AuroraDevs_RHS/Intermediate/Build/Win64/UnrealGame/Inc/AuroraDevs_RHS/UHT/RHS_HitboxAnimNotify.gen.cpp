// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RHS_HitboxAnimNotify.h"
#include "RHS_Data.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRHS_HitboxAnimNotify() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_CollisionShape_NoRegister();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_HitboxAnimNotify();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_HitboxAnimNotify_NoRegister();
AURORADEVS_RHS_API UScriptStruct* Z_Construct_UScriptStruct_FRHSDebugSettings();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_RHS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URHS_HitboxAnimNotify Function ApplyShapeHit *****************************
struct RHS_HitboxAnimNotify_eventApplyShapeHit_Parms
{
	USkeletalMeshComponent* MeshComp;
	URHS_CollisionShape* CollisionShape;
	FVector Location;
	FQuat Rotation;
};
static FName NAME_URHS_HitboxAnimNotify_ApplyShapeHit = FName(TEXT("ApplyShapeHit"));
void URHS_HitboxAnimNotify::ApplyShapeHit(USkeletalMeshComponent* MeshComp, URHS_CollisionShape* CollisionShape, FVector const& Location, FQuat const& Rotation) const
{
	RHS_HitboxAnimNotify_eventApplyShapeHit_Parms Parms;
	Parms.MeshComp=MeshComp;
	Parms.CollisionShape=CollisionShape;
	Parms.Location=Location;
	Parms.Rotation=Rotation;
	UFunction* Func = FindFunctionChecked(NAME_URHS_HitboxAnimNotify_ApplyShapeHit);
		const_cast<URHS_HitboxAnimNotify*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Anim HitBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Trace the collision shape against the selected trace channel\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_HitboxAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trace the collision shape against the selected trace channel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventApplyShapeHit_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::NewProp_CollisionShape = { "CollisionShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventApplyShapeHit_Parms, CollisionShape), Z_Construct_UClass_URHS_CollisionShape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventApplyShapeHit_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventApplyShapeHit_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::NewProp_CollisionShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_HitboxAnimNotify, nullptr, "ApplyShapeHit", Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::PropPointers), sizeof(RHS_HitboxAnimNotify_eventApplyShapeHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RHS_HitboxAnimNotify_eventApplyShapeHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class URHS_HitboxAnimNotify Function ApplyShapeHit *******************************

// ********** Begin Class URHS_HitboxAnimNotify Function DrawHitShapeDebug *************************
struct RHS_HitboxAnimNotify_eventDrawHitShapeDebug_Parms
{
	USkeletalMeshComponent* MeshComp;
	URHS_CollisionShape* CollisionShape;
	FVector Location;
	FQuat Rotation;
	float FrameDeltaTime;
};
static FName NAME_URHS_HitboxAnimNotify_DrawHitShapeDebug = FName(TEXT("DrawHitShapeDebug"));
void URHS_HitboxAnimNotify::DrawHitShapeDebug(USkeletalMeshComponent* MeshComp, URHS_CollisionShape* CollisionShape, FVector const& Location, FQuat const& Rotation, const float FrameDeltaTime) const
{
	RHS_HitboxAnimNotify_eventDrawHitShapeDebug_Parms Parms;
	Parms.MeshComp=MeshComp;
	Parms.CollisionShape=CollisionShape;
	Parms.Location=Location;
	Parms.Rotation=Rotation;
	Parms.FrameDeltaTime=FrameDeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_URHS_HitboxAnimNotify_DrawHitShapeDebug);
		const_cast<URHS_HitboxAnimNotify*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Anim HitBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Draw debugs of the hitbox in editor and/or game worlds\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_HitboxAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw debugs of the hitbox in editor and/or game worlds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameDeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventDrawHitShapeDebug_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::NewProp_CollisionShape = { "CollisionShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventDrawHitShapeDebug_Parms, CollisionShape), Z_Construct_UClass_URHS_CollisionShape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventDrawHitShapeDebug_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventDrawHitShapeDebug_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::NewProp_FrameDeltaTime = { "FrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventDrawHitShapeDebug_Parms, FrameDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameDeltaTime_MetaData), NewProp_FrameDeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::NewProp_CollisionShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::NewProp_FrameDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_HitboxAnimNotify, nullptr, "DrawHitShapeDebug", Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::PropPointers), sizeof(RHS_HitboxAnimNotify_eventDrawHitShapeDebug_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RHS_HitboxAnimNotify_eventDrawHitShapeDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class URHS_HitboxAnimNotify Function DrawHitShapeDebug ***************************

// ********** Begin Class URHS_HitboxAnimNotify Function MULTICAST_DrawHitShapeDebug ***************
struct RHS_HitboxAnimNotify_eventMULTICAST_DrawHitShapeDebug_Parms
{
	USkeletalMeshComponent* MeshComp;
	URHS_CollisionShape* CollisionShape;
	FVector Location;
	FQuat Rotation;
	float FrameDeltaTime;
};
static FName NAME_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug = FName(TEXT("MULTICAST_DrawHitShapeDebug"));
void URHS_HitboxAnimNotify::MULTICAST_DrawHitShapeDebug(USkeletalMeshComponent* MeshComp, URHS_CollisionShape* CollisionShape, FVector const& Location, FQuat const& Rotation, const float FrameDeltaTime) const
{
	RHS_HitboxAnimNotify_eventMULTICAST_DrawHitShapeDebug_Parms Parms;
	Parms.MeshComp=MeshComp;
	Parms.CollisionShape=CollisionShape;
	Parms.Location=Location;
	Parms.Rotation=Rotation;
	Parms.FrameDeltaTime=FrameDeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug);
		const_cast<URHS_HitboxAnimNotify*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Anim HitBox" },
		{ "ModuleRelativePath", "Public/RHS_HitboxAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameDeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventMULTICAST_DrawHitShapeDebug_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::NewProp_CollisionShape = { "CollisionShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventMULTICAST_DrawHitShapeDebug_Parms, CollisionShape), Z_Construct_UClass_URHS_CollisionShape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventMULTICAST_DrawHitShapeDebug_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventMULTICAST_DrawHitShapeDebug_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::NewProp_FrameDeltaTime = { "FrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventMULTICAST_DrawHitShapeDebug_Parms, FrameDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameDeltaTime_MetaData), NewProp_FrameDeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::NewProp_CollisionShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::NewProp_FrameDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_HitboxAnimNotify, nullptr, "MULTICAST_DrawHitShapeDebug", Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::PropPointers), sizeof(RHS_HitboxAnimNotify_eventMULTICAST_DrawHitShapeDebug_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44884CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RHS_HitboxAnimNotify_eventMULTICAST_DrawHitShapeDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_HitboxAnimNotify::execMULTICAST_DrawHitShapeDebug)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
	P_GET_OBJECT(URHS_CollisionShape,Z_Param_CollisionShape);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FrameDeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MULTICAST_DrawHitShapeDebug_Implementation(Z_Param_MeshComp,Z_Param_CollisionShape,Z_Param_Location,Z_Param_Rotation,Z_Param_FrameDeltaTime);
	P_NATIVE_END;
}
// ********** End Class URHS_HitboxAnimNotify Function MULTICAST_DrawHitShapeDebug *****************

// ********** Begin Class URHS_HitboxAnimNotify Function SERVER_ApplyShapeHit **********************
struct RHS_HitboxAnimNotify_eventSERVER_ApplyShapeHit_Parms
{
	USkeletalMeshComponent* MeshComp;
	URHS_CollisionShape* CollisionShape;
	FVector Location;
	FQuat Rotation;
};
static FName NAME_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit = FName(TEXT("SERVER_ApplyShapeHit"));
void URHS_HitboxAnimNotify::SERVER_ApplyShapeHit(USkeletalMeshComponent* MeshComp, URHS_CollisionShape* CollisionShape, FVector const& Location, FQuat const& Rotation) const
{
	RHS_HitboxAnimNotify_eventSERVER_ApplyShapeHit_Parms Parms;
	Parms.MeshComp=MeshComp;
	Parms.CollisionShape=CollisionShape;
	Parms.Location=Location;
	Parms.Rotation=Rotation;
	UFunction* Func = FindFunctionChecked(NAME_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit);
		const_cast<URHS_HitboxAnimNotify*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Anim HitBox" },
		{ "ModuleRelativePath", "Public/RHS_HitboxAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventSERVER_ApplyShapeHit_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::NewProp_CollisionShape = { "CollisionShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventSERVER_ApplyShapeHit_Parms, CollisionShape), Z_Construct_UClass_URHS_CollisionShape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventSERVER_ApplyShapeHit_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventSERVER_ApplyShapeHit_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::NewProp_CollisionShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_HitboxAnimNotify, nullptr, "SERVER_ApplyShapeHit", Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::PropPointers), sizeof(RHS_HitboxAnimNotify_eventSERVER_ApplyShapeHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44A80CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RHS_HitboxAnimNotify_eventSERVER_ApplyShapeHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_HitboxAnimNotify::execSERVER_ApplyShapeHit)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
	P_GET_OBJECT(URHS_CollisionShape,Z_Param_CollisionShape);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SERVER_ApplyShapeHit_Implementation(Z_Param_MeshComp,Z_Param_CollisionShape,Z_Param_Location,Z_Param_Rotation);
	P_NATIVE_END;
}
// ********** End Class URHS_HitboxAnimNotify Function SERVER_ApplyShapeHit ************************

// ********** Begin Class URHS_HitboxAnimNotify Function SERVER_DrawHitShapeDebug ******************
struct RHS_HitboxAnimNotify_eventSERVER_DrawHitShapeDebug_Parms
{
	USkeletalMeshComponent* MeshComp;
	URHS_CollisionShape* CollisionShape;
	FVector Location;
	FQuat Rotation;
	float FrameDeltaTime;
};
static FName NAME_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug = FName(TEXT("SERVER_DrawHitShapeDebug"));
void URHS_HitboxAnimNotify::SERVER_DrawHitShapeDebug(USkeletalMeshComponent* MeshComp, URHS_CollisionShape* CollisionShape, FVector const& Location, FQuat const& Rotation, const float FrameDeltaTime) const
{
	RHS_HitboxAnimNotify_eventSERVER_DrawHitShapeDebug_Parms Parms;
	Parms.MeshComp=MeshComp;
	Parms.CollisionShape=CollisionShape;
	Parms.Location=Location;
	Parms.Rotation=Rotation;
	Parms.FrameDeltaTime=FrameDeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug);
		const_cast<URHS_HitboxAnimNotify*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Anim HitBox" },
		{ "ModuleRelativePath", "Public/RHS_HitboxAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameDeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventSERVER_DrawHitShapeDebug_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::NewProp_CollisionShape = { "CollisionShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventSERVER_DrawHitShapeDebug_Parms, CollisionShape), Z_Construct_UClass_URHS_CollisionShape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventSERVER_DrawHitShapeDebug_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventSERVER_DrawHitShapeDebug_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::NewProp_FrameDeltaTime = { "FrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_HitboxAnimNotify_eventSERVER_DrawHitShapeDebug_Parms, FrameDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameDeltaTime_MetaData), NewProp_FrameDeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::NewProp_CollisionShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::NewProp_FrameDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_HitboxAnimNotify, nullptr, "SERVER_DrawHitShapeDebug", Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::PropPointers), sizeof(RHS_HitboxAnimNotify_eventSERVER_DrawHitShapeDebug_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44A80CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RHS_HitboxAnimNotify_eventSERVER_DrawHitShapeDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_HitboxAnimNotify::execSERVER_DrawHitShapeDebug)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
	P_GET_OBJECT(URHS_CollisionShape,Z_Param_CollisionShape);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FrameDeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SERVER_DrawHitShapeDebug_Implementation(Z_Param_MeshComp,Z_Param_CollisionShape,Z_Param_Location,Z_Param_Rotation,Z_Param_FrameDeltaTime);
	P_NATIVE_END;
}
// ********** End Class URHS_HitboxAnimNotify Function SERVER_DrawHitShapeDebug ********************

// ********** Begin Class URHS_HitboxAnimNotify ****************************************************
void URHS_HitboxAnimNotify::StaticRegisterNativesURHS_HitboxAnimNotify()
{
	UClass* Class = URHS_HitboxAnimNotify::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MULTICAST_DrawHitShapeDebug", &URHS_HitboxAnimNotify::execMULTICAST_DrawHitShapeDebug },
		{ "SERVER_ApplyShapeHit", &URHS_HitboxAnimNotify::execSERVER_ApplyShapeHit },
		{ "SERVER_DrawHitShapeDebug", &URHS_HitboxAnimNotify::execSERVER_DrawHitShapeDebug },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URHS_HitboxAnimNotify;
UClass* URHS_HitboxAnimNotify::GetPrivateStaticClass()
{
	using TClass = URHS_HitboxAnimNotify;
	if (!Z_Registration_Info_UClass_URHS_HitboxAnimNotify.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RHS_HitboxAnimNotify"),
			Z_Registration_Info_UClass_URHS_HitboxAnimNotify.InnerSingleton,
			StaticRegisterNativesURHS_HitboxAnimNotify,
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
	return Z_Registration_Info_UClass_URHS_HitboxAnimNotify.InnerSingleton;
}
UClass* Z_Construct_UClass_URHS_HitboxAnimNotify_NoRegister()
{
	return URHS_HitboxAnimNotify::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URHS_HitboxAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "RHS_HitboxAnimNotify.h" },
		{ "ModuleRelativePath", "Public/RHS_HitboxAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotatesWithParent_MetaData[] = {
		{ "Category", "HitBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should the collision shape rotate with the bone. THE ROTATION IS APPLIED BEFORE THE ROTATION OFFSET\n" },
#endif
		{ "ModuleRelativePath", "Public/RHS_HitboxAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the collision shape rotate with the bone. THE ROTATION IS APPLIED BEFORE THE ROTATION OFFSET" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionShapes_Inner_MetaData[] = {
		{ "Category", "HitBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision shapes to trace against the world. Each notify detects each hit actor only once.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RHS_HitboxAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision shapes to trace against the world. Each notify detects each hit actor only once." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionShapes_MetaData[] = {
		{ "Category", "HitBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision shapes to trace against the world. Each notify detects each hit actor only once.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RHS_HitboxAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision shapes to trace against the world. Each notify detects each hit actor only once." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/RHS_HitboxAnimNotify.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bRotatesWithParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotatesWithParent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionShapes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionShapes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URHS_HitboxAnimNotify_ApplyShapeHit, "ApplyShapeHit" }, // 3682885400
		{ &Z_Construct_UFunction_URHS_HitboxAnimNotify_DrawHitShapeDebug, "DrawHitShapeDebug" }, // 2870809565
		{ &Z_Construct_UFunction_URHS_HitboxAnimNotify_MULTICAST_DrawHitShapeDebug, "MULTICAST_DrawHitShapeDebug" }, // 2145759228
		{ &Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_ApplyShapeHit, "SERVER_ApplyShapeHit" }, // 2306917048
		{ &Z_Construct_UFunction_URHS_HitboxAnimNotify_SERVER_DrawHitShapeDebug, "SERVER_DrawHitShapeDebug" }, // 4223837363
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URHS_HitboxAnimNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::NewProp_bRotatesWithParent_SetBit(void* Obj)
{
	((URHS_HitboxAnimNotify*)Obj)->bRotatesWithParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::NewProp_bRotatesWithParent = { "bRotatesWithParent", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URHS_HitboxAnimNotify), &Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::NewProp_bRotatesWithParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotatesWithParent_MetaData), NewProp_bRotatesWithParent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::NewProp_CollisionShapes_Inner = { "CollisionShapes", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URHS_CollisionShape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionShapes_Inner_MetaData), NewProp_CollisionShapes_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::NewProp_CollisionShapes = { "CollisionShapes", nullptr, (EPropertyFlags)0x002008800000003d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_HitboxAnimNotify, CollisionShapes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionShapes_MetaData), NewProp_CollisionShapes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0020080000000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URHS_HitboxAnimNotify, DebugSettings), Z_Construct_UScriptStruct_FRHSDebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 4181635107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::NewProp_bRotatesWithParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::NewProp_CollisionShapes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::NewProp_CollisionShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::NewProp_DebugSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::ClassParams = {
	&URHS_HitboxAnimNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::PropPointers),
	0,
	0x009130A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URHS_HitboxAnimNotify()
{
	if (!Z_Registration_Info_UClass_URHS_HitboxAnimNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URHS_HitboxAnimNotify.OuterSingleton, Z_Construct_UClass_URHS_HitboxAnimNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URHS_HitboxAnimNotify.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void URHS_HitboxAnimNotify::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CollisionShapes(TEXT("CollisionShapes"));
	static FName Name_DebugSettings(TEXT("DebugSettings"));
	const bool bIsValid = true
		&& Name_CollisionShapes == ClassReps[(int32)ENetFields_Private::CollisionShapes].Property->GetFName()
		&& Name_DebugSettings == ClassReps[(int32)ENetFields_Private::DebugSettings].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URHS_HitboxAnimNotify"));
}
#endif
URHS_HitboxAnimNotify::URHS_HitboxAnimNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URHS_HitboxAnimNotify);
URHS_HitboxAnimNotify::~URHS_HitboxAnimNotify() {}
// ********** End Class URHS_HitboxAnimNotify ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h__Script_AuroraDevs_RHS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URHS_HitboxAnimNotify, URHS_HitboxAnimNotify::StaticClass, TEXT("URHS_HitboxAnimNotify"), &Z_Registration_Info_UClass_URHS_HitboxAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URHS_HitboxAnimNotify), 1405376809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h__Script_AuroraDevs_RHS_1785572135(TEXT("/Script/AuroraDevs_RHS"),
	Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h__Script_AuroraDevs_RHS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_HitboxAnimNotify_h__Script_AuroraDevs_RHS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
