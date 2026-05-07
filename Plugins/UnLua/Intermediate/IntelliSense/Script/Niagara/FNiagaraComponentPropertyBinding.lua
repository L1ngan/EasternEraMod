---@class FNiagaraComponentPropertyBinding
---@field public AttributeBinding FNiagaraVariableAttributeBinding
---@field public PropertyName string @Actual name of the property we are bound to
---@field public PropertyType FNiagaraTypeDefinition @Type of the target property (used for auto-conversion)
---@field public MetadataSetterName string @(Optional) name of the property setter as defined in the metadata
---@field public PropertySetterParameterDefaults TMap<string, string> @(Optional) If we have a setter with more than one parameter, this holds the default values of any optional function parameters
local FNiagaraComponentPropertyBinding = {}
