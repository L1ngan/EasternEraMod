---Filter the particles on which the field will be applied
---@class UFieldSystemMetaDataFilter : UFieldSystemMetaData
---@field public FilterType integer @Filter state type used to select the particles on which the field will be applied
---@field public ObjectType integer @Filter object type used to select the particles on which the field will be applied
---@field public PositionType integer @Specify which position type will be used for the field evaluation
local UFieldSystemMetaDataFilter = {}

---Set the particles filter type
---@param FilterType integer
---@param ObjectType integer
---@param PositionType integer
---@return UFieldSystemMetaDataFilter
function UFieldSystemMetaDataFilter:SetMetaDataFilterType(FilterType, ObjectType, PositionType) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFieldSystemMetaDataFilter:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UFieldSystemMetaDataFilter:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFieldSystemMetaDataFilter:AddAssetUserDataOfClass(InUserDataClass) end

