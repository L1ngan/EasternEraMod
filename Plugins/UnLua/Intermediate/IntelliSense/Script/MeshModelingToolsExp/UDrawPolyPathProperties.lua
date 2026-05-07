---@class UDrawPolyPathProperties : UInteractiveToolPropertySet
---@field public WidthMode EDrawPolyPathWidthMode @How the drawn path width gets set
---@field public Width number @Width of the drawn path when using Fixed width mode; also shows the width in Interactive width mode
---@field public bRoundedCorners boolean @Use arc segments instead of straight lines in corners
---@field public RadiusMode EDrawPolyPathRadiusMode @How the rounded corner radius gets set
---@field public CornerRadius number @Radius of the corner arcs, as a fraction of path width. This is only available if Rounded Corners is enabled.
---@field public RadialSlices integer @Number of radial subdivisions for rounded corners
---@field public bSinglePolyGroup boolean @If true, all quads on the path will belong to the same polygon. If false, each quad gets its own polygon.
---@field public ExtrudeMode EDrawPolyPathExtrudeMode @If and how the drawn path gets extruded
---@field public ExtrudeHeight number @Extrusion distance when using the Fixed extrude modes; also shows the distance in Interactive extrude modes
---@field public RampStartRatio number @Height of the start of the ramp as a fraction of the Extrude Height property
local UDrawPolyPathProperties = {}

