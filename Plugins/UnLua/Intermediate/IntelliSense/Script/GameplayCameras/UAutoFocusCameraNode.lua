---A camera node that sets the focus distance to the distance of the current target.
---@class UAutoFocusCameraNode : UCameraNode
---@field public EnableAutoFocus FBooleanCameraVariableReference @Whether auto-focus should be enabled.
---@field public AutoFocusDampingFactor FFloatCameraParameter @The damping factor for how fast the focus distance follows the target distance. When zero, damping is disabled and focus distance is always equal to target distance. Low factors are "laggy", high factors are "tight".
local UAutoFocusCameraNode = {}

