---This is the runtime representation of a triangle. Each triangle stores its vertices etc in normalized space,
---with an index to the original samples.
---@class FBlendSpaceTriangle
---@field public SampleIndices integer @Indices into the samples
---@field public Vertices FVector2D @The vertices are in the normalized space - i.e. in the range 0-1.
---@field public EdgeInfo FBlendSpaceTriangleEdgeInfo @Info for the edge starting at the vertex index and going (anti-clockwise) to the next vertex
local FBlendSpaceTriangle = {}
