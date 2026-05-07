---@class UFractureClusterMagnetSettings : UFractureToolSettings
---@field public Iterations integer @How widely to search for neighboring bones to add to the new clusters: When Iterations is 1, only direct neighbors of the selected bones can be added to the new clusters; increasing Iterations allows additional layers of neighbors-of-neighbors to be added
local UFractureClusterMagnetSettings = {}

