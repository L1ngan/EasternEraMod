---UCutMeshWithMeshTool cuts an input mesh into two pieces based on a second input mesh.
---Essentially this just both a Boolean Subtract and a Boolean Intersection. However
---doing those as two separate operations involves quite a few steps, so this Tool
---does it in a single step and with some improved efficiency.
---@class UCutMeshWithMeshTool : UBaseCreateFromSelectedTool
---@field protected CutProperties UCutMeshWithMeshToolProperties
---@field protected IntersectPreviewMesh UPreviewMesh
---@field protected DrawnLineSet ULineSetComponent
local UCutMeshWithMeshTool = {}

