---@class FGenerateStaticMeshLODProcessSettings
---@field public MeshGenerator EGenerateStaticMeshLODProcess_MeshGeneratorModes @Method used to generate the initial mesh for AutoLOD processing
---@field public SolidifyVoxelResolution integer @Target number of voxels along the maximum dimension for Solidify operation
---@field public WindingThreshold number @Winding number threshold to determine what is considered inside the mesh during Solidify
---@field public ClosureDistance number @Offset distance in the Morpohological Closure operation
---@field public bPrefilterVertices boolean @Whether to subsample input vertices using a regular grid before computing the convex hull
---@field public PrefilterGridResolution integer @Grid resolution (along the maximum-length axis) for subsampling before computing the convex hull
local FGenerateStaticMeshLODProcessSettings = {}
