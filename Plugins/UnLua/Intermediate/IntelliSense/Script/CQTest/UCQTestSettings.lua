---Implements per project Engine settings for the CQTest plugin.
---@class UCQTestSettings : UDeveloperSettingsBackedByCVars
---@field public CommandTimeout number @Timeout for WaitUntil latent actions.
---@field public NetworkTimeout number @Timeout for WaitUntil latent actions from the PIENetworkComponent.
---@field public MapTestTimeout number @Timeout for `FMapTestSpawner::AddWaitUntilLoadedCommand` latent action used during UWorld loading.
local UCQTestSettings = {}

