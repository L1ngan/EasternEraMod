---@class UPhysicsObjectBlueprintLibrary : UBlueprintFunctionLibrary
local UPhysicsObjectBlueprintLibrary = {}

---@param Component UPrimitiveComponent
---@param BoneName string
---@return FTransform
function UPhysicsObjectBlueprintLibrary.GetPhysicsObjectWorldTransform(Component, BoneName) end

---@param Component UPrimitiveComponent
---@param WorldLocation FVector
---@return FClosestPhysicsObjectResult
function UPhysicsObjectBlueprintLibrary.GetClosestPhysicsObjectFromWorldLocation(Component, WorldLocation) end

---@param Result FClosestPhysicsObjectResult
---@param OutName string @[out] 
---@return boolean
function UPhysicsObjectBlueprintLibrary.ExtractClosestPhysicsObjectResults(Result, OutName) end

---Apply a physics radial impulse with an optional strain on a specific component
---Effect is applied within a sphere. When using linear falloff the effect will be minimum at the outer edge of the sphere and maximum at its center
---@param Component UPrimitiveComponent
---@param Origin FVector
---@param Radius number
---@param Strength number
---@param Falloff integer
---@param bApplyStrain boolean
---@param Strain number
---@param bVelChange boolean @[opt] 
---@param MinValue number @[opt] 
---@param MaxValue number @[opt] 
function UPhysicsObjectBlueprintLibrary.ApplyRadialImpulse(Component, Origin, Radius, Strength, Falloff, bApplyStrain, Strain, bVelChange, MinValue, MaxValue) end

