---MovementComponent is an abstract component class that defines functionality for moving a PrimitiveComponent (our UpdatedComponent) each tick.
---Base functionality includes:
---   - Restricting movement to a plane or axis.
---   - Utility functions for special handling of collision results (SlideAlongSurface(), ComputeSlideVector(), TwoWallAdjust()).
---   - Utility functions for moving when there may be initial penetration (SafeMoveUpdatedComponent(), ResolvePenetration()).
---   - Automatically registering the component tick and finding a component to move on the owning Actor.
---Normally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).
---During swept (non-teleporting) movement only collision of UpdatedComponent is considered, attached components will teleport to the end location ignoring collision.
---@class UMovementComponent : UActorComponent
---@field public UpdatedComponent USceneComponent @The component we move and update. If this is null at startup and bAutoRegisterUpdatedComponent is true, the owning Actor's root component will automatically be set as our UpdatedComponent at startup.
---@field public UpdatedPrimitive UPrimitiveComponent @UpdatedComponent, cast as a UPrimitiveComponent. May be invalid if UpdatedComponent was null or not a UPrimitiveComponent.
---@field public Velocity FVector @Current velocity of updated component.
---@field protected PlaneConstraintNormal FVector @The normal or axis of the plane that constrains movement, if bConstrainToPlane is enabled. If for example you wanted to constrain movement to the X-Z plane (so that Y cannot change), the normal would be set to X=0 Y=1 Z=0. This is recalculated whenever PlaneConstraintAxisSetting changes. It is normalized once the component is registered with the game world.
---@field protected PlaneConstraintOrigin FVector @The origin of the plane that constrains movement, if plane constraint is enabled. This defines the behavior of snapping a position to the plane, such as by SnapUpdatedComponentToPlane().
---@field public bUpdateOnlyIfRendered boolean @If true, skips TickComponent() if UpdatedComponent was not recently rendered.
---@field public bAutoUpdateTickRegistration boolean @If true, whenever the updated component is changed, this component will enable or disable its tick dependent on whether it has something to update. This will NOT enable tick at startup if bAutoActivate is false, because presumably you have a good reason for not wanting it to start ticking initially.
---@field public bTickBeforeOwner boolean @If true, after registration we will add a tick dependency to tick before our owner (if we can both tick). This is important when our tick causes an update in the owner's position, so that when the owner ticks it uses the most recent position without lag. Disabling this can improve performance if both objects tick but the order of ticks doesn't matter.
---@field public bAutoRegisterUpdatedComponent boolean @If true, registers the owner's Root component as the UpdatedComponent if there is not one currently assigned.
---@field public bConstrainToPlane boolean @If true, movement will be constrained to a plane.
---@field public bSnapToPlaneAtStart boolean @If true and plane constraints are enabled, then the updated component will be snapped to the plane when first attached.
---@field public bAutoRegisterPhysicsVolumeUpdates boolean @If true, then applies the value of bComponentShouldUpdatePhysicsVolume to the UpdatedComponent. If false, will not change bShouldUpdatePhysicsVolume on the UpdatedComponent at all.
---@field public bComponentShouldUpdatePhysicsVolume boolean @If true, enables bShouldUpdatePhysicsVolume on the UpdatedComponent during initialization from SetUpdatedComponent(), otherwise disables such updates. Only enabled if bAutoRegisterPhysicsVolumeUpdates is true. WARNING: UpdatePhysicsVolume is potentially expensive if overlap events are also *disabled* because it requires a separate query against all physics volumes in the world.
---@field private PlaneConstraintAxisSetting EPlaneConstraintAxisSetting @Setting that controls behavior when movement is restricted to a 2D plane defined by a specific axis/normal, so that movement along the locked axis is not be possible.
local UMovementComponent = {}

---Stops movement immediately (zeroes velocity, usually zeros acceleration for components with acceleration).
function UMovementComponent:StopMovementImmediately() end

---Snap the updated component to the plane constraint, if enabled.
function UMovementComponent:SnapUpdatedComponentToPlane() end

