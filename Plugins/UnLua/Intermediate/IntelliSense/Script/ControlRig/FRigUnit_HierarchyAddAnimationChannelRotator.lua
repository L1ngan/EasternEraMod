---Adds a new animation channel to the hierarchy
---Note: This node only runs as part of the construction event.
---@class FRigUnit_HierarchyAddAnimationChannelRotator : FRigUnit_HierarchyAddElement
---@field public InitialValue FRotator @* The initial value of the new animation channel
---@field public MinimumValue FRotator @* The initial value of the new animation channel
---@field public MaximumValue FRotator @* The maximum value for the animation channel
---@field public LimitsEnabled FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings @* The enable settings for the limits
local FRigUnit_HierarchyAddAnimationChannelRotator = {}
