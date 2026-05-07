---Configure settings for the 2D Level Editor
---@class ULevelEditor2DSettings : UDeveloperSettings
---@field public bEnable2DWidget boolean @If enabled, shows the 2D combined translate and rotate tool in the viewport toolbar.
---@field public bEnableSnapLayers boolean @If enabled, shows the 2D layer snapping controls in the viewport toolbar.
---@field public SnapAxis ELevelEditor2DAxis @Sets the world space axis for 2D snap layers.
---@field public SnapLayers TArray<FMode2DLayer> @Snap layers that are displayed in the viewport toolbar.
local ULevelEditor2DSettings = {}

