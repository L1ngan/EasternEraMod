---@class UVolumeTexture : UTexture
---@field public Source2DTexture UTexture2D @A (optional) reference texture from which the volume texture was built
---@field public Source2DTileSizeX integer @The reference texture tile size X
---@field public Source2DTileSizeY integer @The reference texture tile size Y
---@field public AddressMode integer @The addressing mode to use for the X, Y and Z axis.
local UVolumeTexture = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVolumeTexture:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UVolumeTexture:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVolumeTexture:AddAssetUserDataOfClass(InUserDataClass) end

