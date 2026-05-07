---Denoiser model data asset
---@class UNNEDenoiserAsset : UDataAsset
---@field public ModelData TSoftObjectPtr<UNNEModelData> @NNE model data
---@field public InputMapping TSoftObjectPtr<UDataTable> @Input mapping table
---@field public OutputMapping TSoftObjectPtr<UDataTable> @Output mapping table
---@field public TilingConfig FTilingConfig @Tiling configuration
local UNNEDenoiserAsset = {}

