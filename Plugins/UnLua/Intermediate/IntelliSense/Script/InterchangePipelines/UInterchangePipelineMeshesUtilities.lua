---@class UInterchangePipelineMeshesUtilities : UObject
local UInterchangePipelineMeshesUtilities = {}

---@param Context FInterchangePipelineMeshesUtilitiesContext
function UInterchangePipelineMeshesUtilities:SetContext(Context) end

---Return true if there is an existing FInterchangeMeshInstance that matches the MeshInstanceUid key.
---@param MeshInstanceUid string
---@return boolean
function UInterchangePipelineMeshesUtilities:IsValidMeshInstanceUid(MeshInstanceUid) end

---Return true if there is an existing FInterchangeMeshGeometry that matches the MeshInstanceUid key.
---@param MeshGeometryUid string
---@return boolean
function UInterchangePipelineMeshesUtilities:IsValidMeshGeometryUid(MeshGeometryUid) end

---Return the skeleton root node UID. This is the UID for a UInterchangeSceneNode that has a "Joint" specialized type.
---Return an empty string if the MeshInstanceUid parameter points to nothing.
---@param MeshInstanceUid string
---@return string
function UInterchangePipelineMeshesUtilities:GetMeshInstanceSkeletonRootUid(MeshInstanceUid) end

---Get the instanced mesh from the unique ID.
---@param MeshInstanceUid string
---@return FInterchangeMeshInstance
function UInterchangePipelineMeshesUtilities:GetMeshInstanceByUid(MeshInstanceUid) end

---Return the skeleton root node UID. This is the UID for a UInterchangeSceneNode that has a "Joint" specialized type.
---Return an empty string if the MeshGeometryUid parameter points to nothing.
---@param MeshGeometryUid string
---@return string
function UInterchangePipelineMeshesUtilities:GetMeshGeometrySkeletonRootUid(MeshGeometryUid) end

---Get the geometry mesh from the unique ID.
---@param MeshGeometryUid string
---@return FInterchangeMeshGeometry
function UInterchangePipelineMeshesUtilities:GetMeshGeometryByUid(MeshGeometryUid) end

---Get the unique IDs of all static mesh instances.
---@param MeshInstanceUids TArray_string_ @[out] 
function UInterchangePipelineMeshesUtilities:GetAllStaticMeshInstance(MeshInstanceUids) end

---Get the unique IDs of all static mesh geometry.
---@param MeshGeometryUids TArray_string_ @[out] 
function UInterchangePipelineMeshesUtilities:GetAllStaticMeshGeometry(MeshGeometryUids) end

---Get the unique IDs of all skinned mesh instances.
---@param MeshInstanceUids TArray_string_ @[out] 
function UInterchangePipelineMeshesUtilities:GetAllSkinnedMeshInstance(MeshInstanceUids) end

---Get the unique IDs of all skinned mesh geometry.
---@param MeshGeometryUids TArray_string_ @[out] 
function UInterchangePipelineMeshesUtilities:GetAllSkinnedMeshGeometry(MeshGeometryUids) end

---Get all instanced mesh UIDs that use the mesh geometry unique ID.
---@param MeshGeometryUid string
---@param MeshInstanceUids TArray_string_ @[out] 
function UInterchangePipelineMeshesUtilities:GetAllMeshInstanceUidsUsingMeshGeometryUid(MeshGeometryUid, MeshInstanceUids) end

---Get the unique IDs of all mesh instances.
---@param MeshInstanceUids TArray_string_ @[out] 
function UInterchangePipelineMeshesUtilities:GetAllMeshInstanceUids(MeshInstanceUids) end

---Get the unique IDs of all non-instanced mesh geometry.
---@param MeshGeometryUids TArray_string_ @[out] 
function UInterchangePipelineMeshesUtilities:GetAllMeshGeometryNotInstanced(MeshGeometryUids) end

---Get the unique IDs of all mesh geometry.
---@param MeshGeometryUids TArray_string_ @[out] 
function UInterchangePipelineMeshesUtilities:GetAllMeshGeometry(MeshGeometryUids) end

---Get the unique IDs of all geometry cache instances.
---@param MeshInstanceUids TArray_string_ @[out] 
function UInterchangePipelineMeshesUtilities:GetAllGeometryCacheInstance(MeshInstanceUids) end

---Get the unique IDs of all geometry cache geometry.
---@param MeshGeometryUids TArray_string_ @[out] 
function UInterchangePipelineMeshesUtilities:GetAllGeometryCacheGeometry(MeshGeometryUids) end

---Create an instance of UInterchangePipelineMeshesUtilities.
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@return UInterchangePipelineMeshesUtilities
function UInterchangePipelineMeshesUtilities.CreateInterchangePipelineMeshesUtilities(BaseNodeContainer) end

