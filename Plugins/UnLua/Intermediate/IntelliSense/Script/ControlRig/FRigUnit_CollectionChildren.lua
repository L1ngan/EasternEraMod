---Creates a collection based on the direct or recursive children
---of a provided parent item. Returns an empty collection for an invalid parent item.
---@class FRigUnit_CollectionChildren : FRigUnit_CollectionBase
---@field public Parent FRigElementKey
---@field public bIncludeParent boolean
---@field public bRecursive boolean
---@field public TypeToSearch ERigElementType
---@field public Collection FRigElementKeyCollection
local FRigUnit_CollectionChildren = {}
