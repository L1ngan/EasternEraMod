---@class UChaosVDGenericDebugDrawSettings : UChaosVDVisualizationSettingsObjectBase
---@field public bShowDebugText boolean @If true, any debug draw text available will be drawn
---@field public DepthPriority integer @The depth priority used for while drawing data. Can be World or Foreground (with this one the shapes will be drawn on top of the geometry and be always visible)
---@field public BaseThickness number @Thickness to apply to any debug draw shape controlled by this setting.
---@field private DebugDrawFlags integer @Set of flags to enable/disable visualization of debug draw data shapes
local UChaosVDGenericDebugDrawSettings = {}

