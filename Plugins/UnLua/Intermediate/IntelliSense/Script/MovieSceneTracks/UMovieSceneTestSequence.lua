---Simple type of sequence for use in automated tests.
---Bound objects are specified manually on the sequence and will be simply returned when
---bindings are resolved.
---@class UMovieSceneTestSequence : UMovieSceneSequence
---@field public MovieScene UMovieScene @The movie scene
---@field private BoundObjects TArray<UObject>
---@field private BindingGuids TArray<FGuid>
local UMovieSceneTestSequence = {}

