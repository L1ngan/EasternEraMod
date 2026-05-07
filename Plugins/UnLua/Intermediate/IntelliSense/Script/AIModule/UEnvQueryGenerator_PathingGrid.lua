---Navigation grid, generates points on navmesh
---with paths to/from context no further than given limit
---@class UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid
---@field public PathToItem FAIDataProviderBoolValue @pathfinding direction
---@field public NavigationFilter TSubclassOf<UNavigationQueryFilter> @navigation filter to use in pathfinding
---@field public ScanRangeMultiplier FAIDataProviderFloatValue @multiplier for max distance between point and context
local UEnvQueryGenerator_PathingGrid = {}

