---This UAssetUserData is attached to landscape heightmap UTexture2D's and tracks the heightmap texture's edge fixup state
---This is used by mip providers to apply edge fixup on mip streaming/creation, and
---also used by runtime dynamic fixup when neighboring landscape components are pulled in
---@class ULandscapeHeightmapTextureEdgeFixup : UAssetUserData
local ULandscapeHeightmapTextureEdgeFixup = {}

