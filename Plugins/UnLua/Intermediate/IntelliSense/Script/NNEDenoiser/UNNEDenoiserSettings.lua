---Settings to select a NNE Denoiser and its runtime
---@class UNNEDenoiserSettings : UDeveloperSettingsBackedByCVars
---@field public DenoiserAsset TSoftObjectPtr<UNNEDenoiserAsset> @Select the denoiser asset
---@field public MaximumTileSizeOverride integer @Override the maximum tile size given by the asset. Special values:    -1 = Do not override
---@field private RuntimeType integer @Select a Runtime type
---@field private RuntimeName string @(Optional) Specify the Runtime name
local UNNEDenoiserSettings = {}

