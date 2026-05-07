---A key that uniquely identifies an entity by its owner and ID
---@class FMovieSceneEvaluationFieldEntityKey
---@field public EntityOwner TWeakObjectPtr<UObject> @The entity owner - either a UMovieSceneSection or perhaps a UMovieSceneTrack. Must implement the IMovieSceneEntityProvider interface
---@field public EntityID integer @The identifer for the entity within the owner. Normally this will be irrelevant (and 0), but may be used to identifier unique entities by index, or flags
local FMovieSceneEvaluationFieldEntityKey = {}
