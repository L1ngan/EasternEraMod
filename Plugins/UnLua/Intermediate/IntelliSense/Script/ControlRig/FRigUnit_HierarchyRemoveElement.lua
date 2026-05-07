---Removes an element from the hierarchy
---Note: This node only runs as part of the construction event.
---@class FRigUnit_HierarchyRemoveElement : FRigUnit_DynamicHierarchyBaseMutable
---@field public Item FRigElementKey @* The item to remove
---@field public bSuccess boolean @* True if the element has been removed successfuly
local FRigUnit_HierarchyRemoveElement = {}
