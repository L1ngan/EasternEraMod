---@class FAnimationState : FAnimationStateBase
---@field public Transitions TArray<FAnimationTransitionRule> @Set of legal transitions out of this state; already in priority order
---@field public StateRootNodeIndex integer @The root node index (into the AnimNodeProperties array of the UAnimBlueprintGeneratedClass)
---@field public StartNotify integer @The index of the notify to fire when this state is first entered (weight within the machine becomes non-zero)
---@field public EndNotify integer @The index of the notify to fire when this state is finished exiting (weight within the machine becomes zero)
---@field public FullyBlendedNotify integer @The index of the notify to fire when this state is fully entered (weight within the machine becomes one)
local FAnimationState = {}
