---Filter a point set to only the points inside or outside of a given mesh
---@class FFilterPointSetWithMeshDataflowNode : FDataflowNode
---@field private TargetMesh UDynamicMesh @Mesh to use to filter point set
---@field private bKeepInside boolean @Whether to keep the points inside or (if false) outside the mesh.
---@field private WindingThreshold number @The winding number threshold to use for determining whether a point is inside or outside of the mesh
---@field private SamplePoints TArray<FVector> @Points to filter
local FFilterPointSetWithMeshDataflowNode = {}
