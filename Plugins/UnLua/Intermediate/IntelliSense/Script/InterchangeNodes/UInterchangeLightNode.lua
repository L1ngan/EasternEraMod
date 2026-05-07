---@class UInterchangeLightNode : UInterchangeBaseLightNode
local UInterchangeLightNode = {}

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeLightNode:SetCustomUseIESBrightness(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue FRotator
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeLightNode:SetCustomRotation(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue EInterchangeLightUnits
---@return boolean
function UInterchangeLightNode:SetCustomIntensityUnits(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeLightNode:SetCustomIESTexture(AttributeValue) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeLightNode:SetCustomIESBrightnessScale(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@return boolean
function UInterchangeLightNode:SetCustomAttenuationRadius(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeLightNode:GetCustomUseIESBrightness(AttributeValue) end

---@param AttributeValue FRotator @[out] 
---@return boolean
function UInterchangeLightNode:GetCustomRotation(AttributeValue) end

---@param AttributeValue EInterchangeLightUnits @[out] 
---@return boolean
function UInterchangeLightNode:GetCustomIntensityUnits(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeLightNode:GetCustomIESTexture(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeLightNode:GetCustomIESBrightnessScale(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeLightNode:GetCustomAttenuationRadius(AttributeValue) end

