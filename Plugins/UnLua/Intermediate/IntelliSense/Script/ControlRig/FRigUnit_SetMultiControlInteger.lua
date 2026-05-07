---SetMultiControlInteger is used to perform a change in the hierarchy by setting multiple controls' integer value.
---@class FRigUnit_SetMultiControlInteger : FRigUnitMutable
---@field public Entries TArray<FRigUnit_SetMultiControlInteger_Entry> @The array of control-integer pairs to be processed
---@field public Weight number @The weight of the change - how much the change should be applied
---@field public CachedControlIndices TArray<FCachedRigElement> @Used to cache the internally used control indices
local FRigUnit_SetMultiControlInteger = {}
