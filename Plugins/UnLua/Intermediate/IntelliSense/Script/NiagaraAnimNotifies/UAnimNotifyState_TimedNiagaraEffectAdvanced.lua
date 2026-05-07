---Same as Timed Niagara Effect but also provides some more advanced abilities at an additional cost.
---@class UAnimNotifyState_TimedNiagaraEffectAdvanced : UAnimNotifyState_TimedNiagaraEffect
---@field public bEnableNormalizedNotifyProgress boolean @This send a 0-1 value of the normalized progress to the FX Component to the float User Parameter.
---@field public bApplyRateScaleToProgress boolean @Should we apply the animation rate scale when calculating the elasped time.
---@field public NotifyProgressUserParameter string @The name of your niagara user variable you would like to send the normalized notify progress to.
---@field public AnimCurves TArray<FCurveParameterPair> @Array of fnames to map Anim Curve names to Niagara Parameters.
local UAnimNotifyState_TimedNiagaraEffectAdvanced = {}

---Returns a 0 to 1 value for the progress of this component along the notify.
---@param MeshComp UMeshComponent
---@return number
function UAnimNotifyState_TimedNiagaraEffectAdvanced:GetNotifyProgress(MeshComp) end

