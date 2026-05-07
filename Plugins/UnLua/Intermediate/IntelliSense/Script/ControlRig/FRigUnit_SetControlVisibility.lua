---SetControlVisibility is used to change the visibility on a control at runtime
---@class FRigUnit_SetControlVisibility : FRigUnitMutable
---@field public Item FRigElementKey @The name of the Control to set the visibility for.
---@field public Pattern string @If the ControlName is set to None this can be used to look for a series of Controls
---@field public bVisible boolean @The visibility to set for the control
---@field public CachedControlIndices TArray<FCachedRigElement> @Used to cache the internally used control index
local FRigUnit_SetControlVisibility = {}
