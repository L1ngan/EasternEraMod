---Struct to help hold information about packages needing to be fully-loaded for DLC, etc.
---@class FFullyLoadedPackagesInfo
---@field public FullyLoadType integer @When to load these packages
---@field public Tag string @When this map or gametype is loaded, the packages in the following array will be loaded and added to root, then removed from root when map is unloaded
---@field public PackagesToLoad TArray<string> @The list of packages that will be fully loaded when the above Map is loaded
---@field public LoadedObjects TArray<UObject> @List of objects that were loaded, for faster cleanup
local FFullyLoadedPackagesInfo = {}
