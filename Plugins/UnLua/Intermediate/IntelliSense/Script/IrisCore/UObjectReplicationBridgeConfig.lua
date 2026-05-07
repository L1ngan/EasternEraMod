---@class UObjectReplicationBridgeConfig : UObject
---@field private PollConfigs TArray<FObjectReplicationBridgePollConfig> @Which classes should override how often they're polled for modified replicated properties. A config for a class deeper in the class hierarchy has precedence over a more generic class. By default an Actor's NetUpdateFrequency is used to calculate how often it should be polled.
---@field private FilterConfigs TArray<FObjectReplicationBridgeFilterConfig> @Which classes should apply a certain filter. Subclasses will inherit the settings unless they have different relevancy or spatial behavior.
---@field private PrioritizerConfigs TArray<FObjectReplicationBridgePrioritizerConfig> @Which classes should apply a certain prioritizer. Subclasses will inherit the settings. Instances with fixed priorities will ignore any config.
---@field private DeltaCompressionConfigs TArray<FObjectReplicationBridgeDeltaCompressionConfig> @Which classes should enable deltacompression. Derived classes will get the same behavior unless overidden
---@field private CriticalClassConfigs TArray<FObjectReplicatedBridgeCriticalClassConfig> @Classes that are considered critical and will force a disconnection when a protocol mismatch is detected.
---@field private bAllClassesCritical boolean @Set this to true if you want any class with a protocol mismatch to force a disconnection.
---@field private TypeStatsConfigs TArray<FObjectReplicationBridgeTypeStatsConfig> @Which classes should collect TypeStats. Derived classes will get the same behavior unless overidden
---@field private DefaultSpatialFilterName string @The name of the filter to apply objects that can have spatial filtering applied.
---@field private RequiredNetDriverChannelClassName string @The name of the channel class required for object replication to work.
---@field private CriticalActorClasses TArray<string>
local UObjectReplicationBridgeConfig = {}

