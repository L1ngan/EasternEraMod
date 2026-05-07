---A recording source that detects actors spawned close to the current camera, and captures them as spawnables
---@class UTakeRecorderNearbySpawnedActorSource : UTakeRecorderSource
---@field public Proximity number @The proximity to the current camera that an actor must be spawned in order to be recorded as a spawnable. If 0, proximity is disregarded.
---@field public bFilterSpawnedActors boolean @Should we only record actors that pass the filter list?
---@field public FilterTypes TArray<TSubclassOf<AActor>> @A type filter to apply to spawned objects
local UTakeRecorderNearbySpawnedActorSource = {}

