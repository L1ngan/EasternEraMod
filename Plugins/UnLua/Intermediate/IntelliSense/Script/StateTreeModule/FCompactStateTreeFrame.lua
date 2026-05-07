---Runtime representation of a StateTree frame.
---@class FCompactStateTreeFrame
---@field public RootState FStateTreeStateHandle @The root state of the frame (e.g. Root state or a subtree).
---@field public NumberOfTasksStatusMasks integer @The max number of masks needed by the frame. It is the worst case of all the possible active state combinations for the frame. It includes the global tasks.
local FCompactStateTreeFrame = {}
