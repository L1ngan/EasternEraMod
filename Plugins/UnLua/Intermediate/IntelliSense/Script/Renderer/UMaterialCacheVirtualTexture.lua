---@class UMaterialCacheVirtualTexture : UTexture
---@field public OwningComponent TWeakObjectPtr<UPrimitiveComponent>
---@field public MaterialStackProvider TWeakObjectPtr<UMaterialCacheStackProvider>
---@field public TileCount FIntPoint
local UMaterialCacheVirtualTexture = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMaterialCacheVirtualTexture:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMaterialCacheVirtualTexture:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMaterialCacheVirtualTexture:AddAssetUserDataOfClass(InUserDataClass) end

