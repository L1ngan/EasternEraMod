---Blueprint function library for autocasting from a base camera shake to a legacy camera shake.
---This prevents breaking Blueprints now that APlayerCameraManager::StartCameraShake returns the base class.
---@class ULegacyCameraShakeFunctionLibrary : UBlueprintFunctionLibrary
local ULegacyCameraShakeFunctionLibrary = {}

---@param CameraShake UCameraShakeBase
---@return ULegacyCameraShake
function ULegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake(CameraShake) end

