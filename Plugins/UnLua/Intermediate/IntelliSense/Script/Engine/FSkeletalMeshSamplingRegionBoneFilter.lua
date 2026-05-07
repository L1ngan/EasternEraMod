---Filter to include or exclude bones and their associated triangles from a sampling region.
---@class FSkeletalMeshSamplingRegionBoneFilter
---@field public BoneName string
---@field public bIncludeOrExclude boolean @If true, this filter will include bones. If false, it will exclude them.
---@field public bApplyToChildren boolean @If true, this filter will apply to all children of this bone as well.
local FSkeletalMeshSamplingRegionBoneFilter = {}
