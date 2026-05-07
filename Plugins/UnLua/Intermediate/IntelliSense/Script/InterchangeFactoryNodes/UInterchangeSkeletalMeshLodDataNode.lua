---ns UE
---@class UInterchangeSkeletalMeshLodDataNode : UInterchangeFactoryBaseNode
local UInterchangeSkeletalMeshLodDataNode = {}

---Set the LOD skeletal mesh factory skeleton reference. Return false if the attribute could not be set.
---@param AttributeValue string
---@return boolean
function UInterchangeSkeletalMeshLodDataNode:SetCustomSkeletonUid(AttributeValue) end

---Remove a mesh geometry used to create this LOD geometry. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node.
---@param MeshName string
---@return boolean
function UInterchangeSkeletalMeshLodDataNode:RemoveMeshUid(MeshName) end

---Remove all mesh geometry used to create this LOD geometry. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node.
---@return boolean
function UInterchangeSkeletalMeshLodDataNode:RemoveAllMeshes() end

---Return the number of mesh geometries this LOD will be made from. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node.
---@return integer
function UInterchangeSkeletalMeshLodDataNode:GetMeshUidsCount() end

---Query all mesh geometry this LOD will be made from. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node.
---@param OutMeshNames TArray_string_ @[out] 
function UInterchangeSkeletalMeshLodDataNode:GetMeshUids(OutMeshNames) end

---Query the LOD skeletal mesh factory skeleton reference. Return false if the attribute was not set.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeSkeletalMeshLodDataNode:GetCustomSkeletonUid(AttributeValue) end

---Add a mesh geometry used to create this LOD geometry. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node.
---@param MeshName string
---@return boolean
function UInterchangeSkeletalMeshLodDataNode:AddMeshUid(MeshName) end

