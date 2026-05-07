---@class UNiagaraStatelessModule_DecalAttributes : UNiagaraStatelessModule
---@field public bApplyOrientation boolean
---@field public bApplySize boolean
---@field public bApplyFade boolean
---@field public Orientation FNiagaraDistributionVector3
---@field public OrientationCoordinateSpace ENiagaraCoordinateSpace
---@field public Size FNiagaraDistributionVector3
---@field public Fade FNiagaraDistributionFloat
local UNiagaraStatelessModule_DecalAttributes = {}

---@return boolean
function UNiagaraStatelessModule_DecalAttributes:IsOrientationEnabled() end

