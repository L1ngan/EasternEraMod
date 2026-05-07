---This is the runtime representation of a segment which stores its vertices (start and end) in normalized space.
---@class FBlendSpaceSegment
---@field public SampleIndices integer @Indices into the samples
---@field public Vertices number @The vertices are in the normalized space - i.e. in the range 0-1.
local FBlendSpaceSegment = {}
