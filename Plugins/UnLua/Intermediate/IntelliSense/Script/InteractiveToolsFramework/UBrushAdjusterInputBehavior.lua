---A behavior that captures a keyboard hotkey to enter a sub-mode "bAdjustingBrush" while the key is pressed.
---The target tool must call OnDragStart() and OnDragUpdate() to feed the screen coordinates of the mouse for the duration
---of the behavior. And use "GetIsBrushBeingAdjusted" to pause/disable the brush motion while it is being adjusted.
---OnDragStart() defines the starting location of an adjustment
---OnDragUpdate() adjusts the brush strength and radius based on the magnitude of the screen coordinate delta in the
---vertical and horizontal directions respectively.
---@class UBrushAdjusterInputBehavior : UAnyButtonInputBehavior
local UBrushAdjusterInputBehavior = {}

