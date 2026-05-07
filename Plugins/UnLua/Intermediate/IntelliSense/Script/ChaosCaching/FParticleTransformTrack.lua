---@class FParticleTransformTrack
---@field public RawTransformTrack FRawAnimSequenceTrack @List of all the transforms this cache cares about, recorded from the simulated transforms of the particles observed by the adapter that created the cache
---@field public BeginOffset number @The offset from the beginning of the cache that holds this track that the track starts
---@field public bDeactivateOnEnd boolean @If this flag is set true, the particle represented by this track deactives on the final keyframe.
---@field public KeyTimestamps TArray<number> @The above raw track is just the key data and doesn't know at which time those keys are placed, this is a list of the timestamps for each entry in TransformTrack
local FParticleTransformTrack = {}
