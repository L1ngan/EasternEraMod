---@class APointLight : ALight
---@field public PointLightComponent UPointLightComponent
local APointLight = {}

---BEGIN DEPRECATED (use component functions now in level script)
---@param NewRadius number
function APointLight:SetRadius(NewRadius) end

---@param NewLightFalloffExponent number
function APointLight:SetLightFalloffExponent(NewLightFalloffExponent) end

