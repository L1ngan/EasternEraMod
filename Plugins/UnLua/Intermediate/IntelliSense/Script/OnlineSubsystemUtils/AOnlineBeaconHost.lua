---Main actor that listens for side channel communication from another Unreal Engine application
---The AOnlineBeaconHost listens for connections to route to a registered AOnlineBeaconHostObject
---The AOnlineBeaconHostObject is responsible for spawning the server version of the AOnlineBeaconClient
---The AOnlineBeaconHost pairs the two client actors, verifies the validity of the exchange, and accepts/continues the connection
---@class AOnlineBeaconHost : AOnlineBeacon
---@field public ListenPort integer @Configured listen port for this beacon host
---@field public bReuseAddressAndPort boolean @Whether to configure the listening socket to allow reuse of the address and port. If this is true, be sure no other servers can run on the same port, otherwise this can lead to undefined behavior since packets will go to two servers.
---@field protected bAuthRequired boolean @Set this to true if you require clients to negotiate auth prior to joining the beacon
---@field protected MaxAuthTokenSize integer
---@field private ClientActors TArray<AOnlineBeaconClient> @List of all client beacon actors with active connections
local AOnlineBeaconHost = {}

