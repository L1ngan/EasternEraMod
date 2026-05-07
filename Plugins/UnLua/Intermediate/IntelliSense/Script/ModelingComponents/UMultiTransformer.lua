---UMultiTransformer abstracts both a default TRS Gizmo, and the "Quick" translate/rotate Gizmos.
---The "Quick" part is not yet implemented, and we might end up phasing out this class.
---@class UMultiTransformer : UObject
---@field protected GizmoManager UInteractiveGizmoManager
---@field protected TransformGizmo UCombinedTransformGizmo
---@field protected TransformProxy UTransformProxy
---@field protected DragAlignmentMechanic UDragAlignmentMechanic @We have to hold on to the mechanic only because the MultiTransformer has the capacity to delete and recreate its gizmo, in which case we'll need to attach the alignment mechanic again.
local UMultiTransformer = {}

