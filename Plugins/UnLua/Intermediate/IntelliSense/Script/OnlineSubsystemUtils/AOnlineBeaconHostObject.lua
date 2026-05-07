---Base class for any unique beacon connectivity, paired with an AOnlineBeaconClient implementation
---By defining a beacon type and implementing the ability to spawn unique AOnlineBeaconClients, any two instances of the engine
---can communicate with each other without officially connecting through normal Unreal networking
---@class AOnlineBeaconHostObject : AActor
---@field protected BeaconTypeName string @Custom name for this beacon
---@field protected ClientBeaconActorClass TSubclassOf<AOnlineBeaconClient> @Class reference for spawning client beacon actor
---@field protected ClientActors TArray<AOnlineBeaconClient> @List of all client beacon actors with active connections
local AOnlineBeaconHostObject = {}

