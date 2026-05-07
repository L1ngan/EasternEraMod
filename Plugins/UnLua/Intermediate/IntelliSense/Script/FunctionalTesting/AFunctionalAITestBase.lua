---AFunctionalAITestBase
---Base abstract class defining a Functional AI Test.
---You can derive from this base class to create a test with a different type of SpawnSets.
---@class AFunctionalAITestBase : AFunctionalTest
---@field protected SpawnLocationRandomizationRange number
---@field protected SpawnedPawns TArray<APawn>
---@field protected PendingDelayedSpawns TArray<FPendingDelayedSpawn>
---@field protected CurrentSpawnSetIndex integer
---@field protected CurrentSpawnSetName string
---@field protected OnAISpawned MulticastDelegate @Called when a single AI finished spawning
---@field protected OnAllAISPawned MulticastDelegate @Called when a all AI finished spawning
---@field protected NavMeshDebugOrigin FVector @navmesh debug: log navoctree modifiers around this point
---@field protected NavMeshDebugExtent FVector @navmesh debug: extent around NavMeshDebugOrigin
---@field protected bWaitForNavMesh boolean @if set, ftest will postpone start until navmesh is fully generated
---@field protected bDebugNavMeshOnTimeout boolean @if set, ftest will postpone start until navmesh is fully generated
local AFunctionalAITestBase = {}

---@param Actor AActor
---@return boolean
function AFunctionalAITestBase:IsOneOfSpawnedPawns(Actor) end

