---Virtual Texture with locally configurable build settings.
---A raw UTexture2D can also represent a Virtual Texture but uses the one and only per-project build settings.
---@class UVirtualTexture2D : UTexture2D
---@field public Settings FVirtualTextureBuildSettings
---@field public bSinglePhysicalSpace boolean
local UVirtualTexture2D = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVirtualTexture2D:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UVirtualTexture2D:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVirtualTexture2D:AddAssetUserDataOfClass(InUserDataClass) end

