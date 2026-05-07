---Core settings class for CVD
---@class UChaosVDCoreSettings : UChaosVDSettingsObjectBase
---@field public QueryOnlyMeshesMaterial TSoftObjectPtr<UMaterial>
---@field public SimOnlyMeshesMaterial TSoftObjectPtr<UMaterial>
---@field public InstancedMeshesMaterial TSoftObjectPtr<UMaterial>
---@field public InstancedMeshesQueryOnlyMaterial TSoftObjectPtr<UMaterial>
---@field public SkySphereActorClass FSoftClassPath
---@field public AmbientCubeMapTexture TSoftObjectPtr<UTextureCube>
---@field public BoxMesh TSoftObjectPtr<UStaticMesh>
---@field public SphereMesh TSoftObjectPtr<UStaticMesh>
local UChaosVDCoreSettings = {}

