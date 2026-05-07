---Play indicated AnimationAsset on Pawn controlled by BT
---Note that this node is generic and is handing multiple special cases,
---If you want a more efficient solution you'll need to implement it yourself (or wait for our BTTask_PlayCharacterAnimation)
---@class UBTTask_PlayAnimation : UBTTaskNode
---@field public AnimationToPlay FValueOrBBKey_Object @Animation asset to play. Note that it needs to match the skeleton of pawn this BT is controlling
---@field public bLooping FValueOrBBKey_Bool
---@field public bNonBlocking FValueOrBBKey_Bool @if true the task will just trigger the animation and instantly finish. Fire and Forget.
---@field public MyOwnerComp UBehaviorTreeComponent
---@field public CachedSkelMesh USkeletalMeshComponent
local UBTTask_PlayAnimation = {}

