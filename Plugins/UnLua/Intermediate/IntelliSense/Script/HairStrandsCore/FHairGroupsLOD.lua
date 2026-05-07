---@class FHairGroupsLOD
---@field public AutoLODBias number @When LOD mode is set to Auto, decrease the screen size at which curves reduction will occur. The final bias value is computed by adding this value to the asset's Auto LOD bias value.
---@field public LODs TArray<FHairLODSettings> @Reduce the number of hair strands in a uniform manner
local FHairGroupsLOD = {}
