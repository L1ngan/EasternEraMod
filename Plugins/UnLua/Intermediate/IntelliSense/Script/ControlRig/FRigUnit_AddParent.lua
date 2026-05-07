---Adds a new parent to an element. The weight for the new parent will be 0.0.
---You can use the SetParentWeights node to change the parent weights later.
---If you just want to add a space to a control you can use the 'Add Spaces' node.
---@class FRigUnit_AddParent : FRigUnit_DynamicHierarchyBaseMutable
---@field public Child FRigElementKey @* The child to be parented under the new parent
---@field public Parent FRigElementKey @* The new parent to be added to the child
---@field public DisplayLabel string @* The optional display label for the parent constraint / space
local FRigUnit_AddParent = {}
