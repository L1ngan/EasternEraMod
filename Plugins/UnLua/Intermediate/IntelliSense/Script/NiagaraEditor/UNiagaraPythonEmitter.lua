---Wrapper for an emitter stack.
---@class UNiagaraPythonEmitter : UObject
local UNiagaraPythonEmitter = {}

---sets the new emitter properties
---@param Data FVersionedNiagaraEmitterData
function UNiagaraPythonEmitter:SetProperties(Data) end

---returns true if the emitter contains a certain module
---@param ModuleName string
---@return boolean
function UNiagaraPythonEmitter:HasModule(ModuleName) end

---returns the emitter properties, such as determinism or interpolated spawning
---@return FVersionedNiagaraEmitterData
function UNiagaraPythonEmitter:GetProperties() end

---Returns the raw underlying object
---@return UNiagaraEmitter
function UNiagaraPythonEmitter:GetObject() end

---returns a list of all modules contained in this emitter
---@return TArray_UNiagaraPythonModule_
function UNiagaraPythonEmitter:GetModules() end

---returns a module by name
---@param ModuleName string
---@return UNiagaraPythonModule
function UNiagaraPythonEmitter:GetModule(ModuleName) end

