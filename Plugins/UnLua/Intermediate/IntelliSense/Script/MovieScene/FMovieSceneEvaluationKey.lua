---Keyable struct that represents a particular entity within an evaluation template (either a section/template or a track)
---@class FMovieSceneEvaluationKey
---@field public SequenceID FMovieSceneSequenceID @ID of the sequence that the entity is contained within
---@field public TrackIdentifier FMovieSceneTrackIdentifier @ID of the track this key relates to
---@field public SectionIndex integer @Index of the section template within the track this key relates to (or -1 where this key relates to a track)
local FMovieSceneEvaluationKey = {}
