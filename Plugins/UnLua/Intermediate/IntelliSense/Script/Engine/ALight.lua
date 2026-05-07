---@class ALight : AActor
---@field private LightComponent ULightComponent @
---@field public bEnabled boolean @replicated copy of LightComponent's bEnabled property
local ALight = {}

function ALight:ToggleEnabled() end

---@param NewLightFunctionScale FVector
function ALight:SetLightFunctionScale(NewLightFunctionScale) end

---@param NewLightFunctionMaterial UMaterialInterface
function ALight:SetLightFunctionMaterial(NewLightFunctionMaterial) end

---@param NewLightFunctionFadeDistance number
function ALight:SetLightFunctionFadeDistance(NewLightFunctionFadeDistance) end

---@param NewLightColor FLinearColor
function ALight:SetLightColor(NewLightColor) end

---BEGIN DEPRECATED (use component functions now in level script)
---@param bSetEnabled boolean
function ALight:SetEnabled(bSetEnabled) end

---@param bNewValue boolean
function ALight:SetCastShadows(bNewValue) end

---@param NewBrightness number
function ALight:SetBrightness(NewBrightness) end

---@param bNewValue boolean
function ALight:SetAffectTranslucentLighting(bNewValue) end

---Replication Notification Callbacks
function ALight:OnRep_bEnabled() end

---@return boolean
function ALight:IsEnabled() end

---@return FLinearColor
function ALight:GetLightColor() end

---@return number
function ALight:GetBrightness() end

