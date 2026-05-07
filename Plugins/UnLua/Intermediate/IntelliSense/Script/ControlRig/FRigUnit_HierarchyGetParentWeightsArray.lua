---Returns the item's parents' weights
---@class FRigUnit_HierarchyGetParentWeightsArray : FRigUnit_DynamicHierarchyBase
---@field public Child FRigElementKey @* The child to retrieve the weights for
---@field public Weights TArray<FRigElementWeight> @* The weight of each parent
---@field public Parents TArray<FRigElementKey> @* The key for each parent
local FRigUnit_HierarchyGetParentWeightsArray = {}
