---A component that can run a camera rig asset inside its own camera evaluation context.
---@class UGameplayCameraRigComponent : UGameplayCameraComponentBase
---@field public CameraRigReference FCameraRigAssetReference @The camera rig asset to run.
---@field private GeneratedCameraAsset UCameraAsset
local UGameplayCameraRigComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayCameraRigComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGameplayCameraRigComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayCameraRigComponent:AddAssetUserDataOfClass(InUserDataClass) end

