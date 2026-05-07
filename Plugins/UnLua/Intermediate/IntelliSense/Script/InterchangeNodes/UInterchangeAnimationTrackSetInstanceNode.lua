---Class to represent an animation that instances another animation track set node.
---@class UInterchangeAnimationTrackSetInstanceNode : UInterchangeAnimationTrackBaseNode
local UInterchangeAnimationTrackSetInstanceNode = {}

---Set the unique id of the level sequence this instance references.
---@param AttributeValue string
---@return boolean
function UInterchangeAnimationTrackSetInstanceNode:SetCustomTrackSetDependencyUid(AttributeValue) end

---Set the time scale used for the level sequence instance.
---@param AttributeValue number
---@return boolean
function UInterchangeAnimationTrackSetInstanceNode:SetCustomTimeScale(AttributeValue) end

---Set the frame where the level sequence instance starts.
---@param AttributeValue integer
---@return boolean
function UInterchangeAnimationTrackSetInstanceNode:SetCustomStartFrame(AttributeValue) end

---Set the level sequence instance duration in number of frames.
---@param AttributeValue integer
---@return boolean
function UInterchangeAnimationTrackSetInstanceNode:SetCustomDuration(AttributeValue) end

---Get the unique id of the level sequence this instance references.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeAnimationTrackSetInstanceNode:GetCustomTrackSetDependencyUid(AttributeValue) end

---Get the time scale used for the level sequence instance.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeAnimationTrackSetInstanceNode:GetCustomTimeScale(AttributeValue) end

---Get the frame where the level sequence instance starts.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeAnimationTrackSetInstanceNode:GetCustomStartFrame(AttributeValue) end

---Get the level sequence instance duration in number of frames.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeAnimationTrackSetInstanceNode:GetCustomDuration(AttributeValue) end

