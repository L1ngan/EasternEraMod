---@class FNiagaraBakerTextureSettings
---@field public OutputName string @Optional output name, if left empty a name will be auto generated using the index of the texture/
---@field public SourceBinding FNiagaraBakerTextureSource @Source visualization we should capture, i.e. Scene Color, World Normal, etc
---@field public bUseFrameSize boolean
---@field public FrameSize FIntPoint @Size of each frame generated.
---@field public TextureSize FIntPoint @Overall texture size that will be generated.
---@field public GeneratedTexture UTexture2D @Final texture generated, an existing entry will be updated with new capture data.
local FNiagaraBakerTextureSettings = {}
