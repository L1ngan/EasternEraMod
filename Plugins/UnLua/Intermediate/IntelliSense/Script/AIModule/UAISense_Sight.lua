---@class UAISense_Sight : UAISense
---@field protected MaxTracesPerTick integer
---@field protected MaxAsyncTracesPerTick integer @Maximum number of asynchronous traces that can be requested in a single update call
---@field protected MinQueriesPerTimeSliceCheck integer
---@field protected MaxTimeSlicePerTick number
---@field protected HighImportanceQueryDistanceThreshold number
---@field protected MaxQueryImportance number
---@field protected SightLimitQueryImportance number
---@field protected PendingQueriesBudgetReductionRatio number @Defines the amount of async trace queries to prevent based on the number of pending queries at the start of an update. 1 means that the async trace budget is slashed by the pending queries count 0 means that the async trace budget is not impacted by the pending queries
---@field protected bUseAsynchronousTraceForDefaultSightQueries boolean @Defines if we are allowed to use asynchronous trace queries when there is no IAISightTargetInterface for a Target
local UAISense_Sight = {}

