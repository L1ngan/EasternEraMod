---The DataStreamManager contains all active DataStreams that may serialize data.
---Calls to the DataStream interface functions will be forwarded to active streams.
---Which streams will be automatically created or allowed to be manually created
---need to be configured via UDataStreamDefinitions.
---@class UDataStreamManager : UDataStream
local UDataStreamManager = {}

