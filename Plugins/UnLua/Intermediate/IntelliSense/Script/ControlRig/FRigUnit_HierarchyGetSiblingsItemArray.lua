---Returns the item's siblings
---@class FRigUnit_HierarchyGetSiblingsItemArray : FRigUnit_HierarchyBase
---@field public Item FRigElementKey
---@field public bIncludeItem boolean
---@field public bDefaultSiblings boolean @When true, it will return all siblings, regardless of whether the parent is active or not. When false, will return only the siblings which are influenced by the same parent
---@field public Siblings TArray<FRigElementKey>
---@field public CachedItem FCachedRigElement @Used to cache the internally used item
---@field public CachedSiblings FRigElementKeyCollection @Used to cache the internally used siblings
local FRigUnit_HierarchyGetSiblingsItemArray = {}
