---An extension for a sequence's director blueprint to compile dynamic binding endpoints.
---@class UMovieSceneDynamicBindingBlueprintExtension : UBlueprintExtension
---@field private WeakMovieSceneSequences TArray<TWeakObjectPtr<UMovieSceneSequence>> @List of movie scenes that are bound to the director blueprint
local UMovieSceneDynamicBindingBlueprintExtension = {}

