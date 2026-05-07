---Base class for 2d and 3d primitive objects which support line drawing,
---intended to be used as part of 3D Gizmos.
---@class UGizmoElementLineBase : UGizmoElementBase
---@field protected LineRenderAttributes FGizmoElementLineRenderStateAttributes @Line render state attributes for this element
---@field protected LineThickness number @Line thickness when rendering lines, must be >= 0.0, value of 0.0 will render thinnest line
---@field protected bScreenSpaceLine boolean @Whether line thickness is in screen space
---@field protected HoverLineThicknessMultiplier number @Multiplier applied to line thickness when hovering
---@field protected InteractLineThicknessMultiplier number @Multiplier applied to line thickness when interacting
local UGizmoElementLineBase = {}

