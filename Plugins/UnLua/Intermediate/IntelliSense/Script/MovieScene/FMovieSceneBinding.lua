---A set of tracks bound to runtime objects
---@class FMovieSceneBinding
---@field private ObjectGuid FGuid @Object binding guid for runtime objects
---@field private BindingName string @Display name
---@field private Tracks TArray<UMovieSceneTrack> @All tracks in this binding
---@field private SortingOrder integer @The desired sorting order for this binding in Sequencer
local FMovieSceneBinding = {}
