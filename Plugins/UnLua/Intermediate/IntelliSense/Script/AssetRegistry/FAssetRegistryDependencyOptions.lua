---namespace UE::AssetRegistry
---@class FAssetRegistryDependencyOptions
---@field public bIncludeSoftPackageReferences boolean @Dependencies which don't need to be loaded for the object to be used (i.e. soft object paths)
---@field public bIncludeHardPackageReferences boolean @Dependencies which are required for correct usage of the source asset, and must be loaded at the same time
---@field public bIncludeSearchableNames boolean @References to specific SearchableNames inside a package
---@field public bIncludeSoftManagementReferences boolean @Indirect management references, these are set through recursion for Primary Assets that manage packages or other primary assets
---@field public bIncludeHardManagementReferences boolean @Reference that says one object directly manages another object, set when Primary Assets manage things explicitly
local FAssetRegistryDependencyOptions = {}
