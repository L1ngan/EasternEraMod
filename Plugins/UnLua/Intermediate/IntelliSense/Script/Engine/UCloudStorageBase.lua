---Base class for the various platform interface classes.
---@class UCloudStorageBase : UPlatformInterfaceBase
---@field public LocalCloudFiles TArray<string> @When using local storage (aka "cloud emulation"), this maintains a list of the file paths.
---@field public bSuppressDelegateCalls boolean @If true, delegate callbacks should be skipped.
local UCloudStorageBase = {}

