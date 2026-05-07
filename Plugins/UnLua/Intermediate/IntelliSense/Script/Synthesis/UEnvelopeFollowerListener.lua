---@class UEnvelopeFollowerListener : UActorComponent
---@field public OnEnvelopeFollowerUpdate MulticastDelegate
local UEnvelopeFollowerListener = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UEnvelopeFollowerListener:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UEnvelopeFollowerListener:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UEnvelopeFollowerListener:AddAssetUserDataOfClass(InUserDataClass) end

