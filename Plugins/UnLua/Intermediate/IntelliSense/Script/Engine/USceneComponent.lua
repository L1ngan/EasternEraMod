---A SceneComponent has a transform and supports attachment, but has no rendering or collision capabilities.
---Useful as a 'dummy' component in the hierarchy to offset others.
---@class USceneComponent : UActorComponent
---@field private PhysicsVolume TWeakObjectPtr<APhysicsVolume> @Physics Volume in which this SceneComponent is located *
---@field private AttachParent USceneComponent @What we are currently attached to. If valid, RelativeLocation etc. are used relative to this object
---@field private AttachSocketName string @Optional socket name on AttachParent that we are attached to.
---@field private AttachChildren TArray<USceneComponent> @List of child SceneComponents that are attached to us.
---@field private ClientAttachedChildren TArray<USceneComponent> @Set of attached SceneComponents that were attached by the client so we can fix up AttachChildren when it is replicated to us.
---@field private RelativeLocation FVector @Location of the component relative to its parent
---@field private RelativeRotation FRotator @Rotation of the component relative to its parent
---@field private RelativeScale3D FVector @Non-uniform scaling of the component relative to its parent. Note that scaling is always applied in local space (no shearing etc)
---@field public ComponentVelocity FVector @Velocity of the component.
---@field private bComponentToWorldUpdated boolean @True if we have ever updated ComponentToWorld based on RelativeLocation/Rotation/Scale. Used at startup to make sure it is initialized.
---@field private bAbsoluteLocation boolean @If RelativeLocation should be considered relative to the world, rather than the parent
---@field private bAbsoluteRotation boolean @If RelativeRotation should be considered relative to the world, rather than the parent
---@field private bAbsoluteScale boolean @If RelativeScale3D should be considered relative to the world, rather than the parent
---@field private bVisible boolean @Whether to completely draw the primitive; if false, the primitive is not drawn, does not cast a shadow.
---@field private bShouldBeAttached boolean @Whether or not we should be attached.
---@field private bShouldSnapLocationWhenAttached boolean
---@field private bShouldSnapRotationWhenAttached boolean
---@field private bShouldSnapScaleWhenAttached boolean
---@field private bShouldUpdatePhysicsVolume boolean @Whether or not the cached PhysicsVolume this component overlaps should be updated when the component is moved.
---@field public bHiddenInGame boolean @Whether to hide the primitive in game, if the primitive is Visible.
---@field public bBoundsChangeTriggersStreamingDataRebuild boolean @If true, a change in the bounds of the component will call trigger a streaming data rebuild
---@field public bUseAttachParentBound boolean @If true, this component uses its parents bounds when attached. This can be a significant optimization with many components attached together.
---@field public bComputeFastLocalBounds boolean @If true, this component will use its current bounds transformed back into local space instead of calling CalcBounds with an identity transform.
---@field public bComputeBoundsOnceForGame boolean @If true, this component will cache its bounds during cooking or in PIE and never recompute it again. This is for components that are known to be static.
---@field public bComputedBoundsOnceForGame boolean @If true, this component has already cached its bounds during cooking or in PIE and will never recompute it again.
---@field public bIsNotRenderAttachmentRoot boolean @If true, this component stops the walk up the attachment chain in GetActorPositionForRenderer(). Instead this component's child will be used as the attachment root.
---@field public bVisualizeComponent boolean @This component should create a sprite component for visualization in the editor
---@field public Mobility integer @How often this component is allowed to move, used to make various optimizations. Only safe to set in constructor.
---@field public DetailMode integer @If detail mode is >= system detail mode, primitive won't be rendered.
---@field public PhysicsVolumeChangedDelegate MulticastDelegate @Delegate that will be called when PhysicsVolume has been changed *
local USceneComponent = {}

---Toggle visibility of the component
---@param bPropagateToChildren boolean @[opt] 
function USceneComponent:ToggleVisibility(bPropagateToChildren) end

---Set the relative scale of the component to put it at the supplied scale in world space.
---@param NewScale FVector
function USceneComponent:SetWorldScale3D(NewScale) end

---Set visibility of the component, if during game use this to turn on/off
---@param bNewVisibility boolean
---@param bPropagateToChildren boolean @[opt] 
function USceneComponent:SetVisibility(bNewVisibility, bPropagateToChildren) end

---Sets whether or not the cached PhysicsVolume this component overlaps should be updated when the component is moved.
---@param bInShouldUpdatePhysicsVolume boolean
function USceneComponent:SetShouldUpdatePhysicsVolume(bInShouldUpdatePhysicsVolume) end

---Set the non-uniform scale of the component relative to its parent
---@param NewScale3D FVector
function USceneComponent:SetRelativeScale3D(NewScale3D) end

