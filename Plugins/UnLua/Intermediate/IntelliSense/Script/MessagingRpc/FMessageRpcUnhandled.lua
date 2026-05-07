---Message for notifying RPC clients that a call was not handled by the server.
---@class FMessageRpcUnhandled
---@field public CallId FGuid @Correlation identifier for the RPC call that this message refers to.
local FMessageRpcUnhandled = {}
