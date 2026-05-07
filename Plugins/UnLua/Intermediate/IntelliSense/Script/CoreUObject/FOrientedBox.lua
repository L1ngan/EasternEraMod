---Structure for arbitrarily oriented boxes (i.e. not necessarily axis-aligned).
---@class FOrientedBox
---@field public Center FVector @Holds the center of the box.
---@field public AxisX FVector @Holds the x-axis vector of the box. Must be a unit vector.
---@field public AxisY FVector @Holds the y-axis vector of the box. Must be a unit vector.
---@field public AxisZ FVector @Holds the z-axis vector of the box. Must be a unit vector.
---@field public ExtentX number @Holds the extent of the box along its x-axis.
---@field public ExtentY number @Holds the extent of the box along its y-axis.
---@field public ExtentZ number @Holds the extent of the box along its z-axis.
local FOrientedBox = {}
