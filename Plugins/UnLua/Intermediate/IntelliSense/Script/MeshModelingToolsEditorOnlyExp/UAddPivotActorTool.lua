---Given selected actors, creates an empty actor as the parent of those actors, at a location
---specified using the gizmo. This is useful for creating a permanent alternate pivot to use in
---animation.
---@class UAddPivotActorTool : UMultiSelectionMeshEditingTool
---@field protected DragAlignmentMechanic UDragAlignmentMechanic
---@field protected TransformGizmo UCombinedTransformGizmo
---@field protected TransformProxy UTransformProxy
---@field protected TransformProperties UPivotActorTransformProperties
local UAddPivotActorTool = {}

