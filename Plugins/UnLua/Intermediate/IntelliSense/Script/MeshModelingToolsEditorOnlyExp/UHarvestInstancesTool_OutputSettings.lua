---Output Settings for the Pattern Tool
---@class UHarvestInstancesTool_OutputSettings : UInteractiveToolPropertySet
---@field public ComponentType EHarvestInstancesToolOutputType @Which type of Instanced Static Mesh Component to Create
---@field public bSingleActor boolean @Group all output Instanced Components under a single Actor. By default, multiple Actors will be created.
---@field public ActorName string @Base Name to use for the emitted single Actor
---@field public bIncludeSingleInstances boolean
---@field public bDeleteInputs boolean @Delete Actors that have had their Components harvested
---@field public bHaveSingleInstanceSet boolean
---@field public bHaveLonerInstances boolean
---@field public bCanDeleteInputs boolean
local UHarvestInstancesTool_OutputSettings = {}

