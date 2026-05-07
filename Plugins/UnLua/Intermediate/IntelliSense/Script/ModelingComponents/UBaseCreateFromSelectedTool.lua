---UBaseCreateFromSelectedTool is a base Tool (must be subclassed)
---that provides support for common functionality in tools that create a new mesh from a selection of one or more existing meshes
---@class UBaseCreateFromSelectedTool : UMultiSelectionMeshEditingTool
---@field protected TransformProperties UTransformInputsToolProperties
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties
---@field protected HandleSourcesProperties UBaseCreateFromSelectedHandleSourceProperties
---@field protected CollisionProperties UBaseCreateFromSelectedCollisionProperties
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
---@field protected TransformProxies TArray<UTransformProxy>
---@field protected TransformGizmos TArray<UCombinedTransformGizmo>
local UBaseCreateFromSelectedTool = {}

