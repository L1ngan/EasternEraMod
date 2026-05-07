---Adds a new null to the hierarchy
---Note: This node only runs as part of the construction event.
---@class FRigUnit_HierarchyAddNull : FRigUnit_HierarchyAddElement
---@field public Transform FTransform @* The initial transform of the new element
---@field public Space ERigVMTransformSpace @Defines if the transform should be interpreted in local or global space
local FRigUnit_HierarchyAddNull = {}
