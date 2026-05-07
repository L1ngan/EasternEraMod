---@class UReplicationStateDescriptorConfig : UObject
---@field private SupportsStructNetSerializerList TArray<FSupportsStructNetSerializerConfig> @Structs that works using the default struct NetSerializer when running iris replication even though they implement a custom NetSerialize or NetDeltaSerialize method.
---@field private EnsureFullyPushModelClassNames TArray<FReplicationStateDescriptorClassPushModelConfig> @Which classes should ensure they are fully push model.
---@field private bEnsureAllClassesAreFullyPushModel boolean @If you want to be alerted of all classes not being fully push model.
local UReplicationStateDescriptorConfig = {}

