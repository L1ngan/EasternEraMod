---Adds a new animation channel to the hierarchy
---Note: This node only runs as part of the construction event.
---@class FRigUnit_HierarchyAddAnimationChannelScaleVector : FRigUnit_HierarchyAddElement
---@field public InitialValue FVector @* The initial value of the new animation channel
---@field public MinimumValue FVector @* The initial value of the new animation channel
---@field public MaximumValue FVector @* The maximum value for the animation channel
---@field public LimitsEnabled FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings @* The enable settings for the limits
local FRigUnit_HierarchyAddAnimationChannelScaleVector = {}
