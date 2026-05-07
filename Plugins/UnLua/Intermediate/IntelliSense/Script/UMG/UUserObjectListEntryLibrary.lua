---Static library to supply "for free" functionality to widgets that implement IUserListEntry
---@class UUserObjectListEntryLibrary : UBlueprintFunctionLibrary
local UUserObjectListEntryLibrary = {}

---Returns the item in the owning list view that this entry is currently assigned to represent.
---@param UserObjectListEntry TScriptInterface_UUserObjectListEntry_
---@return UObject
function UUserObjectListEntryLibrary.GetListItemObject(UserObjectListEntry) end

