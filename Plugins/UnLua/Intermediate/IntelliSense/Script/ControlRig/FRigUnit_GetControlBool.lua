---GetControlBool is used to retrieve a single Bool from a hierarchy.
---@class FRigUnit_GetControlBool : FRigUnit
---@field public Control string @The name of the Control to retrieve the bool for.
---@field public BoolValue boolean @The current bool of the given bone - or identity in case it wasn't found.
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_GetControlBool = {}
