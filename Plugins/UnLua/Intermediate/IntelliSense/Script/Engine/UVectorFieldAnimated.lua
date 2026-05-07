---@class UVectorFieldAnimated : UVectorField
---@field public Texture UTexture2D @The texture from which to create the vector field.
---@field public ConstructionOp integer @The operation used to construct the vector field.
---@field public VolumeSizeX integer @The size of the volume. Valid sizes: 16, 32, 64.
---@field public VolumeSizeY integer @The size of the volume. Valid sizes: 16, 32, 64.
---@field public VolumeSizeZ integer @The size of the volume. Valid sizes: 16, 32, 64.
---@field public SubImagesX integer @The number of horizontal subimages in the texture atlas.
---@field public SubImagesY integer @The number of vertical subimages in the texture atlas.
---@field public FrameCount integer @The number of frames in the atlas.
---@field public FramesPerSecond number @The rate at which to interpolate between frames.
---@field public bLoop boolean @Whether or not the simulation should loop.
---@field public NoiseField UVectorFieldStatic @A static vector field used to add noise.
---@field public NoiseScale number @Scale to apply to vectors in the noise field.
---@field public NoiseMax number @The maximum magnitude of noise vectors to apply.
local UVectorFieldAnimated = {}

