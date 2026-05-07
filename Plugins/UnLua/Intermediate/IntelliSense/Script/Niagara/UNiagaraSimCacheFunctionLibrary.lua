---@class UNiagaraSimCacheFunctionLibrary : UBlueprintFunctionLibrary
local UNiagaraSimCacheFunctionLibrary = {}

---Captures the simulation cache object that can be captured into using the various API calls.
---@param WorldContextObject UObject
---@return UNiagaraSimCache
function UNiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache(WorldContextObject) end

---Captures the simulations current frame data into the SimCache.
---This happens immediately so you may need to be careful with tick order of the component you are capturing from.
---The return can be invalid if the component can not be captured for some reason (i.e. not active).
---When AdvanceSimulation is true we will manually advance the simulation one frame using the provided AdvanceDeltaTime before capturing.
---@param SimCache UNiagaraSimCache
---@param CreateParameters FNiagaraSimCacheCreateParameters
---@param NiagaraComponent UNiagaraComponent
---@param OutSimCache UNiagaraSimCache @[out] 
---@param bAdvanceSimulation boolean @[opt] 
---@param AdvanceDeltaTime number @[opt] 
---@return boolean
function UNiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate(SimCache, CreateParameters, NiagaraComponent, OutSimCache, bAdvanceSimulation, AdvanceDeltaTime) end

