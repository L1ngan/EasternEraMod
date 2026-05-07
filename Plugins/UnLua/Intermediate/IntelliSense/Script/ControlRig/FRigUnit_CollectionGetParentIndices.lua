---Returns an array of relative parent indices for each item. Several options here
---a) If an item has multiple parents the major parent (based on the weights) will be returned.
---b) If an item has a parent that's not part of the collection INDEX_NONE will be returned.
---c) If an item has a parent that's not part of the collection, but a grand parent is we'll use that index instead.
---@class FRigUnit_CollectionGetParentIndices : FRigUnit_CollectionBase
---@field public Collection FRigElementKeyCollection
---@field public ParentIndices TArray<integer>
local FRigUnit_CollectionGetParentIndices = {}
