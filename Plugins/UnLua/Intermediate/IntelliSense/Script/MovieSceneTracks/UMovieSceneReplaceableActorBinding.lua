---* An implementation of UMovieSceneReplaceableBindingBase that uses UMovieSceneSpawnableActorBinding as the preview spawnable,
---* and has no implementation of ResolveRuntimeBindingInternal, relying instead of Sequencer's built in BindingOverride mechanism for binding at runtime.
---@class UMovieSceneReplaceableActorBinding : UMovieSceneReplaceableBindingBase
local UMovieSceneReplaceableActorBinding = {}

