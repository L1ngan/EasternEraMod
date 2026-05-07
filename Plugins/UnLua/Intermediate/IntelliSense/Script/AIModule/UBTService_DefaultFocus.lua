---Default Focus service node.
---A service node that automatically sets the AI controller's focus when it becomes active.
---@class UBTService_DefaultFocus : UBTService_BlackboardBase
---@field protected FocusPriority integer @not exposed to users on purpose. Here to make reusing focus-setting mechanics by derived classes possible
local UBTService_DefaultFocus = {}

