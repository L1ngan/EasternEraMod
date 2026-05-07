---Data used to filter object instances by their package.
---@class FContentBrowserDataPackageFilter
---@field public PackageNamesToInclude TArray<string> @Array of package names that should be included in this query
---@field public PackageNamesToExclude TArray<string> @Array of package names that should be excluded from this query
---@field public PackagePathsToInclude TArray<string> @Array of package paths that should be included in this query
---@field public PackagePathsToExclude TArray<string> @Array of package paths that should be excluded from this query
---@field public bRecursivePackagePathsToInclude boolean @Whether we should include inclusive package sub-paths in this query
---@field public bRecursivePackagePathsToExclude boolean @Whether we should include exclusive package sub-paths in this query
local FContentBrowserDataPackageFilter = {}
