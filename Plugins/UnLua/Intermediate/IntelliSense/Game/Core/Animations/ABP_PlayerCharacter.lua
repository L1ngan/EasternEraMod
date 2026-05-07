---@class ABP_PlayerCharacter_C : UAnimInstance
---@field public __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field public AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field public AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field public AnimGraphNode_Root FAnimNode_Root
---@field public AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field public AnimGraphNode_BlendListByInt FAnimNode_BlendListByInt
---@field public AnimGraphNode_SequencePlayer_2 FAnimNode_SequencePlayer
---@field public AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field public AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field public AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field public AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field public AnimGraphNode_StateResult FAnimNode_StateResult
---@field public AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field public Direction number
---@field public Speed number
---@field public IsDead boolean
---@field public DeathAnimIndex integer
---@field public N integer
---@field public A FVector
---@field public B FVector
---@field public C FVector
local ABP_PlayerCharacter_C = {}

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function ABP_PlayerCharacter_C:GetModuleName() end

---@param AnimGraph FPoseLink @[out] 
function ABP_PlayerCharacter_C:AnimGraph(AnimGraph) end

