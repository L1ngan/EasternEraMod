---Memory layout optimized primarily for speed of searching the applicable ranges
---@class FMovieSceneEvaluationField
---@field private Signature FGuid @Signature that uniquely identifies any state this field can be in - regenerated on mutation
---@field private Ranges TArray<FMovieSceneFrameRange> @Ranges stored separately for fast (cache efficient) lookup. Each index has a corresponding entry in FMovieSceneEvaluationField::Groups.
---@field private Groups TArray<FMovieSceneEvaluationGroup> @Groups that store segment pointers for each of the above ranges. Each index has a corresponding entry in FMovieSceneEvaluationField::Ranges.
---@field private MetaData TArray<FMovieSceneEvaluationMetaData> @Meta data that maps to entries in the 'Ranges' array.
local FMovieSceneEvaluationField = {}
