---Elements of data for sound group volume control
---@class FSoundClassAdjuster
---@field public SoundClassObject USoundClass @The sound class this adjuster affects.
---@field public VolumeAdjuster number @A multiplier applied to the volume.
---@field public PitchAdjuster number @A multiplier applied to the pitch.
---@field public LowPassFilterFrequency number @Lowpass filter cutoff frequency to apply to sound sources.
---@field public bApplyToChildren boolean @Set to true to apply this adjuster to all children of the sound class.
---@field public VoiceCenterChannelVolumeAdjuster number @A multiplier applied to VoiceCenterChannelVolume.
local FSoundClassAdjuster = {}
