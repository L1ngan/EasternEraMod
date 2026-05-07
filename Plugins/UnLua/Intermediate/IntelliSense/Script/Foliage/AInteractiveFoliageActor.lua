---@class AInteractiveFoliageActor : AStaticMeshActor
---@field private CapsuleComponent UCapsuleComponent @Collision cylinder
---@field private TouchingActorEntryPosition FVector @Position of the last actor to enter the collision cylinder. This currently does not handle multiple actors affecting the foliage simultaneously.
---@field private FoliageVelocity FVector @Simulated physics state
---@field private FoliageForce FVector @
---@field private FoliagePosition FVector @
---@field public FoliageDamageImpulseScale number @Scales forces applied from damage events.
---@field public FoliageTouchImpulseScale number @Scales forces applied from touch events.
---@field public FoliageStiffness number @Determines how strong the force that pushes toward the spring's center will be.
---@field public FoliageStiffnessQuadratic number @Same as FoliageStiffness, but the strength of this force increases with the square of the distance to the spring's center. This force is used to prevent the spring from extending past a certain point due to touch and damage forces.
---@field public FoliageDamping number @Determines the amount of energy lost by the spring as it oscillates. This force is similar to air friction.
---@field public MaxDamageImpulse number @Clamps the magnitude of each damage force applied.
---@field public MaxTouchImpulse number @Clamps the magnitude of each touch force applied.
---@field public MaxForce number @Clamps the magnitude of combined forces applied each update.
---@field public Mass number @
local AInteractiveFoliageActor = {}

---Called when capsule is touched
---@param OverlappedComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex integer
---@param bFromSweep boolean
---@param OverlapInfo FHitResult
function AInteractiveFoliageActor:CapsuleTouched(OverlappedComp, Other, OtherComp, OtherBodyIndex, bFromSweep, OverlapInfo) end

