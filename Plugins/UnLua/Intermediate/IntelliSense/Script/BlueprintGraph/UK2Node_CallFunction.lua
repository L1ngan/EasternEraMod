---@class UK2Node_CallFunction : UK2Node
---@field public bDefaultsToPureFunc boolean @Indicates that the bound function defaults to a pure state
---@field public bWantsEnumToExecExpansion boolean @Indicates that during compile we want to create multiple exec pins from an enum param
---@field public FunctionReference FMemberReference @The function to call
---@field private NodePurityOverride ENodePurityOverride
local UK2Node_CallFunction = {}

