---@class UInterchangePhysicsAssetFactoryNode : UInterchangeFactoryBaseNode
local UInterchangePhysicsAssetFactoryNode = {}

---Set the Skeletal Mesh asset UID used to create the data in the post-pipeline step.
---@param AttributeValue string
---@return boolean
function UInterchangePhysicsAssetFactoryNode:SetCustomSkeletalMeshUid(AttributeValue) end

---Initialize node data.
---@param UniqueID string
---@param DisplayLabel string
---@param InAssetClass string
---@param NodeContainer UInterchangeBaseNodeContainer
function UInterchangePhysicsAssetFactoryNode:InitializePhysicsAssetNode(UniqueID, DisplayLabel, InAssetClass, NodeContainer) end

---Get the Skeletal Mesh asset UID used to create the data in the post-pipeline step.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangePhysicsAssetFactoryNode:GetCustomSkeletalMeshUid(AttributeValue) end

