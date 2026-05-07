---UOctreeDynamicMeshComponent is a mesh component similar to UProceduralMeshComponent,
---except it bases the renderable geometry off an internal FDynamicMesh3 instance.
---The class generally has the same capabilities as UDynamicMeshComponent.
---A FDynamicMeshOctree3 is available to dynamically track the triangles of the mesh
---(however the client is responsible for updating this octree).
---Based on the Octree, the mesh is partitioned into chunks that are stored in separate
---RenderBuffers in the FOctreeDynamicMeshSceneProxy.
---Calling NotifyMeshUpdated() will result in only the "dirty" chunks being updated,
---rather than the entire mesh.
---(So, if you don't need this capability, and don't want to update an Octree, use UDynamicMeshComponent!)
---@class UOctreeDynamicMeshComponent : UBaseDynamicMeshComponent
---@field private MeshObject UDynamicMesh
local UOctreeDynamicMeshComponent = {}

---@param NewMesh UDynamicMesh
function UOctreeDynamicMeshComponent:SetDynamicMesh(NewMesh) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UOctreeDynamicMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UOctreeDynamicMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UOctreeDynamicMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

