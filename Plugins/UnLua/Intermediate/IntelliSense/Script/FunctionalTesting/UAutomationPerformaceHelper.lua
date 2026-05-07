---Class for use with functional tests which provides various performance measuring features.
---Recording of basic, unintrusive performance stats.
---Automatic captures using external CPU and GPU profilers.
---Triggering and ending of writing full stats to a file.
---@class UAutomationPerformaceHelper : UObject
local UAutomationPerformaceHelper = {}

---Writes the current set of performance stats records to a csv file in the profiling directory. An additional directory and an extension override can also be used.
---@param CaptureDir string
---@param CaptureExtension string
function UAutomationPerformaceHelper:WriteLogFile(CaptureDir, CaptureExtension) end

---Will trigger a GPU trace next time the current test falls below GPU budget.
function UAutomationPerformaceHelper:TriggerGPUTraceIfRecordFallsBelowBudget() end

---Begin basic stat recording
---@param DeltaSeconds number
function UAutomationPerformaceHelper:Tick(DeltaSeconds) end

---Communicates with external profiler to end a CPU capture.
function UAutomationPerformaceHelper:StopCPUProfiling() end

---Communicates with external profiler to being a CPU capture.
function UAutomationPerformaceHelper:StartCPUProfiling() end

---Adds a sample to the stats counters for the current performance stats record.
---@param DeltaSeconds number
function UAutomationPerformaceHelper:Sample(DeltaSeconds) end

---Does any init work across all tests..
function UAutomationPerformaceHelper:OnBeginTests() end

---Does any final work needed as all tests are complete.
function UAutomationPerformaceHelper:OnAllTestsComplete() end

---Returns true if this stats tracker is currently recording performance stats.
---@return boolean
function UAutomationPerformaceHelper:IsRecording() end

---@return boolean
function UAutomationPerformaceHelper:IsCurrentRecordWithinRenderThreadBudget() end

---@return boolean
function UAutomationPerformaceHelper:IsCurrentRecordWithinGPUBudget() end

---@return boolean
function UAutomationPerformaceHelper:IsCurrentRecordWithinGameThreadBudget() end

---Ends recording stats to a file.
function UAutomationPerformaceHelper:EndStatsFile() end

---Stops recording the baseline and moves to the main record.
function UAutomationPerformaceHelper:EndRecordingBaseline() end

---Stops recording performance stats.
function UAutomationPerformaceHelper:EndRecording() end

---Begins recording stats to a file.
---@param RecordName string
function UAutomationPerformaceHelper:BeginStatsFile(RecordName) end

---Begins recording a new named performance stats record. We start by recording the baseline
---@param RecordName string
function UAutomationPerformaceHelper:BeginRecordingBaseline(RecordName) end

---Begins recording a new named performance stats record. We start by recording the baseline.
---@param RecordName string
---@param InGPUBudget number
---@param InRenderThreadBudget number
---@param InGameThreadBudget number
function UAutomationPerformaceHelper:BeginRecording(RecordName, InGPUBudget, InRenderThreadBudget, InGameThreadBudget) end

