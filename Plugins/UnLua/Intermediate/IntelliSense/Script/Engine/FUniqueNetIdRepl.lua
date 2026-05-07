---Wrapper for opaque type FUniqueNetId
---Makes sure that the opaque aspects of FUniqueNetId are properly handled/serialized
---over network RPC and actor replication
---@class FUniqueNetIdRepl : FUniqueNetIdWrapper
---@field protected ReplicationBytes TArray<integer> @Network serialized data cache
local FUniqueNetIdRepl = {}
