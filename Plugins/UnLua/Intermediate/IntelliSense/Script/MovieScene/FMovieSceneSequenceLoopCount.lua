---POD struct that represents a number of loops where -1 signifies infinite looping, 0 means no loops, etc
---Defined as a struct rather than an int so a property type customization can be bound to it
---@class FMovieSceneSequenceLoopCount
---@field public Value integer @Whether or not to loop playback. If Loop Exactly is chosen, you can specify the number of times to loop
local FMovieSceneSequenceLoopCount = {}
