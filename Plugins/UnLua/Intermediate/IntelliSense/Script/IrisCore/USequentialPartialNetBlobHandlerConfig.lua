---@class USequentialPartialNetBlobHandlerConfig : UObject
---@field protected MaxPartBitCount integer @How many bits a PartialNetBlob payload can hold at most. Cannot exceed 65535, but anything near the max packet size is discouraged as it is unlikely to fit. Keep it a power of two.
---@field protected MaxPartCount integer @How many parts a NetBlob can be split into at most. If more parts are required the splitting will fail. Cannot exceed 65535.
local USequentialPartialNetBlobHandlerConfig = {}

