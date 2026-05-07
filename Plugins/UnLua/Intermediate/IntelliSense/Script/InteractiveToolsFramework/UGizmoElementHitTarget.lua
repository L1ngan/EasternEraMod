---UGizmoElementHitTarget is an IGizmoClickTarget implementation that
---hit-tests any object derived from UGizmoElementBase
---This hit target should be used for hitting a whole gizmo element hierarchy.
---Use UGizmoElementHitMultiTarget, for hit targets that support hitting parts within a gizmo element hierarchy.
---@class UGizmoElementHitTarget : UObject
---@field public GizmoElement UGizmoElementBase @Gizmo element.
---@field public GizmoViewContext UGizmoViewContext
---@field public GizmoTransformProxy UTransformProxy
local UGizmoElementHitTarget = {}

---* Updates the interacting state indicating when interaction with the Standard gizmo is actively occurring,
---* typically upon the input device clicking and dragging the Standard gizmo.
---@param bInteracting boolean
function UGizmoElementHitTarget:UpdateInteractingState(bInteracting) end

---* Updates the hover state indicating whether the input device is currently hovering over the Standard gizmo.
---* This should be be set to false once interaction with the gizmo commences.
---@param bHovering boolean
function UGizmoElementHitTarget:UpdateHoverState(bHovering) end

