---@class UAnimSharingStateInstance : UAnimInstance
---@field protected AnimationToPlay UAnimSequence
---@field protected PermutationTimeOffset number
---@field protected PlayRate number
---@field protected bStateBool boolean
---@field private Instance UAnimSharingInstance
local UAnimSharingStateInstance = {}

---@param Actors TArray_AActor_ @[out] 
function UAnimSharingStateInstance:GetInstancedActors(Actors) end

