---Base struct for collection parameters
---@class FCollectionParameterBase
---@field public ParameterName string @The name of the parameter.  Changing this name will break any blueprints that reference the parameter.
---@field public Id FGuid @Uniquely identifies the parameter, used for fixing up materials that reference this parameter when renaming.
local FCollectionParameterBase = {}
