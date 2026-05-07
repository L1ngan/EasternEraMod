---@class UNiagaraParticleCallbackHandler : UInterface
local UNiagaraParticleCallbackHandler = {}

---This function is called once per tick with the gathered particle data. It will not be called if there is no particle data to call it with.
---@param Data TArray_FBasicParticleData_
---@param NiagaraSystem UNiagaraSystem
---@param SimulationPositionOffset FVector
function UNiagaraParticleCallbackHandler:ReceiveParticleData(Data, NiagaraSystem, SimulationPositionOffset) end

