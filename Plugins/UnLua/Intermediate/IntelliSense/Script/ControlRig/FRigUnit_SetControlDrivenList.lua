---SetControlDrivenList is used to change the list of affected controls of an indirect control
---@class FRigUnit_SetControlDrivenList : FRigUnitMutable
---@field public Control string @The name of the Control to set the list for
---@field public Driven TArray<FRigElementKey> @The list of affected controls
---@field public CachedControlIndex FCachedRigElement @Used to cache the internally used bone index
local FRigUnit_SetControlDrivenList = {}
