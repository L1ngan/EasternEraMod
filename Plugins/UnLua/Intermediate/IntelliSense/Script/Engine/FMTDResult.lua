---Structure containing information about minimum translation direction (MTD)
---@class FMTDResult
---@field public Direction FVector @Normalized direction of the minimum translation required to fix penetration.
---@field public Distance number @Distance required to move along the MTD vector (Direction).
local FMTDResult = {}
