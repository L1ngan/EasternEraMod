---Creates an item array based on the direct or recursive children
---of a provided parent item. Returns an empty array for an invalid parent item.
---@class FRigUnit_CollectionChildrenArray : FRigUnit_CollectionBase
---@field public Parent FRigElementKey
---@field public bIncludeParent boolean
---@field public bRecursive boolean
---@field public bDefaultChildren boolean @When true, it will return all children, regardless of whether the parent is active or not. When false, will return only the children which are influenced by this parent
---@field public TypeToSearch ERigElementType
---@field public Items TArray<FRigElementKey>
local FRigUnit_CollectionChildrenArray = {}
