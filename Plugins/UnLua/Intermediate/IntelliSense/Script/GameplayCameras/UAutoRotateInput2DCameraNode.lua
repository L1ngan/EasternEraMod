---An input node that modifies a yaw/pitch input in order to re-align its
---values to a given default direction.
---@class UAutoRotateInput2DCameraNode : UInput2DCameraNode
---@field public Direction ECameraAutoRotateDirection @The direction to re-align towards.
---@field public DirectionVector FVector3dCameraVariableReference @An override for the direction to re-align towards.
---@field public WaitTime FFloatCameraParameter @The time, in seconds, to wait before re-aligning.
---@field public DeactivationThreshold FFloatCameraParameter @The minimum player-induced/manual rotation, in degrees, to deactivate auto-rotation.
---@field public Interpolator UCameraValueInterpolator @The interpolation for re-alignment.
---@field public FreezeControlRotation FBooleanCameraParameter @Whether to suggest freezing the input control rotation.
---@field public EnableAutoRotate FBooleanCameraParameter @Whether to enable auto-rotation.
---@field public AutoRotateYaw FBooleanCameraParameter @Whether to auto-rotate yaw.
---@field public AutoRotatePitch FBooleanCameraParameter @Whether to auto-rotate pitch.
---@field public InputNode UInput2DCameraNode @The underlying input node.
local UAutoRotateInput2DCameraNode = {}

