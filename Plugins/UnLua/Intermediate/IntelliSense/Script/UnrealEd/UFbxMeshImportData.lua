---Import data and options used when importing any mesh from FBX
---@class UFbxMeshImportData : UFbxAssetImportData
---@field public bTransformVertexToAbsolute boolean @If this option is true the node absolute transform (transform, offset and pivot) will be apply to the mesh vertices.
---@field public bBakePivotInVertex boolean @- Experimental - If this option is true the inverse node rotation pivot will be apply to the mesh vertices. The pivot from the DCC will then be the origin of the mesh. Note: "TransformVertexToAbsolute" must be false.
---@field public bImportMeshLODs boolean @If enabled, creates LOD models for Unreal meshes from LODs in the import file; If not enabled, only the base mesh from the LOD group is imported
---@field public NormalImportMethod integer @Enabling this option will read the tangents(tangent,binormal,normal) from FBX file instead of generating them automatically.
---@field public NormalGenerationMethod integer @Use the MikkTSpace tangent space generator for generating normals and tangents on the mesh
---@field public bComputeWeightedNormals boolean @Enabling this option will use weighted normals algorithm (area and angle) when computing normals or tangents
---@field public bReorderMaterialToFbxOrder boolean @If checked, The material list will be reorder to the same order has the FBX file.
---@field public ImportMaterialOriginalNameData TArray<string> @Original import section/material data
---@field public ImportMeshLodData TArray<FImportMeshLodSectionsData>
local UFbxMeshImportData = {}

