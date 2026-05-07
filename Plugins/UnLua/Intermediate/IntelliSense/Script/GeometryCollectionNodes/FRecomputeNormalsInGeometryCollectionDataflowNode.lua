---Editor Fracture Mode / Utilities / Normals tool
---Recompute normals and tangents.
---@class FRecomputeNormalsInGeometryCollectionDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Collection to use
---@field public TransformSelection FDataflowTransformSelection @The selected pieces to use
---@field public bOnlyTangents boolean @Whether to only recompute tangents, and leave normals as they were
---@field public bRecomputeSharpEdges boolean @If true, update where edges are 'sharp' by comparing adjacent triangle face normals vs the Sharp Edge Angle Threshold.
---@field public SharpEdgeAngleThreshold number @Threshold on angle of change in face normals across an edge, above which we create a sharp edge if bRecomputeSharpEdges is true
---@field public bOnlyInternalSurfaces boolean @Whether to only change internal surface normals / tangents
local FRecomputeNormalsInGeometryCollectionDataflowNode = {}
