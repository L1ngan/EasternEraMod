---Compute Framework Data Interface for merging skin weights of one or more bones into a per-vertex float map.
---@class UOptimusSkinWeightsAsVertexMaskDataInterface : UOptimusComputeDataInterface
---@field public SkinWeightProfile string
---@field public BoneNames TArray<string> @Weights of selected bones are combined to form a single a vertex weight map
---@field public ExpandTowardsRoot integer @Include all bones within the radius by expanding selection towards the root
---@field public ExpandTowardsLeaf integer @Include children up to the specified depth
---@field public bDebugDrawIncludedBones boolean
---@field public DebugDrawColor FColor
local UOptimusSkinWeightsAsVertexMaskDataInterface = {}

