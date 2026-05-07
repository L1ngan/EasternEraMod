---@class FEQSParametrizedQueryExecutionRequest
---@field public QueryTemplate UEnvQuery
---@field public QueryConfig TArray<FAIDynamicParam>
---@field public EQSQueryBlackboardKey FBlackboardKeySelector @blackboard key storing an EQS query template
---@field public RunMode integer @determines which item will be stored (All = only first matching)
---@field public bUseBBKeyForQueryTemplate boolean
local FEQSParametrizedQueryExecutionRequest = {}
