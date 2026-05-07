---A filter used to control what is returned from Content Browser data queries.
---@class FContentBrowserDataFilter
---@field public bRecursivePaths boolean @Whether we should include sub-paths in this query
---@field public ItemTypeFilter EContentBrowserItemTypeFilter @Flags controlling which item types should be included in this query
---@field public ItemCategoryFilter EContentBrowserItemCategoryFilter @Flags controlling which item categories should be included in this query
---@field public ItemAttributeFilter EContentBrowserItemAttributeFilter @Flags controlling which item attributes should be included in this query
local FContentBrowserDataFilter = {}
