---Standard properties
---@class UGenerateStaticMeshLODAssetToolProperties : UInteractiveToolPropertySet
---@field public Preprocessing FGenerateStaticMeshLODProcess_PreprocessSettings
---@field public MeshGeneration FGenerateStaticMeshLODProcessSettings
---@field public Simplification FGenerateStaticMeshLODProcess_SimplifySettings
---@field public Normals FGenerateStaticMeshLODProcess_NormalsSettings
---@field public TextureBaking FGenerateStaticMeshLODProcess_TextureSettings
---@field public UVGeneration FGenerateStaticMeshLODProcess_UVSettings
---@field public SimpleCollision FGenerateStaticMeshLODProcess_CollisionSettings
---@field public CollisionGroupLayerName string @Group layer to use for partitioning the mesh for simple collision generation
---@field public GroupLayersList TArray<string> @internal list used to implement above
local UGenerateStaticMeshLODAssetToolProperties = {}

---this function is called provide set of available group layers
---@return TArray_string_
function UGenerateStaticMeshLODAssetToolProperties:GetGroupLayersFunc() end

