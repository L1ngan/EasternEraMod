---Base actor for preview actors used in UNiagaraPreviewAxis.
---@class ANiagaraPreviewBase : AActor
local ANiagaraPreviewBase = {}

---AActor Interface End
---@param InSystem UNiagaraSystem
function ANiagaraPreviewBase:SetSystem(InSystem) end

---@param InXAxisText string
---@param InYAxisText string
function ANiagaraPreviewBase:SetLabelText(InXAxisText, InYAxisText) end

