---Defines a mapping between an action and key
---@class FInputActionKeyMapping
---@field public ActionName string @Friendly name of action, e.g "jump"
---@field public bShift boolean @true if one of the Shift keys must be down when the KeyEvent is received to be acknowledged
---@field public bCtrl boolean @true if one of the Ctrl keys must be down when the KeyEvent is received to be acknowledged
---@field public bAlt boolean @true if one of the Alt keys must be down when the KeyEvent is received to be acknowledged
---@field public bCmd boolean @true if one of the Cmd keys must be down when the KeyEvent is received to be acknowledged
---@field public Key FKey @Key to bind it to.
local FInputActionKeyMapping = {}
