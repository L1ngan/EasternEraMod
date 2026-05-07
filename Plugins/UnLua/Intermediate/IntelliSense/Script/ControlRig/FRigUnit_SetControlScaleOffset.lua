---SetControlScaleOffset is used to perform a change in the hierarchy by setting a single control's scale offset.
---This is typically only used during the Construction Event.
---@class FRigUnit_SetControlScaleOffset : FRigUnitMutable
---@field public Control string @The name of the Control to set the transform for.
---@field public Scale FVector @The new scale offset to set on the control
---@field public Space ERigVMTransformSpace @Defines if the control's transform should be set in local or global space.
---@field public CachedControlIndex FCachedRigElement @user to internally cache the index of the bone
local FRigUnit_SetControlScaleOffset = {}
