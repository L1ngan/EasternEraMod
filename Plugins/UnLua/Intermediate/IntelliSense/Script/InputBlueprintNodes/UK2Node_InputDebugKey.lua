---@class UK2Node_InputDebugKey : UK2Node
---@field public InputKey FKey @The key that is bound to this debug event. Pressing this key while the game is running will trigger this node's events.
---@field public bExecuteWhenPaused boolean @Should the binding execute even when the game is paused
---@field public bControl boolean @Does this binding require the control key on PC or the command key on Mac to be held
---@field public bAlt boolean @Does this binding require the alt key to be held
---@field public bShift boolean @Does this binding require the shift key to be held
---@field public bCommand boolean @Does this binding require the windows key on PC or the control key on Mac to be held
local UK2Node_InputDebugKey = {}

