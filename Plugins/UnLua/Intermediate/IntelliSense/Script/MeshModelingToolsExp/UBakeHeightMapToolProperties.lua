---@class UBakeHeightMapToolProperties : UInteractiveToolPropertySet
---@field public HeightRangeMode EBakeHeightRangeMode @The coordinate space to compute height
---@field public InnerDistance number @The inner height map distance from the low poly mesh, in object space units. This value maps to black.
---@field public OuterDistance number @The outer height map distance from the low poly mesh, in object space units. This value maps to white.
---@field public InnerBoundsDistance number @The inner height map distance from the low poly mesh, as a ratio of the maximum bounding box axis. This value maps to black.
---@field public OuterBoundsDistance number @The outer height map distance from the low poly mesh, as a ratio of the maximum bounding box axis. This value maps to white.
local UBakeHeightMapToolProperties = {}

