---@class UPhysicsThreadLibrary : UBlueprintFunctionLibrary
local UPhysicsThreadLibrary = {}

---Add a force to a single rigid body.
---This is like a 'thruster'. Good for adding a burst over some (non zero) time. Should be called every frame for the duration of the force.
---@param Handle FBodyInstanceAsyncPhysicsTickHandle
---@param Force FVector
---@param bAccelChange boolean @[opt] 
function UPhysicsThreadLibrary.AddForce(Handle, Force, bAccelChange) end

