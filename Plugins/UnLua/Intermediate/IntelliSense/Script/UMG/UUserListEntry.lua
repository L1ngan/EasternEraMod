---@class UUserListEntry : UInterface
local UUserListEntry = {}

---Called when the selection state of the item represented by this entry changes.
---@param bIsSelected boolean
function UUserListEntry:BP_OnItemSelectionChanged(bIsSelected) end

---Called when the expansion state of the item represented by this entry changes. Tree view entries only.
---@param bIsExpanded boolean
function UUserListEntry:BP_OnItemExpansionChanged(bIsExpanded) end

---Called when this entry is released from the owning table and no longer represents any list item
function UUserListEntry:BP_OnEntryReleased() end

