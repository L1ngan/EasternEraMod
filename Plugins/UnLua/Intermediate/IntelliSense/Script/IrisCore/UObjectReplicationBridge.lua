---* Partial implementation of ReplicationBridge that can be used as a foundation for
---* implementing support for replicating objects derived from UObject
---@class UObjectReplicationBridge : UReplicationBridge
---@field private NetObjectFactories TArray<UNetObjectFactory>
local UObjectReplicationBridge = {}

