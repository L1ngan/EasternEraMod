---A UNetBlobHandler is responsible for creating and processing a single type of NetBlob.
---If the handler should be able to receive blobs it needs to be configured in
---UNetBlobHandlerDefinitions and registered to the UReplicationSystem on both the
---sending and receiving side.
---@class UNetBlobHandler : UObject
local UNetBlobHandler = {}

