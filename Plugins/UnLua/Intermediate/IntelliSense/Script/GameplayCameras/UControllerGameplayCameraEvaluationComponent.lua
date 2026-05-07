---A component, attached to a player controller, that can run camera rigs activated from
---a global place like the Blueprint functions inside UActivateCameraRigFunctions.
---@class UControllerGameplayCameraEvaluationComponent : UActorComponent
---@field private CameraSystemHost TScriptInterface<UGameplayCameraSystemHost>
local UControllerGameplayCameraEvaluationComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UControllerGameplayCameraEvaluationComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UControllerGameplayCameraEvaluationComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UControllerGameplayCameraEvaluationComponent:AddAssetUserDataOfClass(InUserDataClass) end

