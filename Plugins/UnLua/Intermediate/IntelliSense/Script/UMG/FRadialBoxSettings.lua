---@class FRadialBoxSettings
---@field public StartingAngle number @At what angle will we place the first element of the wheel?
---@field public bDistributeItemsEvenly boolean @Distribute Items evenly in the whole circle. Checking this option ignores AngleBetweenItems
---@field public AngleBetweenItems number @Amount of Euler degrees that separate each item. Only used when bDistributeItemsEvenly is false
---@field public SectorCentralAngle number @If we need a section of a radial (for example half-a-radial) we can define a central angle < 360 (180 in case of half-a-radial). Used when bDistributeItemsEvenly is enabled.
local FRadialBoxSettings = {}
