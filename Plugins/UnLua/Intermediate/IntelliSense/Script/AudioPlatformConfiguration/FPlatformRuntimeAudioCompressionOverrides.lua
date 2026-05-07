---@class FPlatformRuntimeAudioCompressionOverrides
---@field public bOverrideCompressionTimes boolean @When true, overrides the Sound Group on each Sound Wave, and instead uses the Duration Threshold value to determine whether a sound should be fully decompressed during initial loading.
---@field public DurationThreshold number @When Override Compression Times is set to true, any sound under this threshold (in seconds) will be fully decompressed on load. Otherwise the first chunk of this sound is cached at load and the rest is decompressed in real time. If set to zero, will default to the Sound Group on the relevant Sound Wave
---@field public MaxNumRandomBranches integer @On this platform, any random nodes on Sound Cues will automatically only preload this number of branches and dispose of any others on load. This can drastically cut down on memory usage. If set to 0, no branches are culled.
---@field public SoundCueQualityIndex integer @On this platform, use the specified quality at this index to override the quality used for SoundCues on this platform
local FPlatformRuntimeAudioCompressionOverrides = {}
