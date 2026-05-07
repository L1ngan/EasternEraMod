---Returns the item's siblings
---@class FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
---@field public Item FRigElementKey
---@field public bIncludeItem boolean
---@field public Siblings FRigElementKeyCollection
---@field public CachedItem FCachedRigElement @Used to cache the internally used item
---@field public CachedSiblings FRigElementKeyCollection @Used to cache the internally used siblings
local FRigUnit_HierarchyGetSiblings = {}
