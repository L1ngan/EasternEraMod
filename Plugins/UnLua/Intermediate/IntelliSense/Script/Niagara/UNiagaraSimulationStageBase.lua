---A base class for niagara simulation stages.  This class should be derived to add stage specific information.
---@class UNiagaraSimulationStageBase : UNiagaraMergeable
---@field public Script UNiagaraScript
---@field public SimulationStageName string
---@field public bEnabled boolean
---@field public OuterEmitterVersion FGuid
local UNiagaraSimulationStageBase = {}

