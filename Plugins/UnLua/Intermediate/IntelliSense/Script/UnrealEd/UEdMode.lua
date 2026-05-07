---Base class for all editor modes.
---@class UEdMode : UObject
---@field private ModeToolsContext UEdModeInteractiveToolsContext @The ToolsContext for this Mode, created as a child of the EditorToolsContext (shares InputRouter)
---@field protected SettingsClass TSoftClassPtr<UObject>
---@field protected SettingsObject UObject
local UEdMode = {}

