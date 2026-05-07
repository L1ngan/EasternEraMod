---@class UControlRigContextMenuContext : UObject
local UControlRigContextMenuContext = {}

---Returns true if either alt key is down
---@return boolean
function UControlRigContextMenuContext:IsAltDown() end

---Returns context for the menu that shows up when drag and drop from Rig Hierarchy to the Rig Graph
---@return FControlRigRigHierarchyToGraphDragAndDropContext
function UControlRigContextMenuContext:GetRigHierarchyToGraphDragAndDropContext() end

---Returns context for a drag & drop action that contains source and target element keys
---@return FControlRigRigHierarchyDragAndDropContext
function UControlRigContextMenuContext:GetRigHierarchyDragAndDropContext() end

---Returns context for graph node context menu
---@return FControlRigGraphNodeContextMenuContext
function UControlRigContextMenuContext:GetGraphNodeContextMenuContext() end

---Get the control rig blueprint that we are editing
---@return UControlRigBlueprint
function UControlRigContextMenuContext:GetControlRigBlueprint() end

---Get the active control rig instance in the viewport
---@return UControlRig
function UControlRigContextMenuContext:GetControlRig() end

