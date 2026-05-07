---Structure defining rules for what to do with assets, this is defined per type and can be overridden per asset
---@class FPrimaryAssetRules
---@field public Priority integer @Primary Assets with a higher priority will take precedence over lower priorities when assigning management for referenced assets. If priorities match, both will manage the same Secondary Asset.
---@field public ChunkId integer @Assets will be put into this Chunk ID specifically, if set to something other than -1. The default Chunk is Chunk 0.
---@field public bApplyRecursively boolean @If true, this rule will apply to all referenced Secondary Assets recursively, as long as they are not managed by a higher-priority Primary Asset.
---@field public CookRule EPrimaryAssetCookRule @Rule describing when this asset should be cooked.
local FPrimaryAssetRules = {}
