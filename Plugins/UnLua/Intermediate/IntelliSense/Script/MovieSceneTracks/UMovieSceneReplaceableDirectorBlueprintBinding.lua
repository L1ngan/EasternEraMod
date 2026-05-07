---Custom binding type that uses a Director Blueprint endpoint to allow the user to define at runtime how to resolve this binding.
---User can use any desired custom spawnable type as the preview within Sequencer, such as a MovieSceneSpawnableDirectorBlueprintBinding for another endpoint
---for spawning, or a MovieSceneSpawnableActorBinding to spawn from an actor template.
---@class UMovieSceneReplaceableDirectorBlueprintBinding : UMovieSceneReplaceableBindingBase
---@field public DynamicBinding FMovieSceneDynamicBinding @Director Blueprint defined binding info
---@field public PreviewSpawnableType TSubclassOf<UMovieSceneSpawnableBindingBase> @Preview Spawnable Type to use for this replaceable
local UMovieSceneReplaceableDirectorBlueprintBinding = {}

