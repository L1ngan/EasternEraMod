---@class UFabSettings : UObject
---@field public Environment EFabEnvironment @Frontend used by the Fab plugin (reopen the tab to see the change)
---@field public CustomUrl string @URL used when the [Fab (custom)] frontend is selected
---@field public CustomAuthToken string @Custom auth token used when it's non empty
---@field public bEnableDebugOptions boolean @Enable chrome debug options - default is false
---@field public CacheDirectoryPath FDirectoryPath @Path to the local library
---@field public CacheDirectorySize string @Cache directory
---@field public ProductFormatsSectionSubText string @The preferred format will always be selected, if not available, the best available format for the product will be chosen.
---@field public PreferredDefaultFormat EFabPreferredFormats @Preferred default format
---@field public PreferredQualityTier EFabPreferredQualityTier @Preferred default quality for MS assets
local UFabSettings = {}

