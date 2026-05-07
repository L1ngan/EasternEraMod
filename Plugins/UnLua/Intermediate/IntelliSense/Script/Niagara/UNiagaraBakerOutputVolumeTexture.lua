---@class UNiagaraBakerOutputVolumeTexture : UNiagaraBakerOutput
---@field public SourceBinding FNiagaraBakerTextureSource
---@field public bGenerateAtlas boolean
---@field public bGenerateFrames boolean
---@field public bExportFrames boolean
---@field public AtlasAssetPathFormat string @When enabled a volume atlas is created, the atlas is along X & Y not Z based on baker settings.
---@field public FramesAssetPathFormat string @When enabled each frame will create an asset.
---@field public FramesExportPathFormat string @When enabled each frame will be exported to the output path using the format extension.
local UNiagaraBakerOutputVolumeTexture = {}

