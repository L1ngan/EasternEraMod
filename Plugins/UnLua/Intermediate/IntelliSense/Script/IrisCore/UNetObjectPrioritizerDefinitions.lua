---Configurable prioritizer definitions. Valid prioritizer definitions are auto-created by the prioritization system.
---@class UNetObjectPrioritizerDefinitions : UObject
---@field private NetObjectPrioritizerDefinitions TArray<FNetObjectPrioritizerDefinition> @Prioritizer definitions. The first valid definition will assume the role as default spatial prioritizer. All objects with a RepTag_WorldLocation tag will be added to the default prioritizer. To override the behavior a prioritizer must be set via calls to the ReplicationSystem.
local UNetObjectPrioritizerDefinitions = {}

