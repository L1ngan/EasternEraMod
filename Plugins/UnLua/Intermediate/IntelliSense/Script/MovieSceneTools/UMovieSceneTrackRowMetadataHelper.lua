---Helper UObject for editing optional track row metadata not in-place. A UObject instead of a UStruct because we need to support instanced sub objects (conditions)
---@class UMovieSceneTrackRowMetadataHelper : UObject
---@field public TrackRowMetadata FMovieSceneTrackRowMetadata
---@field public OwnerTrack TWeakObjectPtr<UMovieSceneTrack>
local UMovieSceneTrackRowMetadataHelper = {}

