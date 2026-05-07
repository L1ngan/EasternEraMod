---@class UPartialNetObjectAttachmentHandlerConfig : USequentialPartialNetBlobHandlerConfig
---@field private BitCountSplitThreshold integer @How many bits a payload should have to recommend a split. Should be higher than MaxPartBitCount as splitting adds overhead.
---@field private ClientUnreliableBitCountSplitThreshold integer @How many bits a unreliable payload should have to recommend a split on the client. Should be higher than MaxPartBitCount as splitting adds overhead.
---@field private ServerUnreliableBitCountSplitThreshold integer @How many bits a unreliable payload should have to recommend a split on the server. Should be higher than MaxPartBitCount as splitting adds overhead.
local UPartialNetObjectAttachmentHandlerConfig = {}

