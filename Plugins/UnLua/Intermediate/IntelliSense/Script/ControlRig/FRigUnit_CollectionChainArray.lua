---Creates an item array based on a first and last item within a chain.
---Chains can refer to bone chains or chains within a control hierarchy.
---@class FRigUnit_CollectionChainArray : FRigUnit_CollectionBase
---@field public FirstItem FRigElementKey
---@field public LastItem FRigElementKey
---@field public Reverse boolean
---@field public Items TArray<FRigElementKey>
local FRigUnit_CollectionChainArray = {}
