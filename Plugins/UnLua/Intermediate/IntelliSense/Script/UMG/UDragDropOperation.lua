---This class is the base drag drop operation for UMG, extend it to add additional data and add new functionality.
---@class UDragDropOperation : UObject
---@field public Tag string @A simple string tag you can optionally use to provide extra metadata about the operation.
---@field public Payload UObject @The payload of the drag operation.  This can be any UObject that you want to pass along as dragged data.  If you were building an inventory screen this would be the UObject representing the item being moved to another slot.
---@field public DefaultDragVisual UWidget @The Drag Visual is the widget to display when dragging the item.  Normally people create a new widget to represent the temporary drag.
---@field public Pivot EDragPivot @Controls where the drag widget visual will appear when dragged relative to the pointer performing the drag operation.
---@field public Offset FVector2D @A percentage offset (-1..+1) from the Pivot location, the percentage is of the desired size of the dragged visual.
---@field public OnDrop MulticastDelegate
---@field public OnDragCancelled MulticastDelegate
---@field public OnDragged MulticastDelegate
local UDragDropOperation = {}

---@param PointerEvent FPointerEvent
function UDragDropOperation:Drop(PointerEvent) end

---@param PointerEvent FPointerEvent
function UDragDropOperation:Dragged(PointerEvent) end

---@param PointerEvent FPointerEvent
function UDragDropOperation:DragCancelled(PointerEvent) end

