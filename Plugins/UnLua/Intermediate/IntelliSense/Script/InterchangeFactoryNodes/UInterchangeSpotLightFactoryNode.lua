---@class UInterchangeSpotLightFactoryNode : UInterchangePointLightFactoryNode
local UInterchangeSpotLightFactoryNode = {}

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeSpotLightFactoryNode:SetCustomOuterConeAngle(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeSpotLightFactoryNode:SetCustomInnerConeAngle(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeSpotLightFactoryNode:GetCustomOuterConeAngle(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeSpotLightFactoryNode:GetCustomInnerConeAngle(AttributeValue) end

