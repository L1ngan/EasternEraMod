---@class FObjectReplicationBridgePrioritizerConfig
---@field public ClassName string @Instances of this class and its subclasses, specified by its fully qualified path, should use the prioritizer supplied.
---@field public PrioritizerName string @The name of the prioritizer to set on the class instances. "Default" can be used to specify the default spatial prioritizer.
---@field public bForceEnableOnAllInstances boolean @Whether this prioritizer should be used for all instances of this class and subclasses, regardless of bAlwaysRelevant and bOnlyRelevantToOwner settings on instance.
local FObjectReplicationBridgePrioritizerConfig = {}
