---A camera node that determines and sets the camera's target by running a ray-cast
---from the current camera position.
---@class UTargetRayCastCameraNode : UCameraNode
---@field public TraceChannel integer @Trace channel to use for the ray-cast.
---@field public AutoFocus FBooleanCameraParameter @Whether to set the focus distance to the ray-cast hit result.
local UTargetRayCastCameraNode = {}

