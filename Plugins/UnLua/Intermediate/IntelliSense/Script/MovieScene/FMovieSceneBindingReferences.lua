---Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID.
---@class FMovieSceneBindingReferences
---@field private SortedReferences TArray<FMovieSceneBindingReference> @The map from object binding ID to an array of references that pertain to that ID
local FMovieSceneBindingReferences = {}
