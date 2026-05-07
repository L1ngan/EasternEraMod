---This validation rule can be used to enforce a budget on the number of simulation stages and the iterations that may execute.
---@class UNiagaraValidationRule_SimulationStageBudget : UNiagaraValidationRule
---@field public bMaxSimulationStagesEnabled boolean
---@field public bMaxIterationsPerStageEnabled boolean
---@field public bMaxTotalIterationsEnabled boolean
---@field public Severity ENiagaraValidationSeverity @How do we want to repro the error in the stack
---@field public MaxSimulationStages integer @Maximum number of simulation stages allowed, where 0 means no simulation stages.
---@field public MaxIterationsPerStage integer @Maximum number of iterations a single stage is allowed to execute. Note: Can only check across explicit counts, dynamic bindings will be ignored.
---@field public MaxTotalIterations integer @Maximum total iterations across all the enabled simulation stages. Note: Can only check across explicit counts, dynamic bindings will be ignored.
local UNiagaraValidationRule_SimulationStageBudget = {}

