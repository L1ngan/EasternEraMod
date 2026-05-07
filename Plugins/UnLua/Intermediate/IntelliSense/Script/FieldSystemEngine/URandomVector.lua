---Set a random vector value independently of the sample position. The output is equal to magnitude * random direction
---@class URandomVector : UFieldNodeVector
---@field public Magnitude number @Magnitude of the random vector field
local URandomVector = {}

---Set a random vector value independently of the sample position. The output is equal to magnitude * random direction
---@param Magnitude number
---@return URandomVector
function URandomVector:SetRandomVector(Magnitude) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URandomVector:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function URandomVector:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URandomVector:AddAssetUserDataOfClass(InUserDataClass) end

