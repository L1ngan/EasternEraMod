---Base class for defining escalation state configuration.
---Subclass and override 'InitConfigDefaultsInternal' to initialize EscalationSeverity and bEnabled (and other custom config variables).
---@class UEscalationManagerConfig : UStatePerObjectConfig
---@field public EscalationSeverity TArray<string> @Names of the different states for escalating severity, depending on conditions for each state
local UEscalationManagerConfig = {}

