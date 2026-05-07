---@class UK2Node_InputKey : UK2Node
---@field public InputKey FKey @The key that is bound
---@field public bConsumeInput boolean @Prevents actors with lower priority from handling this input
---@field public bExecuteWhenPaused boolean @Should the binding execute even when the game is paused
---@field public bOverrideParentBinding boolean @Should any bindings to this event in parent classes be removed
---@field public bControl boolean @Does this binding require the control key on PC or the command key on Mac to be held
---@field public bAlt boolean @Does this binding require the alt key to be held
---@field public bShift boolean @Does this binding require the shift key to be held
---@field public bCommand boolean @Does this binding require the windows key on PC or the control key on Mac to be held
local UK2Node_InputKey = {}

