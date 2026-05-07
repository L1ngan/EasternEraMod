---Set a uniform scalar value independently of the sample position. The output is equal to magnitude
---@class UUniformScalar : UFieldNodeFloat
---@field public Magnitude number @The field output will be equal the magnitude
local UUniformScalar = {}

---Set a uniform scalar value independently of the sample position. The output is equal to magnitude
---@param Magnitude number
---@return UUniformScalar
function UUniformScalar:SetUniformScalar(Magnitude) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UUniformScalar:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UUniformScalar:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UUniformScalar:AddAssetUserDataOfClass(InUserDataClass) end

