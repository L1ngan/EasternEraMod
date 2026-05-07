---@class ANiagaraActor : AActor
---@field private NiagaraComponent UNiagaraComponent @Pointer to System component
---@field private SpriteComponent UBillboardComponent @Reference to sprite visualization component
---@field private ArrowComponent UArrowComponent @Reference to arrow visualization component
---@field private bDestroyOnSystemFinish boolean @True for this actor to self-destruct when the Niagara system finishes, false otherwise
local ANiagaraActor = {}

---Set true for this actor to self-destruct when the Niagara system finishes, false otherwise
---@param bShouldDestroyOnSystemFinish boolean
function ANiagaraActor:SetDestroyOnSystemFinish(bShouldDestroyOnSystemFinish) end

---Callback when Niagara system finishes.
---@param FinishedComponent UNiagaraComponent
function ANiagaraActor:OnNiagaraSystemFinished(FinishedComponent) end

---Returns true if the system will destroy on finish
---@return boolean
function ANiagaraActor:GetDestroyOnSystemFinish() end

