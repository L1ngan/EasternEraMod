---@class URevolveSplineToolProperties : URevolveProperties
---@field public SampleMode ERevolveSplineSampleMode @Determines how points to revolve are actually picked from the spline.
---@field public ErrorTolerance number @How far to allow the triangulation boundary can deviate from the spline curve before we add more vertices.
---@field public MaxSampleDistance number @The maximal distance that the spacing should be allowed to be.
---@field public CapFillMode ERevolvePropertiesCapFillMode @Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed.
---@field public bClosePathToAxis boolean @Connect the ends of an open path to the axis to add caps to the top and bottom of the revolved result. This is not relevant for paths that are already closed.
---@field public AxisOrigin FVector @Sets the revolution axis origin.
---@field public AxisOrientation FVector2D @Sets the revolution axis pitch and yaw.
---@field public bResetAxisOnStart boolean @If true, the revolution axis is re-fit to the input spline on each tool start. If false, the previous revolution axis is kept.
local URevolveSplineToolProperties = {}

