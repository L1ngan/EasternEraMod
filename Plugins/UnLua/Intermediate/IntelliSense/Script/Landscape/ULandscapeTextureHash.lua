---@class ULandscapeTextureHash : UAssetUserData
---@field private TextureHashGUID FGuid
---@field private LastSourceID FGuid
---@field private TextureType ELandscapeTextureType @heightmap or weightmap.  When unknown, we fallback to using the texture source ID as hash (old behavior)
---@field private TextureUsage ELandscapeTextureUsage @edit layer data or final data.  When unknown, we fallback to using the texture source ID as hash (old behavior)
local ULandscapeTextureHash = {}

