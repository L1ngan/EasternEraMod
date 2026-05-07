---Settings to use when determining if a package should be included/excluded from the
---content virtualization process.
---@class UVirtualizationFilterSettings : UObject
---@field public ExcludePackagePaths TArray<string> @A list of package paths that we should always prevent being virtualized . Each path can either be a full package path to a specific package or it can be a path to a directory, in which case all packages under that directory (and subdirectories) will be excluded from the virtualization process.
---@field public IncludePackagePaths TArray<string> @A list of package paths that we should always attempt to virtualize. Each path can either be a full package path to a specific package or it can be a path to a directory, in which case all packages under that directory (and subdirectories) will be included in the virtualization process.
local UVirtualizationFilterSettings = {}

