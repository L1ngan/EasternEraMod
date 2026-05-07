---* Class to hold onto the relationships between a set of animation tracks and the bones, morph targets of a skeleton.
---@class UInterchangeSkeletalAnimationTrackNode : UInterchangeAnimationTrackBaseNode
local UInterchangeSkeletalAnimationTrackNode = {}

---Set the source timeline animation stop time. Return false if the attribute could not be set.
---Note: This represent the DCC setup of the time for the animation.
---Optional: if not set CustomAnimationStopTime will be used
---@param StopTime number
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:SetCustomSourceTimelineAnimationStopTime(StopTime) end

---Set the source timeline animation start time. Return false if the attribute could not be set.
---Note: This represent the DCC setup of the time for the animation.
---Optional: if not set CustomAnimationStartTime will be used
---@param StartTime number
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:SetCustomSourceTimelineAnimationStartTime(StartTime) end

---Set the unique ID of the skeleton factory node. Return false if the attribute could not be set.
---@param AttributeValue string
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:SetCustomSkeletonNodeUid(AttributeValue) end

---Set the animation stop time. Return false if the attribute could not be set.
---@param StopTime number
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:SetCustomAnimationStopTime(StopTime) end

---Set the animation start time. Return false if the attribute could not be set.
---@param StartTime number
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:SetCustomAnimationStartTime(StartTime) end

---Set the animation sample rate. Return false if the attribute could not be set.
---@param SampleRate number
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:SetCustomAnimationSampleRate(SampleRate) end

---@param SceneNodeUid string
---@param InUniqueId string
---@param InType EInterchangeAnimationPayLoadType
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:SetAnimationPayloadKeyForSceneNodeUid(SceneNodeUid, InUniqueId, InType) end

---@param MorphTargetNodeUid string
---@param InUniqueId string
---@param InType EInterchangeAnimationPayLoadType
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:SetAnimationPayloadKeyForMorphTargetNodeUid(MorphTargetNodeUid, InUniqueId, InType) end

---@param SceneNodeUid string
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:IsNodeAnimatedWithBakedCurve(SceneNodeUid) end

---@param OutSceneNodeAnimationPayloadKeyUids TMap_string__string_ @[out] 
---@param OutSceneNodeAnimationPayloadKeyTypes TMap_string__integer_ @[out] 
function UInterchangeSkeletalAnimationTrackNode:GetSceneNodeAnimationPayloadKeys(OutSceneNodeAnimationPayloadKeyUids, OutSceneNodeAnimationPayloadKeyTypes) end

---@param OutMorphTargetNodeAnimationPayloadKeyUids TMap_string__string_ @[out] 
---@param OutMorphTargetNodeAnimationPayloadKeyTypes TMap_string__integer_ @[out] 
function UInterchangeSkeletalAnimationTrackNode:GetMorphTargetNodeAnimationPayloadKeys(OutMorphTargetNodeAnimationPayloadKeyUids, OutMorphTargetNodeAnimationPayloadKeyTypes) end

---Get the source timeline animation stop time. Return false if the attribute is not set.
---Note: This represent the DCC setup of the time for the animation.
---Optional: if not set CustomAnimationStopTime will be used
---@param StopTime number @[out] 
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:GetCustomSourceTimelineAnimationStopTime(StopTime) end

---Get the source timeline animation start time. Return false if the attribute is not set.
---Note: This represent the DCC setup of the time for the animation.
---Optional: if not set CustomAnimationStartTime will be used
---@param StartTime number @[out] 
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:GetCustomSourceTimelineAnimationStartTime(StartTime) end

---Get the unique ID of the skeleton factory node. Return false if the attribute is not set.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:GetCustomSkeletonNodeUid(AttributeValue) end

---Get the animation stop time. Return false if the attribute is not set.
---@param StopTime number @[out] 
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:GetCustomAnimationStopTime(StopTime) end

---Get the animation start time. Return false if the attribute is not set.
---@param StartTime number @[out] 
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:GetCustomAnimationStartTime(StartTime) end

---Get the animation sample rate. Return false if the attribute is not set.
---@param SampleRate number @[out] 
---@return boolean
function UInterchangeSkeletalAnimationTrackNode:GetCustomAnimationSampleRate(SampleRate) end

