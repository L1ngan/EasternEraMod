---Structure that stores hierarchical information pertaining to all sequences contained within a root sequence
---@class FMovieSceneSequenceHierarchy
---@field private RootNode FMovieSceneSequenceHierarchyNode
---@field private Tree FMovieSceneSubSequenceTree
---@field private RootTransform FMovieSceneSequenceTransform
---@field private SubSequences TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> @Map of all (recursive) sub sequences found in this template, keyed on sequence ID
---@field private Hierarchy TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> @Structural information describing the structure of the sequence
---@field private AccumulatedNetworkMask EMovieSceneServerClientMask @Holds the accumulated network mask from all included sub-sections. If client or server-only subsections are found and included based on the gather params network mask, other bits will be excluded. If the gather param network mask excludes client or server-only sub-sections, these will be skipped, and so not accumulated. If no client or server-only subsections are found and included, the mask will be All. If both client and server-only subsections are found and included, the mask will be None as each would exclude the other.
local FMovieSceneSequenceHierarchy = {}
