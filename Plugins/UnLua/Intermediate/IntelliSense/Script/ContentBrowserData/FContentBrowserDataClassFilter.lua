---Data used to filter object instances by their class.
---@class FContentBrowserDataClassFilter
---@field public ClassNamesToInclude TArray<string> @Array of class names that should be included in this query
---@field public ClassNamesToExclude TArray<string> @Array of class names that should be excluded from this query
---@field public bRecursiveClassNamesToInclude boolean @Whether we should include inclusive sub-classes in this query
---@field public bRecursiveClassNamesToExclude boolean @Whether we should include exclusive sub-classes in this query
local FContentBrowserDataClassFilter = {}
