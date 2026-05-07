---Used to configure the replication system default values
---@class FNetDriverReplicationSystemConfig
---@field public MaxReplicatedObjectCount integer @Override the max object count. If 0 use the default system value.
---@field public InitialNetObjectListCount integer @Override the preallocated size of net object lists. If 0 use the default value.
---@field public NetObjectListGrowCount integer @Override the amount to grow every net object list by when they hit the preallocated count. If 0 use the default system value.
---@field public PreAllocatedMemoryBuffersObjectCount integer @Override the number of pre-allocated memory buffers that can hold up to the specified number of objects before they have to grow.
---@field public MaxReplicationWriterObjectCount integer @Override the number of pre-allocated objects in FReplicationWriter.
---@field public MaxDeltaCompressedObjectCount integer @Override the max compressed object count. If 0 use the default system value.
---@field public MaxNetObjectGroupCount integer @Override the max group count. If 0 use the default system value.
local FNetDriverReplicationSystemConfig = {}
