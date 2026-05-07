---Allows manipulation of volume and pitch over a set time period
---@class USoundNodeEnveloper : USoundNode
---@field public LoopStart number @The time in seconds where the envelope's loop begins.
---@field public LoopEnd number @The time in seconds where the envelope's loop ends.
---@field public DurationAfterLoop number @The time in seconds it takes the evelope to fade out after the last loop is completed.
---@field public LoopCount integer @The number of times the envelope should loop if looping is enabled and the envelope is not set to loop indefinitely.
---@field public bLoopIndefinitely boolean @If enabled, the envelope will continue to loop indefenitely regardless of the Loop Count value.
---@field public bLoop boolean @If enabled, the envelope will loop using the loop settings.
---@field public VolumeCurve FRuntimeFloatCurve @The distribution defining the volume envelope.
---@field public PitchCurve FRuntimeFloatCurve @The distribution defining the pitch envelope.
---@field public PitchMin number @The lower bound of pitch (1.0 is no change)
---@field public PitchMax number @The upper bound of pitch (1.0 is no change)
---@field public VolumeMin number @The lower bound of volume (1.0 is no change)
---@field public VolumeMax number @The upper bound of volume (1.0 is no change)
local USoundNodeEnveloper = {}

