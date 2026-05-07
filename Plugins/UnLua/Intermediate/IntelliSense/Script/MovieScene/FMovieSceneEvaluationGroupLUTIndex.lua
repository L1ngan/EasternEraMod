---Lookup table index for a group of evaluation templates
---@class FMovieSceneEvaluationGroupLUTIndex
---@field public NumInitPtrs integer @The number of initialization pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset.
---@field public NumEvalPtrs integer @The number of evaluation pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset + NumInitPtrs.
local FMovieSceneEvaluationGroupLUTIndex = {}
