---Transition request
---@class FStateTreeTransitionRequest
---@field public TargetState FStateTreeStateHandle @Target state of the transition.
---@field public Priority EStateTreeTransitionPriority @Priority of the transition.
---@field public Fallback EStateTreeSelectionFallback @Fallback of the transition if it fails to select the target state
---@field public SourceStateTree UStateTree @StateTree asset that was active when the transition was requested. Filled in by the StateTree execution context.
---@field public SourceRootState FStateTreeStateHandle @Root state the execution frame where the transition was requested. Filled in by the StateTree execution context.
---@field public SourceState FStateTreeStateHandle @Source state of the transition. Filled in by the StateTree execution context.
local FStateTreeTransitionRequest = {}
