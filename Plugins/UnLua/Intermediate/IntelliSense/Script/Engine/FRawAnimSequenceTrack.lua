---Raw keyframe data for one track.Each array will contain either NumFrames elements or 1 element.
---One element is used as a simple compression scheme where if all keys are the same, they'll be
---reduced to 1 key that is constant over the entire sequence.
---@class FRawAnimSequenceTrack
---@field public PosKeys TArray<FVector3f> @Position keys.
---@field public RotKeys TArray<FQuat4f> @Rotation keys.
---@field public ScaleKeys TArray<FVector3f> @Scale keys.
local FRawAnimSequenceTrack = {}
