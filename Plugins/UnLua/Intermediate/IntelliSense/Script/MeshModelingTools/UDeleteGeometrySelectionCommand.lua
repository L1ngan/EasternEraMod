---UDeleteGeometrySelectionCommand deletes the geometric elements identified by the Selection.
---Currently only supports mesh selections (Triangle and Polygroup types)
---Deletes selected faces, or faces connected to selected edges, or faces connected to selected vertices.
---@class UDeleteGeometrySelectionCommand : UGeometrySelectionEditCommand
local UDeleteGeometrySelectionCommand = {}

