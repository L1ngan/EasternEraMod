---Similar to ListView, but can display a hierarchical tree of elements.
---The base items source for the tree identifies the root items, each of which can have n associated child items.
---There is no hard limit to the nesting - child items can have children and so on
---To make a widget usable as an entry in a TreeView, it must inherit from the IUserObjectListEntry interface.
---@class UTreeView : UListView
---@field private BP_OnGetItemChildren Delegate @Called to get the list of children (if any) that correspond to the given item. Only called if the native C++ version of the event is not bound.
---@field private BP_OnItemExpansionChanged MulticastDelegate
local UTreeView = {}

---Attempts to expand/collapse the given item (only relevant if the item has children)
---@param Item UObject
---@param bExpandItem boolean
function UTreeView:SetItemExpansion(Item, bExpandItem) end

---Expands all items with children
function UTreeView:ExpandAll() end

---Collapses all currently expanded items
function UTreeView:CollapseAll() end

