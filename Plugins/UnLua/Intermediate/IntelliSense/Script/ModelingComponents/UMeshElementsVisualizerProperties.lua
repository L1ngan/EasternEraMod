---Visualization settings UMeshElementsVisualizer
---@class UMeshElementsVisualizerProperties : UInteractiveToolPropertySet
---@field public bVisible boolean @Should any mesh elements be shown
---@field public bShowWireframe boolean @Should mesh wireframe be shown
---@field public bShowBorders boolean @Should mesh boundary edges be shown
---@field public bShowUVSeams boolean @Should mesh uv seam edges be shown
---@field public bShowNormalSeams boolean @Should mesh normal seam edges be shown
---@field public bShowTangentSeams boolean @Should mesh tangent seam edges be shown
---@field public bShowColorSeams boolean @Should mesh color seam edges be shown
---@field public ThicknessScale number @Multiplier on edge thicknesses
---@field public WireframeColor FColor @Color of mesh wireframe
---@field public BoundaryEdgeColor FColor @Color of mesh boundary edges
---@field public UVSeamColor FColor @Color of mesh UV seam edges
---@field public NormalSeamColor FColor @Color of mesh normal seam edges
---@field public TangentSeamColor FColor @Color of mesh tangent seam edges
---@field public ColorSeamColor FColor @Color of mesh color seam edges
---@field public DepthBias number @Depth bias used to slightly shift depth of lines
---@field public bAdjustDepthBiasUsingMeshSize boolean
local UMeshElementsVisualizerProperties = {}

