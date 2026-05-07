---UStaticMeshLODGenerationSettings is intended to be a stored version of the settings used
---by UGenerateStaticMeshLODProcess (and the associated UGenerateStaticMeshLODAssetTool).
---This UObject is exposed as an Asset type in the Editor via UStaticMeshLODGenerationSettingsFactory.
---The Tool uses these serialized settings as a 'Preset', ie the user can save a set
---of configured settings, or load previously-saved settings.
---@class UStaticMeshLODGenerationSettings : UObject
---@field public Preprocessing FGenerateStaticMeshLODProcess_PreprocessSettings
---@field public MeshGeneration FGenerateStaticMeshLODProcessSettings
---@field public Simplification FGenerateStaticMeshLODProcess_SimplifySettings
---@field public Normals FGenerateStaticMeshLODProcess_NormalsSettings
---@field public TextureBaking FGenerateStaticMeshLODProcess_TextureSettings
---@field public UVGeneration FGenerateStaticMeshLODProcess_UVSettings
---@field public SimpleCollision FGenerateStaticMeshLODProcess_CollisionSettings
local UStaticMeshLODGenerationSettings = {}

