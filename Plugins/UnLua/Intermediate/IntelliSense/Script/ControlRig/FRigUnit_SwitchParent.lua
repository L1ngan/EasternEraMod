---Switches an element to a new parent.
---@class FRigUnit_SwitchParent : FRigUnit_DynamicHierarchyBaseMutable
---@field public Mode ERigSwitchParentMode @Depending on this the child will switch to the world,        * back to its default or to the item provided by the Parent pin
---@field public Child FRigElementKey @The child to switch to a new parent
---@field public Parent FRigElementKey @The optional parent to switch to. This is only used if the mode is set to 'Parent Item'
---@field public bMaintainGlobal boolean @If set to true the item will maintain its global transform,        * otherwise it will maintain local
local FRigUnit_SwitchParent = {}
