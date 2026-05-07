---@class UTraceQueryTestResults : UObject
---@field public ChannelResults FTraceQueryTestResultsInner @Results for channel trace
---@field public ObjectResults FTraceQueryTestResultsInner @Results for object trace
---@field public ProfileResults FTraceQueryTestResultsInner @Results for profile trace
---@field public BatchOptions FTraceChannelTestBatchOptions
local UTraceQueryTestResults = {}

---Output string value
---@return string
function UTraceQueryTestResults:ToString() end

