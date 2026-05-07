---Mesh Inspector Tool for visualizing mesh information
---@class UExtractCollisionGeometryTool : USingleSelectionMeshEditingTool
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties @Property set for type of output object (StaticMesh, Volume, etc)
---@field protected Settings UExtractCollisionToolProperties
---@field protected VizSettings UCollisionGeometryVisualizationProperties
---@field protected ObjectProps UPhysicsObjectToolPropertySet
---@field protected PreviewElements UPreviewGeometry
---@field protected PreviewMesh UPreviewMesh
local UExtractCollisionGeometryTool = {}

