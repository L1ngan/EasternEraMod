// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RHS_BlueprintFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRHS_BlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_BlueprintFunctionLibrary();
AURORADEVS_RHS_API UClass* Z_Construct_UClass_URHS_BlueprintFunctionLibrary_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AuroraDevs_RHS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URHS_BlueprintFunctionLibrary Function BoxOverlapMultiByProfile **********
struct Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics
{
	struct RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms
	{
		const UObject* WorldContextObject;
		FVector Pos;
		FQuat Rot;
		FVector BoxHalfExtent;
		FName ProfileName;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		bool bIgnoreSelf;
		TArray<AActor*> OutHitActors;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Traces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Test the collision of a Box at the supplied location using a specific profile, and determine the set of components that it overlaps\n\x09 *  @param  WorldContextObject\x09The world context object in which this call is taking place\n\x09 *  @param  Pos\x09\x09\x09\x09\x09Location of center of the Box to test against the world\n\x09 *  @param  Rot\x09\x09\x09\x09\x09Rotation of Box to test against the world\n\x09 *  @param  BoxHalfExtent\x09\x09The half extent (half size) of the Box to trace against the world\n\x09 *  @param  ProfileName\x09\x09\x09The 'profile' used to determine which components to hit\n\x09 *  @param\x09""bTraceComplex\x09\x09Whether we should trace against complex collision\n\x09 *  @param  ActorsToIgnore\x09\x09""Actors to be ignored by ray\n\x09 * \x09@param \x09""bIgnoreSelf\x09\x09\x09Whether ray should ignore self/owner\n\x09 *  @param  OutHitActors\x09\x09""Array of actors found to overlap supplied box\n\x09 *  @return TRUE if OutOverlaps contains any results\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_BlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Test the collision of a Box at the supplied location using a specific profile, and determine the set of components that it overlaps\n@param  WorldContextObject  The world context object in which this call is taking place\n@param  Pos                                 Location of center of the Box to test against the world\n@param  Rot                                 Rotation of Box to test against the world\n@param  BoxHalfExtent               The half extent (half size) of the Box to trace against the world\n@param  ProfileName                 The 'profile' used to determine which components to hit\n@param      bTraceComplex           Whether we should trace against complex collision\n@param  ActorsToIgnore              Actors to be ignored by ray\n    @param  bIgnoreSelf                     Whether ray should ignore self/owner\n@param  OutHitActors                Array of actors found to overlap supplied box\n@return TRUE if OutOverlaps contains any results" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxHalfExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxHalfExtent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutHitActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHitActors;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos_MetaData), NewProp_Pos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms, Rot), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rot_MetaData), NewProp_Rot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_BoxHalfExtent = { "BoxHalfExtent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms, BoxHalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxHalfExtent_MetaData), NewProp_BoxHalfExtent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms, ProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileName_MetaData), NewProp_ProfileName_MetaData) };
void Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms), &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceComplex_MetaData), NewProp_bTraceComplex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
void Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms), &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_OutHitActors_Inner = { "OutHitActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_OutHitActors = { "OutHitActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms, OutHitActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms), &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_Rot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_BoxHalfExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_ProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_OutHitActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_OutHitActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_BlueprintFunctionLibrary, nullptr, "BoxOverlapMultiByProfile", Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::RHS_BlueprintFunctionLibrary_eventBoxOverlapMultiByProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_BlueprintFunctionLibrary::execBoxOverlapMultiByProfile)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Pos);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rot);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxHalfExtent);
	P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_UBOOL(Z_Param_bIgnoreSelf);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutHitActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URHS_BlueprintFunctionLibrary::BoxOverlapMultiByProfile(Z_Param_WorldContextObject,Z_Param_Out_Pos,Z_Param_Out_Rot,Z_Param_Out_BoxHalfExtent,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_bIgnoreSelf,Z_Param_Out_OutHitActors);
	P_NATIVE_END;
}
// ********** End Class URHS_BlueprintFunctionLibrary Function BoxOverlapMultiByProfile ************

