---A camera node that can orbit around a pivot point, and the shape of the orbit is defined
---by pitch-based parameters.
---@class USplineOrbitCameraNode : UCameraNode
---@field public LocationOffsetSpline FCameraVectorCurve @Spline that defines the camera location's offset for a given pitch angle.
---@field public TargetOffsetSpline FCameraVectorCurve @Spline that defines an additive camera target offset for a given pitch angle.
---@field public RotationOffsetSpline FCameraRotatorCurve @Spline that defines an additive camera rotation offset for a given pitch angle.
---@field public LocationOffsetMultiplier FFloatCameraParameter
---@field public TargetOffsetSpace ECameraNodeSpace @The space in which the control points' TargetOffset is applied.
---@field public InputSlot UInput2DCameraNode @The input slot for controlling the orbiting. If no input slot is specified, this node will use the player controller view rotation.
local USplineOrbitCameraNode = {}

