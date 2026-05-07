---Async BP action that represents a pending prediction that is dispatched on a playing sequence.
---@class UMovieSceneAsyncAction_SequencePrediction : UBlueprintAsyncActionBase
---@field public Result MulticastDelegate @Called when a message is broadcast on the specified channel. Use GetPayload() to request the message payload.
---@field public Failure MulticastDelegate @Called when a message is broadcast on the specified channel. Use GetPayload() to request the message payload.
---@field private SequencePlayer UMovieSceneSequencePlayer @The sequence player we're interrogating
---@field private SceneComponent USceneComponent @The target scene component we're interrogating
local UMovieSceneAsyncAction_SequencePrediction = {}

---Initiate an asynchronous prediction for the specified component's world transform at a specific time in a sequence
---Changes in attachment between the sequence's current time, and the predicted time are not accounted for
---Calling this function on a stopped sequence player is undefined.
---@param Player UMovieSceneSequencePlayer
---@param TargetComponent USceneComponent
---@param TimeInSeconds number
---@return UMovieSceneAsyncAction_SequencePrediction
function UMovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime(Player, TargetComponent, TimeInSeconds) end

---Initiate an asynchronous prediction for the specified component's world transform at a specific time in a sequence
---Changes in attachment between the sequence's current time, and the predicted time are not accounted for
---Calling this function on a stopped sequence player is undefined.
---@param Player UMovieSceneSequencePlayer
---@param TargetComponent USceneComponent
---@param FrameTime FFrameTime
---@return UMovieSceneAsyncAction_SequencePrediction
function UMovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame(Player, TargetComponent, FrameTime) end

---Initiate an asynchronous prediction for the specified component's local transform at a specific time in a sequence
---Changes in attachment between the sequence's current time, and the predicted time are not accounted for
---Calling this function on a stopped sequence player is undefined.
---@param Player UMovieSceneSequencePlayer
---@param TargetComponent USceneComponent
---@param TimeInSeconds number
---@return UMovieSceneAsyncAction_SequencePrediction
function UMovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime(Player, TargetComponent, TimeInSeconds) end

---Initiate an asynchronous prediction for the specified component's local transform at a specific time in a sequence
---Changes in attachment between the sequence's current time, and the predicted time are not accounted for
---Calling this function on a stopped sequence player is undefined.
---@param Player UMovieSceneSequencePlayer
---@param TargetComponent USceneComponent
---@param FrameTime FFrameTime
---@return UMovieSceneAsyncAction_SequencePrediction
function UMovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame(Player, TargetComponent, FrameTime) end

