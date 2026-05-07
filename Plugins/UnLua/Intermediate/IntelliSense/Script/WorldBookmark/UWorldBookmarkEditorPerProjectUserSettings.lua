---@class UWorldBookmarkEditorPerProjectUserSettings : UDeveloperSettings
---@field public bEnableDefaultBookmarks boolean @When enabled, the default bookmark will be applied when loading a level
---@field public bEnableHomeBookmark boolean @When enabled, the home bookmark will be applied when starting the editor without specifying a map
---@field public HomeBookmark TSoftObjectPtr<UWorldBookmark> @Bookmark to be applied when starting the editor without specifying a map
local UWorldBookmarkEditorPerProjectUserSettings = {}

