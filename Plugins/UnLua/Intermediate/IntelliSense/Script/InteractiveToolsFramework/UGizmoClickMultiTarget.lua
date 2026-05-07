---@class UGizmoClickMultiTarget : UInterface
local UGizmoClickMultiTarget = {}

---* Updates the interacting state of the specified gizmo part, indicating when interaction with the
---* Standard gizmo is actively occurring, typically upon the input device clicking and dragging the Standard gizmo.
---@param bInteracting boolean
---@param InPartIdentifier integer
function UGizmoClickMultiTarget:UpdateInteractingState(bInteracting, InPartIdentifier) end

---* Updates the hover state of the specified gizmo part, indicating whether the input device is currently hovering
---* over the Standard gizmo.
---@param bHovering boolean
---@param InPartIdentifier integer
function UGizmoClickMultiTarget:UpdateHoverState(bHovering, InPartIdentifier) end

---* Updates the hittable state of the specified gizmo part.
---@param bHittable boolean
---@param InPartIdentifier integer
function UGizmoClickMultiTarget:UpdateHittableState(bHittable, InPartIdentifier) end

