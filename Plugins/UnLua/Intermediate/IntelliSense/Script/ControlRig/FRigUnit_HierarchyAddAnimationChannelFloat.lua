---Adds a new animation channel to the hierarchy
---Note: This node only runs as part of the construction event.
---@class FRigUnit_HierarchyAddAnimationChannelFloat : FRigUnit_HierarchyAddElement
---@field public InitialValue number @* The initial value of the new animation channel
---@field public MinimumValue number @* The initial value of the new animation channel
---@field public MaximumValue number @* The maximum value for the animation channel
---@field public LimitsEnabled FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings @* The enable settings for the limits
local FRigUnit_HierarchyAddAnimationChannelFloat = {}
