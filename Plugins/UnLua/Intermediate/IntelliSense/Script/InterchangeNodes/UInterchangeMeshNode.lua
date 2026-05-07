---@class UInterchangeMeshNode : UInterchangeBaseNode
local UInterchangeMeshNode = {}

---Add the specified Material dependency to a specific slot name of this object.
---@param SlotName string
---@param MaterialDependencyUid string
---@return boolean
function UInterchangeMeshNode:SetSlotMaterialDependencyUid(SlotName, MaterialDependencyUid) end

---Set the IsSkinnedMesh attribute to determine whether this node represents a skinned mesh.
---@param bIsSkinnedMesh boolean
---@return boolean
function UInterchangeMeshNode:SetSkinnedMesh(bIsSkinnedMesh) end

---Add the specified skeleton dependency to this object.
---@param DependencyUid string
---@return boolean
function UInterchangeMeshNode:SetSkeletonDependencyUid(DependencyUid) end

---Add the specified asset instance this scene node refers to.
---@param DependencyUid string
---@return boolean
function UInterchangeMeshNode:SetSceneInstanceUid(DependencyUid) end

---@param PayLoadKey string
---@param PayLoadType EInterchangeMeshPayLoadType
function UInterchangeMeshNode:SetPayLoadKey(PayLoadKey, PayLoadType) end

---Set the MorphTargetName attribute to determine the name of the morph target.
---@param MorphTargetName string
---@return boolean
function UInterchangeMeshNode:SetMorphTargetName(MorphTargetName) end

---Add the specified morph target dependency to this object.
---@param DependencyUid string
---@return boolean
function UInterchangeMeshNode:SetMorphTargetDependencyUid(DependencyUid) end

---Set the IsMorphTarget attribute to determine whether this node represents a morph target.
---@param bIsMorphTarget boolean
---@return boolean
function UInterchangeMeshNode:SetMorphTarget(bIsMorphTarget) end

---Set the vertex count of this mesh. Return false if the attribute could not be set.
---@param AttributeValue integer
---@return boolean
function UInterchangeMeshNode:SetCustomVertexCount(AttributeValue) end

---Set the UV count attribute of this mesh. Return false if the attribute could not be set.
---@param AttributeValue integer
---@return boolean
function UInterchangeMeshNode:SetCustomUVCount(AttributeValue) end

---Set the polygon count of this mesh. Return false if the attribute could not be set.
---@param AttributeValue integer
---@return boolean
function UInterchangeMeshNode:SetCustomPolygonCount(AttributeValue) end

---Set the vertex tangent attribute of this mesh. Return false if the attribute could not be set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeMeshNode:SetCustomHasVertexTangent(AttributeValue) end

---Set the vertex normal attribute of this mesh. Return false if the attribute could not be set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeMeshNode:SetCustomHasVertexNormal(AttributeValue) end

---Set the vertex color attribute of this mesh. Return false if the attribute could not be set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeMeshNode:SetCustomHasVertexColor(AttributeValue) end

---Set the vertex bi-normal attribute of this mesh. Return false if the attribute could not be set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeMeshNode:SetCustomHasVertexBinormal(AttributeValue) end

---Set the smoothing group attribute of this mesh. Return false if the attribute could not be set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeMeshNode:SetCustomHasSmoothGroup(AttributeValue) end

---Set the type of collision shapes we should generate from this mesh
---@param AttributeValue EInterchangeMeshCollision
---@return boolean
function UInterchangeMeshNode:SetCustomCollisionType(AttributeValue) end

---Set the bounding box of this mesh. Return false if the attribute could not be set.
---@param AttributeValue FBox
---@return boolean
function UInterchangeMeshNode:SetCustomBoundingBox(AttributeValue) end

---Remove the Material dependency associated with the given slot name from this object.
---@param SlotName string
---@return boolean
function UInterchangeMeshNode:RemoveSlotMaterialDependencyUid(SlotName) end

---Remove the specified skeleton dependency from this object.
---@param DependencyUid string
---@return boolean
function UInterchangeMeshNode:RemoveSkeletonDependencyUid(DependencyUid) end

---Remove the specified asset instance this scene node refers to.
---@param DependencyUid string
---@return boolean
function UInterchangeMeshNode:RemoveSceneInstanceUid(DependencyUid) end

---Remove the specified morph target dependency from this object.
---@param DependencyUid string
---@return boolean
function UInterchangeMeshNode:RemoveMorphTargetDependencyUid(DependencyUid) end

