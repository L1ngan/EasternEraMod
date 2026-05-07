---Implements a message that is published by file servers when they're ready to accept connections.
---@class FFileServerReady
---@field public AddressList TArray<string> @Holds the list of IP addresses that the file server is listening on.
---@field public InstanceId FGuid @Holds the file server's application identifier.
local FFileServerReady = {}
