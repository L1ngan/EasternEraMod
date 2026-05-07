---Deprecated class.
---@class URuntimeVirtualTextureStreamingProxy : UTexture2D
local URuntimeVirtualTextureStreamingProxy = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URuntimeVirtualTextureStreamingProxy:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function URuntimeVirtualTextureStreamingProxy:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URuntimeVirtualTextureStreamingProxy:AddAssetUserDataOfClass(InUserDataClass) end

