---@class UProceduralFoliageComponent : UActorComponent
---@field public FoliageSpawner UProceduralFoliageSpawner @The procedural foliage spawner used to generate foliage instances within this volume.
---@field public TileOverlap number @The amount of overlap between simulation tiles (in cm).
---@field public bAllowLandscape boolean @Whether to place foliage on landscape
---@field public bAllowBSP boolean @Whether to place foliage on BSP
---@field public bAllowStaticMesh boolean @Whether to place foliage on StaticMesh
---@field public bAllowTranslucent boolean @Whether to place foliage on translucent geometry
---@field public bAllowFoliage boolean @Whether to place foliage on other blocking foliage geometry
---@field public bShowDebugTiles boolean @Whether to visualize the tiles used for the foliage spawner simulation
---@field private SpawningVolume AVolume
---@field private ProceduralGuid FGuid
local UProceduralFoliageComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UProceduralFoliageComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UProceduralFoliageComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UProceduralFoliageComponent:AddAssetUserDataOfClass(InUserDataClass) end

