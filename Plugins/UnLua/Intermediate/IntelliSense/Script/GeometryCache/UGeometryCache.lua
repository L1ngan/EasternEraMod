---A Geometry Cache is a piece/set of geometry that consists of individual Mesh/Transformation samples.
---In contrast with Static Meshes they can have their vertices animated in certain ways. *
---@class UGeometryCache : UObject
---@field public AssetImportData UAssetImportData @Importing data and options used for this Geometry cache object
---@field public ThumbnailInfo UThumbnailInfo @Information for thumbnail rendering
---@field public Materials TArray<UMaterialInterface>
---@field public MaterialSlotNames TArray<string>
---@field public Tracks TArray<UGeometryCacheTrack> @GeometryCache track defining the samples/geometry data for this GeomCache instance
---@field public AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field protected StartFrame integer
---@field protected EndFrame integer
---@field protected Hash integer
local UGeometryCache = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGeometryCache:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGeometryCache:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGeometryCache:AddAssetUserDataOfClass(InUserDataClass) end

