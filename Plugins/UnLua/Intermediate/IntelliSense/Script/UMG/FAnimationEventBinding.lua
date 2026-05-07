---Used to manage different animation event bindings that users want callbacks on.
---@class FAnimationEventBinding
---@field public Animation UWidgetAnimation @The animation to look for.
---@field public Delegate Delegate @The callback.
---@field public AnimationEvent EWidgetAnimationEvent @The type of animation event.
---@field public UserTag string @A user tag used to only get callbacks for specific runs of the animation.
local FAnimationEventBinding = {}
