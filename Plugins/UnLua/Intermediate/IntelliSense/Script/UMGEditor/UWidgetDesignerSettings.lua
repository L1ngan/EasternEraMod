---Implements the settings for the Widget Blueprint Designer.
---@class UWidgetDesignerSettings : UDeveloperSettings
---@field public GridSnapEnabled boolean @If enabled, actor positions will snap to the grid.
---@field public GridSnapSize integer
---@field public bLockToPanelOnDragByDefault boolean
---@field public DefaultPreviewResolution FUintVector2 @The default preview resolution in the designer.
---@field public bShowOutlines boolean @Should the designer show outlines by default?
---@field public bExecutePreConstructEvent boolean @Should the designer run the design event?  Disable this if you're seeing crashes in the designer, you may have some unsafe code running in the designer.
---@field public bRespectLocks boolean @Should the designer respect locked widgets?  If true, the designer by default will not allow you to select locked widgets in the designer view.
---@field public CreateOnCompile integer @Setting to automatically create compile tab based on compile results
---@field public DismissOnCompile integer @Setting to automatically dismiss compile tab based on compile results
---@field public Favorites UWidgetPaletteFavorites @List of Favorites widgets used to populate the Favorites Palette
local UWidgetDesignerSettings = {}

