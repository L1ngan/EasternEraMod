---UISMPoolComponent.
---Component that manages a pool of ISM components in order to allow multiple client components that use the same meshes to the share ISMs.
---@class UISMPoolComponent : USceneComponent
local UISMPoolComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UISMPoolComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UISMPoolComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UISMPoolComponent:AddAssetUserDataOfClass(InUserDataClass) end

