---Base class for tracks that animate an object property
---@class UMovieScenePropertyTrack : UMovieSceneNameableTrack
---@field public UniqueTrackName string
---@field private SectionToKey UMovieSceneSection @Section we should Key
---@field protected PropertyBinding FMovieScenePropertyBinding
---@field protected Sections TArray<UMovieSceneSection> @All the sections in this list
local UMovieScenePropertyTrack = {}

