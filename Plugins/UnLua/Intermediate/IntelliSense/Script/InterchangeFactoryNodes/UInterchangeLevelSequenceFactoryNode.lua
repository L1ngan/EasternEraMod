---@class UInterchangeLevelSequenceFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeLevelSequenceFactoryNode = {}

---Set the frame rate for the animations in the level sequence.
---@param AttributeValue number
---@return boolean
function UInterchangeLevelSequenceFactoryNode:SetCustomFrameRate(AttributeValue) end

---Remove one track dependency from this object.
---@param AnimationTrackUid string
---@return boolean
function UInterchangeLevelSequenceFactoryNode:RemoveCustomAnimationTrackUid(AnimationTrackUid) end

---Get the frame rate for the animations in the level sequence.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeLevelSequenceFactoryNode:GetCustomFrameRate(AttributeValue) end

---This function allow to retrieve the track dependency for this object.
---@param OutAnimationTrackUids TArray_string_ @[out] 
function UInterchangeLevelSequenceFactoryNode:GetCustomAnimationTrackUids(OutAnimationTrackUids) end

---This function allow to retrieve the number of track dependencies for this object.
---@return integer
function UInterchangeLevelSequenceFactoryNode:GetCustomAnimationTrackUidCount() end

---This function allow to retrieve one track dependency for this object.
---@param Index integer
---@param OutAnimationTrackUid string @[out] 
function UInterchangeLevelSequenceFactoryNode:GetCustomAnimationTrackUid(Index, OutAnimationTrackUid) end

---Add one track dependency to this object.
---@param AnimationTrackUid string
---@return boolean
function UInterchangeLevelSequenceFactoryNode:AddCustomAnimationTrackUid(AnimationTrackUid) end

