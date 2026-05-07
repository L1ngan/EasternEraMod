---@class ULevelInstanceEditorSettings : UDeveloperSettings
---@field public TemplateMapInfos TArray<FTemplateMapInfo> @List of info for all known LevelInstance template maps
---@field public LevelInstanceClassName string
---@field public bEnableStreaming boolean @Create World Partition Level Instances with Streaming Enabled/Disabled by default
---@field public bIsEditInPlaceStreamingEnabled boolean @Allow Editing Level Instances with Streaming Enabled
local ULevelInstanceEditorSettings = {}

