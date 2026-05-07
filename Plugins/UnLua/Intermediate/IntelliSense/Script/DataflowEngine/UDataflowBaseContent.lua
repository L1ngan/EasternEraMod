---Dataflow content owning dataflow asset that that will be used to evaluate the graph
---@class UDataflowBaseContent : UDataflowContextObject
---@field protected DataflowTerminal string @Data flow terminal path for evaluation
---@field protected TerminalAsset UObject @Data flow terminal path for evaluation
---@field protected bIsConstructionDirty boolean @Dirty flag to trigger rendering. Do we need that? since when accessing the member by non const ref we will not dirty it
---@field protected bIsSimulationDirty boolean @Dirty flag to reset the simulation if necessary
local UDataflowBaseContent = {}

