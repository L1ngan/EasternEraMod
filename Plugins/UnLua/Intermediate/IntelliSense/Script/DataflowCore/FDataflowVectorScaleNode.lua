---Scale a vector by a scalar : Scaled = (V * Scale)
---@class FDataflowVectorScaleNode : FDataflowNode
---@field private V FDataflowVectorTypes @Vector to scale
---@field private Scale FDataflowNumericTypes @Scale factor
---@field private Scaled FDataflowVectorTypes @Scaled vector : Scaled=(V * Scale)
local FDataflowVectorScaleNode = {}
