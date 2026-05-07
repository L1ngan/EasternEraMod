---@class UBakeMeshAttributeVertexToolProperties : UInteractiveToolPropertySet
---@field public OutputMode EBakeVertexOutput @The bake output mode
---@field public OutputType integer @The bake output type to generate
---@field public OutputTypeR integer @The bake output type to generate in the Red channel
---@field public OutputTypeG integer @The bake output type to generate in the Green channel
---@field public OutputTypeB integer @The bake output type to generate in the Blue channel
---@field public OutputTypeA integer @The bake output type to generate in the Alpha channel
---@field public PreviewMode EBakeVertexChannel @The vertex color channel to preview
---@field public TopologyMode EBakeVertexTopology @The vertex color topology to use for the bake
---@field public bSplitAtNormalSeams boolean @If true, compute a separate vertex color for each unique normal on a vertex
---@field public bSplitAtUVSeams boolean @If true, Compute a separate vertex color for each unique UV on a vertex.
local UBakeMeshAttributeVertexToolProperties = {}

