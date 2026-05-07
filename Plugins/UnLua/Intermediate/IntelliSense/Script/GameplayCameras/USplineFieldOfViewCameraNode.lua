---A camera node that sets the field of view of the camera by evaluating a curve.
---@class USplineFieldOfViewCameraNode : UCameraNode
---@field public SplineInput FFloatCameraParameter @The input to pass to the field of view spline.
---@field public FieldOfViewSpline FCameraSingleCurve @The field of view, in degrees.
local USplineFieldOfViewCameraNode = {}

