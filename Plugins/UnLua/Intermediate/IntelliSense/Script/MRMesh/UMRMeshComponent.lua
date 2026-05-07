---@class UMRMeshComponent : UPrimitiveComponent
---@field private Material UMaterialInterface
---@field private WireframeMaterial UMaterialInterface
---@field private bCreateMeshProxySections boolean @If true, MRMesh will create a renderable mesh proxy.  If false it will not, but could still provide collision.
---@field private bUpdateNavMeshOnMeshUpdate boolean @If true, MRMesh will automatically update its navmesh whenever any Mesh section is updated. This may be expensive. If this is disabled use ForceNavMeshUpdate to trigger a navmesh update when necessary.  Moving the component will also trigger a navmesh update.
---@field private bNeverCreateCollisionMesh boolean @If true, MRMesh will not create a collidable ridgid body for each mesh section and can therefore never have collision.  Avoids the cost of generating collision.
---@field private BodyHolders TArray<UMRMeshBodyHolder> @Collision/Physics data
local UMRMeshComponent = {}

---Set the wireframe material.
---@param InMaterial UMaterialInterface
function UMRMeshComponent:SetWireframeMaterial(InMaterial) end

---@param InColor FLinearColor
function UMRMeshComponent:SetWireframeColor(InColor) end

---@param bUseWireframe boolean
function UMRMeshComponent:SetUseWireframe(bUseWireframe) end

---@param bEnable boolean
function UMRMeshComponent:SetEnableMeshOcclusion(bEnable) end

---Generate nav mesh if collision data has changed since the last nav mesh generation.
function UMRMeshComponent:RequestNavMeshUpdate() end

---@return boolean
function UMRMeshComponent:IsConnected() end

---@return FLinearColor
function UMRMeshComponent:GetWireframeColor() end

---@return boolean
function UMRMeshComponent:GetUseWireframe() end

---@return boolean
function UMRMeshComponent:GetEnableMeshOcclusion() end

---Force navmesh generation to run using the current collision data.  This will run even if the collision data has not been udpated! Unless you are changing navmesh settings or similar RequestNavMeshUpdate is reccomended.
function UMRMeshComponent:ForceNavMeshUpdate() end

function UMRMeshComponent:Clear() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMRMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMRMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMRMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

