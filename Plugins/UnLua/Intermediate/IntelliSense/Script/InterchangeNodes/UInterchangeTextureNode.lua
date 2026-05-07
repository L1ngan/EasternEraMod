---@class UInterchangeTextureNode : UInterchangeBaseNode
local UInterchangeTextureNode = {}

---@param PayloadKey string
function UInterchangeTextureNode:SetPayLoadKey(PayloadKey) end

---@param AttributeValue boolean
---@return boolean
function UInterchangeTextureNode:SetCustomSRGB(AttributeValue) end

---@param AttributeValue EInterchangeTextureFilterMode
---@return boolean
function UInterchangeTextureNode:SetCustomFilter(AttributeValue) end

---@param AttributeValue EInterchangeTextureColorSpace
---@return boolean
function UInterchangeTextureNode:SetCustomColorSpace(AttributeValue) end

---@param AttributeValue boolean
---@return boolean
function UInterchangeTextureNode:SetCustombFlipGreenChannel(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureNode:GetCustomSRGB(AttributeValue) end

---@param AttributeValue EInterchangeTextureFilterMode @[out] 
---@return boolean
function UInterchangeTextureNode:GetCustomFilter(AttributeValue) end

---@param AttributeValue EInterchangeTextureColorSpace @[out] 
---@return boolean
function UInterchangeTextureNode:GetCustomColorSpace(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureNode:GetCustombFlipGreenChannel(AttributeValue) end

