---@class UIpConnection : UNetConnection
---@field private SocketErrorDisconnectDelay number @Instead of disconnecting immediately on a socket error, wait for some time to see if we can recover. Specified in Seconds.
local UIpConnection = {}

