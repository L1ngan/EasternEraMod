---System responsible for managing and reporting on pending UMovieSceneAsyncAction_SequencePrediction tasks
---@class UMovieScenePredictionSystem : UMovieSceneEntitySystem
---@field private PendingPredictions TArray<UMovieSceneAsyncAction_SequencePrediction>
---@field private ProcessingPredictions TArray<UMovieSceneAsyncAction_SequencePrediction>
local UMovieScenePredictionSystem = {}

