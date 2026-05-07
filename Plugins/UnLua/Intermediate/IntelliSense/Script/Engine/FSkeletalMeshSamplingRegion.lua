---Defined a named region on a mesh that will have associated triangles and bones for fast sampling at each enabled LOD.
---@class FSkeletalMeshSamplingRegion
---@field public Name string @Name of this region that users will reference.
---@field public LODIndex integer @The LOD of the mesh that this region applies to.
---@field public bSupportUniformlyDistributedSampling boolean @Mesh supports uniformly distributed sampling in constant time. Memory cost is 8 bytes per triangle.
---@field public MaterialFilters TArray<FSkeletalMeshSamplingRegionMaterialFilter> @Filters to determine which triangles to include in this region based on material.
---@field public BoneFilters TArray<FSkeletalMeshSamplingRegionBoneFilter> @Filters to determine which triangles and bones to include in this region based on bone.
local FSkeletalMeshSamplingRegion = {}
