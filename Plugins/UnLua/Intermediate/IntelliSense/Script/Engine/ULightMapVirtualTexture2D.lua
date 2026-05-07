---@class ULightMapVirtualTexture2D : UTexture2D
---@field public TypeToLayer TArray<integer>
local ULightMapVirtualTexture2D = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULightMapVirtualTexture2D:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULightMapVirtualTexture2D:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULightMapVirtualTexture2D:AddAssetUserDataOfClass(InUserDataClass) end

