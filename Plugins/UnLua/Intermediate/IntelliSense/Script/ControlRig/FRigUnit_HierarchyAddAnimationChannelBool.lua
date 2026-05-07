---Adds a new animation channel to the hierarchy
---Note: This node only runs as part of the construction event.
---@class FRigUnit_HierarchyAddAnimationChannelBool : FRigUnit_HierarchyAddElement
---@field public InitialValue boolean @* The initial value of the new animation channel
---@field public MinimumValue boolean @* The initial value of the new animation channel
---@field public MaximumValue boolean @* The maximum value for the animation channel
---@field public LimitsEnabled FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings @* The enable settings for the limits
local FRigUnit_HierarchyAddAnimationChannelBool = {}
