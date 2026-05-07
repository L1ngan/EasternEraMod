---A Component referencing a vector field.
---@class UVectorFieldComponent : UPrimitiveComponent
---@field public VectorField UVectorField @The vector field asset.
---@field public Intensity number @The intensity at which the vector field is applied.
---@field public Tightness number @How tightly particles follow the vector field.
---@field public bPreviewVectorField boolean @If true, the vector field is only used for preview visualizations.
local UVectorFieldComponent = {}

---Set the intensity of the vector field.
---@param NewIntensity number
function UVectorFieldComponent:SetIntensity(NewIntensity) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVectorFieldComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UVectorFieldComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVectorFieldComponent:AddAssetUserDataOfClass(InUserDataClass) end

