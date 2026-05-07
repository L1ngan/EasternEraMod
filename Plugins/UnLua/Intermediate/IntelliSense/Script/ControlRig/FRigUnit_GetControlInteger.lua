---GetControlFloat is used to retrieve a single Integer from a hierarchy.
---@class FRigUnit_GetControlInteger : FRigUnit
---@field public Control string @The name of the Control to retrieve the Integer for.
---@field public IntegerValue integer @The current value of the control.
---@field public Minimum integer @The minimum value of the control.
---@field public Maximum integer @The maximum value of the control.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_GetControlInteger = {}
