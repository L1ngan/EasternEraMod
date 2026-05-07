---Simple object intended to be used as part of 3D Gizmos.
---Draws a solid 3D cylinder based on parameters.
---@class UGizmoElementBox : UGizmoElementBase
---@field protected Center FVector @Location of center of box
---@field protected Dimensions FVector @Box dimensions
---@field protected UpDirection FVector @Box up axis, corresponds to Z dimension
---@field protected SideDirection FVector @Box side axis, corresponds to Y dimension
local UGizmoElementBox = {}

