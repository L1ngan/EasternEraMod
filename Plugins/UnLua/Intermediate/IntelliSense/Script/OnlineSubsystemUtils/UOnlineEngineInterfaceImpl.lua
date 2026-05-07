---@class UOnlineEngineInterfaceImpl : UOnlineEngineInterface
---@field private MappedUniqueNetIdTypes TMap<string, string> @Mapping of unique net ids that should not be treated as foreign ids to the local subsystem.
---@field private CompatibleUniqueNetIdTypes TArray<string> @Array of unique net ids that are deemed valid when tested against gameplay login checks.
---@field private VoiceSubsystemNameOverride string @Allow the subsystem used for voice functions to be overridden, in case it needs to be different than the default subsystem. May be useful on console platforms.
---@field private bOnlineServicesCompatibilityEnabled boolean @Whether to enable a compatibility interface for transitioning from OSSv1 to OSSv2.
---@field private OnlineServicesCompatibilityInterface UOnlineEngineInterface
local UOnlineEngineInterfaceImpl = {}

