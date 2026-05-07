---@class UCacheTrackRecorder : UObject
---@field private SequenceAsset ULevelSequence @The asset that we should output recorded data into
---@field private WeakWorld TWeakObjectPtr<UWorld> @The world that we are recording within
---@field private Parameters FCacheRecorderParameters @Parameters for the recorder - marked up as a uproperty to support reference collection
---@field private CacheTracks TArray<FCachedTrackSource>
local UCacheTrackRecorder = {}

---Get the current state of this recorder
---@return ECacheTrackRecorderState
function UCacheTrackRecorder:GetState() end

---Access the sequence asset that this recorder is recording into
---@return ULevelSequence
function UCacheTrackRecorder:GetSequence() end

