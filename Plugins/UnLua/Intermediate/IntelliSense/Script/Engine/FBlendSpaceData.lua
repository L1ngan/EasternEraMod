---The runtime data used for interpolating. Note that only one of Segments/Triangles will be in use,
---depending on the dimensionality of the data.
---@class FBlendSpaceData
---@field public Segments TArray<FBlendSpaceSegment>
---@field public Triangles TArray<FBlendSpaceTriangle>
local FBlendSpaceData = {}
