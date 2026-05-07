---The level editor version of the UV layout tool.
---@class UUVLayoutTool : UMultiSelectionMeshEditingTool
---@field protected UVChannelProperties UMeshUVChannelProperties
---@field protected BasicProperties UUVLayoutProperties
---@field protected MaterialSettings UExistingMeshMaterialProperties
---@field protected Previews TArray<UMeshOpPreviewWithBackgroundCompute>
---@field protected Factories TArray<UUVLayoutOperatorFactory>
---@field protected UVLayoutView UUVLayoutPreview
local UUVLayoutTool = {}

