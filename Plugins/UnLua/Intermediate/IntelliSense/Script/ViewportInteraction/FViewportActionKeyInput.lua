---Represents a generic action
---@class FViewportActionKeyInput
---@field public ActionType string @The name of this action
---@field public Event integer @Input event
---@field public bIsInputCaptured boolean @True if this action owned by an interactor is "captured" for each possible action type, meaning that only the active captor should       handle input events until it is no longer captured.  It's the captors responsibility to set this using OnVRAction(), or clear it when finished with capturing.
---@field public bIsAxis boolean
local FViewportActionKeyInput = {}
