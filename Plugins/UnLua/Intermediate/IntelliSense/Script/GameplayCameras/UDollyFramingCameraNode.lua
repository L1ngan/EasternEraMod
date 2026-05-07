---A camera node that frames a target by moving along a sideways rail (left/right relative to
---the camera transform) and optionally also up and down.
---@class UDollyFramingCameraNode : UBaseFramingCameraNode
---@field public CanMoveLaterally FBooleanCameraParameter @Whether the dolly can move laterally.
---@field public CanMoveVertically FBooleanCameraParameter @Whether the dolly can move vertically.
local UDollyFramingCameraNode = {}

