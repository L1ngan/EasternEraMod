---@class UNiagaraBakerOutputSparseVolumeTexture : UNiagaraBakerOutput
---@field public SourceBinding FNiagaraBakerTextureSource
---@field public VolumeWorldSpaceSizeBinding FNiagaraParameterBinding
---@field public SparseVolumeTextureAssetPathFormat string @When enabled a volume atlas is created, the atlas is along X & Y not Z based on baker settings.
---@field public bEnableLoopedOutput boolean @Enable outputting a seamlessly blended looped SVT sequence
---@field public LoopedSparseVolumeTextureAssetPathFormat string @Path for the looped SVT
---@field public StartTime number @Time in seconds to start the looped output from
---@field public BlendDuration number @Number of seconds to blend the output for
local UNiagaraBakerOutputSparseVolumeTexture = {}