// ********** Begin Class URHS_BlueprintFunctionLibrary Function BPGetPlayerViewPoint **************
struct Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics
{
	struct RHS_BlueprintFunctionLibrary_eventBPGetPlayerViewPoint_Parms
	{
		const APlayerController* PlayerController;
		FVector OutLocation;
		FRotator OutRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Player Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Returns Player's Point of View For the AI this means the Pawn's 'Eyes' ViewPoint For a Human player, this means the Camera's ViewPoint.\n\x09 * The default Unreal Engine APlayerController::GetPlayerViewPoint function is not exposed to blueprints in UE4.26, hence the need for this function.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_BlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Returns Player's Point of View For the AI this means the Pawn's 'Eyes' ViewPoint For a Human player, this means the Camera's ViewPoint.\n* The default Unreal Engine APlayerController::GetPlayerViewPoint function is not exposed to blueprints in UE4.26, hence the need for this function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventBPGetPlayerViewPoint_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventBPGetPlayerViewPoint_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventBPGetPlayerViewPoint_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::NewProp_OutLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::NewProp_OutRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_BlueprintFunctionLibrary, nullptr, "BPGetPlayerViewPoint", Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::RHS_BlueprintFunctionLibrary_eventBPGetPlayerViewPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::RHS_BlueprintFunctionLibrary_eventBPGetPlayerViewPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_BlueprintFunctionLibrary::execBPGetPlayerViewPoint)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	URHS_BlueprintFunctionLibrary::BPGetPlayerViewPoint(Z_Param_PlayerController,Z_Param_Out_OutLocation,Z_Param_Out_OutRotation);
	P_NATIVE_END;
}
// ********** End Class URHS_BlueprintFunctionLibrary Function BPGetPlayerViewPoint ****************

// ********** Begin Class URHS_BlueprintFunctionLibrary Function CapsuleOverlapMultiByProfile ******
struct Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics
{
	struct RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms
	{
		const UObject* WorldContextObject;
		FVector Pos;
		FQuat Rot;
		float Radius;
		float HalfHeight;
		FName ProfileName;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		bool bIgnoreSelf;
		TArray<AActor*> OutHitActors;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Traces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Test the collision of a capsule at the supplied location using a specific profile, and determine the set of components that it overlaps\n\x09 *  @param  WorldContextObject\x09The world context object in which this call is taking place\n\x09 *  @param  Pos\x09\x09\x09\x09\x09Location of center of the Capsule to test against the world\n\x09 *  @param  Rot\x09\x09\x09\x09\x09Rotation of the Capsule to test against the world\n\x09 *  @param  Radius\x09\x09\x09\x09Radius of Capsule\n\x09 *  @param  HalfHeight\x09\x09\x09Half Height of Capsule\n\x09 *  @param  ProfileName\x09\x09\x09The 'profile' used to determine which components to hit\n\x09 *  @param\x09""bTraceComplex\x09\x09Whether we should trace against complex collision\n\x09 *  @param  ActorsToIgnore\x09\x09""Actors to be ignored by ray\n\x09 * \x09@param \x09""bIgnoreSelf\x09\x09\x09Whether ray should ignore self/owner\n\x09 *  @param  OutHitActors\x09\x09""Array of actors found to overlap supplied capsule\n\x09 *  @return TRUE if OutOverlaps contains any results\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_BlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Test the collision of a capsule at the supplied location using a specific profile, and determine the set of components that it overlaps\n@param  WorldContextObject  The world context object in which this call is taking place\n@param  Pos                                 Location of center of the Capsule to test against the world\n@param  Rot                                 Rotation of the Capsule to test against the world\n@param  Radius                              Radius of Capsule\n@param  HalfHeight                  Half Height of Capsule\n@param  ProfileName                 The 'profile' used to determine which components to hit\n@param      bTraceComplex           Whether we should trace against complex collision\n@param  ActorsToIgnore              Actors to be ignored by ray\n    @param  bIgnoreSelf                     Whether ray should ignore self/owner\n@param  OutHitActors                Array of actors found to overlap supplied capsule\n@return TRUE if OutOverlaps contains any results" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutHitActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHitActors;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos_MetaData), NewProp_Pos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms, Rot), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rot_MetaData), NewProp_Rot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms, HalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfHeight_MetaData), NewProp_HalfHeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms, ProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileName_MetaData), NewProp_ProfileName_MetaData) };
void Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms), &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceComplex_MetaData), NewProp_bTraceComplex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
void Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms), &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_OutHitActors_Inner = { "OutHitActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_OutHitActors = { "OutHitActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms, OutHitActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms), &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_Rot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_HalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_ProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_OutHitActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_OutHitActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_BlueprintFunctionLibrary, nullptr, "CapsuleOverlapMultiByProfile", Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::RHS_BlueprintFunctionLibrary_eventCapsuleOverlapMultiByProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_BlueprintFunctionLibrary::execCapsuleOverlapMultiByProfile)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Pos);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
	P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_UBOOL(Z_Param_bIgnoreSelf);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutHitActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URHS_BlueprintFunctionLibrary::CapsuleOverlapMultiByProfile(Z_Param_WorldContextObject,Z_Param_Out_Pos,Z_Param_Out_Rot,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_bIgnoreSelf,Z_Param_Out_OutHitActors);
	P_NATIVE_END;
}
// ********** End Class URHS_BlueprintFunctionLibrary Function CapsuleOverlapMultiByProfile ********

