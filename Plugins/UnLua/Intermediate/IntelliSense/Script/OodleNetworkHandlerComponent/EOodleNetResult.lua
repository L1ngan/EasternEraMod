---Oodle net error types, for NetConnection fault handling
---@class EOodleNetResult
---@field public Unknown integer
---@field public Success integer
---@field public OodleDecodeFailed integer
---@field public OodleSerializePayloadFail integer
---@field public OodleBadDecompressedLength integer
---@field public OodleNoDictionary integer
---@field public EOodleNetResult_MAX integer
local EOodleNetResult = {}
