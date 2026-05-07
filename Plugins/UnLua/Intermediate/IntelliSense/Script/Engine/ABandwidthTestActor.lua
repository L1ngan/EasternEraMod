---This ABandwidthTestActor class is used to generate an easily controllable amount of bandwidth.
---It uses property replication to generate it's traffic via a NetDeltaSerializer struct
---Note that the property data is never stored in memory on the simulated clients
---@class ABandwidthTestActor : AActor
---@field public BandwidthGenerator FBandwidthTestGenerator
local ABandwidthTestActor = {}

