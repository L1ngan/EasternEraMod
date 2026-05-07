---ModelComponents are PrimitiveComponents that represent elements of BSP geometry in a ULevel object.
---They are used exclusively by ULevel and are not intended as general-purpose components.
---@class UModelComponent : UPrimitiveComponent
---@field public ModelBodySetup UBodySetup @Description of collision
local UModelComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UModelComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UModelComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UModelComponent:AddAssetUserDataOfClass(InUserDataClass) end

