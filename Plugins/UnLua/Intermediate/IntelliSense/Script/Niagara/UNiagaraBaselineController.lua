---Base class for baseline controllers. These can are responsible for spawning and manipulating the FX needed for the baseline perf tests.
---@class UNiagaraBaselineController : UObject
---@field public TestDuration number @Duration to gather performance stats for the given system.
---@field public EffectType UNiagaraEffectType @The effect type this controller is in use by.
---@field public Owner ANiagaraPerfBaselineActor @The owning actor for this baseline controller.
---@field private System TSoftObjectPtr<UNiagaraSystem> @The baseline system to spawn.
local UNiagaraBaselineController = {}

---Returns whether the baseline test is complete.
---@return boolean
function UNiagaraBaselineController:OnTickTest() end

---Called when the owning actor is ticked.
---@param DeltaTime number
function UNiagaraBaselineController:OnOwnerTick(DeltaTime) end

---Called from the stats system on completion of the test with the final stats for the given system asset.
---@param Stats FNiagaraPerfBaselineStats
function UNiagaraBaselineController:OnEndTest(Stats) end

---Called from the stats system when we begin gathering stats for the given System asset.
function UNiagaraBaselineController:OnBeginTest() end

---Returns the System for this baseline. Will synchronously load the system if needed.
---@return UNiagaraSystem
function UNiagaraBaselineController:GetSystem() end

