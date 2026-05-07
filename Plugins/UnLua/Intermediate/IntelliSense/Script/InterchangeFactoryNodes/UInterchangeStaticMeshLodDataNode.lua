---namespace UE
---@class UInterchangeStaticMeshLodDataNode : UInterchangeFactoryBaseNode
local UInterchangeStaticMeshLodDataNode = {}

---@param AttributeValue boolean
---@return boolean
function UInterchangeStaticMeshLodDataNode:SetOneConvexHullPerUCX(AttributeValue) end

---@param AttributeValue EInterchangeMeshCollision
---@return boolean
function UInterchangeStaticMeshLodDataNode:SetImportCollisionType(AttributeValue) end

---@param AttributeValue boolean
---@return boolean
function UInterchangeStaticMeshLodDataNode:SetImportCollision(AttributeValue) end

---Sets whether we're generating collision primitive shapes even if the mesh data
---doesn't match the desired shape very well
---@param bGenerate boolean
---@return boolean
function UInterchangeStaticMeshLodDataNode:SetForceCollisionPrimitiveGeneration(bGenerate) end

---@param ColliderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:RemoveSphereCollisionMeshUid(ColliderMeshUid) end

---@param MeshName string
---@return boolean
function UInterchangeStaticMeshLodDataNode:RemoveMeshUid(MeshName) end

---@param MeshName string
---@return boolean
function UInterchangeStaticMeshLodDataNode:RemoveConvexCollisionMeshUid(MeshName) end

---@param ColliderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:RemoveCapsuleCollisionMeshUid(ColliderMeshUid) end

---@param ColliderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:RemoveBoxCollisionMeshUid(ColliderMeshUid) end

---@return boolean
function UInterchangeStaticMeshLodDataNode:RemoveAllSphereCollisionMeshes() end

---@return boolean
function UInterchangeStaticMeshLodDataNode:RemoveAllMeshes() end

---@return boolean
function UInterchangeStaticMeshLodDataNode:RemoveAllConvexCollisionMeshes() end

---@return boolean
function UInterchangeStaticMeshLodDataNode:RemoveAllCapsuleCollisionMeshes() end

---@return boolean
function UInterchangeStaticMeshLodDataNode:RemoveAllBoxCollisionMeshes() end

---@return integer
function UInterchangeStaticMeshLodDataNode:GetSphereCollisionMeshUidsCount() end

---@param OutMeshNames TArray_string_ @[out] 
function UInterchangeStaticMeshLodDataNode:GetSphereCollisionMeshUids(OutMeshNames) end

---@return TMap_string__string_
function UInterchangeStaticMeshLodDataNode:GetSphereCollisionMeshMap() end

---@param InColliderMeshUid string
---@param OutRenderMeshUid string @[out] 
function UInterchangeStaticMeshLodDataNode:GetSphereColliderRenderMeshUid(InColliderMeshUid, OutRenderMeshUid) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeStaticMeshLodDataNode:GetOneConvexHullPerUCX(AttributeValue) end

---Mesh UIDs can be either a scene node or a mesh node UID. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node.
---@return integer
function UInterchangeStaticMeshLodDataNode:GetMeshUidsCount() end

---@param OutMeshNames TArray_string_ @[out] 
function UInterchangeStaticMeshLodDataNode:GetMeshUids(OutMeshNames) end

---@param AttributeValue EInterchangeMeshCollision @[out] 
---@return boolean
function UInterchangeStaticMeshLodDataNode:GetImportCollisionType(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeStaticMeshLodDataNode:GetImportCollision(AttributeValue) end

---Gets whether we're generating collision primitive shapes even if the mesh data
---doesn't match the desired shape very well
---@param bGenerate boolean @[out] 
---@return boolean
function UInterchangeStaticMeshLodDataNode:GetForceCollisionPrimitiveGeneration(bGenerate) end

---@return integer
function UInterchangeStaticMeshLodDataNode:GetConvexCollisionMeshUidsCount() end

---@param OutMeshNames TArray_string_ @[out] 
function UInterchangeStaticMeshLodDataNode:GetConvexCollisionMeshUids(OutMeshNames) end

---@return TMap_string__string_
function UInterchangeStaticMeshLodDataNode:GetConvexCollisionMeshMap() end

---@param InColliderMeshUid string
---@param OutRenderMeshUid string @[out] 
function UInterchangeStaticMeshLodDataNode:GetConvexColliderRenderMeshUid(InColliderMeshUid, OutRenderMeshUid) end

---@return integer
function UInterchangeStaticMeshLodDataNode:GetCapsuleCollisionMeshUidsCount() end

---@param OutMeshNames TArray_string_ @[out] 
function UInterchangeStaticMeshLodDataNode:GetCapsuleCollisionMeshUids(OutMeshNames) end

---@return TMap_string__string_
function UInterchangeStaticMeshLodDataNode:GetCapsuleCollisionMeshMap() end

---@param InColliderMeshUid string
---@param OutRenderMeshUid string @[out] 
function UInterchangeStaticMeshLodDataNode:GetCapsuleColliderRenderMeshUid(InColliderMeshUid, OutRenderMeshUid) end

---@return integer
function UInterchangeStaticMeshLodDataNode:GetBoxCollisionMeshUidsCount() end

---@param OutMeshNames TArray_string_ @[out] 
function UInterchangeStaticMeshLodDataNode:GetBoxCollisionMeshUids(OutMeshNames) end

---@return TMap_string__string_
function UInterchangeStaticMeshLodDataNode:GetBoxCollisionMeshMap() end

---@param InColliderMeshUid string
---@param OutRenderMeshUid string @[out] 
function UInterchangeStaticMeshLodDataNode:GetBoxColliderRenderMeshUid(InColliderMeshUid, OutRenderMeshUid) end

---@param ColliderMeshUid string
---@param RenderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:AddSphereCollisionMeshUids(ColliderMeshUid, RenderMeshUid) end

---@param ColliderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:AddSphereCollisionMeshUid(ColliderMeshUid) end

---@param MeshName string
---@return boolean
function UInterchangeStaticMeshLodDataNode:AddMeshUid(MeshName) end

---@param ColliderMeshUid string
---@param RenderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:AddConvexCollisionMeshUids(ColliderMeshUid, RenderMeshUid) end

---@param ColliderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:AddConvexCollisionMeshUid(ColliderMeshUid) end

---@param ColliderMeshUid string
---@param RenderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:AddCapsuleCollisionMeshUids(ColliderMeshUid, RenderMeshUid) end

---@param ColliderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:AddCapsuleCollisionMeshUid(ColliderMeshUid) end

---@param ColliderMeshUid string
---@param RenderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:AddBoxCollisionMeshUids(ColliderMeshUid, RenderMeshUid) end

---@param ColliderMeshUid string
---@return boolean
function UInterchangeStaticMeshLodDataNode:AddBoxCollisionMeshUid(ColliderMeshUid) end

