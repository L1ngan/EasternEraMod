---@class FInstancedStructNetSerializerConfig : FNetSerializerConfig
---@field public SupportedTypes TArray<TSoftObjectPtr<UScriptStruct>> @The property is for serialization support. We store the supported types differently in the descriptor cache.
local FInstancedStructNetSerializerConfig = {}
