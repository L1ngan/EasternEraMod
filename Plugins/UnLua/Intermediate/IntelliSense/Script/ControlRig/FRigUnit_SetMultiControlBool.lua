---SetMultiControlBool is used to perform a change in the hierarchy by setting multiple controls' bool value.
---@class FRigUnit_SetMultiControlBool : FRigUnitMutable
---@field public Entries TArray<FRigUnit_SetMultiControlBool_Entry> @The array of control-Bool pairs to be processed
---@field public CachedControlIndices TArray<FCachedRigElement> @Used to cache the internally used control indices
local FRigUnit_SetMultiControlBool = {}
