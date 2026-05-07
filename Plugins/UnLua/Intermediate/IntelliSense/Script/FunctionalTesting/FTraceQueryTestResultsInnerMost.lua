---@class FTraceQueryTestResultsInnerMost
---@field public SingleHit FHitResult @Result from doing a single sweep
---@field public SingleNames FTraceQueryTestNames @Names found from doing a single sweep
---@field public bSingleResult boolean @The true/false value returned from the single sweep
---@field public MultiHits TArray<FHitResult> @Result from doing a multi sweep
---@field public MultiNames TArray<FTraceQueryTestNames> @Names found from doing a multi sweep
---@field public bMultiResult boolean @The true/false value returned from the multi sweep
local FTraceQueryTestResultsInnerMost = {}
