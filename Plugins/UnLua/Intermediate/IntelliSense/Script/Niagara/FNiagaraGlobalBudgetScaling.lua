---@class FNiagaraGlobalBudgetScaling
---@field public bCullByGlobalBudget boolean @Controls whether global budget based culling is enabled.
---@field public bScaleMaxDistanceByGlobalBudgetUse boolean @Controls whether we scale down the MaxDistance based on the global budget use. Allows us to increase aggression of culling when performance is poor.
---@field public bScaleMaxInstanceCountByGlobalBudgetUse boolean @Controls whether we scale down the system instance counts by global budget usage. Allows us to increase aggression of culling when performance is poor.
---@field public bScaleSystemInstanceCountByGlobalBudgetUse boolean @Controls whether we scale down the effect type instance counts by global budget usage. Allows us to increase aggression of culling when performance is poor.
---@field public MaxGlobalBudgetUsage number @Effects will be culled if the global budget usage exceeds this fraction. A global budget usage of 1.0 means current global FX workload has reached it's max budget. Budgets are set by CVars under FX.Budget...
---@field public MaxDistanceScaleByGlobalBudgetUse FNiagaraLinearRamp @When enabled, MaxDistance is scaled down by the global budget use based on this curve. Allows us to cull more aggressively when performance is poor.
---@field public MaxInstanceCountScaleByGlobalBudgetUse FNiagaraLinearRamp @When enabled, Max Effect Type Instances is scaled down by the global budget use based on this curve. Allows us to cull more aggressively when performance is poor.
---@field public MaxSystemInstanceCountScaleByGlobalBudgetUse FNiagaraLinearRamp @When enabled, Max System Instances is scaled down by the global budget use based on this curve. Allows us to cull more aggressively when performance is poor.
local FNiagaraGlobalBudgetScaling = {}
