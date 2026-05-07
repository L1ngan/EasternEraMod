---@class FInterchangeContentImportSettings : FInterchangeImportSettings
---@field public DefaultPipelineStackOverride TMap<EInterchangeTranslatorAssetType, string> @Specifies a different pipeline stack for Interchange to use by default when importing specific types of assets.
---@field public ShowImportDialogOverride TMap<EInterchangeTranslatorAssetType, FInterchangeDialogOverride>
local FInterchangeContentImportSettings = {}
