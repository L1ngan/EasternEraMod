---General non-core CVD settings
---@class UChaosVDMiscSettings : UChaosVDSettingsObjectBase
---@field public RecentFiles TArray<FChaosVDRecentFile> @List of recently opened files
---@field public MaxRecentFilesNum integer @Maximum number of recent files we can keep track of
---@field public DataChannelEnabledState TMap<string, boolean> @Saved data channel enabled state
local UChaosVDMiscSettings = {}

