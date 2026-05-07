---@class ASpotLight : ALight
---@field public SpotLightComponent USpotLightComponent
---@field private ArrowComponent UArrowComponent
local ASpotLight = {}

---@param NewOuterConeAngle number
function ASpotLight:SetOuterConeAngle(NewOuterConeAngle) end

---BEGIN DEPRECATED (use component functions now in level script)
---@param NewInnerConeAngle number
function ASpotLight:SetInnerConeAngle(NewInnerConeAngle) end

