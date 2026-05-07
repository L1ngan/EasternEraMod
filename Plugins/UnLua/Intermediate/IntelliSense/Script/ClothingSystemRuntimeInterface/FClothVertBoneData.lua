---Bone data for a vertex
---@class FClothVertBoneData
---@field public NumInfluences integer @Number of influences for this vertex.
---@field public BoneIndices integer @Up to MAX_TOTAL_INFLUENCES bone indices that this vert is weighted to
---@field public BoneWeights number @The weights for each entry in BoneIndices
local FClothVertBoneData = {}
