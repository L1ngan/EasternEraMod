---Static library to supply "for free" functionality to widgets that implement IUserListEntry
---@class UUserListEntryLibrary : UBlueprintFunctionLibrary
local UUserListEntryLibrary = {}

---Returns true if the item represented by this entry is currently selected in the owning list view.
---@param UserListEntry TScriptInterface_UUserListEntry_
---@return boolean
function UUserListEntryLibrary.IsListItemSelected(UserListEntry) end

---Returns true if the item represented by this entry is currently expanded and showing its children. Tree view entries only.
---@param UserListEntry TScriptInterface_UUserListEntry_
---@return boolean
function UUserListEntryLibrary.IsListItemExpanded(UserListEntry) end

---Returns the list view that contains this entry.
---@param UserListEntry TScriptInterface_UUserListEntry_
---@return UListViewBase
function UUserListEntryLibrary.GetOwningListView(UserListEntry) end

