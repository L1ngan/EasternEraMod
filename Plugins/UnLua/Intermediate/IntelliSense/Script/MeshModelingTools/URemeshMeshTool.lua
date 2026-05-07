---Simple Mesh Remeshing Tool
---Note this is a subclass of UMultiSelectionTool, however we currently only ever apply it to one mesh at a time. The
---function URemeshMeshToolBuilder::CanBuildTool will return true only when a single mesh is selected, and the tool will
---only be applied to the first mesh in the selection list. The reason we inherit from UMultiSelectionTool is so
---that subclasses of this class can work with multiple meshes (see, for example, UProjectToTargetTool.)
---@class URemeshMeshTool : UMultiSelectionMeshEditingTool
---@field public BasicProperties URemeshMeshToolProperties
---@field public MeshStatisticsProperties UMeshStatisticsProperties
---@field public Preview UMeshOpPreviewWithBackgroundCompute
---@field public MeshElementsDisplay UMeshElementsVisualizer
local URemeshMeshTool = {}

