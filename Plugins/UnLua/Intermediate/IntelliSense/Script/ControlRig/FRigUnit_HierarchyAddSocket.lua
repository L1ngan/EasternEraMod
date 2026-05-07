---Adds a new socket to the hierarchy
---Note: This node only runs as part of the construction event.
---@class FRigUnit_HierarchyAddSocket : FRigUnit_HierarchyAddElement
---@field public Transform FTransform @* The initial transform of the new element
---@field public Space ERigVMTransformSpace @Defines if the transform should be interpreted in local or global space
---@field public Color FLinearColor @* The color of the socket
---@field public Description string @* The (optional) description of the socket
local FRigUnit_HierarchyAddSocket = {}
