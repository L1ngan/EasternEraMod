---A CineCameraActor is a CameraActor specialized to work like a cinematic camera.
---@class ACineCameraActor : ACameraActor
---@field public LookatTrackingSettings FCameraLookatTrackingSettings
local ACineCameraActor = {}

---Returns the CineCameraComponent of this CineCamera
---@return UCineCameraComponent
function ACineCameraActor:GetCineCameraComponent() end

