---@class FMovieSceneEvaluationFieldEntityMetaData
---@field public Condition TSoftObjectPtr<UMovieSceneCondition> @Optional condition that the entity can provide to be checked at runtime before import. If the condition fails, the entity will not be imported.
---@field public OverrideBoundPropertyPath string @Opt-in - when this value is set, the entity should use this property path instead of the one defined on its generating section
---@field public ForcedTime FFrameNumber
---@field public Flags ESectionEvaluationFlags
---@field public bEvaluateInSequencePreRoll boolean @Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence preroll
---@field public bEvaluateInSequencePostRoll boolean @Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence postroll
local FMovieSceneEvaluationFieldEntityMetaData = {}
