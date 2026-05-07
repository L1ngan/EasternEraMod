---@class UFbxSceneImportOptionsStaticMesh : UObject
---@field public StaticMeshLODGroup string @For static meshes, enabling this option will combine all meshes in the FBX into a single monolithic mesh in Unreal
---@field public bAutoGenerateCollision boolean @If checked, collision will automatically be generated (ignored if custom collision is imported or used).
---@field public VertexColorImportOption EFbxSceneVertexColorImportOption @Specify how vertex colors should be imported
---@field public VertexOverrideColor FColor @Specify override color in the case that VertexColorImportOption is set to Override
---@field public bRemoveDegenerates boolean @Disabling this option will keep degenerate triangles found.  In general you should leave this option on.
---@field public bBuildReversedIndexBuffer boolean
---@field public bGenerateLightmapUVs boolean
---@field public bOneConvexHullPerUCX boolean @If checked, one convex hull per UCX_ prefixed collision mesh will be generated instead of decomposing into multiple hulls
---@field public NormalImportMethod EFBXSceneNormalImportMethod @Enabling this option will read the tangents(tangent,binormal,normal) from FBX file instead of generating them automatically.
---@field public NormalGenerationMethod EFBXSceneNormalGenerationMethod @Use the MikkTSpace tangent space generator for generating normals and tangents on the mesh
local UFbxSceneImportOptionsStaticMesh = {}

