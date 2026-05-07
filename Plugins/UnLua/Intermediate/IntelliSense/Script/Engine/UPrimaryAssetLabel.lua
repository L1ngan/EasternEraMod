---A seed file that is created to mark referenced assets as part of this primary asset
---@class UPrimaryAssetLabel : UPrimaryDataAsset
---@field public Rules FPrimaryAssetRules @Management rules for this specific asset, if set it will override the type rules
---@field public bLabelAssetsInMyDirectory boolean @True to Label everything in this directory and sub directories
---@field public bIsRuntimeLabel boolean @Set to true if the label asset itself should be cooked and available at runtime. This does not affect the assets that are labeled, they are set with cook rule
---@field public bIncludeRedirectors boolean @If true, redirectors found by the AssetLabel's explicit assets or directory will be labeled. If false, redirectors will be skipped.
---@field public ExplicitAssets TArray<TSoftObjectPtr<UObject>> @List of manually specified assets to label
---@field public ExplicitBlueprints TArray<TSoftClassPtr<UObject>> @List of manually specified blueprint assets to label
---@field public AssetCollection FCollectionReference @Collection to load asset references out of
local UPrimaryAssetLabel = {}

