---Class to represent an animation on the property of a camera, light, or scene node
---The list of supported properties is enumerated in EInterchangeAnimatedProperty.
---@class UInterchangeAnimationTrackNode : UInterchangeAnimationTrackBaseNode
local UInterchangeAnimationTrackNode = {}

---Set the property animated by this track.
---@param PropertyTrack EInterchangePropertyTracks
---@return boolean
function UInterchangeAnimationTrackNode:SetCustomPropertyTrack(PropertyTrack) end

---Set the number of frames for the animation of this track.
---@param AttributeValue integer
---@return boolean
function UInterchangeAnimationTrackNode:SetCustomFrameCount(AttributeValue) end

---Set the payload key needed to retrieve the animation for this track.
---@param InUniqueId string
---@param InType EInterchangeAnimationPayLoadType
---@return boolean
function UInterchangeAnimationTrackNode:SetCustomAnimationPayloadKey(InUniqueId, InType) end

---Set the actor dependency to this object.
---@param DependencyUid string
---@return boolean
function UInterchangeAnimationTrackNode:SetCustomActorDependencyUid(DependencyUid) end

---Get the property animated by this track.
---@param PropertyTrack EInterchangePropertyTracks @[out] 
---@return boolean
function UInterchangeAnimationTrackNode:GetCustomPropertyTrack(PropertyTrack) end

---Get the number of frames for the animation of this track.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeAnimationTrackNode:GetCustomFrameCount(AttributeValue) end

---Get the payload key needed to retrieve the animation for this track.
---@param AnimationPayLoadKey FInterchangeAnimationPayLoadKey @[out] 
---@return boolean
function UInterchangeAnimationTrackNode:GetCustomAnimationPayloadKey(AnimationPayLoadKey) end

---Get the actor dependency to this object.
---@param DependencyUid string @[out] 
---@return boolean
function UInterchangeAnimationTrackNode:GetCustomActorDependencyUid(DependencyUid) end

