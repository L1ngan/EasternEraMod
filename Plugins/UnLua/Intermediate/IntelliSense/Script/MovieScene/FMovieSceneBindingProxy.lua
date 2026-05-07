---Movie Scene Binding Proxy represents the binding ID (an FGuid) and the corresponding sequence that it relates to.
---This is primarily used for scripting where there is no support for FMovieSceneSequenceID and use cases where
---managing multiple bindings with their corresponding sequences is necessary.
---@class FMovieSceneBindingProxy
---@field public BindingID FGuid
---@field public Sequence UMovieSceneSequence
local FMovieSceneBindingProxy = {}
