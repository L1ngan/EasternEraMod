---A UCameraModifier_CameraShake is a camera modifier that can apply a UCameraShakeBase to
---the owning camera.
---@class UCameraModifier_CameraShake : UCameraModifier
---@field protected ActiveShakes TArray<FActiveCameraShakeInfo> @List of active CameraShake instances
---@field protected ExpiredPooledShakesMap TMap<TSubclassOf<UCameraShakeBase>, FPooledCameraShakes>
---@field protected SplitScreenShakeScale number @Scaling factor applied to all camera shakes in when in splitscreen mode. Normally used to reduce shaking, since shakes feel more intense in a smaller viewport.
local UCameraModifier_CameraShake = {}

