---Settings controlling how geometry is selected
---@class UFractureSelectionSettings : UFractureToolSettings
---@field public MouseSelectionMethod EMouseSelectionMethod
---@field public VolumeSelectionMethod EVolumeSelectionMethod @What values to use when filtering by volume.  Note all values are presented as cube roots to give more intuitive scales (e.g., to select bones with volume less than a 10x10x10 cube, choose CubeRootOfVolume and MaxVolume=10, rather than needing to multiply out to 1000)
---@field public SelectionOperation ESelectionOperation @How to update the selection from the filter
---@field public MinVolume number @Sets the minimum volume (as computed by the Volume Selection Method) that should be included in the filter
---@field public MaxVolume number @Sets the maximum volume (as computed by the Volume Selection Method) that should be included in the filter
---@field public MinVolumeFrac number @Sets the minimum volume (as computed by the Volume Selection Method) that should be included in the filter
---@field public MaxVolumeFrac number @Sets the maximum volume (as computed by the Volume Selection Method) that should be included in the filter
---@field public KeepFraction number @Fraction of bones to keep in the selection: If less than 1, bones will be randomly excluded from the selection filter
---@field public RandomSeed integer @Seed to use for randomization when deciding which bones to keep w/ the Keep Fraction
local UFractureSelectionSettings = {}

