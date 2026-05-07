---Holds segment pointers for all segments that are active for a given range of the sequence
---@class FMovieSceneEvaluationGroup
---@field public LUTIndices TArray<FMovieSceneEvaluationGroupLUTIndex> @Array of indices that define all the flush groups in the range.
---@field public TrackLUT TArray<FMovieSceneFieldEntry_EvaluationTrack>
---@field public SectionLUT TArray<FMovieSceneFieldEntry_ChildTemplate>
local FMovieSceneEvaluationGroup = {}
