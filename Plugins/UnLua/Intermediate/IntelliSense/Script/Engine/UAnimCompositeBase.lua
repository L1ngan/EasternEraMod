---@class UAnimCompositeBase : UAnimSequenceBase
---@field protected CommonTargetFrameRate FFrameRate @Frame-rate used to represent this Animation Montage (best fitting for placed Animation Sequences)
local UAnimCompositeBase = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimCompositeBase:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAnimCompositeBase:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimCompositeBase:AddAssetUserDataOfClass(InUserDataClass) end

