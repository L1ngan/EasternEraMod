---A light component which emits light from a single point equally in all directions.
---@class UPointLightComponent : ULocalLightComponent
---@field public bUseInverseSquaredFalloff boolean @Whether to use physically based inverse squared distance falloff, where AttenuationRadius is only clamping the light's contribution. Disabling inverse squared falloff can be useful when placing fill lights (don't want a super bright spot near the light). When enabled, the light's Intensity is in units of lumens, where 1700 lumens is a 100W lightbulb. When disabled, the light's Intensity is a brightness scale.
---@field public LightFalloffExponent number @Controls the radial falloff of the light when UseInverseSquaredFalloff is disabled. 2 is almost linear and very unrealistic and around 8 it looks reasonable. With large exponents, the light has contribution to only a small area of its influence radius but still costs the same as low exponents.
---@field public SourceRadius number @Radius of light source shape. Note that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts.
---@field public SoftSourceRadius number @Soft radius of light source shape. Note that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts.
---@field public SourceLength number @Length of light source shape. Note that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts.
local UPointLightComponent = {}

---@param bNewValue boolean
function UPointLightComponent:SetUseInverseSquaredFalloff(bNewValue) end

---@param bNewValue number
function UPointLightComponent:SetSourceRadius(bNewValue) end

---@param NewValue number
function UPointLightComponent:SetSourceLength(NewValue) end

---@param bNewValue number
function UPointLightComponent:SetSoftSourceRadius(bNewValue) end

---@param NewLightFalloffExponent number
function UPointLightComponent:SetLightFalloffExponent(NewLightFalloffExponent) end

---@param NewInverseExposureBlend number
function UPointLightComponent:SetInverseExposureBlend(NewInverseExposureBlend) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPointLightComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPointLightComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPointLightComponent:AddAssetUserDataOfClass(InUserDataClass) end

