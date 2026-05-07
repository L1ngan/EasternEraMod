---Represents a single input mapping context and the priority that it should be applied with
---@class FDefaultContextSetting
---@field public InputMappingContext TSoftObjectPtr<UInputMappingContext> @Input Mapping Context that should be Added to the EnhancedInputEditorSubsystem when it starts listening for input
---@field public Priority integer @The prioirty that should be given to this mapping context when it is added
---@field public bAddImmediately boolean @If true, then this IMC will be applied immediately when the EI subsystem is ready
---@field public bRegisterWithUserSettings boolean @If true, then this IMC will be registered with the User Input Settings (if one is available) immediately when the Enhanced Input subsystem starts.
local FDefaultContextSetting = {}
