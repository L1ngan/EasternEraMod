---Settings for the Asset Management framework, which can be used to discover, load, and audit game-specific asset types
---@class UAssetManagerSettings : UDeveloperSettings
---@field public PrimaryAssetTypesToScan TArray<FPrimaryAssetTypeInfo> @List of asset types to scan at startup
---@field public DirectoriesToExclude TArray<FDirectoryPath> @List of directories to exclude from scanning for Primary Assets, useful to exclude test assets
---@field public PrimaryAssetRules TArray<FPrimaryAssetRulesOverride> @List of specific asset rule overrides
---@field public CustomPrimaryAssetRules TArray<FPrimaryAssetRulesCustomOverride> @List of game-specific asset rule overrides for types, this will not do anything by default
---@field public bOnlyCookProductionAssets boolean @If true, DevelopmentCook assets will error when they are cooked, you should enable this on production branches
---@field public bShouldManagerDetermineTypeAndName boolean @If true, the asset manager will determine the type and name for Primary Assets that do not implement GetPrimaryAssetId, by calling DeterminePrimaryAssetIdForObject and using the ini settings. This works in both cooked and uncooked builds but is slower than directly implementing GetPrimaryAssetId on the native asset
---@field public bShouldGuessTypeAndNameInEditor boolean @If true, PrimaryAsset Type/Name will be implied for assets in the editor even if bShouldManagerDetermineTypeAndName is false. This guesses the correct id for content that hasn't been resaved after GetPrimaryAssetId was implemented
---@field public bShouldAcquireMissingChunksOnLoad boolean @If true, this will query the platform chunk install interface to request missing chunks for any requested primary asset loads
---@field public bShouldWarnAboutInvalidAssets boolean @If true, the asset manager will warn when it is told to load or do something with assets it does not know about
---@field public PrimaryAssetIdRedirects TArray<FAssetManagerRedirect> @Redirect from Type:Name to Type:NameNew
---@field public PrimaryAssetTypeRedirects TArray<FAssetManagerRedirect> @Redirect from Type to TypeNew
---@field public AssetPathRedirects TArray<FAssetManagerRedirect> @Redirect from /game/assetpath to /game/assetpathnew
---@field public MetaDataTagsForAssetRegistry TSet<string> @The metadata tags to be transferred to the Asset Registry.
local UAssetManagerSettings = {}

