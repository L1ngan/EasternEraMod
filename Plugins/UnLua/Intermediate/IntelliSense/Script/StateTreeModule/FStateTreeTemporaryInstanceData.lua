---Holds temporary instance data created during state selection.
---The data is identified by Frame (StateTree + RootState) and DataHandle.
---@class FStateTreeTemporaryInstanceData
---@field public DataHandle FStateTreeDataHandle
---@field public OwnerNodeIndex FStateTreeIndex16
---@field public Instance FInstancedStruct
---@field public StateTree UStateTree
---@field public RootState FStateTreeStateHandle
local FStateTreeTemporaryInstanceData = {}
