---Defines a perlin noise scalar value if the sample is within a box
---@class UNoiseField : UFieldNodeFloat
---@field public MinRange number @The initial function value between 0 and 1 will be scaled between MinRange and MaxRange
---@field public MaxRange number @The initial function value between 0 and 1 will be scaled between MinRange and MaxRange
---@field public Transform FTransform @Transform of the box in which the perlin noise will be defined
local UNoiseField = {}

---Defines a perlin noise scalar value if the sample is within a box
---@param MinRange number
---@param MaxRange number
---@param Transform FTransform
---@return UNoiseField
function UNoiseField:SetNoiseField(MinRange, MaxRange, Transform) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNoiseField:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UNoiseField:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNoiseField:AddAssetUserDataOfClass(InUserDataClass) end

