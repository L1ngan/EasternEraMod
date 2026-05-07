---Simple structure specifying parent and child sequence IDs for any given sequences
---@class FMovieSceneSequenceHierarchyNode
---@field public ParentID FMovieSceneSequenceID @Movie scene sequence ID of this node's parent sequence
---@field public Children TArray<FMovieSceneSequenceID> @Array of child sequences contained within this sequence
local FMovieSceneSequenceHierarchyNode = {}
