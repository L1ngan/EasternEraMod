---Class for texture color painting tool.
---This paints to special textures stored on the mesh components.
---Behavior should be similar to vertex painting (per instance painting stored on components).
---But painting texture colors instead of vertex colors is a better fit for very dense mesh types such as used by nanite.
---@class UMeshTextureColorPaintingTool : UMeshTexturePaintingTool
---@field private ColorProperties UMeshTextureColorPaintingToolProperties
---@field private MeshPaintDummyTexture UTexture
local UMeshTextureColorPaintingTool = {}

