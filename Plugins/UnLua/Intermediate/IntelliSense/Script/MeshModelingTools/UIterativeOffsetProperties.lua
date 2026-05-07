---Properties for Iterative Offsetting
---@class UIterativeOffsetProperties : UInteractiveToolPropertySet
---@field public Steps integer @Number of Offsetting iterations
---@field public bOffsetBoundaries boolean @Control whether the boundary is allowed to move
---@field public SmoothingPerStep number @Amount of smoothing applied per Offset step
---@field public bReprojectSmooth boolean @Reproject smooth vertices onto non-smoothed Offset Surface at each step (expensive but better-preserves uniform distance)
local UIterativeOffsetProperties = {}

