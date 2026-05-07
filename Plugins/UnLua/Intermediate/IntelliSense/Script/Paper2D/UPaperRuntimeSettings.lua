---Implements the settings for the Paper2D plugin.
---@class UPaperRuntimeSettings : UObject
---@field public bEnableSpriteAtlasGroups boolean @Enables experimental *incomplete and unsupported* texture atlas groups that sprites can be assigned to
---@field public bEnableTerrainSplineEditing boolean @Enables experimental *incomplete and unsupported* 2D terrain spline editing. Note: You need to restart the editor when enabling this setting for the change to fully take effect.
---@field public bResizeSpriteDataToMatchTextures boolean @Enables automatic resizing of various sprite data that is authored in texture space if the source texture gets resized (sockets, the pivot, render and collision geometry, etc...)
local UPaperRuntimeSettings = {}

