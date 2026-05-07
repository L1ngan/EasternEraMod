---Returns the namespace of a given item. This may be an empty string if the item doesn't have a namespace.
---@class FRigUnit_GetItemNameSpace : FRigUnit_RigModulesBase
---@field public Item FRigElementKey @* The key of the item to return the namespace for
---@field public HasNameSpace boolean @* True if the item has a valid namespace
---@field public NameSpace string @* The namespace of the item
local FRigUnit_GetItemNameSpace = {}
