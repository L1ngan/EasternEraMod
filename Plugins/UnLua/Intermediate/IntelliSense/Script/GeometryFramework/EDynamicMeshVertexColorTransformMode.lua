---Color Transform to apply to Vertex Colors when converting from internal DynamicMesh
---Color attributes (eg Color Overlay stored in FVector4f) to RHI Render Buffers (FColor).
---Note that UStaticMesh assumes the Source Mesh colors are Linear and always converts to SRGB.
---@class EDynamicMeshVertexColorTransformMode
---@field public NoTransform integer
---@field public LinearToSRGB integer
---@field public SRGBToLinear integer
---@field public EDynamicMeshVertexColorTransformMode_MAX integer
local EDynamicMeshVertexColorTransformMode = {}
