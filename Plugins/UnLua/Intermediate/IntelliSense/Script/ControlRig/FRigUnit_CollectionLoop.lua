---Given a collection of items, execute iteratively across all items in a given collection
---@class FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
---@field public BlockToRun string
---@field public Collection FRigElementKeyCollection
---@field public Item FRigElementKey
---@field public Index integer
---@field public Count integer
---@field public Ratio number @Ranging from 0.0 (first item) and 1.0 (last item) This is useful to drive a consecutive node with a curve or an ease to distribute a value.
---@field public Completed FControlRigExecuteContext
local FRigUnit_CollectionLoop = {}
