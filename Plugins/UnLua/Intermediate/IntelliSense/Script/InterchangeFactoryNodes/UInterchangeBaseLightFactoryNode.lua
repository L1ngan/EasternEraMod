---@class UInterchangeBaseLightFactoryNode : UInterchangeActorFactoryNode
local UInterchangeBaseLightFactoryNode = {}

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeBaseLightFactoryNode:SetCustomUseTemperature(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeBaseLightFactoryNode:SetCustomTemperature(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue FColor
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeBaseLightFactoryNode:SetCustomLightColor(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeBaseLightFactoryNode:SetCustomIntensity(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeBaseLightFactoryNode:GetCustomUseTemperature(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeBaseLightFactoryNode:GetCustomTemperature(AttributeValue) end

---@param AttributeValue FColor @[out] 
---@return boolean
function UInterchangeBaseLightFactoryNode:GetCustomLightColor(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeBaseLightFactoryNode:GetCustomIntensity(AttributeValue) end