---Set how often this component is allowed to move during runtime. Causes a component re-register if the component is already registered
---@param NewMobility integer
function USceneComponent:SetMobility(NewMobility) end

---Changes the value of bHiddenInGame, if false this will disable Visibility during gameplay
---@param NewHidden boolean
---@param bPropagateToChildren boolean @[opt] 
function USceneComponent:SetHiddenInGame(NewHidden, bPropagateToChildren) end

---Set which parts of the relative transform should be relative to parent, and which should be relative to world
---@param bNewAbsoluteLocation boolean @[opt] 
---@param bNewAbsoluteRotation boolean @[opt] 
---@param bNewAbsoluteScale boolean @[opt] 
function USceneComponent:SetAbsolute(bNewAbsoluteLocation, bNewAbsoluteRotation, bNewAbsoluteScale) end

---Reset the transform of the component relative to its parent. Sets relative location to zero, relative rotation to no rotation, and Scale to 1.
function USceneComponent:ResetRelativeTransform() end

---@param OldValue boolean
function USceneComponent:OnRep_Visibility(OldValue) end

function USceneComponent:OnRep_Transform() end

function USceneComponent:OnRep_AttachSocketName() end

function USceneComponent:OnRep_AttachParent() end

function USceneComponent:OnRep_AttachChildren() end

---Set the transform of the component in world space.
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param NewTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_SetWorldTransform(NewTransform, bSweep, SweepHitResult, bTeleport) end

---* Put this component at the specified rotation in world space. Updates relative rotation to achieve the final world rotation.
---* @@param NewRotation           New rotation in world space for the component.
---* @@param SweepHitResult        Hit result from any impact if sweep is true.
---* @@param bSweep                        Whether we sweep to the destination (currently not supported for rotation).
---* @@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).
---*                                                      If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---*                                                      If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---*                                                      If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param NewRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_SetWorldRotation(NewRotation, bSweep, SweepHitResult, bTeleport) end

---Set the relative location and rotation of the component to put it at the supplied pose in world space.
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param NewLocation FVector
---@param NewRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_SetWorldLocationAndRotation(NewLocation, NewRotation, bSweep, SweepHitResult, bTeleport) end

---Put this component at the specified location in world space. Updates relative location to achieve the final world location.
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param NewLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_SetWorldLocation(NewLocation, bSweep, SweepHitResult, bTeleport) end

---Set the transform of the component relative to its parent
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---@param NewTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_SetRelativeTransform(NewTransform, bSweep, SweepHitResult, bTeleport) end

---Set the rotation of the component relative to its parent
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---@param NewRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_SetRelativeRotation(NewRotation, bSweep, SweepHitResult, bTeleport) end

---Set the location and rotation of the component relative to its parent
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param NewLocation FVector
---@param NewRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_SetRelativeLocationAndRotation(NewLocation, NewRotation, bSweep, SweepHitResult, bTeleport) end

---Set the location of the component relative to its parent
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param NewLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_SetRelativeLocation(NewLocation, bSweep, SweepHitResult, bTeleport) end

---Get the current component-to-world transform for this component
---@return FTransform
function USceneComponent:K2_GetComponentToWorld() end

---Returns scale of the component, in world space.
---@return FVector
function USceneComponent:K2_GetComponentScale() end

---Returns rotation of the component, in world space.
---@return FRotator
function USceneComponent:K2_GetComponentRotation() end

---Return location of the component, in world space
---@return FVector
function USceneComponent:K2_GetComponentLocation() end

---Detach this component from whatever it is attached to. Automatically unwelds components that are welded together (see AttachToComponent), though note that some effects of welding may not be undone.
---@param LocationRule EDetachmentRule @[opt] 
---@param RotationRule EDetachmentRule @[opt] 
---@param ScaleRule EDetachmentRule @[opt] 
---@param bCallModify boolean @[opt] 
function USceneComponent:K2_DetachFromComponent(LocationRule, RotationRule, ScaleRule, bCallModify) end

---Attach this component to another scene component, optionally at a named socket. It is valid to call this on components whether or not they have been Registered.
---@param Parent USceneComponent
---@param SocketName string
---@param LocationRule EAttachmentRule
---@param RotationRule EAttachmentRule
---@param ScaleRule EAttachmentRule
---@param bWeldSimulatedBodies boolean
---@return boolean
function USceneComponent:K2_AttachToComponent(Parent, SocketName, LocationRule, RotationRule, ScaleRule, bWeldSimulatedBodies) end

---@param InParent USceneComponent
---@param InSocketName string @[opt] 
---@param AttachType integer @[opt] 
---@param bWeldSimulatedBodies boolean @[opt] 
---@return boolean
function USceneComponent:K2_AttachTo(InParent, InSocketName, AttachType, bWeldSimulatedBodies) end

