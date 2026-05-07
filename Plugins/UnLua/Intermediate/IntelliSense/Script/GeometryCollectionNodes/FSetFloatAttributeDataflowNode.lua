---Set a float values in an array
---@class FSetFloatAttributeDataflowNode : FDataflowNode
---@field private Collection FManagedArrayCollection @Collection to visualize
---@field private Attribute string
---@field private Method EDataflowSetFloatArrayMethod
---@field private RandomSeed integer @Seed for random
---@field private NoiseScale number @Seed for random
---@field private FloatArray TArray<number> @Output float array
local FSetFloatAttributeDataflowNode = {}
