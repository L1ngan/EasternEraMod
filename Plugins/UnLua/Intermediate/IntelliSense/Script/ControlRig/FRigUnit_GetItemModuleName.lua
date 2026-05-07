---Returns the namespace of a given item. This may be an empty string if the item doesn't have a namespace.
---@class FRigUnit_GetItemModuleName : FRigUnit_RigModulesBase
---@field public Item FRigElementKey @* The key of the item to return the module for
---@field public IsPartOfModule boolean @* True if the item is part of a module
---@field public Module string @* The name of the module of the given item
local FRigUnit_GetItemModuleName = {}
