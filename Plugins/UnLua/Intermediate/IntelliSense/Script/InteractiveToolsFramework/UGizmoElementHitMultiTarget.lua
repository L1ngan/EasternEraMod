---UGizmoElementHitMultiTarget is an IGizmoClickMultiTarget implementation that
---hit-tests any object derived from UGizmoElementBase. This implementation is used for
---HitTargets which support hitting multiple parts within a gizmo element hierarchy.
---For a gizmo with multiple parts, the part identifier establishes a correspondence between a gizmo part
---and the elements representing that part within the hit target. The valid part identifiers should
---be defined in the gizmo. Identifier 0 is reserved for the default ID which should be assigned to
---elements that do not correspond to any gizmo part, such as non-hittable decorative elements.
---@class UGizmoElementHitMultiTarget : UObject
---@field public GizmoElement UGizmoElementBase @Gizmo element.
---@field public GizmoViewContext UGizmoViewContext
---@field public GizmoTransformProxy UTransformProxy
local UGizmoElementHitMultiTarget = {}

---* Updates the interacting state of the specified gizmo part, indicating when interaction with the
---* Standard gizmo is actively occurring, typically upon the input device clicking and dragging the Standard gizmo.
---@param bInteracting boolean
---@param InPartIdentifier integer
function UGizmoElementHitMultiTarget:UpdateInteractingState(bInteracting, InPartIdentifier) end

---* Updates the hover state of the specified gizmo part, indicating whether the input device is currently hovering
---* over the Standard gizmo.
---@param bHovering boolean
---@param InPartIdentifier integer
function UGizmoElementHitMultiTarget:UpdateHoverState(bHovering, InPartIdentifier) end

---* Updates the hittable state of the specified gizmo part.
---@param bHittable boolean
---@param InPartIdentifier integer
function UGizmoElementHitMultiTarget:UpdateHittableState(bHittable, InPartIdentifier) end

