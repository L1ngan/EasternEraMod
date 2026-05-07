---* Class to hold all the data required to properly re-import a level
---@class UInterchangeSceneImportAsset : UObject
---@field public AssetImportData UInterchangeAssetImportData @Importing data and options used for this scene
---@field public AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
local UInterchangeSceneImportAsset = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UInterchangeSceneImportAsset:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UInterchangeSceneImportAsset:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UInterchangeSceneImportAsset:AddAssetUserDataOfClass(InUserDataClass) end

