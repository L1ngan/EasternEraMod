---@class UInterchangeSparseVolumeTexturePipeline : UInterchangePipelineBase
---@field public PipelineDisplayName string
---@field public bImportSparseVolumeTextures boolean @If enabled, imports all sparse volume texture assets found in the source.
---@field public bImportAnimatedSparseVolumeTextures boolean @If enabled, will attempt to import volume nodes corresponding to numbered files in the same folder as individual frames of an animated SparseVolumeTextures.
---@field public AssetName string @If set, and there is only one asset and one source, the imported asset will be given this name.
---@field private BaseNodeContainer UInterchangeBaseNodeContainer
local UInterchangeSparseVolumeTexturePipeline = {}

