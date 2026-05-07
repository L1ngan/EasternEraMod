---@class UEnvQueryManager : UAISubsystem
---@field protected InstanceCache TArray<FEnvQueryInstanceCache> @cache of instances
---@field protected LocalContexts TArray<UEnvQueryContext> @local cache of context objects for managing BP based objects
---@field protected GCShieldedWrappers TArray<UEnvQueryInstanceBlueprintWrapper>
---@field protected MaxAllowedTestingTime number @how long are we allowed to test per update, in seconds.
---@field protected bTestQueriesUsingBreadth boolean @whether we update EQS queries based on:           running a test on one query and move to the next (breadth) - default behavior,           or test an entire query before moving to the next one (depth).
---@field protected QueryCountWarningThreshold integer @if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out
---@field protected QueryCountWarningInterval number @how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session)
---@field protected ExecutionTimeWarningSeconds number @Maximum EQS execution duration (in seconds) before a warning is reported.
---@field protected HandlingResultTimeWarningSeconds number @Maximum EQS Query FinishDelegate duration (in seconds) before a warning is reported.
---@field protected GenerationTimeWarningSeconds number @Maximum EQS Generator duration (in seconds) before a warning is reported.
local UEnvQueryManager = {}

---@param WorldContextObject UObject
---@param QueryTemplate UEnvQuery
---@param Querier UObject
---@param RunMode integer
---@param WrapperClass TSubclassOf_UEnvQueryInstanceBlueprintWrapper_
---@return UEnvQueryInstanceBlueprintWrapper
function UEnvQueryManager.RunEQSQuery(WorldContextObject, QueryTemplate, Querier, RunMode, WrapperClass) end

