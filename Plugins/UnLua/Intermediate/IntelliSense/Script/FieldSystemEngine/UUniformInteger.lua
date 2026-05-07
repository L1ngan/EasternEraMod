---Set a uniform integer value independently of the sample position. The output is equal to magnitude
---@class UUniformInteger : UFieldNodeInt
---@field public Magnitude integer @The field output will be equal the magnitude
local UUniformInteger = {}

---Set a uniform integer value independently of the sample position. The output is equal to magnitude
---@param Magnitude integer
---@return UUniformInteger
function UUniformInteger:SetUniformInteger(Magnitude) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UUniformInteger:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UUniformInteger:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UUniformInteger:AddAssetUserDataOfClass(InUserDataClass) end

