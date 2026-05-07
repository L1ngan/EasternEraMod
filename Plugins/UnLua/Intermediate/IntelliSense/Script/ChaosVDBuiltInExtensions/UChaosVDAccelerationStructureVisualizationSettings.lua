---Settings object that stores the values that control how acceleration structures are debug drawn
---@class UChaosVDAccelerationStructureVisualizationSettings : UChaosVDVisualizationSettingsObjectBase
---@field public DepthPriority integer @The depth priority used for while drawing contact data. Can be World or Foreground (with this one the shapes will be drawn on top of the geometry and be always visible)
---@field public BaseThickness number @The base thickness used to draw node bounds
---@field private AccelerationStructureDataVisualizationFlags integer
local UChaosVDAccelerationStructureVisualizationSettings = {}

