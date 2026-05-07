---@class FBakedAnimationStateMachine
---@field public MachineName string @Name of this machine (primarily for debugging purposes)
---@field public InitialState integer @Index of the initial state that the machine will start in
---@field public States TArray<FBakedAnimationState> @List of all states this machine can be in
---@field public Transitions TArray<FAnimationTransitionBetweenStates> @List of all transitions between states
local FBakedAnimationStateMachine = {}
