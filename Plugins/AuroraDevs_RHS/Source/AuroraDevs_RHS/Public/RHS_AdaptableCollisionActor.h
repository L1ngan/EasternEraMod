// Copyright Aurora Devs 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RHS_AdaptableCollisionActor.generated.h"

class URHS_CollisionShape_Box;
class URHS_CollisionShape_Capsule;
class URHS_CollisionShape_Sphere;
class UBoxComponent;
class UCapsuleComponent;
class USphereComponent;

UCLASS(Abstract)
class AURORADEVS_RHS_API ARHS_AdaptableCollisionActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ARHS_AdaptableCollisionActor();
	
	/*
	 * The equivalent of the construction script in blueprint. This is used to update the adaptable collision shapes and set them as the root component.
	 */
	virtual void OnConstruction(const FTransform& Transform) override;

	/*
	 * Draw this class' default CollisionComponent in the world.
	 */
	UFUNCTION(BlueprintCallable, Category = "Collision Shape", meta = (WorldContext = "WorldContextObject"))
	static void DrawClassDefaultCollisionShape(const UObject* WorldContextObject, const UClass* RHS_AdaptableCollisionActorClass, const FVector& Location, const FQuat& Rotation, const FLinearColor Color, const float Duration, const float Thickness);
	/*
	 * Get this class' default shape extent.
	 */
	UFUNCTION(BlueprintPure, Category = "Collision Shape")
	static FVector GetClassDefaultShapeExtent(const UClass* RHS_AdaptableCollisionActorClass);
	UFUNCTION()
	void UpdateCollisionShapeInfo();
	UFUNCTION(BlueprintCallable,Category = "SetCollision Shape")
	void SetCollisionShapeInfo(TSubclassOf<URHS_CollisionShape> CollisionShape,FVector InCollisionInfo);
	/// 
	/// @param VectorOffset 位置偏移
	/// @param CollisionRotatorOffset  旋转偏移
	/// @param bRotatorToParent 旋转是否是作用于父节点
	UFUNCTION(BlueprintCallable, Category = "SetCollision Offset")
	void SetCollisionOffset(const FVector & VectorOffset,const FRotator & CollisionRotatorOffset,bool bRotatorToParent);
	
	
protected:
	/*
	 * The root component of the actor. The shape can be changed in the ShapeType settings anywhere except for runtime.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Collision Shape", BlueprintReadWrite)
	class UShapeComponent* CollisionComponent;
	UPROPERTY(VisibleAnywhere, Category = "Collision Shape", BlueprintReadWrite)
	class USceneComponent* SceneComponent;

	// Instance of collision shape to set up (Sphere, Box or Capsule) and apply as the root of the actor in the construction script.
	UPROPERTY(EditAnywhere, Instanced, Category = "Collision Shape", BlueprintReadOnly)
	class URHS_CollisionShape* ShapeType;

	virtual void SetUpdateComponent();

	FTransform SpawnTransform;
	
private:
	void SetupCollisionComponent(class UShapeComponent* Collision);
	
	UPROPERTY(EditAnywhere, Category = "Collision Shape")
	USphereComponent* SphereCollision = nullptr;
	UPROPERTY(EditAnywhere, Category = "Collision Shape")
	UCapsuleComponent* CapsuleCollision = nullptr;
	UPROPERTY(EditAnywhere, Category = "Collision Shape")
	UBoxComponent* BoxCollision = nullptr;
	UPROPERTY()
	URHS_CollisionShape_Sphere* SphereShape = nullptr;
	UPROPERTY()
	URHS_CollisionShape_Capsule* CapsuleShape = nullptr;
	UPROPERTY()
	URHS_CollisionShape_Box* BoxShape = nullptr;
};
