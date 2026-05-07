---Informational meta-data that applies to a given time range
---@class FMovieSceneEvaluationMetaData
---@field public ActiveSequences TArray<FMovieSceneSequenceID> @Array of sequences that are active in this time range.
---@field public ActiveEntities TArray<FMovieSceneOrderedEvaluationKey> @Array of entities (tracks and/or sections) that are active in this time range.
local FMovieSceneEvaluationMetaData = {}
