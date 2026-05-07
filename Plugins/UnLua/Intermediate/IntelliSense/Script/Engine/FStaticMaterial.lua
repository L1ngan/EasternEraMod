---@class FStaticMaterial
---@field public MaterialInterface UMaterialInterface
---@field public MaterialSlotName string @This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change
---@field public ImportedMaterialSlotName string @This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be
---@field public UVChannelData FMeshUVChannelInfo @Data used for texture streaming relative to each UV channels.
---@field public OverlayMaterialInterface UMaterialInterface
local FStaticMaterial = {}
