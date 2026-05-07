---Settings for the Enhanced Input Editor Subsystem that are persistent between a project's users
---@class UEnhancedInputEditorProjectSettings : UDeveloperSettings
---@field public DefaultEditorInputClass TSoftClassPtr<UEnhancedPlayerInput> @The default player input class that the Enhanced Input Editor subsystem will use.
---@field public DefaultMappingContexts TArray<FDefaultContextSetting> @Array of any input mapping contexts that you want to always be applied to the Enhanced Input Editor Subsystem.
local UEnhancedInputEditorProjectSettings = {}

