---Class to represent a set of animation track nodes that share the same frame rate.
---@class UInterchangeAnimationTrackSetNode : UInterchangeBaseNode
local UInterchangeAnimationTrackSetNode = {}

---Set the frame rate for the animations in the level sequence.
---@param AttributeValue number
---@return boolean
function UInterchangeAnimationTrackSetNode:SetCustomFrameRate(AttributeValue) end

---Remove one track dependency from this object.
---@param AnimationTrackUid string
---@return boolean
function UInterchangeAnimationTrackSetNode:RemoveCustomAnimationTrackUid(AnimationTrackUid) end

---Get the frame rate for the animations in the level sequence.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeAnimationTrackSetNode:GetCustomFrameRate(AttributeValue) end

---Retrieve the track dependency for this object.
---@param OutAnimationTrackUids TArray_string_ @[out] 
function UInterchangeAnimationTrackSetNode:GetCustomAnimationTrackUids(OutAnimationTrackUids) end

---Retrieve the number of track dependencies for this object.
---@return integer
function UInterchangeAnimationTrackSetNode:GetCustomAnimationTrackUidCount() end

---Retrieve one track dependency for this object.
---@param Index integer
---@param OutAnimationTrackUid string @[out] 
function UInterchangeAnimationTrackSetNode:GetCustomAnimationTrackUid(Index, OutAnimationTrackUid) end

---Add one track dependency to this object.
---@param AnimationTrackUid string
---@return boolean
function UInterchangeAnimationTrackSetNode:AddCustomAnimationTrackUid(AnimationTrackUid) end

