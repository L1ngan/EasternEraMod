---Convert a scalar field to a integer one
---@class UToIntegerField : UFieldNodeInt
---@field public FloatField UFieldNodeFloat @Scalar field to be converted to an an integer one
local UToIntegerField = {}

---Convert a float field to a integer one
---@param FloatField UFieldNodeFloat
---@return UToIntegerField
function UToIntegerField:SetToIntegerField(FloatField) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UToIntegerField:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UToIntegerField:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UToIntegerField:AddAssetUserDataOfClass(InUserDataClass) end

