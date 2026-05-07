---@class UK2Node_GetInputAxisValue : UK2Node_CallFunction
---@field public InputAxisName string
---@field public bConsumeInput boolean @Prevents actors with lower priority from handling this input
---@field public bExecuteWhenPaused boolean @Should the binding gather input even when the game is paused
local UK2Node_GetInputAxisValue = {}

