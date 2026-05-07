---Describes a custom camera data parameter.
---@class FCustomCameraNodeDataParameter
---@field public ParameterName string @The name of the parameter.
---@field public ParameterType ECameraContextDataType @The type of the parameter.
---@field public ParameterContainerType ECameraContextDataContainerType @The type of the parameter container.
---@field public ParameterTypeObject UObject @An extra type object for the parameter.
---@field public OverrideDataID FCameraContextDataID @An optional context data ID for dynamically driving the parameter's value.
local FCustomCameraNodeDataParameter = {}
