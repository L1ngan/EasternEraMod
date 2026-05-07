---@class FMovieSceneBindingResolveParams
---@field public Sequence UMovieSceneSequence @The sequence that contains the object binding being resolved
---@field public ObjectBindingID FGuid @The ID of the object binding being resolved
---@field public SequenceID FMovieSceneSequenceID @The sequence ID of the object binding being resolved
---@field public Context UObject @The outer context with which to resolve this binding. May be the world, or may be an outer UObject.
local FMovieSceneBindingResolveParams = {}
