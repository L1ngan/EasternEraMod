---Determinism data that is generated on compile of a UMovieSceneSequence
---@class FMovieSceneDeterminismData
---@field public Fences TArray<FMovieSceneDeterminismFence> @Array of times that should be treated as fences. Fences cannot be crossed in a single evaluation, and force the evaluation to be split into 2 separate parts. Duplicates are allowed during compilation, but will be removed in the final compiled data.
---@field public bParentSequenceRequiresLowerFence boolean @True if this sequence should include a fence on the lower bound of any sub sequence's that include it
---@field public bParentSequenceRequiresUpperFence boolean @True if this sequence should include a fence on the upper bound of any sub sequence's that include it
local FMovieSceneDeterminismData = {}
