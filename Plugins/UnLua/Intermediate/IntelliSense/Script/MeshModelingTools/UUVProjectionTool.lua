---UV projection tool
---@class UUVProjectionTool : USingleTargetWithSelectionTool
---@field protected UVChannelProperties UMeshUVChannelProperties
---@field protected BasicProperties UUVProjectionToolProperties
---@field protected EditActions UUVProjectionToolEditActions
---@field protected MaterialSettings UExistingMeshMaterialProperties
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
---@field protected CheckerMaterial UMaterialInstanceDynamic
---@field protected TransformGizmo UCombinedTransformGizmo
---@field protected TransformProxy UTransformProxy
---@field protected OperatorFactory UUVProjectionOperatorFactory
---@field protected EdgeRenderer UPreviewGeometry
---@field protected ClickToSetPlaneBehavior USingleClickInputBehavior
local UUVProjectionTool = {}

