---A container class that owns variable descriptors. This is used to ensure we don't end up
---with a namespace clash between graphs, variables and resources.
---@class UOptimusVariableContainer : UObject
---@field public Descriptions TArray<UOptimusVariableDescription>
local UOptimusVariableContainer = {}

