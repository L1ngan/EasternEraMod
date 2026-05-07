---SetSpaceInitialTransform is used to perform a change in the hierarchy by setting a single space's initial transform.
---@class FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
---@field public SpaceName string @The name of the Space to set the transform for.
---@field public Transform FTransform @The transform value to set for the given space.
---@field public Result FTransform @The transform value result (after weighting)
---@field public Space ERigVMTransformSpace @Defines if the bone's transform should be set in local or global space.
---@field public CachedSpaceIndex FCachedRigElement @user to internally cache the index of the bone
local FRigUnit_SetSpaceInitialTransform = {}
