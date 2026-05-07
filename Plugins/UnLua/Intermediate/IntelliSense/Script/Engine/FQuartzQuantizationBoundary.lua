---struct used to specify the quantization boundary of an event
---@class FQuartzQuantizationBoundary
---@field public Quantization EQuartzCommandQuantization @resolution we are interested in
---@field public Multiplier number @how many "Resolutions" to wait before the onset we care about
---@field public CountingReferencePoint EQuarztQuantizationReference
---@field public bFireOnClockStart boolean @If this is true and the Clock hasn't started yet, the event will fire immediately when the Clock starts
---@field public bCancelCommandIfClockIsNotRunning boolean @If this is true, this command will be canceled if the Clock is stopped or otherwise not running
---@field public bResetClockOnQueued boolean @If this is true, queueing the sound will also call a Reset Clock command
---@field public bResumeClockOnQueued boolean @If this is true, queueing the sound will also call a Resume Clock command
local FQuartzQuantizationBoundary = {}
