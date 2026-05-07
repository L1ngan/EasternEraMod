---Optional parameter struct for dynamic binding resolver functions.
---@class FMovieSceneDynamicBindingResolveParams
---@field public Sequence UMovieSceneSequence @The sequence that contains the object binding being resolved
---@field public ObjectBindingID FGuid @The ID of the object binding being resolved
---@field public RootSequence UMovieSceneSequence @The root sequence
local FMovieSceneDynamicBindingResolveParams = {}
