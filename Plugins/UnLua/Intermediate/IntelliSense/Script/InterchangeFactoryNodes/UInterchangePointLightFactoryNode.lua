---@class UInterchangePointLightFactoryNode : UInterchangeLightFactoryNode
local UInterchangePointLightFactoryNode = {}

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangePointLightFactoryNode:SetCustomUseInverseSquaredFalloff(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangePointLightFactoryNode:SetCustomLightFalloffExponent(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangePointLightFactoryNode:GetCustomUseInverseSquaredFalloff(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangePointLightFactoryNode:GetCustomLightFalloffExponent(AttributeValue) end

