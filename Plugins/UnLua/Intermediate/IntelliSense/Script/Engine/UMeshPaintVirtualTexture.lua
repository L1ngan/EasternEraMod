---Mesh paint virtual texture asset.
---This is a virtual texture that which will be owned by a mesh component to store the mesh painting on that component.
---All mesh paint virtual textures will be stored using a shared virtual texture page table and physical space.
---This shared space means that all mesh paint virtual textures can be accessed in a "bindless" way using a small descriptor.
---@class UMeshPaintVirtualTexture : UTexture2D
---@field public OwningComponent TWeakObjectPtr<UPrimitiveComponent> @Weak refererence to the owning primitive component.
local UMeshPaintVirtualTexture = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMeshPaintVirtualTexture:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMeshPaintVirtualTexture:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMeshPaintVirtualTexture:AddAssetUserDataOfClass(InUserDataClass) end

