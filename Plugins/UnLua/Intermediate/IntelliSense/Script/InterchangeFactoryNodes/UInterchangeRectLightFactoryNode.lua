---@class UInterchangeRectLightFactoryNode : UInterchangeLightFactoryNode
local UInterchangeRectLightFactoryNode = {}

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeRectLightFactoryNode:SetCustomSourceWidth(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeRectLightFactoryNode:SetCustomSourceHeight(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeRectLightFactoryNode:GetCustomSourceWidth(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeRectLightFactoryNode:GetCustomSourceHeight(AttributeValue) end

