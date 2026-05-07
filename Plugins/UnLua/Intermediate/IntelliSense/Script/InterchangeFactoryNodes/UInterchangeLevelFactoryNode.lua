---@class UInterchangeLevelFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeLevelFactoryNode = {}

---Set actors bounding box.
---@param AttributeValue boolean
---@return boolean
function UInterchangeLevelFactoryNode:SetCustomShouldCreateLevel(AttributeValue) end

---Set the actor factory node unique id that hold the re-import data.
---@param AttributeValue string
---@return boolean
function UInterchangeLevelFactoryNode:SetCustomSceneImportAssetFactoryNodeUid(AttributeValue) end

---If true, created world partition level.
---@param AttributeValue boolean
---@return boolean
function UInterchangeLevelFactoryNode:SetCustomCreateWorldPartitionLevel(AttributeValue) end

---Remove one actor factory node unique id from this object.
---@param ActorFactoryNodeUid string
---@return boolean
function UInterchangeLevelFactoryNode:RemoveCustomActorFactoryNodeUid(ActorFactoryNodeUid) end

---Get actors bounding box.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeLevelFactoryNode:GetCustomShouldCreateLevel(AttributeValue) end

---Get the actor factory node unique id that hold the re-import data.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeLevelFactoryNode:GetCustomSceneImportAssetFactoryNodeUid(AttributeValue) end

---If true, created world partition level.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeLevelFactoryNode:GetCustomCreateWorldPartitionLevel(AttributeValue) end

---This function allow to retrieve all actor factory node unique id for this object.
---@param OutActorFactoryNodeUids TArray_string_ @[out] 
function UInterchangeLevelFactoryNode:GetCustomActorFactoryNodeUids(OutActorFactoryNodeUids) end

---This function allow to retrieve the number of track dependencies for this object.
---@return integer
function UInterchangeLevelFactoryNode:GetCustomActorFactoryNodeUidCount() end

---This function allow to retrieve one actor factory node unique id for this object.
---@param Index integer
---@param OutActorFactoryNodeUid string @[out] 
function UInterchangeLevelFactoryNode:GetCustomActorFactoryNodeUid(Index, OutActorFactoryNodeUid) end

---Add one actor factory node unique id to this object.
---@param ActorFactoryNodeUid string
---@return boolean
function UInterchangeLevelFactoryNode:AddCustomActorFactoryNodeUid(ActorFactoryNodeUid) end

