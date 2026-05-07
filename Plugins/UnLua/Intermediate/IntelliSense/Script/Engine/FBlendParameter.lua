---@class FBlendParameter
---@field public DisplayName string
---@field public Min number @Minimum value for this axis range.
---@field public Max number @Maximum value for this axis range.
---@field public GridNum integer @The number of grid divisions along this axis.
---@field public bSnapToGrid boolean @If true then samples will always be snapped to the grid on this axis when added, moved, or the axes are changed.
---@field public bWrapInput boolean @If true then the input can go outside the min/max range and the blend space is treated as being cyclic on this axis. If false then input parameters are clamped to the min/max values on this axis.
local FBlendParameter = {}
