---Vertex data stored per-LOD
---@class FStaticMeshVertexColorLODData
---@field public PaintedVertices TArray<FPaintedVertex> @copy of painted vertex data
---@field public VertexBufferColors TArray<FColor> @Copy of vertex buffer colors
---@field public LODIndex integer @Index of the LOD that this data came from
local FStaticMeshVertexColorLODData = {}
