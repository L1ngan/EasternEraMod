---@class URevolveBoundaryToolProperties : URevolveProperties
---@field public CapFillMode ERevolvePropertiesCapFillMode @Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed.
---@field public bDisplayInputMesh boolean @If true, displays the original mesh in addition to the revolved boundary.
---@field public AxisOrigin FVector @Sets the revolution axis origin.
---@field public AxisOrientation FVector2D @Sets the revolution axis pitch and yaw.
local URevolveBoundaryToolProperties = {}

