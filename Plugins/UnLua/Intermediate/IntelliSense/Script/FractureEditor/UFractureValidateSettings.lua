---Settings for the Validate tool *
---@class UFractureValidateSettings : UFractureToolSettings
---@field public bRemoveUnreferencedGeometry boolean @Find and remove any unused geometry data
---@field public bRemoveClustersOfOne boolean @Whether to collapse any clusters with only a single child
---@field public bRemoveDanglingClusters boolean @Remove dangling clusters -- Note this can invalidate caches
local UFractureValidateSettings = {}

