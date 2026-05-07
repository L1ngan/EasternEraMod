---Structure containing all properties required to query a streaming state
---@class FWorldPartitionStreamingQuerySource
---@field public Location FVector @Location to query. (not used if bSpatialQuery is false)
---@field public Radius number @Radius to query. (not used if bSpatialQuery is false)
---@field public bUseGridLoadingRange boolean @If True, Instead of providing a query radius, query can be bound to loading range radius.
---@field public DataLayers TArray<string> @Optional list of data layers to specialize the query. If empty only non data layer cells will be returned by the query.
---@field public bDataLayersOnly boolean @If True, Only cells that are in a data layer found in DataLayers property will be returned by the query.
---@field public bSpatialQuery boolean @If False, Location/Radius will not be used to find the cells. Only AlwaysLoaded cells will be returned by the query.
local FWorldPartitionStreamingQuerySource = {}
