---Evaluation data that specifies information about what to evaluate for a given template
---@class FSectionEvaluationData
---@field public ImplIndex integer @The implementation index we should evaluate (index into FMovieSceneEvaluationTrack::ChildTemplates)
---@field public ForcedTime FFrameNumber @A forced time to evaluate this section at
---@field public Flags ESectionEvaluationFlags @Additional flags for evaluating this section
local FSectionEvaluationData = {}
