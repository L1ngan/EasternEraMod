---A beacon client used for making reservations with an existing game session
---@class ATestBeaconClient : AOnlineBeaconClient
local ATestBeaconClient = {}

---Send a pong RPC to the host
function ATestBeaconClient:ServerPong() end

---Send a ping RPC to the client
function ATestBeaconClient:ClientPing() end

