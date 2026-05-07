---Returns the item's children
---@class FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
---@field public Parent FRigElementKey
---@field public bIncludeParent boolean
---@field public bRecursive boolean
---@field public Children FRigElementKeyCollection
---@field public CachedParent FCachedRigElement @Used to cache the internally used parent
---@field public CachedChildren FRigElementKeyCollection @Used to cache the internally used children
local FRigUnit_HierarchyGetChildren = {}
