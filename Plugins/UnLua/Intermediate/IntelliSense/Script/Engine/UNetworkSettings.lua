---Network settings.
---@class UNetworkSettings : UDeveloperSettings
---@field public bVerifyPeer boolean @If true, libcurl authenticates the peer's certificate. Disable to allow self-signed certificates.
---@field public bEnableMultiplayerWorldOriginRebasing boolean @If true, origin rebasing is enabled in multiplayer games, meaning that servers and clients can have different local world origins.
---@field public NetworkEmulationProfiles TArray<FNetworkEmulationProfileDescription> @This lists the common network emulation profiles that will be selectable in PIE settings
local UNetworkSettings = {}

