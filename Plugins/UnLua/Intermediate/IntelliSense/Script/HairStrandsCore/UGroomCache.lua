---Implements an asset that is used to store an animated groom
---@class UGroomCache : UObject
---@field public AssetImportData UAssetImportData @Import options used for this GroomCache
---@field public AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field protected GroomCacheInfo FGroomCacheInfo
local UGroomCache = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGroomCache:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGroomCache:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGroomCache:AddAssetUserDataOfClass(InUserDataClass) end

