---TODO: Script API exposure
---@class UContentBrowserItemLibrary : UBlueprintFunctionLibrary
local UContentBrowserItemLibrary = {}

---@param Item FContentBrowserItem
---@return boolean
function UContentBrowserItemLibrary.IsFolder(Item) end

---@param Item FContentBrowserItem
---@return boolean
function UContentBrowserItemLibrary.IsFile(Item) end

---@param Item FContentBrowserItem
---@return string
function UContentBrowserItemLibrary.GetVirtualPath(Item) end

---@param Item FContentBrowserItem
---@return string
function UContentBrowserItemLibrary.GetDisplayName(Item) end

