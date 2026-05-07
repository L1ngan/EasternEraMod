---More bounding vertices results in reduced overdraw, but adds more triangle overhead.
---The eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,
---and when the particles using the texture will be few and large.
---@class ESubUVBoundingVertexCount
---@field public BVC_FourVertices integer
---@field public BVC_EightVertices integer
---@field public BVC_MAX integer
local ESubUVBoundingVertexCount = {}
