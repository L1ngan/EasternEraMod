---Adds a new animation channel to the hierarchy
---Note: This node only runs as part of the construction event.
---@class FRigUnit_HierarchyAddAnimationChannelInteger : FRigUnit_HierarchyAddElement
---@field public InitialValue integer @* The initial value of the new animation channel
---@field public MinimumValue integer @* The initial value of the new animation channel
---@field public MaximumValue integer @* The maximum value for the animation channel
---@field public LimitsEnabled FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings @* The enable settings for the limits
---@field public ControlEnum UEnum @* The enum to use to find valid values
local FRigUnit_HierarchyAddAnimationChannelInteger = {}
