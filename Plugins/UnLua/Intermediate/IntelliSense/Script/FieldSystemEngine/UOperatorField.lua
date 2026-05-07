---Compute an operation between 2 incoming fields
---@class UOperatorField : UFieldNodeBase
---@field public Magnitude number @Magnitude of the operator field
---@field public RightField UFieldNodeBase @Right field to be processed
---@field public LeftField UFieldNodeBase @Left field to be processed
---@field public Operation integer @Type of operation you want to perform between the 2 fields
local UOperatorField = {}

---Compute an operation between 2 incoming fields
---@param Magnitude number
---@param LeftField UFieldNodeBase
---@param RightField UFieldNodeBase
---@param Operation integer
---@return UOperatorField
function UOperatorField:SetOperatorField(Magnitude, LeftField, RightField, Operation) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UOperatorField:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UOperatorField:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UOperatorField:AddAssetUserDataOfClass(InUserDataClass) end

