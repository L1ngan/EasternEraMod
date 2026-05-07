---Settings object for Solver Tracks configuration
---@class UChaosVDSolverTrackSettings : UChaosVDSettingsObjectBase
---@field public SyncMode EChaosVDSyncTimelinesMode @Sync mode used to keep all timelines in sync during playback. Not: Not all solver tracks support all modes. When an unsupported mode is selected, the default mode, RecordedTimestamp, will be used
local UChaosVDSolverTrackSettings = {}

