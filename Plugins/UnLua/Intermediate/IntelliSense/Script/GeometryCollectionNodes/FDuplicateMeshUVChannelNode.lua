---Create a new UV layer/channel in a UDataflowMesh
---@class FDuplicateMeshUVChannelNode : FDataflowNode
---@field private Mesh UDataflowMesh @DataflowMesh input/output
---@field private SourceUVChannel integer @Index of the source UV channel
---@field private NewUVChannel integer @Index of the added UV channel
local FDuplicateMeshUVChannelNode = {}
