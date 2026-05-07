---Returns the item's parents
---@class FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
---@field public Child FRigElementKey
---@field public bIncludeChild boolean
---@field public bReverse boolean
---@field public Parents FRigElementKeyCollection
---@field public CachedChild FCachedRigElement @Used to cache the internally used child
---@field public CachedParents FRigElementKeyCollection @Used to cache the internally used parents
local FRigUnit_HierarchyGetParents = {}
