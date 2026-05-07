---A track that holds sub-sequences within a larger sequence.
---@class UMovieSceneSubTrack : UMovieSceneNameableTrack
---@field protected Sections TArray<UMovieSceneSection> @All movie scene sections.
---@field private RowHeight integer @The height for each row of this track
---@field private SectionToKey UMovieSceneSection @Section we should Key
local UMovieSceneSubTrack = {}

