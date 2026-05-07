---Abstract class providing the minimal services required for an animation track node.
---@class UInterchangeAnimationTrackBaseNode : UInterchangeBaseNode
local UInterchangeAnimationTrackBaseNode = {}

---Set how the actor's animated property should behave once its animation completes.
---@param AttributeValue integer
---@return boolean
function UInterchangeAnimationTrackBaseNode:SetCustomCompletionMode(AttributeValue) end

---Get how the actor's animated property behaves once this animation is complete.
---The output value will be clamped to the range of values defined in EInterchangeAimationCompletionMode.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeAnimationTrackBaseNode:GetCustomCompletionMode(AttributeValue) end

