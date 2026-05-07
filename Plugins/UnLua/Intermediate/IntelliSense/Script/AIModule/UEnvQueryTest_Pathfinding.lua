---@class UEnvQueryTest_Pathfinding : UEnvQueryTest
---@field public TestMode integer @testing mode
---@field public Context TSubclassOf<UEnvQueryContext> @context: other end of pathfinding test
---@field public PathFromContext FAIDataProviderBoolValue @pathfinding direction
---@field public SkipUnreachable FAIDataProviderBoolValue @if set, items with failed path will be invalidated (PathCost, PathLength)
---@field public FilterClass TSubclassOf<UNavigationQueryFilter> @navigation filter to use in pathfinding
local UEnvQueryTest_Pathfinding = {}

