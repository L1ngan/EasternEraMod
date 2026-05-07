---Component that provides a directional wind source. Only affects SpeedTree assets.
---@class UWindDirectionalSourceComponent : USceneComponent
---@field public Strength number
---@field public Speed number
---@field public MinGustAmount number
---@field public MaxGustAmount number
---@field public Radius number
---@field public bPointWind boolean
local UWindDirectionalSourceComponent = {}

---Set the type of wind generator to use
---@param InNewType EWindSourceType
function UWindDirectionalSourceComponent:SetWindType(InNewType) end

---Sets the strength of the generated wind
---@param InNewStrength number
function UWindDirectionalSourceComponent:SetStrength(InNewStrength) end

---Sets the windspeed of the generated wind
---@param InNewSpeed number
function UWindDirectionalSourceComponent:SetSpeed(InNewSpeed) end

---Set the effect radius for point wind
---@param InNewRadius number
function UWindDirectionalSourceComponent:SetRadius(InNewRadius) end

---Set minimum deviation for wind gusts
---@param InNewMinGust number
function UWindDirectionalSourceComponent:SetMinimumGustAmount(InNewMinGust) end

---Set maximum deviation for wind gusts
---@param InNewMaxGust number
function UWindDirectionalSourceComponent:SetMaximumGustAmount(InNewMaxGust) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UWindDirectionalSourceComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UWindDirectionalSourceComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UWindDirectionalSourceComponent:AddAssetUserDataOfClass(InUserDataClass) end

