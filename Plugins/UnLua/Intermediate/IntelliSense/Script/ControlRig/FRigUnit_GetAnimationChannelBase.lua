---Get Animation Channel is used to retrieve a control's animation channel value
---@class FRigUnit_GetAnimationChannelBase : FRigUnit
---@field public Control string @The name of the Control to retrieve the value for.
---@field public Channel string @The name of the animation channel to retrieve the value for.
---@field public bInitial boolean @If set to true the initial value will be returned
---@field public CachedChannelKey FRigElementKey @Used to cache the internally used bone index
---@field public CachedChannelHash integer @A hash combining the control, channel and topology identifiers
local FRigUnit_GetAnimationChannelBase = {}
