---Control the set of particles on which the field will be applied
---@class UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData
---@field public ResolutionType integer @Precessing resolution type used to select the particles on which the field will be applied
local UFieldSystemMetaDataProcessingResolution = {}

---Set the processing resolution type
---@param ResolutionType integer
---@return UFieldSystemMetaDataProcessingResolution
function UFieldSystemMetaDataProcessingResolution:SetMetaDataaProcessingResolutionType(ResolutionType) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFieldSystemMetaDataProcessingResolution:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UFieldSystemMetaDataProcessingResolution:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFieldSystemMetaDataProcessingResolution:AddAssetUserDataOfClass(InUserDataClass) end

