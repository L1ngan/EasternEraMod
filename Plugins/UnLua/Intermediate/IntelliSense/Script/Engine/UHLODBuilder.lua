---Base class for all HLOD builders
---This class takes as input a group of components, and should return component(s) that will be included in the HLOD actor.
---@class UHLODBuilder : UObject
---@field protected HLODBuilderSettings UHLODBuilderSettings
---@field private HLODInstancedStaticMeshComponentClass TSubclassOf<UHLODInstancedStaticMeshComponent>
---@field private HLODInstancedSkinnedMeshComponentClass TSubclassOf<UHLODInstancedSkinnedMeshComponent>
local UHLODBuilder = {}

