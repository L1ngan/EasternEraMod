---SetSpaceTransform is used to perform a change in the hierarchy by setting a single space's transform.
---@class FRigUnit_SetSpaceTransform : FRigUnitMutable
---@field public Space string @The name of the Space to set the transform for.
---@field public Weight number @The weight of the change - how much the change should be applied
---@field public Transform FTransform @The transform value to set for the given Space.
---@field public SpaceType ERigVMTransformSpace @Defines if the bone's transform should be set in local or global space.
---@field public CachedSpaceIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_SetSpaceTransform = {}
