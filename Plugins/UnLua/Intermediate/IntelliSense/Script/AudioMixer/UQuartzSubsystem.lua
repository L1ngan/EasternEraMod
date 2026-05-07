---@class UQuartzSubsystem : UTickableWorldSubsystem
local UQuartzSubsystem = {}

---@param bInTickableWhenPaused boolean
function UQuartzSubsystem:SetQuartzSubsystemTickableWhenPaused(bInTickableWhenPaused) end

---@return boolean
function UQuartzSubsystem:IsQuartzEnabled() end

---returns true if the clock is running
---@param WorldContextObject UObject
---@param ClockName string
---@return boolean
function UQuartzSubsystem:IsClockRunning(WorldContextObject, ClockName) end

---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetRoundTripMinLatency(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetRoundTripMaxLatency(WorldContextObject) end

---latency data (Round trip)
---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetRoundTripAverageLatency(WorldContextObject) end

---get handle for existing clock
---@param WorldContextObject UObject
---@param ClockName string
---@return UQuartzClockHandle
function UQuartzSubsystem:GetHandleForClock(WorldContextObject, ClockName) end

---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetGameThreadToAudioRenderThreadMinLatency(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetGameThreadToAudioRenderThreadMaxLatency(WorldContextObject) end

---latency data (Game thread -> Audio Render Thread)
---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetGameThreadToAudioRenderThreadAverageLatency(WorldContextObject) end

---Returns the amount of time, in seconds, the clock has been running. Caution: due to latency, this will not be perfectly accurate
---@param WorldContextObject UObject
---@param InClockName string
---@return number
function UQuartzSubsystem:GetEstimatedClockRunTime(WorldContextObject, InClockName) end

---Returns the duration in seconds of the given Quantization Type
---@param WorldContextObject UObject
---@param ClockName string
---@param QuantizationType EQuartzCommandQuantization
---@param Multiplier number @[opt] 
---@return number
function UQuartzSubsystem:GetDurationOfQuantizationTypeInSeconds(WorldContextObject, ClockName, QuantizationType, Multiplier) end

---Retrieves a timestamp for the clock
---@param WorldContextObject UObject
---@param InClockName string
---@return FQuartzTransportTimeStamp
function UQuartzSubsystem:GetCurrentClockTimestamp(WorldContextObject, InClockName) end

---@return number
function UQuartzSubsystem:GetAudioRenderThreadToGameThreadMinLatency() end

---@return number
function UQuartzSubsystem:GetAudioRenderThreadToGameThreadMaxLatency() end

---latency data (Audio Render Thread -> Game thread)
---@return number
function UQuartzSubsystem:GetAudioRenderThreadToGameThreadAverageLatency() end

---returns true if the clock exists
---@param WorldContextObject UObject
---@param ClockName string
---@return boolean
function UQuartzSubsystem:DoesClockExist(WorldContextObject, ClockName) end

---delete an existing clock given its name
---@param WorldContextObject UObject
---@param ClockName string
function UQuartzSubsystem:DeleteClockByName(WorldContextObject, ClockName) end

---delete an existing clock given its clock handle
---@param WorldContextObject UObject
---@param InClockHandle UQuartzClockHandle @[out] 
function UQuartzSubsystem:DeleteClockByHandle(WorldContextObject, InClockHandle) end

---Clock Creation
---create a new clock (or return handle if clock already exists)
---@param WorldContextObject UObject
---@param ClockName string
---@param InSettings FQuartzClockSettings
---@param bOverrideSettingsIfClockExists boolean @[opt] 
---@param bUseAudioEngineClockManager boolean @[opt] 
---@return UQuartzClockHandle
function UQuartzSubsystem:CreateNewClock(WorldContextObject, ClockName, InSettings, bOverrideSettingsIfClockExists, bUseAudioEngineClockManager) end

