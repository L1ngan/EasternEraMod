---@class FNiagaraVariableAttributeBinding
---@field protected RootVariable FNiagaraVariable @The namespace and default value explicitly set by the user. If meant to be derived from the source mode, it will be without a namespace.
---@field protected ParamMapVariable FNiagaraVariableBase @The fully expressed namespace for the variable. If an emitter namespace, this will include the Emitter's unique name.
---@field protected DataSetName string @The version of the namespace to be found in an attribute table lookup. I.e. without Particles or Emitter.
---@field protected BoundVariable FNiagaraVariable @Old variable brought in from previous setup. Generally ignored other than postload work.
---@field protected CachedDisplayName string
---@field protected BindingSourceMode integer @Captures the state of the namespace when the variable is set. Allows us to make later decisions about how to reconstititue the namespace.
---@field protected bBindingExistsOnSource boolean @Determine if this varible is accessible by the associated emitter passed into CacheValues.
---@field protected bIsCachedParticleValue boolean @When CacheValues is called, was this a particle attribute?
local FNiagaraVariableAttributeBinding = {}
