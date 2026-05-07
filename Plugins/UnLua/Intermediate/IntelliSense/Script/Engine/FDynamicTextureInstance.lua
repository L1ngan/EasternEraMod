---Serialized ULevel information about dynamic texture instances
---@class FDynamicTextureInstance : FStreamableTextureInstance
---@field public Texture UTexture2D @Texture that is used by a dynamic UPrimitiveComponent.
---@field public bAttached boolean @Whether the primitive that uses this texture is attached to the scene or not.
---@field public OriginalRadius number @Original bounding sphere radius, at the time the TexelFactor was calculated originally.
local FDynamicTextureInstance = {}
