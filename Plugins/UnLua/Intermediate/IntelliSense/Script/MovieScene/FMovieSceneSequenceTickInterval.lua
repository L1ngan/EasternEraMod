---Structure defining a concrete tick interval for a Sequencer based evaluation
---@class FMovieSceneSequenceTickInterval
---@field public TickIntervalSeconds number @Defines the rate at which the sequence should update, in seconds
---@field public EvaluationBudgetMicroseconds number @Defines an approximate budget for evaluation of this sequence (and any other sequences with the same tick interval)
---@field public bTickWhenPaused boolean @When true, the sequence will continue to tick and progress even when the world is paused
---@field public bAllowRounding boolean @When true, allow the sequence to be grouped with other sequences based on Sequencer.TickIntervalGroupingResolutionMs. Otherwise the interval will be used precisely.
local FMovieSceneSequenceTickInterval = {}
