---UScalableSphereGizmo provides a sphere that can be scaled in all directions by dragging
---anywhere on the three axial circles that represent it
---@class UScalableSphereGizmo : UInteractiveGizmo
---@field public HitErrorThreshold number @The error threshold for hit detection with the sphere
---@field public TransactionDescription string @The text that will be used as the transaction description for undo/redo
---@field private Radius number @The radius of the sphere
---@field private bIsHovering boolean @Whether the sphere is currently being hovered over
---@field private bIsDragging boolean @Whether the sphere is currently being dragged
---@field private ActiveTarget UTransformProxy
---@field private ActiveAxis FVector @The current axis that is being dragged along
---@field private DragStartWorldPosition FVector @The position the drag was started on
---@field private DragCurrentPositionProjected FVector @The position the drag is on currently (projected onto the line it is being dragged along)
---@field private InteractionStartParameter number @The initial parameter along the drag axist
local UScalableSphereGizmo = {}

