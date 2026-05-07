---TODO $IRIS: Document class usage
---@class UNetObjectCountLimiterConfig : UNetObjectPrioritizerConfig
---@field public Mode ENetObjectCountLimiterMode
---@field public MaxObjectCount integer @How many objects to be considered for replication each frame. With 2 at least 1 object that isn't owned by the connection will be considered. If the prioritizer won't deal with objects that are owned by a specific connection it's safe to set to 1.
---@field public Priority number @Which priority to set for objects considered for replication. Priority is accumulated for an object until it's replicated. 1.0f is the threshold at which the object may be replicated.
---@field public OwningConnectionPriority number @The priority to set for a considered object if it's owned by the connection being prioritized for.
---@field public bEnableOwnedObjectsFastLane boolean @Whether objects owned by the connection should always be considered for replication. If so, such objects won't count against the MaxObjectCount.
local UNetObjectCountLimiterConfig = {}

