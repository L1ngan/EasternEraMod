---@class UImportVertexColorOptions : UObject
---@field public UVIndex integer @Texture Coordinate Channel to use for Sampling the Texture
---@field public LODIndex integer @LOD Index to import the Vertex Colors to
---@field public bRed boolean @Red Texture Channel
---@field public bBlue boolean @Blue Texture Channel
---@field public bGreen boolean @Green Texture Channel
---@field public bAlpha boolean @Alpha Texture Channel
---@field public bImportToInstance boolean @Whether or not to import the Vertex Colors to Mesh Component instance or the underlying Static Mesh
---@field public bCanImportToInstance boolean
local UImportVertexColorOptions = {}

