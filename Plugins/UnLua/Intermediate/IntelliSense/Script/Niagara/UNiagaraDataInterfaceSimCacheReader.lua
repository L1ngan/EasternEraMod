---Data interface to read properties from a Niagara Simulation Cache
---@class UNiagaraDataInterfaceSimCacheReader : UNiagaraDataInterface
---@field public SimCacheBinding FNiagaraUserParameterBinding @User parameter Object binding if this is not a valid sim cache the default one will be used instead.
---@field public SimCache UNiagaraSimCache @Optional source SimCache to use, if the user parameter binding is valid this will be ignored.
---@field public EmitterBinding string @Which Emitter we should read from within the SimCache.
local UNiagaraDataInterfaceSimCacheReader = {}

