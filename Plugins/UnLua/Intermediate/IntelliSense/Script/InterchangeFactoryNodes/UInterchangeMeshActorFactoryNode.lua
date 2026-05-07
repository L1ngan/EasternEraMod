---@class UInterchangeMeshActorFactoryNode : UInterchangeActorFactoryNode
local UInterchangeMeshActorFactoryNode = {}

---Add a Material dependency to the specified slot of this object.
---@param SlotName string
---@param MaterialDependencyUid string
---@return boolean
function UInterchangeMeshActorFactoryNode:SetSlotMaterialDependencyUid(SlotName, MaterialDependencyUid) end

---Set the resolved asset factory node.
---@param AttributeValue string
---@return boolean
function UInterchangeMeshActorFactoryNode:SetCustomInstancedAssetFactoryNodeUid(AttributeValue) end

---Set the geometric offset. Any mesh attached to this scene node will be offset using this transform.
---@param AttributeValue FTransform
---@return boolean
function UInterchangeMeshActorFactoryNode:SetCustomGeometricTransform(AttributeValue) end

---Set the animation asset for this scene node to play. (This is only relevant for SkeletalMeshActors: scene nodes that are instantiating skeletal meshes.)
---@param AttributeValue string
---@return boolean
function UInterchangeMeshActorFactoryNode:SetCustomAnimationAssetUidToPlay(AttributeValue) end

---Remove the Material dependency associated with the specified slot name from this object.
---@param SlotName string
---@return boolean
function UInterchangeMeshActorFactoryNode:RemoveSlotMaterialDependencyUid(SlotName) end

---Retrieve the Material dependency for the specified slot of this object.
---@param SlotName string
---@param OutMaterialDependency string @[out] 
---@return boolean
function UInterchangeMeshActorFactoryNode:GetSlotMaterialDependencyUid(SlotName, OutMaterialDependency) end

---Retrieve the correspondence table between slot names and assigned materials for this object.
---@param OutMaterialDependencies TMap_string__string_ @[out] 
function UInterchangeMeshActorFactoryNode:GetSlotMaterialDependencies(OutMaterialDependencies) end

---Get the resolved asset factory node.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeMeshActorFactoryNode:GetCustomInstancedAssetFactoryNodeUid(AttributeValue) end

---Get the geometric offset. Any mesh attached to this scene node will be offset using this transform.
---@param AttributeValue FTransform @[out] 
---@return boolean
function UInterchangeMeshActorFactoryNode:GetCustomGeometricTransform(AttributeValue) end

---Get the animation asset set for this scene node to play.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeMeshActorFactoryNode:GetCustomAnimationAssetUidToPlay(AttributeValue) end

