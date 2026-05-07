---A light component which emits light from a single point equally in all directions.
---@class ULocalLightComponent : ULightComponent
---@field public IntensityUnits ELightUnits @Units used for the intensity. The peak luminous intensity is measured in candelas, while the luminous flux is measured in lumens. When the units are set in Nits, the light's power is also determined by the size of the light source (larger sources will emit more light).
---@field public InverseExposureBlend number @Blend Factor used to blend between Intensity and Intensity/Exposure. This is useful for gameplay lights that should have constant brighness on screen independent of current exposure. This feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited.
---@field public AttenuationRadius number @Bounds the light's visible influence. This clamping of the light's influence is not physically correct but very important for performance, larger lights cost more.
---@field public LightmassSettings FLightmassPointLightSettings @The Lightmass settings for this object.
local ULocalLightComponent = {}

---Set the units used for the intensity of the light
---@param NewIntensityUnits ELightUnits
function ULocalLightComponent:SetIntensityUnits(NewIntensityUnits) end

---@param NewRadius number
function ULocalLightComponent:SetAttenuationRadius(NewRadius) end

---@param SrcUnits ELightUnits
---@param TargetUnits ELightUnits
---@param CosHalfConeAngle number @[opt] 
---@return number
function ULocalLightComponent.GetUnitsConversionFactor(SrcUnits, TargetUnits, CosHalfConeAngle) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULocalLightComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULocalLightComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULocalLightComponent:AddAssetUserDataOfClass(InUserDataClass) end

