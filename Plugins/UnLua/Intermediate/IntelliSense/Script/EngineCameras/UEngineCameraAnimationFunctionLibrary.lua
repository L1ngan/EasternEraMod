---Blueprint function library for autocasting a player camera manager into the camera animation camera modifier.
---This prevents breaking Blueprints now that APlayerCameraManager::StartCameraShake returns the base class.
---@class UEngineCameraAnimationFunctionLibrary : UBlueprintFunctionLibrary
local UEngineCameraAnimationFunctionLibrary = {}

---@param CameraAnimationPlaySpace ECameraAnimationPlaySpace
---@return ECameraShakePlaySpace
function UEngineCameraAnimationFunctionLibrary.Conv_CameraShakePlaySpace(CameraAnimationPlaySpace) end

---@param CameraShakePlaySpace ECameraShakePlaySpace
---@return ECameraAnimationPlaySpace
function UEngineCameraAnimationFunctionLibrary.Conv_CameraAnimationPlaySpace(CameraShakePlaySpace) end

---@param PlayerCameraManager APlayerCameraManager
---@return UCameraAnimationCameraModifier
function UEngineCameraAnimationFunctionLibrary.Conv_CameraAnimationCameraModifier(PlayerCameraManager) end

