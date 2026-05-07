---Handle used to identify a bound listener to an Async Message.
---These handles are unique to each bound listener and created by the
---owning FAsyncMessageSystemBase that the Message was bound to.
---@class FAsyncMessageHandle
---@field private InternalHandle integer @The value of this internal handle.
---@field private BoundMessage FAsyncMessageId @The async message that this handle is bound to.
local FAsyncMessageHandle = {}
