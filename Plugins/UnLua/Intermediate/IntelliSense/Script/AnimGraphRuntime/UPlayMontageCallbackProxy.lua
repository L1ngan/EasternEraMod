---@class UPlayMontageCallbackProxy : UObject
---@field public OnCompleted MulticastDelegate @Called when Montage finished playing and wasn't interrupted
---@field public OnBlendOut MulticastDelegate @Called when Montage starts blending out and is not interrupted
---@field public OnInterrupted MulticastDelegate @Called when Montage has been interrupted (or failed to play)
---@field public OnNotifyBegin MulticastDelegate
---@field public OnNotifyEnd MulticastDelegate
local UPlayMontageCallbackProxy = {}

---@param NotifyName string
---@param BranchingPointNotifyPayload FBranchingPointNotifyPayload
function UPlayMontageCallbackProxy:OnNotifyEndReceived(NotifyName, BranchingPointNotifyPayload) end

---@param NotifyName string
---@param BranchingPointNotifyPayload FBranchingPointNotifyPayload
function UPlayMontageCallbackProxy:OnNotifyBeginReceived(NotifyName, BranchingPointNotifyPayload) end

---@param Montage UAnimMontage
---@param bInterrupted boolean
function UPlayMontageCallbackProxy:OnMontageEnded(Montage, bInterrupted) end

---@param Montage UAnimMontage
---@param bInterrupted boolean
function UPlayMontageCallbackProxy:OnMontageBlendingOut(Montage, bInterrupted) end

---Called to perform the query internally
---@param InSkeletalMeshComponent USkeletalMeshComponent
---@param MontageToPlay UAnimMontage
---@param PlayRate number @[opt] 
---@param StartingPosition number @[opt] 
---@param StartingSection string @[opt] 
---@param bShouldStopAllMontages boolean @[opt] 
---@return UPlayMontageCallbackProxy
function UPlayMontageCallbackProxy.CreateProxyObjectForPlayMontage(InSkeletalMeshComponent, MontageToPlay, PlayRate, StartingPosition, StartingSection, bShouldStopAllMontages) end

