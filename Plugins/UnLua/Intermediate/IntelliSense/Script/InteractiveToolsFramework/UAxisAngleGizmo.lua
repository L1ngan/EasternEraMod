---@class UAxisAngleGizmo : UInteractiveGizmo
---@field public AxisSource TScriptInterface<UGizmoAxisSource> @The below properties can be manipulated for more fine-grained control, but typically it is sufficient to use the initialization method above.
---@field public AngleSource TScriptInterface<UGizmoFloatParameterSource>
---@field public HitTarget TScriptInterface<UGizmoClickTarget>
---@field public StateTarget TScriptInterface<UGizmoStateTarget>
---@field public MouseBehavior UClickDragInputBehavior @The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys.
---@field public bInInteraction boolean
---@field public RotationOrigin FVector
---@field public RotationAxis FVector
---@field public RotationPlaneX FVector
---@field public RotationPlaneY FVector
---@field public InteractionStartPoint FVector
---@field public InteractionCurPoint FVector
---@field public InteractionStartAngle number
---@field public InteractionCurAngle number
local UAxisAngleGizmo = {}

