---GetControlDrivenList is used to retrieve the list of affected controls of an indirect control
---@class FRigUnit_GetControlDrivenList : FRigUnit
---@field public Control string @The name of the Control to get the list for
---@field public Driven TArray<FRigElementKey> @The list of affected controls
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_GetControlDrivenList = {}
