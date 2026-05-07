---The base class for actor-specific spawnable bindings. Contains a default implementation that can handle spawning an Actor from provided Actor class and optional Actor template.
---Can be overridden in C++ or blueprint to provide an Actor class and to add custom PostSpawnObject behavior such as mesh setup based on an asset.
---The below UMovieSceneSpawnableActorBinding class implements this base class and replicates the old FMovieSceneSpawnable behavior by using a specified Actor template to spawn an Actor and can be used out of the box.
---@class UMovieSceneSpawnableActorBindingBase : UMovieSceneSpawnableBindingBase
---@field public bNetAddressableName boolean @When enabled, the actor will be spawned with a unique name so that it can be addressable between clients and servers.
---@field public LevelName string @Name of level to spawn into
local UMovieSceneSpawnableActorBindingBase = {}

