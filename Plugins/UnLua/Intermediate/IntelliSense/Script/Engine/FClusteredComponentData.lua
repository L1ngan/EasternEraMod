---@class FClusteredComponentData
---@field public ReplicatedProxyComponent TWeakObjectPtr<UClusterUnionReplicatedProxyComponent> @Using a TWeakObjectPtr here because the UClusterUnionReplicatedProxyComponent will have a pointer back and we don't want to get into a situation where a circular reference occurs.
---@field public Owner TWeakObjectPtr<AActor>
---@field public bWasReplicating boolean
---@field public bPendingDeletion boolean
local FClusteredComponentData = {}
