---@class UAnimationSharingStateProcessor : UObject
---@field public AnimationStateEnum TSoftObjectPtr<UEnum>
local UAnimationSharingStateProcessor = {}

---@param OutState integer @[out] 
---@param InActor AActor
---@param CurrentState integer
---@param OnDemandState integer
---@param bShouldProcess boolean @[out] 
function UAnimationSharingStateProcessor:ProcessActorState(OutState, InActor, CurrentState, OnDemandState, bShouldProcess) end

---@return UEnum
function UAnimationSharingStateProcessor:GetAnimationStateEnum() end

