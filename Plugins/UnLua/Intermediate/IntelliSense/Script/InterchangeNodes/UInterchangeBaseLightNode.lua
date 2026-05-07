---@class UInterchangeBaseLightNode : UInterchangeBaseNode
local UInterchangeBaseLightNode = {}

---@param AttributeValue boolean
---@return boolean
function UInterchangeBaseLightNode:SetCustomUseTemperature(AttributeValue) end

---@param AttributeValue number
---@return boolean
function UInterchangeBaseLightNode:SetCustomTemperature(AttributeValue) end

---@param AttributeValue FLinearColor
---@return boolean
function UInterchangeBaseLightNode:SetCustomLightColor(AttributeValue) end

---@param AttributeValue number
---@return boolean
function UInterchangeBaseLightNode:SetCustomIntensity(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeBaseLightNode:GetCustomUseTemperature(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeBaseLightNode:GetCustomTemperature(AttributeValue) end

---@param AttributeValue FLinearColor @[out] 
---@return boolean
function UInterchangeBaseLightNode:GetCustomLightColor(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeBaseLightNode:GetCustomIntensity(AttributeValue) end

