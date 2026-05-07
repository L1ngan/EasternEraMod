---@class UTextureLightProfile : UTexture2D
---@field public Brightness number @Light brightness in Candelas, imported from IES profile, <= 0 if the profile is used for masking only. Use with InverseSquareFalloff.
---@field public TextureMultiplier number @Multiplier to map texture value to result to integrate over the sphere to 1.0f
local UTextureLightProfile = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextureLightProfile:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTextureLightProfile:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextureLightProfile:AddAssetUserDataOfClass(InUserDataClass) end

