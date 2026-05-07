---FBrushToolRadius is used to define the size of 3D "brushes" used in (eg) sculpting tools.
---The brush size can be defined in various ways.
---@class FBrushToolRadius
---@field public SizeType EBrushToolSizeType @Specify the type of brush size currently in use
---@field public AdaptiveSize number @Adaptive brush size is used to interpolate between an object-specific minimum and maximum brush size
---@field public WorldRadius number @World brush size is a dimension in world coordinates
---@field public bToolSupportsPressureSensitivity boolean
---@field public bEnablePressureSensitivity boolean
local FBrushToolRadius = {}
