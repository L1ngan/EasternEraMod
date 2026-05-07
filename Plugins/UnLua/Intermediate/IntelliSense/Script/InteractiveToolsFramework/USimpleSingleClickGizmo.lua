---Simple gizmo that triggers an OnClicked callback when it is clicked.
---@class USimpleSingleClickGizmo : UInteractiveGizmo
---@field public HitTarget TScriptInterface<UGizmoClickTarget> @The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start
---@field public ClickBehavior USingleClickInputBehavior @The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys.
local USimpleSingleClickGizmo = {}

