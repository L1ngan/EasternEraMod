---@class UAnimGraphNode_StateResult : UAnimGraphNode_Base
---@field public Node FAnimNode_StateResult
---@field public StateEntryFunction FMemberReference @Function called when the owning state is entered, meaning it becomes the state machine's current state.
---@field public StateFullyBlendedInFunction FMemberReference @Function called when the owning state is fully blended in. Notes: - This is only called for the state machine's current state since its the most recent transition's target state. - This will not be called if the state is skipped. This can happen when the flag bSkipFirstUpdateTransition on the state machine node is set to true.
---@field public StateExitFunction FMemberReference @Function called when the owning state is exited, meaning it stops being the state machine's current state. Notes: - This will not be called if the state machine node loses relevancy. Please use "On State Interrupt" for that case.
---@field public StateFullyBlendedOutFunction FMemberReference @Function called when the owning state is fully blended out. Notes: - This will be called for any states that had weight. - This will not be called if the state is skipped. This can happen when the flag bSkipFirstUpdateTransition on the state machine node is set to true. - This will not be called if the state machine node loses relevancy. Please use "On State Interrupt" for that case.
local UAnimGraphNode_StateResult = {}

