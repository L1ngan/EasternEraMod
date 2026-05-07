---Set a uniform vector value independently of the sample position.The output is equal to magnitude * direction
---@class UUniformVector : UFieldNodeVector
---@field public Magnitude number @Magnitude of the uniform vector field
---@field public Direction FVector @Normalized direction of the uniform vector field
local UUniformVector = {}

---Set a uniform vector value independently of the sample position.The output is equal to magnitude * direction
---@param Magnitude number
---@param Direction FVector
---@return UUniformVector
function UUniformVector:SetUniformVector(Magnitude, Direction) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UUniformVector:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UUniformVector:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UUniformVector:AddAssetUserDataOfClass(InUserDataClass) end

