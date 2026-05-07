---The base asset class for all camera variables.
---@class UCameraVariableAsset : UObject
---@field public DisplayName string @The name of the variable.
---@field public bAutoReset boolean @Whether this variable auto-resets to its default value every frame.
---@field public bIsPrivate boolean @Whether this variable is private and shouldn't be propagated with evaluation results.
---@field public bIsInput boolean @Whether this variable is an input variable that gets blended before node evaluators are run.
---@field private Guid FGuid
local UCameraVariableAsset = {}

