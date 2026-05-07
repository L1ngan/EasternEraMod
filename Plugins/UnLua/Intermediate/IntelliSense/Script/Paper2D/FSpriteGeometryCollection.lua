---@class FSpriteGeometryCollection
---@field public Shapes TArray<FSpriteGeometryShape> @List of shapes
---@field public GeometryType integer @The geometry type (automatic / manual)
---@field public PixelsPerSubdivisionX integer @Size of a single subdivision (in pixels) in X (for Diced mode)
---@field public PixelsPerSubdivisionY integer @Size of a single subdivision (in pixels) in Y (for Diced mode)
---@field public bAvoidVertexMerging boolean @Experimental: Hint to the triangulation routine that extra vertices should be preserved
---@field public AlphaThreshold number @Alpha threshold for a transparent pixel (range 0..1, anything equal or below this value will be considered unimportant)
---@field public DetailAmount number @Amount to detail to consider when shrink-wrapping (range 0..1, 0 = low detail, 1 = high detail)
---@field public SimplifyEpsilon number @This is the threshold below which multiple vertices will be merged together when doing shrink-wrapping.  Higher values result in fewer vertices.
local FSpriteGeometryCollection = {}
