---UGizmoComponentHitTarget is an IGizmoClickTarget implementation that
---hit-tests a UPrimitiveComponent
---@class UGizmoComponentHitTarget : UObject
---@field public Component UPrimitiveComponent @Component->LineTraceComponent() is called to determine if the target is hit
local UGizmoComponentHitTarget = {}

---* Updates the interacting state indicating when interaction with the Standard gizmo is actively occurring,
---* typically upon the input device clicking and dragging the Standard gizmo.
---@param bInteracting boolean
function UGizmoComponentHitTarget:UpdateInteractingState(bInteracting) end

---* Updates the hover state indicating whether the input device is currently hovering over the Standard gizmo.
---* This should be be set to false once interaction with the gizmo commences.
---@param bHovering boolean
function UGizmoComponentHitTarget:UpdateHoverState(bHovering) end

