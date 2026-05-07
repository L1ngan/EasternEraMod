---@class FBlendSpaceTriangleEdgeInfo
---@field public Normal FVector2D @Edge normal faces out
---@field public NeighbourTriangleIndex integer
---@field public AdjacentPerimeterTriangleIndices integer @IF there is no neighbor, then (a) we're on the perimeter and (b) these will be the indices of triangles along the perimeter (next to the start and end of this edge, respectively)
---@field public AdjacentPerimeterVertexIndices integer @The vertex index of the associated AdjacentPerimeterTriangle such that the perimeter edge is from this vertex to the next.
local FBlendSpaceTriangleEdgeInfo = {}
