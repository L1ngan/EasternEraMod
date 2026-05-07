---@class UInterchangeLightFactoryNode : UInterchangeBaseLightFactoryNode
local UInterchangeLightFactoryNode = {}

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeLightFactoryNode:SetCustomUseIESBrightness(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue FRotator
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeLightFactoryNode:SetCustomRotation(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue ELightUnits
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeLightFactoryNode:SetCustomIntensityUnits(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue string
---@return boolean
function UInterchangeLightFactoryNode:SetCustomIESTexture(AttributeValue) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeLightFactoryNode:SetCustomIESBrightnessScale(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeLightFactoryNode:SetCustomAttenuationRadius(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeLightFactoryNode:GetCustomUseIESBrightness(AttributeValue) end

---@param AttributeValue FRotator @[out] 
---@return boolean
function UInterchangeLightFactoryNode:GetCustomRotation(AttributeValue) end

---@param AttributeValue ELightUnits @[out] 
---@return boolean
function UInterchangeLightFactoryNode:GetCustomIntensityUnits(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeLightFactoryNode:GetCustomIESTexture(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeLightFactoryNode:GetCustomIESBrightnessScale(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeLightFactoryNode:GetCustomAttenuationRadius(AttributeValue) end

