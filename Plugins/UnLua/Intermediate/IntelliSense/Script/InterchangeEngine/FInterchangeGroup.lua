---@class FInterchangeGroup
---@field public DisplayName string @Specifies a different pipeline stack for Interchange to use by default when importing specific types of assets.
---@field public UniqueID FGuid @This tell interchange if the import dialog should show or not when importing a particular type of asset.
---@field public DefaultPipelineStack string @Specifies which pipeline stack Interchange should use by default.
---@field public DefaultPipelineStackOverride TMap<EInterchangeTranslatorAssetType, string> @Specifies a different pipeline stack for Interchange to use by default when importing specific types of assets.
---@field public bShowImportDialog boolean @Show the options dialog when Interchange imports.
---@field public bShowReimportDialog boolean @Show the options dialog when Interchange reimports.
---@field public ShowImportDialogOverride TMap<EInterchangeTranslatorAssetType, FInterchangeDialogOverride> @This tell interchange if the import dialog should show or not when importing a particular type of asset.
local FInterchangeGroup = {}
