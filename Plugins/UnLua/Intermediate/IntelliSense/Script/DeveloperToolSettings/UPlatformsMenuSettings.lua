---@class UPlatformsMenuSettings : UObject
---@field public StagingDirectory FDirectoryPath @The directory to which the packaged project will be copied.
---@field public LaunchOnTarget string @Name of the target to use for LaunchOn (only Game/Client targets)
---@field private PerPlatformBuildConfig TMap<string, EProjectPackagingBuildConfigurations> @Per platform build configuration
---@field private PerPlatformTargetFlavorName TMap<string, string> @Per platform flavor cooking target
---@field private PerPlatformArchitecture TMap<string, string> @Per platform architecture
---@field private PerPlatformBuildTarget TMap<string, string> @Per platform build target
local UPlatformsMenuSettings = {}

