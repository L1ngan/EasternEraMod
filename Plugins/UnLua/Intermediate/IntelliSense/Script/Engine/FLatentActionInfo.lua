---Latent action info
---@class FLatentActionInfo
---@field public Linkage integer @The resume point within the function to execute
---@field public UUID integer @the UUID for this action
---@field public ExecutionFunction string @The function to execute.
---@field public CallbackTarget UObject @Object to execute the function on.
local FLatentActionInfo = {}
