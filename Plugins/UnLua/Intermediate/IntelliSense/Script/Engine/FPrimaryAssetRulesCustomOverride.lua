---Apply primary asset rules to groups of primary assets, using type + filter directory or string
---@class FPrimaryAssetRulesCustomOverride
---@field public PrimaryAssetType FPrimaryAssetType @Which type to apply rules for
---@field public FilterDirectory FDirectoryPath @Will only apply to files in this directory
---@field public FilterString string @Game-specific string defining which assets to apply this to
---@field public Rules FPrimaryAssetRules @What to overrides the rules with
local FPrimaryAssetRulesCustomOverride = {}
