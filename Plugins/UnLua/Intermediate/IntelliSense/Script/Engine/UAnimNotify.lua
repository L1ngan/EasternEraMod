---@class UAnimNotify : UObject
---@field public NotifyColor FColor @Color of Notify in editor
---@field public bShouldFireInEditor boolean @Whether this notify instance should fire in animation editors
local UAnimNotify = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param EventReference FAnimNotifyEventReference
---@return boolean
function UAnimNotify:Received_Notify(MeshComp, Animation, EventReference) end

---Implementable event to get a custom name for the notify
---@return string
function UAnimNotify:GetNotifyName() end

---TriggerWeightThreshold to use when creating notifies of this type
---@return number
function UAnimNotify:GetDefaultTriggerWeightThreshold() end

