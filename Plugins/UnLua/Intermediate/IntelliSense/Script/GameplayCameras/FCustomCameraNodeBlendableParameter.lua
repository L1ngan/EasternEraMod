---Describes a custom camera blendable parameter.
---@class FCustomCameraNodeBlendableParameter
---@field public ParameterName string @The name of the parameter.
---@field public ParameterType ECameraVariableType @The type of the parameter.
---@field public BlendableStructType UScriptStruct @The struct type of a blendable struct.
---@field public OverrideVariableID FCameraVariableID @An optional camera variable ID for dynamically driving the parameter's value.
---@field public OverrideVariable UCameraVariableAsset @An optional user-defined camera variable for dynamically driving the parameter's value.
local FCustomCameraNodeBlendableParameter = {}
