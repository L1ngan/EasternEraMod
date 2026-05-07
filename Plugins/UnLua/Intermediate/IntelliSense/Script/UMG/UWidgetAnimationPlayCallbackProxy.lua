---@class UWidgetAnimationPlayCallbackProxy : UObject
---@field public Finished MulticastDelegate @Called when animation has been completed
local UWidgetAnimationPlayCallbackProxy = {}

---Play Animation Time Range on widget and trigger Finish event when the animation is done.
---@param Result FWidgetAnimationHandle @[out] 
---@param Widget UUserWidget
---@param InAnimation UWidgetAnimation
---@param StartAtTime number @[opt] 
---@param EndAtTime number @[opt] 
---@param NumLoopsToPlay integer @[opt] 
---@param PlayMode integer @[opt] 
---@param PlaybackSpeed number @[opt] 
---@return UWidgetAnimationPlayCallbackProxy
function UWidgetAnimationPlayCallbackProxy.NewPlayAnimationTimeRangeProxyObject(Result, Widget, InAnimation, StartAtTime, EndAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed) end

---Play Animation on widget and trigger Finish event when the animation is done.
---@param Result FWidgetAnimationHandle @[out] 
---@param Widget UUserWidget
---@param InAnimation UWidgetAnimation
---@param StartAtTime number @[opt] 
---@param NumLoopsToPlay integer @[opt] 
---@param PlayMode integer @[opt] 
---@param PlaybackSpeed number @[opt] 
---@return UWidgetAnimationPlayCallbackProxy
function UWidgetAnimationPlayCallbackProxy.NewPlayAnimationProxyObject(Result, Widget, InAnimation, StartAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed) end

---Play Animation Time Range on widget and trigger Finish event when the animation is done (legacy version using deprecated UMG Sequencer Player).
---@param Result UUMGSequencePlayer @[out] 
---@param Widget UUserWidget
---@param InAnimation UWidgetAnimation
---@param StartAtTime number @[opt] 
---@param EndAtTime number @[opt] 
---@param NumLoopsToPlay integer @[opt] 
---@param PlayMode integer @[opt] 
---@param PlaybackSpeed number @[opt] 
---@return UWidgetAnimationPlayCallbackProxy
function UWidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject(Result, Widget, InAnimation, StartAtTime, EndAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed) end

---Play Animation on widget and trigger Finish event when the animation is done (legacy version using deprecated UMG Sequencer Player).
---@param Result UUMGSequencePlayer @[out] 
---@param Widget UUserWidget
---@param InAnimation UWidgetAnimation
---@param StartAtTime number @[opt] 
---@param NumLoopsToPlay integer @[opt] 
---@param PlayMode integer @[opt] 
---@param PlaybackSpeed number @[opt] 
---@return UWidgetAnimationPlayCallbackProxy
function UWidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject(Result, Widget, InAnimation, StartAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed) end

