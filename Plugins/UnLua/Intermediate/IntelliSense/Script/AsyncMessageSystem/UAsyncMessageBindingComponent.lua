---A blueprint component which will allow you to specify a specific endpoint to use
---when queueing messages or binding listeners to the Async Message System.
---By default, this will create an endpoint on BeginPlay and destroy it on EndPlay.
---@class UAsyncMessageBindingComponent : UActorComponent
local UAsyncMessageBindingComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAsyncMessageBindingComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAsyncMessageBindingComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAsyncMessageBindingComponent:AddAssetUserDataOfClass(InUserDataClass) end

