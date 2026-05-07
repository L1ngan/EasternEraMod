---* Captured state tree execution frame that can be cached for recording purposes.
---* Held in FRecordedStateTreeTransitionResult for its NextActiveFrames.
---@class FRecordedStateTreeExecutionFrame
---@field public StateTree UStateTree @The State Tree used for ticking this frame.
---@field public RootState FStateTreeStateHandle @The root state of the frame (e.g. Root state or a subtree).
---@field public ActiveStates FStateTreeActiveStates @Active states in this frame.
---@field public bIsGlobalFrame boolean @If true, the global tasks of the State Tree should be handle in this frame.
local FRecordedStateTreeExecutionFrame = {}
