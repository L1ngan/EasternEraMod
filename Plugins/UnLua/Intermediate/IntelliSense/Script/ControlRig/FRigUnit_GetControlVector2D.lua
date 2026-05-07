---GetControlVector2D is used to retrieve a single Vector2D from a hierarchy.
---@class FRigUnit_GetControlVector2D : FRigUnit
---@field public Control string @The name of the Control to retrieve the Vector2D for.
---@field public Vector FVector2D @The current value of the control.
---@field public Minimum FVector2D @The minimum value of the control.
---@field public Maximum FVector2D @The maximum value of the control.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_GetControlVector2D = {}
