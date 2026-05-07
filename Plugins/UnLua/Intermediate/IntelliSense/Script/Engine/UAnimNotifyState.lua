---@class UAnimNotifyState : UObject
---@field public NotifyColor FColor @Color of Notify in editor
---@field public bShouldFireInEditor boolean @Whether this notify state instance should fire in animation editors
local UAnimNotifyState = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param FrameDeltaTime number
---@param EventReference FAnimNotifyEventReference
---@return boolean
function UAnimNotifyState:Received_NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference) end

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param EventReference FAnimNotifyEventReference
---@return boolean
function UAnimNotifyState:Received_NotifyEnd(MeshComp, Animation, EventReference) end

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration number
---@param EventReference FAnimNotifyEventReference
---@return boolean
function UAnimNotifyState:Received_NotifyBegin(MeshComp, Animation, TotalDuration, EventReference) end

---Implementable event to get a custom name for the notify
---@return string
function UAnimNotifyState:GetNotifyName() end

---TriggerWeightThreshold to use when creating notifies of this type
---@return number
function UAnimNotifyState:GetDefaultTriggerWeightThreshold() end

