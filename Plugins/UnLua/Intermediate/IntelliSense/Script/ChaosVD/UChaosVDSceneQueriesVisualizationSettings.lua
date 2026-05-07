---@class UChaosVDSceneQueriesVisualizationSettings : UChaosVDVisualizationSettingsObjectBase
---@field public bShowText boolean @If true, any debug draw text available will be drawn
---@field public DepthPriority integer @The depth priority used for while drawing. Can be World or Foreground (with this one the shapes representing the query will be drawn on top of the geometry and be always visible)
---@field public CurrentVisualizationMode EChaosVDSQFrameVisualizationMode
---@field private GlobalSceneQueriesVisualizationFlags integer @Set of flags to enable/disable visualization of specific scene queries data as debug draw
local UChaosVDSceneQueriesVisualizationSettings = {}

