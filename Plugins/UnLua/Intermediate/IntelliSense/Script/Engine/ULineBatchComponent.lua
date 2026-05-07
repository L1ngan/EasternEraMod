---The line batch component buffers and draws lines (and some other line-based shapes) in a scene.
---    This can be useful for debug drawing, but is not very performant for runtime use.
---@class ULineBatchComponent : UPrimitiveComponent
local ULineBatchComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULineBatchComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULineBatchComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULineBatchComponent:AddAssetUserDataOfClass(InUserDataClass) end

