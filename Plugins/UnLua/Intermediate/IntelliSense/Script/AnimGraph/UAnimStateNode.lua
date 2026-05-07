---@class UAnimStateNode : UAnimStateNodeBase
---@field public BoundGraph UEdGraph @The animation graph for this state
---@field public StateType integer @The type of the contents of this state
---@field public StateEntered FAnimNotifyEvent
---@field public StateLeft FAnimNotifyEvent
---@field public StateFullyBlended FAnimNotifyEvent
---@field public bAlwaysResetOnEntry boolean @Whether or not this state will ALWAYS reset it's state on reentry, regardless of remaining weight
local UAnimStateNode = {}

