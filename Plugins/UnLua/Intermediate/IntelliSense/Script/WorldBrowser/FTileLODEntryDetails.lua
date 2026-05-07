---FTileLODEntryDetails
---Helper class to hold tile LOD level description
---@class FTileLODEntryDetails
---@field public LODIndex integer @Maximum deviation of details percentage
---@field public RelativeDistance integer @Relative to original tile streaming distance (Absolute Distance = Layer Streaming Distance + Relative Distance)
---@field public SimplificationDetails FLevelSimplificationDetails
local FTileLODEntryDetails = {}
