---A camera node that offsets the location and rotation of the camera by evaluating curves.
---@class USplineOffsetCameraNode : UCameraNode
---@field public SplineInput FFloatCameraParameter @The input to pass to the offset splines.
---@field public TranslationOffsetSpline FCameraVectorCurve @The spline that defines the translation offset to apply to the camera.
---@field public RotationOffsetSpline FCameraRotatorCurve @The rotation offset to apply to the camera.
---@field public OffsetSpace ECameraNodeSpace @The space in which to apply the offset.
local USplineOffsetCameraNode = {}

