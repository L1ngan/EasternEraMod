---Control point for the spline orbit camera node.
---@class FSplineOrbitControlPoint
---@field public LocationOffset FVector3d @The offset of the camera position from the orbit pivot. This defines the radius of the orbit at the given control point, along with any lateral or vertical position offsets.
---@field public TargetOffset FVector3d @The offset of the camera target as defined by projecting the orbit pivot on the line of sight. This adds rotation to the camera by making it look higher/lower/etc at the given control point.
---@field public RotationOffset FRotator3d @A rotation offset applied to the camera. This adds rotation to the camera, in local space, applied after TargetOffset.
---@field public PitchAngle number @The pitch angle for this control point.
local FSplineOrbitControlPoint = {}
