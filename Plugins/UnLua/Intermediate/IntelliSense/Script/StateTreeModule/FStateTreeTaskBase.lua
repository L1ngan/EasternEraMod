---Base struct for StateTree Tasks.
---Tasks are logic executed in an active state.
---@class FStateTreeTaskBase : FStateTreeNodeBase
---@field public bTaskEnabled boolean @True if the node is Enabled (i.e. not explicitly disabled in the asset).
---@field public TransitionHandlingPriority EStateTreeTransitionPriority
---@field public bConsideredForCompletion boolean @True if the task is considered for completion. False if the task runs in the background without affecting the state completion.
---@field public bCanEditConsideredForCompletion boolean @True if the user can edit bConsideredForCompletion in the editor.
local FStateTreeTaskBase = {}
