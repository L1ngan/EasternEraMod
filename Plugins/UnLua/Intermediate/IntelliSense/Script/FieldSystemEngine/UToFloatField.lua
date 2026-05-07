---Convert an integer field to a scalar one
---@class UToFloatField : UFieldNodeFloat
---@field public IntField UFieldNodeInt @Integer field to be converted to an a scalar one
local UToFloatField = {}

---Convert an integer field to a float one
---@param IntegerField UFieldNodeInt
---@return UToFloatField
function UToFloatField:SetToFloatField(IntegerField) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UToFloatField:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UToFloatField:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UToFloatField:AddAssetUserDataOfClass(InUserDataClass) end

