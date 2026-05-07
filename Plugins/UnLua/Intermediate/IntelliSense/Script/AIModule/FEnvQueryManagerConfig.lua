---Wrapper to hold config variables
---@class FEnvQueryManagerConfig
---@field public MaxAllowedTestingTime number @how long are we allowed to test per update, in seconds.
---@field public bTestQueriesUsingBreadth boolean @whether we update EQS queries based on:       running a test on one query and move to the next (breadth) - default behavior,       or test an entire query before moving to the next one (depth).
---@field public QueryCountWarningThreshold integer @if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out
---@field public QueryCountWarningInterval number @how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session)
---@field public ExecutionTimeWarningSeconds number @Maximum EQS execution duration (in seconds) before a warning is reported.
---@field public HandlingResultTimeWarningSeconds number @Maximum EQS Query FinishDelegate duration (in seconds) before a warning is reported.
---@field public GenerationTimeWarningSeconds number @Maximum EQS Generator duration (in seconds) before a warning is reported.
local FEnvQueryManagerConfig = {}
