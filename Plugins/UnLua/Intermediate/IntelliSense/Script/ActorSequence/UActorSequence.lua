---Movie scene animation embedded within an actor.
---@class UActorSequence : UMovieSceneSequence
---@field private MovieScene UMovieScene @Pointer to the movie scene that controls this animation.
---@field private ObjectReferences FActorSequenceObjectReferenceMap @Collection of object references.
---@field private bHasBeenInitialized boolean
local UActorSequence = {}

