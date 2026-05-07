---note : UTexture2DDynamic derives directly from UTexture not from UTexture2D
---UTexture2DDynamic is a base for textures that don't have a TextureSource
---@class UTexture2DDynamic : UTexture
---@field public Format integer @The format of the texture.
local UTexture2DDynamic = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTexture2DDynamic:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTexture2DDynamic:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTexture2DDynamic:AddAssetUserDataOfClass(InUserDataClass) end