---Adds a delta to the transform of the component in world space. Scale is unchanged.
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param DeltaTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_AddWorldTransformKeepScale(DeltaTransform, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the transform of the component in world space. Ignores scale and sets it to (1,1,1).
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param DeltaTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_AddWorldTransform(DeltaTransform, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the rotation of the component in world space.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param DeltaRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_AddWorldRotation(DeltaRotation, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the location of the component in world space.
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param DeltaLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_AddWorldOffset(DeltaLocation, bSweep, SweepHitResult, bTeleport) end

---Adds a delta the rotation of the component relative to its parent
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---@param DeltaRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_AddRelativeRotation(DeltaRotation, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the translation of the component relative to its parent
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param DeltaLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_AddRelativeLocation(DeltaLocation, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the transform of the component in its local reference frame. Scale is unchanged.
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param DeltaTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_AddLocalTransform(DeltaTransform, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the rotation of the component in its local reference frame
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---@param DeltaRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_AddLocalRotation(DeltaRotation, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the location of the component in its local reference frame
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume.
---@param DeltaLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function USceneComponent:K2_AddLocalOffset(DeltaLocation, bSweep, SweepHitResult, bTeleport) end

---Returns true if this component is visible in the current context
---@return boolean
function USceneComponent:IsVisible() end

---Returns whether the specified body is currently using physics simulation
---@param BoneName string @[opt] 
---@return boolean
function USceneComponent:IsSimulatingPhysics(BoneName) end

---
---@return boolean
function USceneComponent.IsGroupedComponentMovementEnabled() end

---Returns whether the specified body is currently using physics simulation
---@return boolean
function USceneComponent:IsAnySimulatingPhysics() end

---Get the up (Z) unit direction vector from this component, in world space.
---@return FVector
function USceneComponent:GetUpVector() end

---Get world-space socket transform.
---@param InSocketName string
---@param TransformSpace integer @[opt] 
---@return FTransform
function USceneComponent:GetSocketTransform(InSocketName, TransformSpace) end

---Get world-space socket or bone  FRotator rotation.
---@param InSocketName string
---@return FRotator
function USceneComponent:GetSocketRotation(InSocketName) end

---Get world-space socket or bone FQuat rotation.
---@param InSocketName string
---@return FQuat
function USceneComponent:GetSocketQuaternion(InSocketName) end

---Get world-space socket or bone location.
---@param InSocketName string
---@return FVector
function USceneComponent:GetSocketLocation(InSocketName) end

---Gets whether or not the cached PhysicsVolume this component overlaps should be updated when the component is moved.
---@return boolean
function USceneComponent:GetShouldUpdatePhysicsVolume() end

---Get the right (Y) unit direction vector from this component, in world space.
---@return FVector
function USceneComponent:GetRightVector() end

---Returns the transform of the component relative to its parent
---@return FTransform
function USceneComponent:GetRelativeTransform() end

---Gets all attachment parent components up to and including the root component
---@param Parents TArray_USceneComponent_ @[out] 
function USceneComponent:GetParentComponents(Parents) end

---Gets the number of attached children components
---@return integer
function USceneComponent:GetNumChildrenComponents() end

---Get the forward (X) unit direction vector from this component, in world space.
---@return FVector
function USceneComponent:GetForwardVector() end

---Get velocity of the component: either ComponentVelocity, or the velocity of the physics body if simulating physics.
---@return FVector
function USceneComponent:GetComponentVelocity() end

---Gets all components that are attached to this component, possibly recursively
---@param bIncludeAllDescendants boolean
---@param Children TArray_USceneComponent_ @[out] 
function USceneComponent:GetChildrenComponents(bIncludeAllDescendants, Children) end

---Gets the attached child component at the specified location
---@param ChildIndex integer
---@return USceneComponent
function USceneComponent:GetChildComponent(ChildIndex) end

---Get the socket we are attached to.
---@return string
function USceneComponent:GetAttachSocketName() end

---Get the SceneComponent we are attached to.
---@return USceneComponent
function USceneComponent:GetAttachParent() end

---Gets the names of all the sockets on the component.
---@return TArray_string_
function USceneComponent:GetAllSocketNames() end

---Return true if socket with the given name exists
---@param InSocketName string
---@return boolean
function USceneComponent:DoesSocketExist(InSocketName) end

---@param bMaintainWorldPosition boolean @[opt] 
---@param bCallModify boolean @[opt] 
function USceneComponent:DetachFromParent(bMaintainWorldPosition, bCallModify) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USceneComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USceneComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USceneComponent:AddAssetUserDataOfClass(InUserDataClass) end

