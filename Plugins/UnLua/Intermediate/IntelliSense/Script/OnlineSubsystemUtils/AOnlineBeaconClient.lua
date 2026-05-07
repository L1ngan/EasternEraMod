---Base class for any unique beacon connectivity, paired with an AOnlineBeaconHostObject implementation
---This is the actual actor that replicates across client/server and where all RPCs occur
---On the host, the life cycle is managed by an AOnlineBeaconHostObject
---On the client, the life cycle is managed by the game
---@class AOnlineBeaconClient : AOnlineBeacon
---@field protected BeaconOwner AOnlineBeaconHostObject @Owning beacon host of this beacon actor (server only)
---@field protected BeaconConnection UNetConnection @Network connection associated with this beacon client instance
---@field protected ConnectionState EBeaconConnectionState @State of the connection
local AOnlineBeaconClient = {}

---Called on the server side to open up the actor channel that will allow RPCs to occur
---(DO NOT OVERLOAD, implement OnConnected() instead)
function AOnlineBeaconClient:ClientOnConnected() end

