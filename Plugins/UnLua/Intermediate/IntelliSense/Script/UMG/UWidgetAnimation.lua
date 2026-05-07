---@class UWidgetAnimation : UMovieSceneSequence
---@field public MovieScene UMovieScene @Pointer to the movie scene that controls this animation.
---@field public AnimationBindings TArray<FWidgetAnimationBinding>
---@field private bLegacyFinishOnStop boolean @Whether to finish evaluation on stop. This legacy value is to preserve existing asset behavior to NOT finish on stop since content was created with this bug. If this is removed, evaluation should always finish on stop.
---@field private DisplayLabel string @The friendly name for this animation displayed in the designer.
local UWidgetAnimation = {}

---@param Widget UUserWidget
---@param Delegate Delegate
function UWidgetAnimation:UnbindFromAnimationStarted(Widget, Delegate) end

---@param Widget UUserWidget
---@param Delegate Delegate
function UWidgetAnimation:UnbindFromAnimationFinished(Widget, Delegate) end

---@param Widget UUserWidget
function UWidgetAnimation:UnbindAllFromAnimationStarted(Widget) end

---@param Widget UUserWidget
function UWidgetAnimation:UnbindAllFromAnimationFinished(Widget) end

---Get the start time of this animation.
---@return number
function UWidgetAnimation:GetStartTime() end

---Get the end time of this animation.
---@return number
function UWidgetAnimation:GetEndTime() end

---These animation binding functions were added so that we could cleanly upgrade assets
---from before animation sharing, they don't actually modify the animation, they just pipe
---through to the UUserWidget.  If we didn't put the functions here, it would be much more
---difficult to upgrade users who were taking advantage of the Many-To-1, blueprint having
---many animations binding to the same delegate.
---@param Widget UUserWidget
---@param Delegate Delegate
function UWidgetAnimation:BindToAnimationStarted(Widget, Delegate) end

---@param Widget UUserWidget
---@param Delegate Delegate
function UWidgetAnimation:BindToAnimationFinished(Widget, Delegate) end

