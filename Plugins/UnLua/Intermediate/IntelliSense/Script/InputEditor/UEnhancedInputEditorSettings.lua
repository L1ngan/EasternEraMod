---A collection of useful individual user settings when using the EnhancedInputEditorSubsystem.
---@class UEnhancedInputEditorSettings : UDeveloperSettingsBackedByCVars
---@field public bLogAllInput boolean @If true then the Enhanced Input Editor subsystem will log all input that is being processed by it (keypresses, analog values, etc) Note: This can produce A LOT of logs, so only use this if you are debugging something.
---@field public bAutomaticallyStartConsumingInput boolean @If true, then the UEnhancedInputEditorSubsystem will be started when it is initalized
---@field public VisibleEventPinsByDefault integer @A bitmask of what event pins are visible when you place an Input Action event node in blueprints.
local UEnhancedInputEditorSettings = {}

