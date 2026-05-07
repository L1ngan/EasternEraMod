---Container for a UVirtualTexture2D that can be built from a FVirtualTextureBuildDesc description.
---This has a simple BuildTexture() interface but we may want to extend in the future to support partial builds
---or other more blueprint driven approaches for data generation.
---@class UVirtualTextureBuilder : UObject
---@field public Texture UVirtualTexture2D @The (embedded) texture asset. Use Build Virtual Textures in the Build menu, or the Build button in the Runtime Virtual Texture Component to create/update it.
---@field public TextureMobile UVirtualTexture2D @The (embedded) texture asset for mobile rendering, only if virtual texture support on Mobile is enabled and if RVT support on mobile is enabled in the project settings (see r.Mobile.VirtualTextures). Use Build Virtual Textures or the Build button in the Runtime Virtual Texture Component to create/update it.
---@field public BuildHash integer @Some client defined hash of that defines how the Texture was built.
---@field public bSeparateTextureForMobile boolean @Whether to use a separate texture for Mobile rendering, only if virtual texture support on Mobile is enabled and if RVT support on mobile is enabled in the project settings (see r.Mobile.VirtualTextures). A separate texture will be built using mobile preview editor mode. Use this in case there is too much discrepancy between the RVT used for desktop vs. mobile.
local UVirtualTextureBuilder = {}

