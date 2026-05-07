---@class UK2Node_GetInputAxisKeyValue : UK2Node_CallFunction
---@field public InputAxisKey FKey
---@field public bConsumeInput boolean @Prevents actors with lower priority from handling this input
---@field public bExecuteWhenPaused boolean @Should the binding gather input even when the game is paused
local UK2Node_GetInputAxisKeyValue = {}

