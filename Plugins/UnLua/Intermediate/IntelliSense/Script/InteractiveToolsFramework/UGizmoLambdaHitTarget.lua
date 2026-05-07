---UGizmoLambdaHitTarget is an IGizmoClickTarget implementation that
---forwards the hit-test function to a TFunction
---@class UGizmoLambdaHitTarget : UObject
local UGizmoLambdaHitTarget = {}

---* Updates the interacting state indicating when interaction with the Standard gizmo is actively occurring,
---* typically upon the input device clicking and dragging the Standard gizmo.
---@param bInteracting boolean
function UGizmoLambdaHitTarget:UpdateInteractingState(bInteracting) end

---* Updates the hover state indicating whether the input device is currently hovering over the Standard gizmo.
---* This should be be set to false once interaction with the gizmo commences.
---@param bHovering boolean
function UGizmoLambdaHitTarget:UpdateHoverState(bHovering) end

