---@class URevolveToolProperties : URevolveProperties
---@field public CapFillMode ERevolvePropertiesCapFillMode @Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed.
---@field public bClosePathToAxis boolean @Connect the ends of an open path to the axis to add caps to the top and bottom of the revolved result. This is not relevant for paths that are already closed.
---@field public DrawPlaneOrigin FVector @Sets the draw plane origin. The revolution axis is the X axis in the plane.
---@field public DrawPlaneOrientation FRotator @Sets the draw plane orientation. The revolution axis is the X axis in the plane.
---@field public bEnableSnapping boolean @Enables snapping while editing the path.
---@field public bAllowedToEditDrawPlane boolean @Not user visible- used to disallow draw plane modification.
local URevolveToolProperties = {}

