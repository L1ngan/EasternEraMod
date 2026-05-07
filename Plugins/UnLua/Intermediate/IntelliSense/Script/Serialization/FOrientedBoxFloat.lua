---Float (Non LWC) version of FOrientedBox since the float version doesn't exist yet
---@class FOrientedBoxFloat
---@field public Center FVector3f @Holds the center of the box.
---@field public AxisX FVector3f @Holds the x-axis vector of the box. Must be a unit vector.
---@field public AxisY FVector3f @Holds the y-axis vector of the box. Must be a unit vector.
---@field public AxisZ FVector3f @Holds the z-axis vector of the box. Must be a unit vector.
---@field public ExtentX number @Holds the extent of the box along its x-axis.
---@field public ExtentY number @Holds the extent of the box along its y-axis.
---@field public ExtentZ number @Holds the extent of the box along its z-axis.
local FOrientedBoxFloat = {}
