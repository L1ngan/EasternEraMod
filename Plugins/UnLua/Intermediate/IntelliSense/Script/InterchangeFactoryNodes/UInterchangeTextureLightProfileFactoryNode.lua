---@class UInterchangeTextureLightProfileFactoryNode : UInterchangeTexture2DFactoryNode
local UInterchangeTextureLightProfileFactoryNode = {}

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureLightProfileFactoryNode:SetCustomTextureMultiplier(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureLightProfileFactoryNode:SetCustomBrightness(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureLightProfileFactoryNode:GetCustomTextureMultiplier(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureLightProfileFactoryNode:GetCustomBrightness(AttributeValue) end

