---@class FObjectReplicatedBridgeCriticalClassConfig
---@field public ClassName string @Instances of this class or its subclasses will force a client disconnection when it detects a protocol mismatch.
---@field public bDisconnectOnProtocolMismatch boolean @When true we force the client to disconnect when a protocol mismatch prevents it from instantiating replicated objects of this class.
local FObjectReplicatedBridgeCriticalClassConfig = {}
