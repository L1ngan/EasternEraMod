---@class UHLODBuilderInstancingSettings : UHLODBuilderSettings
---@field public bDisallowNanite boolean @If enabled, the components created for the HLODs will not use Nanite. Necessary if you want to use the last LOD & the mesh is Nanite enabled, as forced LODs are ignored by Nanite
---@field public InstanceFilteringType EInstanceFilteringType @Type of filtering to apply to instances. Instances that do not pass the filter will be excluded from the HLOD.
---@field public MinimumExtent number @Minimum Extent in Unreal Units
---@field public MinimumArea number @Minimum area in square Unreal Units
---@field public MinimumVolume number @Minimum volume in cubic Unreal Units
local UHLODBuilderInstancingSettings = {}

