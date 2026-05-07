---GetControlVector is used to retrieve a single Vector from a hierarchy, can be used for Controls of type "Position" or "Scale".
---@class FRigUnit_GetControlVector : FRigUnit
---@field public Control string @The name of the Control to retrieve the Vector for.
---@field public Space ERigVMTransformSpace @Defines if the Control's Vector should be retrieved in local or global space.
---@field public Vector FVector @The current value of the control.
---@field public Minimum FVector @The minimum value of the control.
---@field public Maximum FVector @The maximum value of the control.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_GetControlVector = {}
