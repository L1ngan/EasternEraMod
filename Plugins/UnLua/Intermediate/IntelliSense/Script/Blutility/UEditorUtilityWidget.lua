---@class UEditorUtilityWidget : UUserWidget
---@field protected TabDisplayName string @The display name for tabs spawned with this widget
---@field protected HelpText string
---@field protected bAlwaysReregisterWithWindowsMenu boolean @Should this widget always be re-added to the windows menu once it's opened
---@field protected bAutoRunDefaultAction boolean @Should this blueprint automatically run OnDefaultActionClicked, or should it open up a details panel to edit properties and/or offer multiple buttons
---@field protected bRunEditorUtilityOnStartup boolean @Run this editor utility on start-up (after asset discovery)?
local UEditorUtilityWidget = {}

---The default action called when the widget is invoked if bAutoRunDefaultAction=true (it is never called otherwise)
function UEditorUtilityWidget:Run() end

---@param WidgetName string
---@return UWidget
function UEditorUtilityWidget:FindChildWidgetByName(WidgetName) end

