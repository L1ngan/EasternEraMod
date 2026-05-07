---SetMultiControlVector2D is used to perform a change in the hierarchy by setting multiple controls' vector2D value.
---@class FRigUnit_SetMultiControlVector2D : FRigUnitMutable
---@field public Entries TArray<FRigUnit_SetMultiControlVector2D_Entry> @The array of control-vector2D pairs to be processed
---@field public Weight number @The weight of the change - how much the change should be applied
---@field public CachedControlIndices TArray<FCachedRigElement> @Used to cache the internally used control indices
local FRigUnit_SetMultiControlVector2D = {}
