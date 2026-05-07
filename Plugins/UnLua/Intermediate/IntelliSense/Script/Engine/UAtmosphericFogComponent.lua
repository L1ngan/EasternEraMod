---Used to create fogging effects such as clouds.
---@class UAtmosphericFogComponent : USkyAtmosphereComponent
local UAtmosphericFogComponent = {}

---Deprecated
---@param NewSunMultiplier number
function UAtmosphericFogComponent:SetSunMultiplier(NewSunMultiplier) end

---Deprecated
---@param NewStartDistance number
function UAtmosphericFogComponent:SetStartDistance(NewStartDistance) end

---Deprecated
---@param DensityHeight number
---@param MaxScatteringOrder integer
---@param InscatterAltitudeSampleNum integer
function UAtmosphericFogComponent:SetPrecomputeParams(DensityHeight, MaxScatteringOrder, InscatterAltitudeSampleNum) end

---Deprecated
---@param NewFogMultiplier number
function UAtmosphericFogComponent:SetFogMultiplier(NewFogMultiplier) end

---Deprecated
---@param NewDistanceScale number
function UAtmosphericFogComponent:SetDistanceScale(NewDistanceScale) end

---Deprecated
---@param NewDistanceOffset number
function UAtmosphericFogComponent:SetDistanceOffset(NewDistanceOffset) end

---Deprecated
---@param NewDensityOffset number
function UAtmosphericFogComponent:SetDensityOffset(NewDensityOffset) end

---Deprecated
---@param NewDensityMultiplier number
function UAtmosphericFogComponent:SetDensityMultiplier(NewDensityMultiplier) end

---Deprecated
---@param NewLightColor FLinearColor
function UAtmosphericFogComponent:SetDefaultLightColor(NewLightColor) end

---Deprecated
---@param NewBrightness number
function UAtmosphericFogComponent:SetDefaultBrightness(NewBrightness) end

---Deprecated
---@param NewAltitudeScale number
function UAtmosphericFogComponent:SetAltitudeScale(NewAltitudeScale) end

---Deprecated
---@param NewSunDisk boolean
function UAtmosphericFogComponent:DisableSunDisk(NewSunDisk) end

---Deprecated
---@param NewGroundScattering boolean
function UAtmosphericFogComponent:DisableGroundScattering(NewGroundScattering) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAtmosphericFogComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAtmosphericFogComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAtmosphericFogComponent:AddAssetUserDataOfClass(InUserDataClass) end

