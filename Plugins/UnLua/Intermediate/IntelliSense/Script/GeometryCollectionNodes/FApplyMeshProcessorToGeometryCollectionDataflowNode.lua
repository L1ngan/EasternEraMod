---Apply a Geometry Script Mesh Processors to the geometry of selected transforms in a geometry collection
---@class FApplyMeshProcessorToGeometryCollectionDataflowNode : FMeshProcessorDataflowNodeBase
---@field public Collection FManagedArrayCollection @Input/Output mesh
---@field public TransformSelection FDataflowTransformSelection @Selected bones will have geometry script processing applied (if they have geometry). If not connected, all geometry will be processed.
---@field public bWeldVertices boolean @Whether the processed mesh will have edges at normal/UV/color seams welded so they are treated as one edge during processing.
---@field public bPreserveIsolatedVertices boolean @Whether to preserve isolated vertices which aren't used by any triangles.
local FApplyMeshProcessorToGeometryCollectionDataflowNode = {}