// ********** Begin Class URHS_BlueprintFunctionLibrary Function IsInEditorWorld *******************
struct Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics
{
	struct RHS_BlueprintFunctionLibrary_eventIsInEditorWorld_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Is the world an editor world?\n\x09 *  @param  WorldContextObject\x09The world context object in which this call is taking place\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_BlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the world an editor world?\n@param  WorldContextObject  The world context object in which this call is taking place" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventIsInEditorWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RHS_BlueprintFunctionLibrary_eventIsInEditorWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_BlueprintFunctionLibrary_eventIsInEditorWorld_Parms), &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_BlueprintFunctionLibrary, nullptr, "IsInEditorWorld", Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::RHS_BlueprintFunctionLibrary_eventIsInEditorWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::RHS_BlueprintFunctionLibrary_eventIsInEditorWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_BlueprintFunctionLibrary::execIsInEditorWorld)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URHS_BlueprintFunctionLibrary::IsInEditorWorld(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class URHS_BlueprintFunctionLibrary Function IsInEditorWorld *********************

// ********** Begin Class URHS_BlueprintFunctionLibrary Function IsInGameWorld *********************
struct Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics
{
	struct RHS_BlueprintFunctionLibrary_eventIsInGameWorld_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Is the world a game world?\n\x09 *  @param  WorldContextObject\x09The world context object in which this call is taking place\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_BlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the world a game world?\n@param  WorldContextObject  The world context object in which this call is taking place" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventIsInGameWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RHS_BlueprintFunctionLibrary_eventIsInGameWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHS_BlueprintFunctionLibrary_eventIsInGameWorld_Parms), &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_BlueprintFunctionLibrary, nullptr, "IsInGameWorld", Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::RHS_BlueprintFunctionLibrary_eventIsInGameWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::RHS_BlueprintFunctionLibrary_eventIsInGameWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_BlueprintFunctionLibrary::execIsInGameWorld)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URHS_BlueprintFunctionLibrary::IsInGameWorld(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class URHS_BlueprintFunctionLibrary Function IsInGameWorld ***********************

// ********** Begin Class URHS_BlueprintFunctionLibrary Function RotatorToQuaternion ***************
struct Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics
{
	struct RHS_BlueprintFunctionLibrary_eventRotatorToQuaternion_Parms
	{
		FRotator Rot;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aurora Devs - Maths" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Convert given Rotator to a Quaternion.\n\x09 *  @param  Rot\x09\x09The Rotator to convert \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHS_BlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert given Rotator to a Quaternion.\n@param  Rot         The Rotator to convert" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventRotatorToQuaternion_Parms, Rot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rot_MetaData), NewProp_Rot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHS_BlueprintFunctionLibrary_eventRotatorToQuaternion_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::NewProp_Rot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHS_BlueprintFunctionLibrary, nullptr, "RotatorToQuaternion", Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::PropPointers), sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::RHS_BlueprintFunctionLibrary_eventRotatorToQuaternion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::RHS_BlueprintFunctionLibrary_eventRotatorToQuaternion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHS_BlueprintFunctionLibrary::execRotatorToQuaternion)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=URHS_BlueprintFunctionLibrary::RotatorToQuaternion(Z_Param_Out_Rot);
	P_NATIVE_END;
}
// ********** End Class URHS_BlueprintFunctionLibrary Function RotatorToQuaternion *****************

