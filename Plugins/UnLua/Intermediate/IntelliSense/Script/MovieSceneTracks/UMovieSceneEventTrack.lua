---Implements a movie scene track that triggers discrete events during playback.
---@class UMovieSceneEventTrack : UMovieSceneNameableTrack
---@field public bFireEventsWhenForwards boolean @If events should be fired when passed playing the sequence forwards.
---@field public bFireEventsWhenBackwards boolean @If events should be fired when passed playing the sequence backwards.
---@field public EventPosition EFireEventsAtPosition @Defines where in the evaluation to trigger events
---@field private Sections TArray<UMovieSceneSection> @The track's sections.
local UMovieSceneEventTrack = {}

