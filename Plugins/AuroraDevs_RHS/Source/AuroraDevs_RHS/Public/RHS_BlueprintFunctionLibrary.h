// Copyright Aurora Devs 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RHS_BlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class AURORADEVS_RHS_API URHS_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/*
	 * Returns Player's Point of View For the AI this means the Pawn's 'Eyes' ViewPoint For a Human player, this means the Camera's ViewPoint.
	 * The default Unreal Engine APlayerController::GetPlayerViewPoint function is not exposed to blueprints in UE4.26, hence the need for this function.
	 */
	UFUNCTION(BlueprintPure, Category = "Aurora Devs - Player Controller")
	static void BPGetPlayerViewPoint(const class APlayerController* PlayerController, FVector& OutLocation, FRotator& OutRotation);

	/**
	 *  Is the world an editor world?
	 *  @param  WorldContextObject	The world context object in which this call is taking place
	 */
	UFUNCTION(BlueprintPure, Category = "Aurora Devs - Misc", meta = (WorldContext = "WorldContextObject"))
	static bool IsInEditorWorld(const UObject* WorldContextObject);

	/**
	 *  Is the world a game world?
	 *  @param  WorldContextObject	The world context object in which this call is taking place
	 */
	UFUNCTION(BlueprintPure, Category = "Aurora Devs - Misc", meta = (WorldContext = "WorldContextObject"))
	static bool IsInGameWorld(const UObject* WorldContextObject);

	/**
	 *  Convert given Rotator to a Quaternion.
	 *  @param  Rot		The Rotator to convert 
	 */
	UFUNCTION(BlueprintPure, Category="Aurora Devs - Maths")
	static FQuat RotatorToQuaternion(const FRotator& Rot)
	{
		return Rot.Quaternion();
	}

	/**
	 *  Test the collision of a capsule at the supplied location using a specific profile, and determine the set of components that it overlaps
	 *  @param  WorldContextObject	The world context object in which this call is taking place
	 *  @param  Pos					Location of center of the Capsule to test against the world
	 *  @param  Rot					Rotation of the Capsule to test against the world
	 *  @param  Radius				Radius of Capsule
	 *  @param  HalfHeight			Half Height of Capsule
	 *  @param  ProfileName			The 'profile' used to determine which components to hit
	 *  @param	bTraceComplex		Whether we should trace against complex collision
	 *  @param  ActorsToIgnore		Actors to be ignored by ray
	 * 	@param 	bIgnoreSelf			Whether ray should ignore self/owner
	 *  @param  OutHitActors		Array of actors found to overlap supplied capsule
	 *  @return TRUE if OutOverlaps contains any results
	 */
	UFUNCTION(BlueprintCallable, Category="Aurora Devs - Traces", meta = (WorldContext = "WorldContextObject"))
	static bool CapsuleOverlapMultiByProfile(const UObject* WorldContextObject, const FVector& Pos, const FQuat& Rot, const float Radius, const float HalfHeight, const FName ProfileName, const bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, const bool bIgnoreSelf, TArray<AActor*>& OutHitActors);

	/**
	 *  Test the collision of a Box at the supplied location using a specific profile, and determine the set of components that it overlaps
	 *  @param  WorldContextObject	The world context object in which this call is taking place
	 *  @param  Pos					Location of center of the Box to test against the world
	 *  @param  Rot					Rotation of Box to test against the world
	 *  @param  BoxHalfExtent		The half extent (half size) of the Box to trace against the world
	 *  @param  ProfileName			The 'profile' used to determine which components to hit
	 *  @param	bTraceComplex		Whether we should trace against complex collision
	 *  @param  ActorsToIgnore		Actors to be ignored by ray
	 * 	@param 	bIgnoreSelf			Whether ray should ignore self/owner
	 *  @param  OutHitActors		Array of actors found to overlap supplied box
	 *  @return TRUE if OutOverlaps contains any results
	 */
	UFUNCTION(BlueprintCallable, Category = "Aurora Devs - Traces", meta = (WorldContext = "WorldContextObject"))
	static bool BoxOverlapMultiByProfile(const UObject* WorldContextObject, const FVector& Pos, const FQuat& Rot, const FVector& BoxHalfExtent, const FName ProfileName, const bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, const bool bIgnoreSelf, TArray<AActor*>& OutHitActors);

};
