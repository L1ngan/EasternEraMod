---@class UTcpMessagingSettings : UObject
---@field private EnableTransport boolean @Whether the TCP transport channel is enabled
---@field private ListenEndpoint string @The IP endpoint to listen for incoming connections. The format is IP_ADDRESS:PORT_NUMBER or blank to disable listening.
---@field private ConnectToEndpoints TArray<string> @The IP endpoints to try to establish outgoing connection to. Use this setting to connect to a remote peer. The format is IP_ADDRESS:PORT_NUMBER.
---@field private ConnectionRetryDelay integer @Delay time between attempts to re-establish outgoing connections that become disconnected or fail to connect 0 disables reconnection
---@field private ConnectionRetryPeriod integer @Period time during which attempts to re-establish outgoing connections that become disconnected or fail to connect 0 means it will be retried only once
---@field private bStopServiceWhenAppDeactivates boolean @Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated
local UTcpMessagingSettings = {}