// ********** Begin Class URHS_BlueprintFunctionLibrary ********************************************
void URHS_BlueprintFunctionLibrary::StaticRegisterNativesURHS_BlueprintFunctionLibrary()
{
	UClass* Class = URHS_BlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BoxOverlapMultiByProfile", &URHS_BlueprintFunctionLibrary::execBoxOverlapMultiByProfile },
		{ "BPGetPlayerViewPoint", &URHS_BlueprintFunctionLibrary::execBPGetPlayerViewPoint },
		{ "CapsuleOverlapMultiByProfile", &URHS_BlueprintFunctionLibrary::execCapsuleOverlapMultiByProfile },
		{ "IsInEditorWorld", &URHS_BlueprintFunctionLibrary::execIsInEditorWorld },
		{ "IsInGameWorld", &URHS_BlueprintFunctionLibrary::execIsInGameWorld },
		{ "RotatorToQuaternion", &URHS_BlueprintFunctionLibrary::execRotatorToQuaternion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URHS_BlueprintFunctionLibrary;
UClass* URHS_BlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = URHS_BlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_URHS_BlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RHS_BlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_URHS_BlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesURHS_BlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_URHS_BlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_URHS_BlueprintFunctionLibrary_NoRegister()
{
	return URHS_BlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URHS_BlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RHS_BlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RHS_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BoxOverlapMultiByProfile, "BoxOverlapMultiByProfile" }, // 2766687754
		{ &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_BPGetPlayerViewPoint, "BPGetPlayerViewPoint" }, // 501183946
		{ &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_CapsuleOverlapMultiByProfile, "CapsuleOverlapMultiByProfile" }, // 2946352782
		{ &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInEditorWorld, "IsInEditorWorld" }, // 2534215087
		{ &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_IsInGameWorld, "IsInGameWorld" }, // 3886047672
		{ &Z_Construct_UFunction_URHS_BlueprintFunctionLibrary_RotatorToQuaternion, "RotatorToQuaternion" }, // 651073724
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URHS_BlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URHS_BlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AuroraDevs_RHS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_BlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URHS_BlueprintFunctionLibrary_Statics::ClassParams = {
	&URHS_BlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URHS_BlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URHS_BlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URHS_BlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_URHS_BlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URHS_BlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_URHS_BlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URHS_BlueprintFunctionLibrary.OuterSingleton;
}
URHS_BlueprintFunctionLibrary::URHS_BlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URHS_BlueprintFunctionLibrary);
URHS_BlueprintFunctionLibrary::~URHS_BlueprintFunctionLibrary() {}
// ********** End Class URHS_BlueprintFunctionLibrary **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h__Script_AuroraDevs_RHS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URHS_BlueprintFunctionLibrary, URHS_BlueprintFunctionLibrary::StaticClass, TEXT("URHS_BlueprintFunctionLibrary"), &Z_Registration_Info_UClass_URHS_BlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URHS_BlueprintFunctionLibrary), 1686172999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h__Script_AuroraDevs_RHS_1045364347(TEXT("/Script/AuroraDevs_RHS"),
	Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h__Script_AuroraDevs_RHS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Plugins_AuroraDevs_RHS_Source_AuroraDevs_RHS_Public_RHS_BlueprintFunctionLibrary_h__Script_AuroraDevs_RHS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
