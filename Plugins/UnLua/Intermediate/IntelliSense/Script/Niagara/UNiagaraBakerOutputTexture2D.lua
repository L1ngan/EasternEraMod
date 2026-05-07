---@class UNiagaraBakerOutputTexture2D : UNiagaraBakerOutput
---@field public SourceBinding FNiagaraBakerTextureSource @Source visualization we should capture, i.e. Scene Color, World Normal, etc
---@field public bGenerateAtlas boolean
---@field public bGenerateFrames boolean
---@field public bExportFrames boolean
---@field public bSetTextureAddressX boolean
---@field public bSetTextureAddressY boolean
---@field public FrameSize FIntPoint @Size of each frame we generate.
---@field public AtlasTextureSize FIntPoint @Size of the atlas texture when generating an atlas.
---@field public TextureAddressX integer @After baking sets the texture address mode to use on the X axis.
---@field public TextureAddressY integer @After baking sets the texture address mode to use on the Y axis.
---@field public AtlasAssetPathFormat string @When enabled a texture atlas is created
---@field public FramesAssetPathFormat string @When enabled each frame will create an asset.
---@field public FramesExportPathFormat string @When enabled each frame will be exported to the output path using the format extension.
local UNiagaraBakerOutputTexture2D = {}

