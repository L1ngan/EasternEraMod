---Message for updating the progress of an RPC call.
---@class FMessageRpcProgress
---@field public Completion number @Completion percentage (0.0 to 1.0).
---@field public CallId FGuid @Correlation identifier for the RPC call that this message refers to.
---@field public StatusText string @Status text.
local FMessageRpcProgress = {}
