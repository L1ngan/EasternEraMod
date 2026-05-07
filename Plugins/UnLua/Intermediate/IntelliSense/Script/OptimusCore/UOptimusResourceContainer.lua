---A container class that owns resource descriptors. This is used to ensure we don't end up
---with a namespace clash between graphs, variables and resources.
---@class UOptimusResourceContainer : UObject
---@field public Descriptions TArray<UOptimusResourceDescription>
local UOptimusResourceContainer = {}

