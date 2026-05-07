---SetMultiControlRotator is used to perform a change in the hierarchy by setting multiple controls' rotator value.
---@class FRigUnit_SetMultiControlRotator : FRigUnitMutable
---@field public Entries TArray<FRigUnit_SetMultiControlRotator_Entry> @The array of control-rotator pairs to be processed
---@field public Weight number @The weight of the change - how much the change should be applied
---@field public CachedControlIndices TArray<FCachedRigElement> @Used to cache the internally used control indices
local FRigUnit_SetMultiControlRotator = {}
