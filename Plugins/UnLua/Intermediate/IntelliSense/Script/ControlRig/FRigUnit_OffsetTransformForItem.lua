---Offset Transform is used to add an offset to an existing transform in the hierarchy. The offset is post multiplied.
---@class FRigUnit_OffsetTransformForItem : FRigUnitMutable
---@field public Item FRigElementKey @The item to offset the transform for
---@field public OffsetTransform FTransform @The transform of the item relative to its previous transform
---@field public Weight number @Defines how much the change will be applied
---@field public bPropagateToChildren boolean @If set to true children of affected items in the hierarchy will follow the transform change - otherwise only the parent will move.
---@field public CachedIndex FCachedRigElement @Used to cache the item internally
local FRigUnit_OffsetTransformForItem = {}
