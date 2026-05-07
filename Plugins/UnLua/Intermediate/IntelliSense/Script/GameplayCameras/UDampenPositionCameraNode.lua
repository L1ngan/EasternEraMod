---A camera node that smoothes the movement of the camera.
---@class UDampenPositionCameraNode : UCameraNode
---@field public ForwardDampingFactor FFloatCameraParameter @Damping factor for forward/backward camera movement.
---@field public LateralDampingFactor FFloatCameraParameter @Damping factor for left/right camera movement.
---@field public VerticalDampingFactor FFloatCameraParameter @Damping factor for up/down camera movement.
---@field public DampenSpace ECameraNodeSpace @What space the damping should be in.
local UDampenPositionCameraNode = {}

