---Structure that describes an object that is to be animated. Used as an abstraction of the actual objects bound to object bindings.
---@class FMovieSceneEvaluationOperand
---@field public ObjectBindingID FGuid @A GUID relating to either a posessable, or a spawnable binding
---@field public SequenceID FMovieSceneSequenceID @The ID of the sequence within which the object binding resides
local FMovieSceneEvaluationOperand = {}
