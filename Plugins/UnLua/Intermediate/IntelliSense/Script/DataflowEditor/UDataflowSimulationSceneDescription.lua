---@class UDataflowSimulationSceneDescription : UObject
---@field public BlueprintClass TSubclassOf<AActor> @Caching blueprint actor class to spawn
---@field public BlueprintTransform FTransform @Blueprint actor transform
---@field public CacheAsset UChaosCacheCollection @Caching asset to be used to record the simulation
---@field public CacheParams FDataflowPreviewCacheParams @Caching params used to record the simulation
---@field public GeometryCacheAsset UGeometryCache @Geometry cache asset used to extract skeletal mesh results from simulation
---@field public EmbeddedSkeletalMesh USkeletalMesh @Skeletal mesh interpolated from simulation. This should match the SkeletalMesh used in GenerateSurfaceBindings node
---@field public EmbeddedStaticMesh UStaticMesh @Static mesh interpolated from simulation. This should match the Static mesh used in GenerateSurfaceBindings node
---@field public bSkeletalMeshVisibility boolean @Visibility of the skeletal mesh
local UDataflowSimulationSceneDescription = {}

---Creates a new geometry cache file
function UDataflowSimulationSceneDescription:NewGeometryCache() end

---Interpolates and saves geometry cache from Chaos cache
function UDataflowSimulationSceneDescription:GenerateGeometryCache() end

