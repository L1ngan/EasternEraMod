---@class UInterchangeSkeletonFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeSkeletonFactoryNode = {}

---If AttributeValue is true, force this skeleton to use time-zero evaluation instead of its bind pose.
---@param AttributeValue boolean
---@return boolean
function UInterchangeSkeletonFactoryNode:SetCustomUseTimeZeroForBindPose(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeSkeletonFactoryNode:SetCustomSkeletalMeshFactoryNodeUid(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeSkeletonFactoryNode:SetCustomRootJointUid(AttributeValue) end

---Initialize node data.
---@param UniqueID string
---@param DisplayLabel string
---@param InAssetClass string
---@param NodeContainer UInterchangeBaseNodeContainer
function UInterchangeSkeletonFactoryNode:InitializeSkeletonNode(UniqueID, DisplayLabel, InAssetClass, NodeContainer) end

---Query whether this skeleton should replace joint transforms with time-zero evaluation instead of bind pose.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeSkeletonFactoryNode:GetCustomUseTimeZeroForBindPose(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeSkeletonFactoryNode:GetCustomSkeletalMeshFactoryNodeUid(AttributeValue) end

---Return false if the attribute was not set previously.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeSkeletonFactoryNode:GetCustomRootJointUid(AttributeValue) end

