---SetMultiControlFloat is used to perform a change in the hierarchy by setting multiple controls' float value.
---@class FRigUnit_SetMultiControlFloat : FRigUnitMutable
---@field public Entries TArray<FRigUnit_SetMultiControlFloat_Entry> @The array of control-float pairs to be processed
---@field public Weight number @The weight of the change - how much the change should be applied
---@field public CachedControlIndices TArray<FCachedRigElement> @Used to cache the internally used control indices
local FRigUnit_SetMultiControlFloat = {}
