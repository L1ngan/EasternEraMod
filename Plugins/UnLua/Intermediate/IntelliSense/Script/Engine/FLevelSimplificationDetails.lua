---@class FLevelSimplificationDetails
---@field public bCreatePackagePerAsset boolean @Whether to create separate packages for each generated asset. All in map package otherwise
---@field public DetailsPercentage number @Percentage of details for static mesh proxy
---@field public StaticMeshMaterialSettings FMaterialProxySettings @Landscape material simplification
---@field public bOverrideLandscapeExportLOD boolean
---@field public LandscapeExportLOD integer @Landscape LOD to use for static mesh generation, when not specified 'Max LODLevel' from landscape actor will be used
---@field public LandscapeMaterialSettings FMaterialProxySettings @Landscape material simplification
---@field public bBakeFoliageToLandscape boolean @Whether to bake foliage into landscape static mesh texture
---@field public bBakeGrassToLandscape boolean @Whether to bake grass into landscape static mesh texture
local FLevelSimplificationDetails = {}
