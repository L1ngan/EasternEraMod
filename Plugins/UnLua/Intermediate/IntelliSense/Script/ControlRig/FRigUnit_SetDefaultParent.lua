---Changes the default parent for an item - this removes all other current parents.
---@class FRigUnit_SetDefaultParent : FRigUnit_DynamicHierarchyBaseMutable
---@field public Child FRigElementKey @* The child to be parented under the new default parent
---@field public Parent FRigElementKey @* The default parent to be used for the child
local FRigUnit_SetDefaultParent = {}
