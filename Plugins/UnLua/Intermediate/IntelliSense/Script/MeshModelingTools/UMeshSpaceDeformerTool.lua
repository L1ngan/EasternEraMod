---Applies non-linear deformations to a mesh
---@class UMeshSpaceDeformerTool : USingleSelectionMeshEditingTool
---@field protected Settings UMeshSpaceDeformerToolProperties
---@field protected ToolActions UMeshSpaceDeformerToolActionPropertySet
---@field protected StateTarget UGizmoTransformChangeStateTarget
---@field protected DragAlignmentMechanic UDragAlignmentMechanic
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
---@field protected OriginalMeshPreview UPreviewMesh
---@field protected IntervalGizmo UIntervalGizmo
---@field protected TransformGizmo UCombinedTransformGizmo
---@field protected TransformProxy UTransformProxy
---@field protected UpIntervalSource UGizmoLocalFloatParameterSource @Interval Parameter sources that reflect UI settings.
---@field protected DownIntervalSource UGizmoLocalFloatParameterSource
---@field protected ForwardIntervalSource UGizmoLocalFloatParameterSource
local UMeshSpaceDeformerTool = {}

