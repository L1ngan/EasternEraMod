---@class UActorSoundParameterInterface : UInterface
local UActorSoundParameterInterface = {}

---Overrides logic for gathering AudioParameters to set by default when an AudioComponent/ActiveSound plays with a given actor as its Owner.
---@param Params TArray_FAudioParameter_ @[out] 
function UActorSoundParameterInterface:GetActorSoundParams(Params) end

