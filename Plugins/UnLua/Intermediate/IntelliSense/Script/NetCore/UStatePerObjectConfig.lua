---Base class for loading and initializing state configuration
---@class UStatePerObjectConfig : UObject
---@field private PerObjectConfigSection string @Overrides the config section name, using the CDO
---@field public bEnabled boolean @Whether or not this state configuration instance is enabled (states will not load, if not)
local UStatePerObjectConfig = {}

