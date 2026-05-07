---@class UTextureRenderTarget : UTexture
---@field public TargetGamma number @Will override FTextureRenderTarget2DResource::GetDisplayGamma if > 0.
local UTextureRenderTarget = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextureRenderTarget:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTextureRenderTarget:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextureRenderTarget:AddAssetUserDataOfClass(InUserDataClass) end

