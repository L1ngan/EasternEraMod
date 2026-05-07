---Imports all bones (and curves) from the currently assigned skeleton.
---Note: This node only runs as part of the construction event.
---@class FRigUnit_HierarchyImportFromSkeleton : FRigUnit_DynamicHierarchyBaseMutable
---@field public NameSpace string
---@field public bIncludeCurves boolean
---@field public bIncludeMeshSockets boolean
---@field public bIncludeVirtualBones boolean
---@field public Items TArray<FRigElementKey>
local FRigUnit_HierarchyImportFromSkeleton = {}
