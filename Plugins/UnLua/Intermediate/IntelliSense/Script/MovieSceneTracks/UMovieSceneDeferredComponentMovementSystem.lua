---System that maintains a FScopedMovementUpdate for any USceneComponent that has an
---animated transform or attachment for the duration of the evaluation to avoid repeatedly
---updating child transforms and/or overlaps.
---This system can be enabled/disabled using the cvar Sequencer.DeferMovementUpdates (is disabled by default)
---Output logging options are controlled by Sequencer.OutputDeferredMovementMode which is useful for tracking
---how many components are being moved in any given frame.
---This system runs in the Initialization and Evaluaion phases:
---    Initialization: Gathers and initializes deferred movement for any AttachParent components that need (un)link
---    Evaluation: Gathers and initializes deferred movement for any Component Transforms; queues up an event trigger to be executed at the end of the phase
---    Finalization: Applys all pending movement updates in reverse order
---@class UMovieSceneDeferredComponentMovementSystem : UMovieSceneEntitySystem
local UMovieSceneDeferredComponentMovementSystem = {}

