---The base class for custom spawnable bindings. A spawnable binding will spawn an object upon resolution or return a cached previously spawned object.
---UMovieSceneSpawnableActorBinding is the reimplementation of previous FMovieSceneSpawnable features and spawns an actor based on a saved template and actor class.
---Otherwise, projects are free to implement their own Spawnable bindings by overriding this class.
---In doing so, they could choose to just override GetSpawnObjectClass, PostSpawnObject, and PreDestroyObject for example to do custom post-spawn setup on a character mesh,
---or they could choose to fully override SpawnObject and DestroySpawnedObject and do their own custom logic for spawning completely.
---@class UMovieSceneSpawnableBindingBase : UMovieSceneCustomBinding
---@field public SpawnOwnership ESpawnOwnership @* The spawn ownership setting for this spawnable, allowing spawnables to potentially outlast the lifetime of their sub sequence or sequence altogether.
---@field public bContinuouslyRespawn boolean @When enabled, this spawnable will always be respawned if it gets destroyed externally. When disabled, this object will only ever be spawned once for each binding lifetime section even if destroyed externally.
local UMovieSceneSpawnableBindingBase = {}

