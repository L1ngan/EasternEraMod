---Base class for listeners that query and respond to a frame's physics data (collision events, break events, etc).
---@class UChaosEventListenerComponent : UActorComponent
local UChaosEventListenerComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosEventListenerComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UChaosEventListenerComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosEventListenerComponent:AddAssetUserDataOfClass(InUserDataClass) end

