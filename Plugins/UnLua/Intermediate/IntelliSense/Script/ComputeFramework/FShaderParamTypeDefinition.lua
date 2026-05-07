---Fully describes the name and type of a parameter a shader exposes.
---@class FShaderParamTypeDefinition
---@field public TypeDeclaration string
---@field public Name string
---@field public ValueType FShaderValueTypeHandle @The value type for this definition.
---@field public ArrayElementCount integer
---@field public BindingType EShaderParamBindingType @0 indicates not an array. >= 1 indicates an array
---@field public ResourceType EShaderResourceType
---@field public Modifier EShaderParamModifier
local FShaderParamTypeDefinition = {}
