---Struct used as a model to expose relevant lists via details view.
---@class FPluginPaths_External
---@field public AdditionalPluginDirectories TArray<FDirectoryPath> @Stored in the .uproject descriptor.
---@field public UserPluginDirectories TArray<FDirectoryPath>
---@field public CommandLineDirectories TArray<FDirectoryPath> @Specified via the -PLUGIN= command line switch; cannot be modified here.
---@field public EnvironmentDirectories TArray<FDirectoryPath> @Specified via the UE_ADDITIONAL_PLUGIN_PATHS environment variable; cannot be modified here.
local FPluginPaths_External = {}
