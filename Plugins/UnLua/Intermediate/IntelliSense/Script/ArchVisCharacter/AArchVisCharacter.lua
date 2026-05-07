---@class AArchVisCharacter : ACharacter
---@field public LookUpAxisName string @Axis name for direct look up/down inputs (e.g. mouse). This should match an Axis Binding in your input settings
---@field public LookUpAtRateAxisName string @Axis name for rate-based look up/down inputs (e.g. joystick). This should match an Axis Binding in your input settings
---@field public TurnAxisName string @Axis name for direct turn left/right inputs (e.g. mouse). This should match an Axis Binding in your input settings
---@field public TurnAtRateAxisName string @Axis name for rate-based turn left/right inputs (e.g. joystick). This should match an Axis Binding in your input settings
---@field public MoveForwardAxisName string @Axis name for "move forward/back" control. This should match an Axis Binding in your input settings
---@field public MoveRightAxisName string @Axis name for "move left/right" control. This should match an Axis Binding in your input settings
---@field public MouseSensitivityScale_Pitch number @Controls how aggressively mouse motion translates to character rotation in the pitch axis.
---@field public MouseSensitivityScale_Yaw number @Controls how aggressively mouse motion translates to character rotation in the yaw axis.
local AArchVisCharacter = {}

