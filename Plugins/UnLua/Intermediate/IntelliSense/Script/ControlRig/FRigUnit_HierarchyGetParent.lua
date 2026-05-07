---Returns the item's parent
---@class FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
---@field public Child FRigElementKey
---@field public bDefaultParent boolean @When true, it will return the default parent, regardless of whether the parent incluences the element or not
---@field public Parent FRigElementKey
---@field public CachedChild FCachedRigElement @Used to cache the internally used child
---@field public CachedParent FCachedRigElement @Used to cache the internally used parent
local FRigUnit_HierarchyGetParent = {}
