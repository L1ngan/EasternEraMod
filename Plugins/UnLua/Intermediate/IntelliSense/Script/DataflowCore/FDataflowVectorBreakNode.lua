---Break a vector in 4 components
---if the input vector is of a lower dimension than 4, the remaining components will be set to zero
---@class FDataflowVectorBreakNode : FDataflowNode
---@field private V FDataflowVectorTypes @Vector to break into components
---@field private X FDataflowNumericTypes @X component
---@field private Y FDataflowNumericTypes @Y component
---@field private Z FDataflowNumericTypes @Z component
---@field private W FDataflowNumericTypes @W component
local FDataflowVectorBreakNode = {}
