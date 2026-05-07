---An Aim Offset is an asset that stores a blendable series of poses to help a character aim a weapon.
---@class UAimOffsetBlendSpace : UBlendSpace
local UAimOffsetBlendSpace = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAimOffsetBlendSpace:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAimOffsetBlendSpace:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAimOffsetBlendSpace:AddAssetUserDataOfClass(InUserDataClass) end

