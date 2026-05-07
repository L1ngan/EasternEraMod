---@class FGenerateStaticMeshLODProcess_TextureSettings
---@field public BakeResolution EGenerateStaticMeshLODBakeResolution @Resolution for normal map and texture baking
---@field public BakeThickness number @How far away from the output mesh to search for input mesh during baking
---@field public bCombineTextures boolean @Generate an atlassed texture where multiple textures are combined into a single output texture
local FGenerateStaticMeshLODProcess_TextureSettings = {}
