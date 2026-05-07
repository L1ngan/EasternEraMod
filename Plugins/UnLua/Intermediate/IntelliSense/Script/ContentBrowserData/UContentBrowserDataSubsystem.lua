---Subsystem that provides access to Content Browser data.
---This type deals with the composition of multiple data sources, which provide information about the folders and files available in the Content Browser.
---@class UContentBrowserDataSubsystem : UEditorSubsystem
---@field private EnabledDataSources TArray<string> @Array of data source names that should be activated when available.
local UContentBrowserDataSubsystem = {}

---Get the items (folders and/or files) that exist under the given virtual path.
---@param InPath string
---@param InFilter FContentBrowserDataFilter
---@return TArray_FContentBrowserItem_
function UContentBrowserDataSubsystem:GetItemsUnderPath(InPath, InFilter) end

---Get the items (folders and/or files) that exist at the given virtual path.
---@param InPath string
---@param InItemTypeFilter EContentBrowserItemTypeFilter
---@return TArray_FContentBrowserItem_
function UContentBrowserDataSubsystem:GetItemsAtPath(InPath, InItemTypeFilter) end

---Get the first item (folder and/or file) that exists at the given virtual path.
---@param InPath string
---@param InItemTypeFilter EContentBrowserItemTypeFilter
---@return FContentBrowserItem
function UContentBrowserDataSubsystem:GetItemAtPath(InPath, InItemTypeFilter) end

---Get the list of current available data sources.
---@return TArray_string_
function UContentBrowserDataSubsystem:GetAvailableDataSources() end

---Get the list of current active data sources.
---@return TArray_string_
function UContentBrowserDataSubsystem:GetActiveDataSources() end

---Attempt to deactivate the named data source.
---@param Name string
---@return boolean
function UContentBrowserDataSubsystem:DeactivateDataSource(Name) end

---Deactivate all active data sources.
function UContentBrowserDataSubsystem:DeactivateAllDataSources() end

---Attempt to activate the named data source.
---@param Name string
---@return boolean
function UContentBrowserDataSubsystem:ActivateDataSource(Name) end

---Activate all available data sources.
function UContentBrowserDataSubsystem:ActivateAllDataSources() end

