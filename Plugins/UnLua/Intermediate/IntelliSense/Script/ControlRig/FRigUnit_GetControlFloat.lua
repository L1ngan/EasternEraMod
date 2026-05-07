---GetControlFloat is used to retrieve a single Float from a hierarchy.
---@class FRigUnit_GetControlFloat : FRigUnit
---@field public Control string @The name of the Control to retrieve the Float for.
---@field public FloatValue number @The current value of the control.
---@field public Minimum number @The minimum value of the control.
---@field public Maximum number @The maximum value of the control.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_GetControlFloat = {}
