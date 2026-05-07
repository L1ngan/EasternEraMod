---Sets the item's parents' weights
---@class FRigUnit_HierarchySetParentWeights : FRigUnit_DynamicHierarchyBaseMutable
---@field public Child FRigElementKey @* The child to set the parents' weights for
---@field public Weights TArray<FRigElementWeight> @* The weights to set for the child's parents. * The number of weights needs to match the current number of parents.
local FRigUnit_HierarchySetParentWeights = {}
