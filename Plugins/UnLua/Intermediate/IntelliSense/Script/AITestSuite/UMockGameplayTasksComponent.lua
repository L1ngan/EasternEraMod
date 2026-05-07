---a Testing-time component that is a way to access UGameplayTasksComponent's protected properties
---@class UMockGameplayTasksComponent : UGameplayTasksComponent
local UMockGameplayTasksComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMockGameplayTasksComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMockGameplayTasksComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMockGameplayTasksComponent:AddAssetUserDataOfClass(InUserDataClass) end

