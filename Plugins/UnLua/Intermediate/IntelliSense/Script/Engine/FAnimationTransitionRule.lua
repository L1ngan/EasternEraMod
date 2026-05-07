---This structure represents a baked transition rule inside a state
---@class FAnimationTransitionRule
---@field public RuleToExecute string
---@field public TransitionReturnVal boolean @What RuleToExecute must return to take transition (for bidirectional transitions)
---@field public TransitionIndex integer
local FAnimationTransitionRule = {}
