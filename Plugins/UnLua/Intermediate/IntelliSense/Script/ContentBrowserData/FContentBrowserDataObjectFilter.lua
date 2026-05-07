---Data used to filter object instances by their name and tags.
---@class FContentBrowserDataObjectFilter
---@field public ObjectNamesToInclude TArray<string> @Array of object names that should be included in this query
---@field public ObjectNamesToExclude TArray<string> @Array of object names that should be excluded from this query
---@field public bOnDiskObjectsOnly boolean @Whether we should only include on-disk objects (ignoring those that exist only in memory)
local FContentBrowserDataObjectFilter = {}
