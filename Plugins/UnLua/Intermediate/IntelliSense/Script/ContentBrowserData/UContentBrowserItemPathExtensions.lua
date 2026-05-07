---@class UContentBrowserItemPathExtensions : UBlueprintFunctionLibrary
local UContentBrowserItemPathExtensions = {}

---Set the path being stored
---@param ItemPath FContentBrowserItemPath @[out] 
---@param InPath string
---@param InPathType EContentBrowserPathType
function UContentBrowserItemPathExtensions.SetPath(ItemPath, InPath, InPathType) end

---@param InPath string
---@param InPathType EContentBrowserPathType
---@return FContentBrowserItemPath
function UContentBrowserItemPathExtensions.MakeContentBrowserItemPath(InPath, InPathType) end

---Returns virtual path as FName (eg, "/All/Plugins/PluginA/MyFile").
---@param ItemPath FContentBrowserItemPath
---@return string
function UContentBrowserItemPathExtensions.GetVirtualPath(ItemPath) end

---Returns internal path if there is one (eg,. "/PluginA/MyFile").
---@param ItemPath FContentBrowserItemPath
---@return string
function UContentBrowserItemPathExtensions.GetInternalPath(ItemPath) end

---@param ItemPath FContentBrowserItemPath
---@param VirtualPath string @[out] 
---@param InternalPath string @[out] 
function UContentBrowserItemPathExtensions.BreakContentBrowserItemPath(ItemPath, VirtualPath, InternalPath) end

