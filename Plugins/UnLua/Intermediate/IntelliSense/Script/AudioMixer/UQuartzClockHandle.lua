---This class is a BP / Game thread wrapper around FQuartzClockProxy
---   (to talk to the underlying clock)
---...and inherits from FQuartzTickableObject
---   (to listen to the underlying clock)
---It can subscribe to Quantized Event & Metronome delegates to synchronize
---gameplay & VFX to Quartz events fired from the Audio Engine
---@class UQuartzClockHandle : UObject
local UQuartzClockHandle = {}

---@param WorldContextObject UObject
---@param InQuantizationBoundary EQuartzCommandQuantization
---@param ClockHandle UQuartzClockHandle @[out] 
function UQuartzClockHandle:UnsubscribeFromTimeDivision(WorldContextObject, InQuantizationBoundary, ClockHandle) end

---@param WorldContextObject UObject
---@param ClockHandle UQuartzClockHandle @[out] 
function UQuartzClockHandle:UnsubscribeFromAllTimeDivisions(WorldContextObject, ClockHandle) end

---Metronome subscription
---@param WorldContextObject UObject
---@param InQuantizationBoundary EQuartzCommandQuantization
---@param OnQuantizationEvent Delegate
---@param ClockHandle UQuartzClockHandle @[out] 
function UQuartzClockHandle:SubscribeToQuantizationEvent(WorldContextObject, InQuantizationBoundary, OnQuantizationEvent, ClockHandle) end

---@param WorldContextObject UObject
---@param OnQuantizationEvent Delegate
---@param ClockHandle UQuartzClockHandle @[out] 
function UQuartzClockHandle:SubscribeToAllQuantizationEvents(WorldContextObject, OnQuantizationEvent, ClockHandle) end

---@param WorldContextObject UObject
---@param CancelPendingEvents boolean
---@param ClockHandle UQuartzClockHandle @[out] 
function UQuartzClockHandle:StopClock(WorldContextObject, CancelPendingEvents, ClockHandle) end

---"other" clock manipulation
---@param WorldContextObject UObject
---@param OtherClockName string
---@param InQuantizationBoundary FQuartzQuantizationBoundary
---@param InDelegate Delegate
function UQuartzClockHandle:StartOtherClock(WorldContextObject, OtherClockName, InQuantizationBoundary, InDelegate) end

---Clock manipulation
---@param WorldContextObject UObject
---@param ClockHandle UQuartzClockHandle @[out] 
function UQuartzClockHandle:StartClock(WorldContextObject, ClockHandle) end

---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate Delegate
---@param ClockHandle UQuartzClockHandle @[out] 
---@param TicksPerSecond number @[opt] 
function UQuartzClockHandle:SetTicksPerSecond(WorldContextObject, QuantizationBoundary, Delegate, ClockHandle, TicksPerSecond) end

---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate Delegate
---@param ClockHandle UQuartzClockHandle @[out] 
---@param ThirtySecondsNotesPerMinute number @[opt] 
function UQuartzClockHandle:SetThirtySecondNotesPerMinute(WorldContextObject, QuantizationBoundary, Delegate, ClockHandle, ThirtySecondsNotesPerMinute) end

---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate Delegate
---@param ClockHandle UQuartzClockHandle @[out] 
---@param SecondsPerTick number @[opt] 
function UQuartzClockHandle:SetSecondsPerTick(WorldContextObject, QuantizationBoundary, Delegate, ClockHandle, SecondsPerTick) end

---Metronome Alteration (setters)
---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate Delegate
---@param ClockHandle UQuartzClockHandle @[out] 
---@param MillisecondsPerTick number @[opt] 
function UQuartzClockHandle:SetMillisecondsPerTick(WorldContextObject, QuantizationBoundary, Delegate, ClockHandle, MillisecondsPerTick) end

---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate Delegate
---@param ClockHandle UQuartzClockHandle @[out] 
---@param BeatsPerMinute number @[opt] 
function UQuartzClockHandle:SetBeatsPerMinute(WorldContextObject, QuantizationBoundary, Delegate, ClockHandle, BeatsPerMinute) end

---@param WorldContextObject UObject
---@param ClockHandle UQuartzClockHandle @[out] 
function UQuartzClockHandle:ResumeClock(WorldContextObject, ClockHandle) end

---@param WorldContextObject UObject
---@param InQuantizationBoundary FQuartzQuantizationBoundary
---@param InDelegate Delegate
---@param ClockHandle UQuartzClockHandle @[out] 
function UQuartzClockHandle:ResetTransportQuantized(WorldContextObject, InQuantizationBoundary, InDelegate, ClockHandle) end

---@param WorldContextObject UObject
---@param InDelegate Delegate
function UQuartzClockHandle:ResetTransport(WorldContextObject, InDelegate) end

---@param WorldContextObject UObject
---@param ClockHandle UQuartzClockHandle @[out] 
function UQuartzClockHandle:PauseClock(WorldContextObject, ClockHandle) end

---@param WorldContextObject UObject
---@param InQuantizationBoundary FQuartzQuantizationBoundary
---@param InDelegate Delegate
---@param InMsOffset number @[opt] 
function UQuartzClockHandle:NotifyOnQuantizationBoundary(WorldContextObject, InQuantizationBoundary, InDelegate, InMsOffset) end

---@param WorldContextObject UObject
---@return boolean
function UQuartzClockHandle:IsClockRunning(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetTicksPerSecond(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetThirtySecondNotesPerMinute(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetSecondsPerTick(WorldContextObject) end

---Metronome getters
---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetMillisecondsPerTick(WorldContextObject) end

---Returns the amount of time, in seconds, the clock has been running. Caution: due to latency, this will not be perfectly accurate
---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetEstimatedRunTime(WorldContextObject) end

---Returns the duration in seconds of the given Quantization Type
---@param WorldContextObject UObject
---@param QuantizationType EQuartzCommandQuantization
---@param Multiplier number @[opt] 
---@return number
function UQuartzClockHandle:GetDurationOfQuantizationTypeInSeconds(WorldContextObject, QuantizationType, Multiplier) end

---Retrieves a timestamp for the clock
---@param WorldContextObject UObject
---@return FQuartzTransportTimeStamp
function UQuartzClockHandle:GetCurrentTimestamp(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetBeatsPerMinute(WorldContextObject) end

---Returns the current progress until the next occurrence of the provided musical duration as a float value from 0 (previous beat) to 1 (next beat).
---This is useful for indexing into curves to animate parameters to musical time.
---Ms and Phase offsets are combined internally.
---@param QuantizationBoundary EQuartzCommandQuantization @[opt] 
---@param PhaseOffset number @[opt] 
---@param MsOffset number @[opt] 
---@return number
function UQuartzClockHandle:GetBeatProgressPercent(QuantizationBoundary, PhaseOffset, MsOffset) end

