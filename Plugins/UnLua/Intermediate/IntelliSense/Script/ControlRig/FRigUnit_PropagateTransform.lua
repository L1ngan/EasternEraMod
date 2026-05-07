---Propagate Transform can be used to force a recalculation of a bone's global transform
---from its local - as well as propagating that change onto the children.
---@class FRigUnit_PropagateTransform : FRigUnitMutable
---@field public Item FRigElementKey @The item to offset the transform for
---@field public bRecomputeGlobal boolean @If set to true the item's global transform will be recomputed from its parent's transform and its local.
---@field public bApplyToChildren boolean @If set to true the direct children of this item will be recomputed as well. Combined with bRecursive all children will be affected recursively.
---@field public bRecursive boolean @If set to true and with bApplyToChildren enabled all children will be affected recursively.
---@field public CachedIndex FCachedRigElement @Used to cache the item internally
local FRigUnit_PropagateTransform = {}
