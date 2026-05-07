---@class UUserObjectListEntry : UUserListEntry
local UUserObjectListEntry = {}

---Called when this entry is assigned a new item object to represent by the owning list view
---@param ListItemObject UObject
function UUserObjectListEntry:OnListItemObjectSet(ListItemObject) end

---Called when the selection state of the item represented by this entry changes.
---@param bIsSelected boolean
function UUserObjectListEntry:BP_OnItemSelectionChanged(bIsSelected) end

---Called when the expansion state of the item represented by this entry changes. Tree view entries only.
---@param bIsExpanded boolean
function UUserObjectListEntry:BP_OnItemExpansionChanged(bIsExpanded) end

---Called when this entry is released from the owning table and no longer represents any list item
function UUserObjectListEntry:BP_OnEntryReleased() end

