---A camera node that sets parameter values on the camera lens.
---@class ULensParametersCameraNode : UCameraNode
---@field public FocalLength FFloatCameraParameter @Current focal length of the camera (i.e. controls FoV, zoom)
---@field public FocusDistance FFloatCameraParameter @Manually-controlled focus distance (manual focus mode only)
---@field public Aperture FFloatCameraParameter @Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8)
---@field public EnablePhysicalCamera FBooleanCameraParameter @Whether post-process settings should be automatically applied to reflect the lens settings.
local ULensParametersCameraNode = {}

