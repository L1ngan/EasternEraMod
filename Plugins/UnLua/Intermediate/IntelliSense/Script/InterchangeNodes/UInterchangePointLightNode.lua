---@class UInterchangePointLightNode : UInterchangeLightNode
local UInterchangePointLightNode = {}

---@param AttributeValue boolean
---@return boolean
function UInterchangePointLightNode:SetCustomUseInverseSquaredFalloff(AttributeValue) end

---@param AttributeValue number
---@return boolean
function UInterchangePointLightNode:SetCustomLightFalloffExponent(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangePointLightNode:GetCustomUseInverseSquaredFalloff(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangePointLightNode:GetCustomLightFalloffExponent(AttributeValue) end

