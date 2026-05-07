---Describes the input and output of an anim blueprint 'function'
---@class FAnimBlueprintFunction
---@field public Name string @The name of the function
---@field public Group string @The group of the function
---@field public OutputPoseNodeIndex integer @Index of the output node
---@field public InputPoseNames TArray<string> @The names of the input poses
---@field public InputPoseNodeIndices TArray<integer> @Indices of the input nodes
---@field public bImplemented boolean @Whether this function is actually implemented by this class - it could just be a stub
local FAnimBlueprintFunction = {}