---Return true if this node represents a skinned mesh.
---@return boolean
function UInterchangeMeshNode:IsSkinnedMesh() end

---Return true if this node represents a morph target.
---@return boolean
function UInterchangeMeshNode:IsMorphTarget() end

---Retrieve the specified Material dependency for a given slot of this object.
---@param SlotName string
---@param OutMaterialDependency string @[out] 
---@return boolean
function UInterchangeMeshNode:GetSlotMaterialDependencyUid(SlotName, OutMaterialDependency) end

---Retrieve the correspondence table between slot names and assigned materials for this object.
---@param OutMaterialDependencies TMap_string__string_ @[out] 
function UInterchangeMeshNode:GetSlotMaterialDependencies(OutMaterialDependencies) end

---Retrieve the specified skeleton dependency for this object.
---@param Index integer
---@param OutDependency string @[out] 
function UInterchangeMeshNode:GetSkeletonDependency(Index, OutDependency) end

---Retrieve the skeleton dependency for this object.
---@param OutDependencies TArray_string_ @[out] 
function UInterchangeMeshNode:GetSkeletonDependencies(OutDependencies) end

---Retrieve the number of skeleton dependencies for this object.
---@return integer
function UInterchangeMeshNode:GetSkeletonDependeciesCount() end

---Retrieve the number of scene nodes instancing this mesh.
---@return integer
function UInterchangeMeshNode:GetSceneInstanceUidsCount() end

---Retrieve the asset instances this scene node refers to.
---@param OutDependencies TArray_string_ @[out] 
function UInterchangeMeshNode:GetSceneInstanceUids(OutDependencies) end

---Retrieve the asset instance this scene node refers to.
---@param Index integer
---@param OutDependency string @[out] 
function UInterchangeMeshNode:GetSceneInstanceUid(Index, OutDependency) end

---Get the morph target name.
---Return true if we successfully retrieved the MorphTargetName attribute.
---@param OutMorphTargetName string @[out] 
---@return boolean
function UInterchangeMeshNode:GetMorphTargetName(OutMorphTargetName) end

---Retrieve the specified morph target dependency for this object.
---@param Index integer
---@param OutDependency string @[out] 
function UInterchangeMeshNode:GetMorphTargetDependency(Index, OutDependency) end

---Retrieve all morph target dependencies for this object.
---@param OutDependencies TArray_string_ @[out] 
function UInterchangeMeshNode:GetMorphTargetDependencies(OutDependencies) end

---Retrieve the number of morph target dependencies for this object.
---@return integer
function UInterchangeMeshNode:GetMorphTargetDependeciesCount() end

---Query the vertex count of this mesh. Return false if the attribute was not set.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeMeshNode:GetCustomVertexCount(AttributeValue) end

---Query the UV count of this mesh. Return false if the attribute was not set.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeMeshNode:GetCustomUVCount(AttributeValue) end

---Query the polygon count of this mesh. Return false if the attribute was not set.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeMeshNode:GetCustomPolygonCount(AttributeValue) end

---Query whether this mesh has vertex tangents. Return false if the attribute was not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshNode:GetCustomHasVertexTangent(AttributeValue) end

---Query whether this mesh has vertex normals. Return false if the attribute was not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshNode:GetCustomHasVertexNormal(AttributeValue) end

---Query whether this mesh has vertex colors. Return false if the attribute was not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshNode:GetCustomHasVertexColor(AttributeValue) end

---Query whether this mesh has vertex bi-normals. Return false if the attribute was not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshNode:GetCustomHasVertexBinormal(AttributeValue) end

---Query whether this mesh has smoothing groups. Return false if the attribute was not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshNode:GetCustomHasSmoothGroup(AttributeValue) end

---Get the type of collision shapes we should generate from this mesh.
---Note: This is a separate mechanism from the FBX-style collision shape name prefixes. For now, these
---collision shapes will only be used for the static mesh generated from this very same Mesh node
---@param AttributeValue EInterchangeMeshCollision @[out] 
---@return boolean
function UInterchangeMeshNode:GetCustomCollisionType(AttributeValue) end

---Query the bounding box of this mesh. Return false if the attribute was not set.
---@param AttributeValue FBox @[out] 
---@return boolean
function UInterchangeMeshNode:GetCustomBoundingBox(AttributeValue) end

