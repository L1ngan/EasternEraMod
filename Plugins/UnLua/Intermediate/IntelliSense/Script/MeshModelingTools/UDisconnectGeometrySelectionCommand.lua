---UDisconnectGeometrySelectionCommand disconnects the geometric elements identified by the Selection.
---Currently only supports mesh selections (Triangle and Polygroup types)
---Disconnects selected faces, or faces connected to selected edges, or faces connected to selected vertices.
---@class UDisconnectGeometrySelectionCommand : UGeometrySelectionEditCommand
local UDisconnectGeometrySelectionCommand = {}

