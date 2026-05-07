---@class UEnvQueryTest_Trace : UEnvQueryTest
---@field public TraceData FEnvTraceData @trace data
---@field public TraceFromContext FAIDataProviderBoolValue @trace direction
---@field public ItemHeightOffset FAIDataProviderFloatValue @Z offset from item
---@field public ContextHeightOffset FAIDataProviderFloatValue @Z offset from querier
---@field public Context TSubclassOf<UEnvQueryContext> @context: other end of trace test
local UEnvQueryTest_Trace = {}

