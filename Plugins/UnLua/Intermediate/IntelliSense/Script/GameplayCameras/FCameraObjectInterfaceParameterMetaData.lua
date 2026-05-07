---Metadata for a referenced camera object's interface parameters.
---@class FCameraObjectInterfaceParameterMetaData
---@field public ParameterGuid FGuid @The GUID of the parameter.
---@field public OverrideVariableID FCameraVariableID @The ID to use for overriding a blendable parameter.
---@field public OverrideDataID FCameraContextDataID @The ID to use for overriding a data parameter.
---@field public bIsOverridden boolean @Whether this parameter has an override value.
---@field public bIsAnimated boolean @Whether this parameter is being animated.
local FCameraObjectInterfaceParameterMetaData = {}
