---Movie scene sequence transform class that transforms from one time-space to another, represented as
---a linear transformation plus zero or more complex, non-linear transformations.
---@class FMovieSceneSequenceTransform
---@field public LinearTransform FMovieSceneTimeTransform @The initial linear transformation represented as a 2D matrix. Always applied first.
---@field public NestedTransforms TArray<FMovieSceneNestedSequenceTransform> @Additional transformations that should be applied after LinearTransform. This array is populated whenever a non-linear transform is encountered.
local FMovieSceneSequenceTransform = {}
