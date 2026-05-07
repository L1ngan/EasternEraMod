---Holds the settings for the AGameNetworkManager class.
---@class UGameNetworkManagerSettings : UObject
---@field public MinDynamicBandwidth integer @Minimum bandwidth dynamically set per connection.
---@field public MaxDynamicBandwidth integer @Maximum bandwidth dynamically set per connection.
---@field public TotalNetBandwidth integer @Total available bandwidth for listen server, split dynamically across net connections.
---@field public BadPingThreshold integer @The point we determine the server is either delaying packets or has bad upstream.
---@field public bIsStandbyCheckingEnabled boolean @Used to determine if checking for standby cheats should occur.
---@field public StandbyRxCheatTime number @The amount of time without packets before triggering the cheat code.
---@field public StandbyTxCheatTime number @The amount of time without packets before triggering the cheat code.
---@field public PercentMissingForRxStandby number @The percentage of clients missing RX data before triggering the standby code.
---@field public PercentMissingForTxStandby number @The percentage of clients missing TX data before triggering the standby code.
---@field public PercentForBadPing number @The percentage of clients with bad ping before triggering the standby code.
---@field public JoinInProgressStandbyWaitTime number @The amount of time to wait before checking a connection for standby issues.
local UGameNetworkManagerSettings = {}

