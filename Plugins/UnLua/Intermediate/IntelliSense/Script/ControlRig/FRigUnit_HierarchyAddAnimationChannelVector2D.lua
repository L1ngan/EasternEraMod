---Adds a new animation channel to the hierarchy
---Note: This node only runs as part of the construction event.
---@class FRigUnit_HierarchyAddAnimationChannelVector2D : FRigUnit_HierarchyAddElement
---@field public InitialValue FVector2D @* The initial value of the new animation channel
---@field public MinimumValue FVector2D @* The initial value of the new animation channel
---@field public MaximumValue FVector2D @* The maximum value for the animation channel
---@field public LimitsEnabled FRigUnit_HierarchyAddAnimationChannel2DLimitSettings @* The enable settings for the limits
local FRigUnit_HierarchyAddAnimationChannelVector2D = {}
