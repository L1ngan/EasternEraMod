---An input node that reads player input from an input action.
---@class UInputAxisBinding2DCameraNode : UCameraRigInput2DSlot
---@field public AxisActions TArray<UInputAction> @The axis input action(s) to read from.
---@field public RevertAxisX FBooleanCameraParameter @Whether to revert the X axis.
---@field public RevertAxisY FBooleanCameraParameter @Whether to revert the Y axis.
---@field public Multiplier FVector2dCameraParameter @A multiplier to use on the input values.
local UInputAxisBinding2DCameraNode = {}

