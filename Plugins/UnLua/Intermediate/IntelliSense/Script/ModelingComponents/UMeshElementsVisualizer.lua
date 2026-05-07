---UMeshElementsVisualizer is a subclass of UPreviewGeometry that displays mesh elements.
---Currently supports wireframe, boundary edges, UV seams, Normal seams and Color seams.
---UMeshElementsVisualizer initializes an instance of UMeshElementsVisualizerProperties
---as its .Settings value, and will watch for changes in these properties.
---Mesh is accessed via lambda callback provided by creator/client. See SetMeshAccessFunction() comments
---@class UMeshElementsVisualizer : UPreviewGeometry
---@field public Settings UMeshElementsVisualizerProperties @Visualization settings
---@field public WireframeComponent UMeshWireframeComponent @Mesh Wireframe component, draws wireframe, boundaries, UV seams, normal seams, color seams
local UMeshElementsVisualizer = {}

