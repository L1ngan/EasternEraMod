---@class FObjectReplicationBridgeFilterConfig
---@field public ClassName string @Instances of this class should use the filter supplied.
---@field public DynamicFilterName string @The name of the filter to set on the class instances.
---@field public FilterProfile string @Optional name to a profile that can further specialize the settings within a dynamic filter
---@field public bForceEnableOnAllInstances boolean @Whether this filter should be used for all instances of this class and subclasses, regardless of bAlwaysRelevant and bOnlyRelevantToOwner settings on instance.
local FObjectReplicationBridgeFilterConfig = {}
