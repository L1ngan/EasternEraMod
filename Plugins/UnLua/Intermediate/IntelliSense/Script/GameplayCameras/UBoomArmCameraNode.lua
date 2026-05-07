---A camera node that can rotate the camera in yaw and pitch based on player input.
---@class UBoomArmCameraNode : UCameraNode
---@field public BoomOffset FVector3dCameraParameter @The offset of the boom. Rotation occurs at the base (i.e. before the offset).
---@field public BoomLengthInterpolator UCameraValueInterpolator @The interpolator to use for changing the boom length based on its pivot's movements.
---@field public MaxForwardInterpolationFactor FDoubleCameraParameter @The maximum amount of forward movement the interpolator can introduce, expressed as a factor of the default boom length.
---@field public MaxBackwardInterpolationFactor FDoubleCameraParameter @The maximum amount of backward movement the interpolator can introduce, expressed as a factor of the default boom length.
---@field public InputSlot UInput2DCameraNode @The input slot for controlling the boom arm. If no input slot is specified, the boom arm will use the player controller view rotation.
local UBoomArmCameraNode = {}

