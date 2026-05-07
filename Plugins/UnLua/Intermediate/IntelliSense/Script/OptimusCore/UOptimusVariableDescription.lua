---@class UOptimusVariableDescription : UObject
---@field public Guid FGuid @An identifier that uniquely identifies this variable
---@field public VariableName string @Name of the variable
---@field public DataType FOptimusDataTypeRef @The data type of the variable
---@field public DefaultValueStruct FOptimusValueContainerStruct @The default value for the variable.
---@field public CachedShaderValue FShaderValueContainer @Runtime container for variable values in a deformer instance
local UOptimusVariableDescription = {}

