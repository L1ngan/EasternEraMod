---Template that is used for efficient runtime evaluation of a movie scene sequence. Potentially serialized into the asset.
---@class FMovieSceneEvaluationTemplate
---@field private Tracks TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> @Map of evaluation tracks from identifier to track
---@field public SequenceSignature FGuid
---@field public TemplateSerialNumber FMovieSceneEvaluationTemplateSerialNumber @Serial number that is incremented every time this template is re-generated through FMovieSceneEvaluationTemplateGenerator
---@field private TemplateLedger FMovieSceneTemplateGenerationLedger
local FMovieSceneEvaluationTemplate = {}
