---Returns true if the given item has been created by this module,
---which means that the item's namespace is the module namespace.
---@class FRigUnit_IsItemInCurrentNameSpace : FRigUnit_RigModulesBase
---@field public Item FRigElementKey @* The key of the item to return the namespace for
---@field public Result boolean @* True if the item is in this namespace / owned by this module.
local FRigUnit_IsItemInCurrentNameSpace = {}
