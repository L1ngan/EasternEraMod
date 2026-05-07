---@class FOptimusParameterBinding
---@field public Name FOptimusValidatedName
---@field public DataType FOptimusDataTypeRef
---@field public DataDomain FOptimusDataDomain
---@field public bSupportAtomicIfCompatibleDataType boolean @Int type resource can optionally support atomic writes, memory is zero-initialized
---@field public bSupportRead boolean @Optionally support both read and write
local FOptimusParameterBinding = {}
