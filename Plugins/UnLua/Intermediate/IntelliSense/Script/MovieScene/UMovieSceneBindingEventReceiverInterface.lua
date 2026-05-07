---@class UMovieSceneBindingEventReceiverInterface : UInterface
local UMovieSceneBindingEventReceiverInterface = {}

---@param Player UMovieSceneSequencePlayer
---@param BindingID FMovieSceneObjectBindingID
function UMovieSceneBindingEventReceiverInterface:OnObjectUnboundBySequencer(Player, BindingID) end

---@param Player UMovieSceneSequencePlayer
---@param BindingID FMovieSceneObjectBindingID
function UMovieSceneBindingEventReceiverInterface:OnObjectBoundBySequencer(Player, BindingID) end

