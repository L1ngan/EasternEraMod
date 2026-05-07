---Data that represents a single sub-section
---@class FMovieSceneSubSectionData
---@field public Section TWeakObjectPtr<UMovieSceneSubSection> @The sub section itself
---@field public ObjectBindingId FGuid @The object binding that the sub section belongs to (usually zero)
---@field public Flags ESectionEvaluationFlags @Evaluation flags for the section
local FMovieSceneSubSectionData = {}
