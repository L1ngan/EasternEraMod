---Settings for how developers interact with assets. Stored in default config, per-project
---@class UEditorProjectAssetSettings : UDeveloperSettings
---@field public bPromptToDeleteUnreferencedRedirectors boolean @When performing cleanup operations on redirectors (such as resaving their referencers), prompt the user to delete unreferenced redirectors.
---@field public bRenameLocalizedVariantsAlongsideSourceAsset boolean @If the project uses Localization, localized variants of assets will be moved/renamed/deleted alongside their source asset.
local UEditorProjectAssetSettings = {}

