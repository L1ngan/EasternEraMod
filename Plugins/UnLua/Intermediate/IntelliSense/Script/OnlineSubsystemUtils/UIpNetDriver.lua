---@class UIpNetDriver : UNetDriver
---@field public LogPortUnreach boolean @Should port unreachable messages be logged
---@field public AllowPlayerPortUnreach boolean @Does the game allow clients to remain after receiving ICMP port unreachable errors (handles flakey connections)
---@field public bExitOnBindFailure boolean @Whether to exit if binding a port failed.
---@field public MaxPortCountToTry integer @Number of ports which will be tried if current one is not available for binding (i.e. if told to bind to port N, will try from N to N+MaxPortCountToTry inclusive)
---@field private ServerDesiredSocketReceiveBufferBytes integer @Number of bytes that will be passed to FSocket::SetReceiveBufferSize when initializing a server.
---@field private ServerDesiredSocketSendBufferBytes integer @Number of bytes that will be passed to FSocket::SetSendBufferSize when initializing a server.
---@field private ClientDesiredSocketReceiveBufferBytes integer @Number of bytes that will be passed to FSocket::SetReceiveBufferSize when initializing a client.
---@field private ClientDesiredSocketSendBufferBytes integer @Number of bytes that will be passed to FSocket::SetSendBufferSize when initializing a client.
---@field private MaxSecondsInReceive number @Maximum time in seconds the TickDispatch can loop on received socket data
---@field private NbPacketsBetweenReceiveTimeTest integer @Nb of packets to wait before testing if the receive time went over MaxSecondsInReceive
---@field private ResolutionConnectionTimeout number @The amount of time to wait in seconds until we consider a connection to a resolution result as timed out
local UIpNetDriver = {}

