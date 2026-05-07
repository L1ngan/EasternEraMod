---Global (one per-UWorld) manager object that manages ticking and updating any and all Sequencer-based
---evaluations for the current frame, before any other actors are ticked.
---Ticking clients are registered based on their desired tick interval, and grouped together with other
---clients that tick with the same interval (based on Sequencer.TickIntervalGroupingResolutionMs).
---Sequencer data is shared between all instances within the same group, allowing them to blend together.
---Clients ticking at different intervals do not support blending with each other.
---@class UMovieSceneSequenceTickManager : UObject
local UMovieSceneSequenceTickManager = {}