---Assign the component we move and update.
---@param NewUpdatedComponent USceneComponent
function UMovementComponent:SetUpdatedComponent(NewUpdatedComponent) end

---Sets the origin of the plane that constrains movement, enforced if the plane constraint is enabled.
---@param PlaneOrigin FVector
function UMovementComponent:SetPlaneConstraintOrigin(PlaneOrigin) end

---Sets the normal of the plane that constrains movement, enforced if the plane constraint is enabled.
---Changing the normal automatically sets PlaneConstraintAxisSetting to "Custom".
---@param PlaneNormal FVector
function UMovementComponent:SetPlaneConstraintNormal(PlaneNormal) end

---Uses the Forward and Up vectors to compute the plane that constrains movement, enforced if the plane constraint is enabled.
---@param Forward FVector
---@param Up FVector
function UMovementComponent:SetPlaneConstraintFromVectors(Forward, Up) end

---Sets whether or not the plane constraint is enabled.
---@param bEnabled boolean
function UMovementComponent:SetPlaneConstraintEnabled(bEnabled) end

---Set the plane constraint axis setting.
---Changing this setting will modify the current value of PlaneConstraintNormal.
---@param NewAxisSetting EPlaneConstraintAxisSetting
function UMovementComponent:SetPlaneConstraintAxisSetting(NewAxisSetting) end

---Delegate when PhysicsVolume of UpdatedComponent has been changed *
---@param NewVolume APhysicsVolume
function UMovementComponent:PhysicsVolumeChanged(NewVolume) end

---Moves our UpdatedComponent by the given Delta, and sets rotation to NewRotation.
---Respects the plane constraint, if enabled.
---@param Delta FVector
---@param NewRotation FRotator
---@param OutHit FHitResult @[out] 
---@param bSweep boolean @[opt] 
---@param bTeleport boolean @[opt] 
---@return boolean
function UMovementComponent:K2_MoveUpdatedComponent(Delta, NewRotation, OutHit, bSweep, bTeleport) end

---Returns true if the current velocity is exceeding the given max speed (usually the result of GetMaxSpeed()), within a small error tolerance.
---Note that under normal circumstances updates cause by acceleration will not cause this to be true, however external forces or changes in the max speed limit
---can cause the max speed to be violated.
---@param MaxSpeed number
---@return boolean
function UMovementComponent:IsExceedingMaxSpeed(MaxSpeed) end

---Get the plane constraint origin. This defines the behavior of snapping a position to the plane, such as by SnapUpdatedComponentToPlane().
---@return FVector
function UMovementComponent:GetPlaneConstraintOrigin() end

---Returns the normal of the plane that constrains movement, enforced if the plane constraint is enabled.
---@return FVector
function UMovementComponent:GetPlaneConstraintNormal() end

---Get the plane constraint axis setting.
---@return EPlaneConstraintAxisSetting
function UMovementComponent:GetPlaneConstraintAxisSetting() end

---Returns the PhysicsVolume this MovementComponent is using, or the world's default physics volume if none. *
---@return APhysicsVolume
function UMovementComponent:GetPhysicsVolume() end

---Returns maximum speed of component in current movement mode.
---@return number
function UMovementComponent:GetMaxSpeed() end

---Returns gravity that affects this component
---@return number
function UMovementComponent:GetGravityZ() end

---Constrain a normal vector (of unit length) to the plane constraint, if enabled.
---@param Normal FVector
---@return FVector
function UMovementComponent:ConstrainNormalToPlane(Normal) end

---Constrain a position vector to the plane constraint, if enabled.
---@param Location FVector
---@return FVector
function UMovementComponent:ConstrainLocationToPlane(Location) end

---Constrain a direction vector to the plane constraint, if enabled.
---@param Direction FVector
---@return FVector
function UMovementComponent:ConstrainDirectionToPlane(Direction) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMovementComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMovementComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMovementComponent:AddAssetUserDataOfClass(InUserDataClass) end

